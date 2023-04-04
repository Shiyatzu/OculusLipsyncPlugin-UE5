/*******************************************************************************
 * Filename    :   OVRLipSyncEditorModule.cpp
 * Content     :   OVRLipSync Module
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
#include "ContentBrowserModule.h"

#include "AssetRegistry/AssetRegistryModule.h"
#include "AudioDecompress.h"
#include "AudioDevice.h"
#include "Sound/SoundWave.h"
#include "Engine.h"
#include "Framework/Commands/UIAction.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "Misc/EngineVersionComparison.h"
#include "Misc/ScopedSlowTask.h"
#include "Modules/ModuleManager.h"
#include "OVRLipSyncContextWrapper.h"
#include "OVRLipSyncFrame.h"
#include "Textures/SlateIcon.h"

namespace
{

// Compute LipSync sequence frames at 100 times a second rate
constexpr auto LipSyncSequenceUpateFrequency = 100;
constexpr auto LipSyncSequenceDuration = 1.0f / LipSyncSequenceUpateFrequency;

// Decompresses SoundWave object by initializing RawPCM data
bool DecompressSoundWave(USoundWave *SoundWave)
{
	if (SoundWave->RawPCMData)
	{
		return true;
	}
	auto AudioDevice = GEngine->GetMainAudioDevice();
	if (!AudioDevice)
	{
		return false;
	}

	AudioDevice->StopAllSounds(true);
	auto OriginalDecompressionType = SoundWave->DecompressionType;
	SoundWave->DecompressionType = DTYPE_Native;
	if (SoundWave->InitAudioResource(AudioDevice->GetRuntimeFormat(SoundWave)))
	{
#if UE_VERSION_OLDER_THAN(4, 22, 0)
		USoundWave::FAsyncAudioDecompress Decompress(SoundWave);
#else
		USoundWave::FAsyncAudioDecompress Decompress(SoundWave, MONO_PCM_BUFFER_SAMPLES);
#endif
		Decompress.StartSynchronousTask();
	}
	SoundWave->DecompressionType = OriginalDecompressionType;

	return true;
}

bool OVRLipSyncProcessSoundWave(const FAssetData &SoundWaveAsset, bool UseOfflineModel = false)
{
	auto ObjectPath = SoundWaveAsset.GetObjectPathString();
	auto SoundWave = FindObject<USoundWave>(NULL, *ObjectPath);
	if (!SoundWave)
	{
		UE_LOG(LogTemp, Error, TEXT("Can't find %s"), *ObjectPath);
		return false;
	}
	if (SoundWave->NumChannels > 2)
	{
		UE_LOG(LogTemp, Error, TEXT("Can't process %s: only mono and stereo streams are supported"), *ObjectPath);
		return false;
	}
	DecompressSoundWave(SoundWave);

	auto SequenceName = FString::Printf(TEXT("%s_LipSyncSequence"), *SoundWaveAsset.AssetName.ToString());
	auto SequencePath = FString::Printf(TEXT("%s_LipSyncSequence"), *SoundWaveAsset.PackageName.ToString());
	auto SequencePackage = CreatePackage(*SequencePath);
	auto Sequence = NewObject<UOVRLipSyncFrameSequence>(SequencePackage, *SequenceName, RF_Public | RF_Standalone);

	auto NumChannels = SoundWave->NumChannels;
	auto SampleRate = SoundWave->GetSampleRateForCurrentPlatform();
	auto PCMDataSize = SoundWave->RawPCMDataSize / sizeof(int16_t);
	auto PCMData = reinterpret_cast<int16_t *>(SoundWave->RawPCMData);
	auto ChunkSizeSamples = static_cast<int>(SampleRate * LipSyncSequenceDuration);
	auto ChunkSize = NumChannels * ChunkSizeSamples;

	FString ModelPath = UseOfflineModel ? FPaths::Combine(FPaths::ProjectPluginsDir(), TEXT("OVRLipSync"),
														  TEXT("OfflineModel"), TEXT("ovrlipsync_offline_model.pb"))
										: FString();
	UOVRLipSyncContextWrapper context(ovrLipSyncContextProvider_Enhanced, SampleRate, 4096, ModelPath);

	float LaughterScore = 0.0f;
	int32_t FrameDelayInMs = 0;
	TArray<float> Visemes;

	TArray<int16_t> samples;
	samples.SetNumZeroed(ChunkSize);
	context.ProcessFrame(samples.GetData(), ChunkSizeSamples, Visemes, LaughterScore, FrameDelayInMs, NumChannels > 1);

	int FrameOffset = (int)(FrameDelayInMs * SampleRate / 1000 * NumChannels);

	FScopedSlowTask SlowTask(PCMDataSize + FrameOffset,
							 FText::Format(NSLOCTEXT("NSLT_OVRLipSyncPlugin", "GeneratingLipSyncSequence",
													 "Generating LipSync sequence for {0}..."),
										   FText::FromName(SoundWaveAsset.AssetName)));
	SlowTask.MakeDialog();
	for (int offs = 0; offs < PCMDataSize + FrameOffset; offs += ChunkSize)
	{
		int remainingSamples = PCMDataSize - offs;
		if (remainingSamples >= ChunkSize)
		{
			context.ProcessFrame(PCMData + offs, ChunkSizeSamples, Visemes, LaughterScore, FrameDelayInMs,
								 NumChannels > 1);
		}
		else
		{
			if (remainingSamples > 0)
			{
				memcpy(samples.GetData(), PCMData + offs, sizeof(int16_t) * remainingSamples);
				memset(samples.GetData() + remainingSamples, 0, ChunkSize - remainingSamples);
			}
			else
			{
				memset(samples.GetData(), 0, ChunkSize);
			}
			context.ProcessFrame(samples.GetData(), ChunkSizeSamples, Visemes, LaughterScore, FrameDelayInMs,
								 NumChannels > 1);
		}

		SlowTask.EnterProgressFrame(ChunkSize);
		if (SlowTask.ShouldCancel())
		{
			return false;
		}
		if (offs >= FrameOffset)
		{
			Sequence->Add(Visemes, LaughterScore);
		}
	}

	FAssetRegistryModule::AssetCreated(Sequence);
	Sequence->MarkPackageDirty();
	return true;
}

void OVRLipSyncCreateSequence(const TArray<FAssetData> SelectedSoundAssets, bool UseOfflineModel = false)
{
	for (auto &SoundWaveAsset : SelectedSoundAssets)
	{
		if (!OVRLipSyncProcessSoundWave(SoundWaveAsset, UseOfflineModel))
		{
			break;
		}
	}
}

void OVRLipSyncContextMenuExtension(FMenuBuilder &MenuBuilder, const TArray<FAssetData> SelectedSoundWavesPath)
{
	// SoundWaves are already loaded at that point, so convert Paths to a lest
	// of weak pointers
	MenuBuilder.AddMenuEntry(
		NSLOCTEXT("NSLT_OVRLipSyncPlugin", "CreateLipSyncSequence_Menu", "Generate LipSyncSequence"),
		NSLOCTEXT("NSLT_OVRLipSyncPlugin", "CreateLipSyncSequence_Tooltip",
				  "Creates sequence asset that could be used by OVRLipSyncPlaybackActorComponent"),
		FSlateIcon(), FUIAction(FExecuteAction::CreateStatic(OVRLipSyncCreateSequence, SelectedSoundWavesPath, false)));
	MenuBuilder.AddMenuEntry(
		NSLOCTEXT("NSLT_OVRLipSyncPlugin", "CreateLipSyncSequenceWithOfflineModel_Menu",
				  "Generate LipSyncSequence with Offline Model"),
		NSLOCTEXT("NSLT_OVRLipSyncPlugin", "CreateLipSyncSequenceWithOfflineModel_Tooltip",
				  "Creates sequence asset that could be used by OVRLipSyncPlaybackActorComponent"),
		FSlateIcon(), FUIAction(FExecuteAction::CreateStatic(OVRLipSyncCreateSequence, SelectedSoundWavesPath, true)));
}

TSharedRef<FExtender> OVRLipSyncContextMenuExtender(const TArray<FAssetData> &SelectedAssets)
{
	TSharedRef<FExtender> Extender(new FExtender());
	TArray<FAssetData> SelectedSoundWaveAssets;
	for (auto &Asset : SelectedAssets)
	{
		if (Asset.AssetClassPath.ToString().Contains(TEXT("SoundWave")))
		{
			SelectedSoundWaveAssets.Add(Asset);
		}
	}
	if (SelectedSoundWaveAssets.Num() > 0)
	{
		Extender->AddMenuExtension(
			"GetAssetActions", EExtensionHook::After, TSharedPtr<FUICommandList>(),
			FMenuExtensionDelegate::CreateStatic(OVRLipSyncContextMenuExtension, SelectedSoundWaveAssets));
	}
	return Extender;
}

} // namespace

class FOVRLipSyncEditorModule : public IModuleInterface
{
public:
	void StartupModule() override
	{
		auto &ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>(TEXT("ContentBrowser"));
		auto &ContextMenuExtenders = ContentBrowserModule.GetAllAssetViewContextMenuExtenders();
		ContextMenuExtenders.Add(
			FContentBrowserMenuExtender_SelectedAssets::CreateStatic(OVRLipSyncContextMenuExtender));
	}
};

IMPLEMENT_MODULE(FOVRLipSyncEditorModule, OVRLipSyncEditor);
