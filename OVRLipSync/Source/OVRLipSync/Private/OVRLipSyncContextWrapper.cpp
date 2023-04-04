/*******************************************************************************
 * Filename    :   OVRLipSyncContextWrapper.cpp
 * Content     :   Wrapper around OVRLipSync API
 * Created     :   Sep 14th, 2018
 * Copyright   :   Copyright Facebook Technologies, LLC and its affiliates.
 *                 All rights reserved.
 *
 * Licensed under the Oculus Audio SDK License Version 3.3 (the "License");
 * you may not use the Oculus Audio SDK except in compliance with the License,
 * which is provided at the time of installation or download, or which
 * otherwise accompanies this software in either electronic or hard copy form.

 * You may obtain a copy of the License at
 *
 * https://developer.oculus.com/licenses/audio-3.3/
 *
 * Unless required by applicable law or agreed to in writing, the Oculus Audio SDK
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 ******************************************************************************/

#include "OVRLipSyncContextWrapper.h"
#include "OVRLipSyncModule.h"

#include <Core.h>
#include <algorithm>

UOVRLipSyncContextWrapper::UOVRLipSyncContextWrapper(ovrLipSyncContextProvider ProviderKind, int SampleRate,
													 int BufferSize, FString ModelPath, bool EnableAcceleration)
{
#if !PLATFORM_ANDROID
	auto pluginsDir = FPaths::ProjectPluginsDir();
	auto libDir = FPaths::Combine(pluginsDir, TEXT("OVRLipSync"), TEXT("ThirdParty"), TEXT("Lib"),
								  FPlatformProcess::GetBinariesSubdirectory());
	TArray<char> libDirChar(libDir.GetCharArray());
	auto rc = ovrLipSync_InitializeEx(SampleRate, BufferSize, libDirChar.GetData());
#else
	auto rc = ovrLipSync_Initialize(SampleRate, BufferSize);
#endif
	if (rc != ovrLipSyncSuccess)
	{
		UE_LOG(LogOvrLipSync, Error, TEXT("Can't initialize ovrLipSync: %d"), rc);
		return;
	}
	rc = ModelPath.IsEmpty()
			 ? ovrLipSync_CreateContextEx(&LipSyncContext, ProviderKind, SampleRate, EnableAcceleration)
			 : ovrLipSync_CreateContextWithModelFile(&LipSyncContext, ProviderKind, TCHAR_TO_ANSI(*ModelPath),
													 SampleRate, EnableAcceleration);
	if (rc != ovrLipSyncSuccess)
	{
		UE_LOG(LogOvrLipSync, Error, TEXT("Can't create ovrLipSync context: %d"), rc);
	}
}

UOVRLipSyncContextWrapper::~UOVRLipSyncContextWrapper() { ovrLipSync_DestroyContext(LipSyncContext); }

void UOVRLipSyncContextWrapper::ProcessFrame(const int16_t *AudioBuffer, int AudioBufferSize, TArray<float> &Visemes,
											 float &LaughterScore, int32_t &FrameDelay, bool Stereo)
{
	if (Visemes.Num() != ovrLipSyncViseme_Count)
	{
		Visemes.SetNumZeroed(ovrLipSyncViseme_Count);
	}
	ovrLipSyncFrame frame = {};
	frame.visemes = Visemes.GetData();
	frame.visemesLength = Visemes.Num();
	auto rc = ovrLipSync_ProcessFrameEx(LipSyncContext, AudioBuffer, AudioBufferSize,
										Stereo ? ovrLipSyncAudioDataType_S16_Stereo : ovrLipSyncAudioDataType_S16_Mono,
										&frame);
	if (rc != ovrLipSyncSuccess)
	{
		UE_LOG(LogOvrLipSync, Error, TEXT("Failed to process frame: %d"), rc);
		return;
	}
	LaughterScore = frame.laughterScore;
	FrameDelay = frame.frameDelay;
}

namespace
{
void ProcessFrameCallback(void *opaque, const ovrLipSyncFrame *pFrame, ovrLipSyncResult result)
{
	if (result != ovrLipSyncSuccess)
	{
		UE_LOG(LogOvrLipSync, Error, TEXT("Async prediction failed: %d"), result);
		return;
	}
	auto wrapper = reinterpret_cast<UOVRLipSyncContextWrapper *>(opaque);
	TArray<float> Visemes(pFrame->visemes, pFrame->visemesLength);
	wrapper->InvokeAsyncCallback(Visemes, pFrame->laughterScore);
}
} // namespace

void UOVRLipSyncContextWrapper::SetAsyncCallback(const AsyncCallbackType &Callback) { AsyncCallback = Callback; }

void UOVRLipSyncContextWrapper::InvokeAsyncCallback(const TArray<float> &Visemes, float LaughterScore)
{
	if (!AsyncCallback)
	{
		UE_LOG(LogOvrLipSync, Error, TEXT("Trying invoke unintialized async callback"));
		return;
	}
	AsyncCallback(Visemes, LaughterScore);
}

void UOVRLipSyncContextWrapper::ProcessFrameAsync(const int16_t *AudioBuffer, int AudioBufferSize, bool Stereo)
{
	auto rc = ovrLipSync_ProcessFrameAsync(
		LipSyncContext, AudioBuffer, AudioBufferSize,
		Stereo ? ovrLipSyncAudioDataType_S16_Stereo : ovrLipSyncAudioDataType_S16_Mono, ProcessFrameCallback, this);
	if (rc != ovrLipSyncSuccess)
	{
		UE_LOG(LogOvrLipSync, Error, TEXT("Failed to start async prediction: %d"), rc);
		return;
	}
}
