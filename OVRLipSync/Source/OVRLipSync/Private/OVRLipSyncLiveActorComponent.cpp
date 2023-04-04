/*******************************************************************************
 * Filename    :   OVRLipSyncLiveActorComponent.cpp
 * Content     :   OVRLipSync component for Actor objects
 * Created     :   Aug 9th, 2018
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

#include "OVRLipSyncLiveActorComponent.h"

#include "AndroidPermissionCallbackProxy.h"
#include "AndroidPermissionFunctionLibrary.h"
#include "OVRLipSyncContextWrapper.h"
#include "Voice/Public/VoiceModule.h"

#include <Core.h>
#include <algorithm>

#ifndef DEFAULT_DEVICE_NAME
#define DEFAULT_DEVICE_NAME TEXT("Default Device")
#endif

// Convert OVRLipSyncProviderKind enum to OVRLipSync
ovrLipSyncContextProvider ContextProviderFromProviderKind(OVRLipSyncProviderKind Kind)
{
	switch (Kind)
	{
	default:
	case OVRLipSyncProviderKind::Original:
		return ovrLipSyncContextProvider_Original;
	case OVRLipSyncProviderKind::Enhanced:
		return ovrLipSyncContextProvider_Enhanced;
	case OVRLipSyncProviderKind::EnhancedWithLaughter:
		return ovrLipSyncContextProvider_EnhancedWithLaughter;
	}
}

// Called when the game starts
void UOVRLipSyncActorComponent::BeginPlay()
{
	Super::BeginPlay();

	LipSyncContext = MakeShared<UOVRLipSyncContextWrapper>(ContextProviderFromProviderKind(ProviderKind), SampleRate,
														   BufferSize, FString(), EnableHardwareAcceleration);
	LipSyncContext->SetAsyncCallback([this](const TArray<float> &NewVisemes, float NewLaughterScore) {
		Visemes = NewVisemes;
		LaughterScore = NewLaughterScore;
		OnVisemesReady.Broadcast();
	});
}

void UOVRLipSyncActorComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Stop();
	LipSyncContext = nullptr;

	Super::EndPlay(EndPlayReason);
}

void UOVRLipSyncActorComponent::Start()
{
	if (VoiceCapture)
	{
		Stop();
	}

#if PLATFORM_ANDROID
	FString AudioPermission = TEXT("android.permission.RECORD_AUDIO");
	if (!UAndroidPermissionFunctionLibrary::CheckPermission(AudioPermission))
	{
		UE_LOG(LogOvrLipSync, Log, TEXT("Asking for record audio permission..."));
		TArray<FString> PermissionsToCheck;
		PermissionsToCheck.Add(AudioPermission);
		UAndroidPermissionCallbackProxy *PermCallback =
			UAndroidPermissionFunctionLibrary::AcquirePermissions(PermissionsToCheck);
		if (PermCallback != nullptr)
		{
			PermCallback->OnPermissionsGrantedDelegate.BindUFunction(this, "PermissionCallback");
		}
	}
	else
	{
		StartVoiceCapture();
	}
#else
	StartVoiceCapture();
#endif
}

void UOVRLipSyncActorComponent::PermissionCallback(const TArray<FString> &Permissions, const TArray<bool> &GrantResults)
{
	UE_LOG(LogOvrLipSync, Log, TEXT("Finished asking for audio permissions."));

	if (GrantResults.Num() > 0 && GrantResults[0])
	{
		UE_LOG(LogOvrLipSync, Log, TEXT("Audio permissions granted."));
		StartVoiceCapture();
	}
	else
	{
		UE_LOG(LogOvrLipSync, Error, TEXT("Audio permissions DENIED!"));
	}
}

void UOVRLipSyncActorComponent::StartVoiceCapture()
{
	VoiceCapture = FVoiceModule::Get().CreateVoiceCapture(DEFAULT_DEVICE_NAME, SampleRate, 1);
	if (!VoiceCapture)
	{
		UE_LOG(LogOvrLipSync, Error, TEXT("Can't create voice capture."));
		return;
	}
	else
	{
		UE_LOG(LogOvrLipSync, Log, TEXT("Created voice capture."));
	}

	VoiceCapture->Start();
	auto &TimerManager = GetWorld()->GetTimerManager();
	TimerManager.SetTimer(VoiceCaptureTimer, this, &UOVRLipSyncActorComponent::OnVoiceCaptureTimer,
						  VoiceCaptureTimerRate, true);
}

void UOVRLipSyncActorComponent::FeedAudio(const TArray<uint8> &VoiceData)
{
	if (!LipSyncContext)
	{
		return;
	}

	auto *ShortData = reinterpret_cast<const int16 *>(VoiceData.GetData());
	auto ShortDataSize = VoiceData.Num() / 2;
	LipSyncContext->ProcessFrameAsync(ShortData, ShortDataSize);
}

void UOVRLipSyncActorComponent::Stop()
{
	if (!VoiceCapture)
	{
		return;
	}

	auto &TimerManager = GetWorld()->GetTimerManager();
	TimerManager.ClearTimer(VoiceCaptureTimer);
	VoiceCapture->Stop();
	VoiceCapture = nullptr;

	InitNeutralPose();
}

// Called every VoiceCaptureTimerRate seconds (10ms) to process audio data
void UOVRLipSyncActorComponent::OnVoiceCaptureTimer()
{
	if (!VoiceCapture || !VoiceCapture.IsValid())
	{
		return;
	}

	uint32 AvailableVoiceData = 0;
	auto CaptureState = VoiceCapture->GetCaptureState(AvailableVoiceData);
	if (CaptureState == EVoiceCaptureState::NoData)
	{
		return;
	}
	if (CaptureState == EVoiceCaptureState::UnInitialized)
	{
		if (!VoiceCapture->Init("", SampleRate, 1) || !VoiceCapture->Start())
		{
			UE_LOG(LogOvrLipSync, Log, TEXT("Unsuccessfully tried to restart VoiceCapture."));
			return;
		}
		UE_LOG(LogOvrLipSync, Log, TEXT("Restarted VoiceCapture."));
		return;
	}
	if (CaptureState != EVoiceCaptureState::Ok)
	{
		UE_LOG(LogOvrLipSync, Error, TEXT("Invalid capture state: %s"), EVoiceCaptureState::ToString(CaptureState));
		return;
	}
	if (AvailableVoiceData == 0)
	{
		return;
	}

	TArray<uint8> VoiceData;
	uint32 VoiceDataCaptured;
	VoiceData.SetNumUninitialized(AvailableVoiceData);

	CaptureState = VoiceCapture->GetVoiceData(VoiceData.GetData(), VoiceData.Num(), VoiceDataCaptured);
	if (CaptureState != EVoiceCaptureState::Ok || VoiceDataCaptured == 0)
	{
		UE_LOG(LogOvrLipSync, Error, TEXT("Failed to get voice data: %s DataCaptured=%d"),
			   EVoiceCaptureState::ToString(CaptureState), VoiceDataCaptured);
		return;
	}
	VoiceData.SetNum(VoiceDataCaptured);
	FeedAudio(VoiceData);
}

const float UOVRLipSyncActorComponent::VoiceCaptureTimerRate = .01f;
