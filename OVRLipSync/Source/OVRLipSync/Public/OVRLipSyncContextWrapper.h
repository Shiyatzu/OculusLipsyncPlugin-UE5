/*******************************************************************************
 * Filename    :   OVRLipSyncContextWrapper.h
 * Content     :   Prototypes for OVRLipSync Context Wrapper
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

#pragma once
#include "CoreMinimal.h"
#include "OVRLipSync.h"

class OVRLIPSYNC_API UOVRLipSyncContextWrapper
{
public:
	UOVRLipSyncContextWrapper(ovrLipSyncContextProvider Provider, int SampleRate = 48000, int BufferSize = 4096,
							  FString ModelPath = FString(), bool Accelerate = true);
	~UOVRLipSyncContextWrapper();

	void ProcessFrame(const int16_t *Data, int DataSize, TArray<float> &Visemes, float &LaughterScore,
					  int32_t &FrameDelay, bool Stereo = false);

	// Async processing
	using AsyncCallbackType = TFunction<void(const TArray<float> &Visemes, float LaughterScore)>;
	void SetAsyncCallback(const AsyncCallbackType &AsyncCallback);
	void InvokeAsyncCallback(const TArray<float> &Visemes, float LaughterScore);
	void ProcessFrameAsync(const int16_t *Data, int DataSize, bool Stereo = false);

private:
	AsyncCallbackType AsyncCallback;
	ovrLipSyncContext LipSyncContext = 0;
};
