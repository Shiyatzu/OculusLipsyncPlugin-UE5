// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OVRLipSync/Public/OVRLipSyncLiveActorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOVRLipSyncLiveActorComponent() {}
// Cross Module References
	OVRLIPSYNC_API UClass* Z_Construct_UClass_UOVRLipSyncActorComponent();
	OVRLIPSYNC_API UClass* Z_Construct_UClass_UOVRLipSyncActorComponent_NoRegister();
	OVRLIPSYNC_API UClass* Z_Construct_UClass_UOVRLipSyncActorComponentBase();
	OVRLIPSYNC_API UEnum* Z_Construct_UEnum_OVRLipSync_OVRLipSyncProviderKind();
	UPackage* Z_Construct_UPackage__Script_OVRLipSync();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_OVRLipSyncProviderKind;
	static UEnum* OVRLipSyncProviderKind_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_OVRLipSyncProviderKind.OuterSingleton)
		{
			Z_Registration_Info_UEnum_OVRLipSyncProviderKind.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRLipSync_OVRLipSyncProviderKind, Z_Construct_UPackage__Script_OVRLipSync(), TEXT("OVRLipSyncProviderKind"));
		}
		return Z_Registration_Info_UEnum_OVRLipSyncProviderKind.OuterSingleton;
	}
	template<> OVRLIPSYNC_API UEnum* StaticEnum<OVRLipSyncProviderKind>()
	{
		return OVRLipSyncProviderKind_StaticEnum();
	}
	struct Z_Construct_UEnum_OVRLipSync_OVRLipSyncProviderKind_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OVRLipSync_OVRLipSyncProviderKind_Statics::Enumerators[] = {
		{ "OVRLipSyncProviderKind::Original", (int64)OVRLipSyncProviderKind::Original },
		{ "OVRLipSyncProviderKind::Enhanced", (int64)OVRLipSyncProviderKind::Enhanced },
		{ "OVRLipSyncProviderKind::EnhancedWithLaughter", (int64)OVRLipSyncProviderKind::EnhancedWithLaughter },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OVRLipSync_OVRLipSyncProviderKind_Statics::Enum_MetaDataParams[] = {
		{ "Enhanced.Name", "OVRLipSyncProviderKind::Enhanced" },
		{ "EnhancedWithLaughter.Name", "OVRLipSyncProviderKind::EnhancedWithLaughter" },
		{ "ModuleRelativePath", "Public/OVRLipSyncLiveActorComponent.h" },
		{ "Original.Name", "OVRLipSyncProviderKind::Original" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRLipSync_OVRLipSyncProviderKind_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OVRLipSync,
		nullptr,
		"OVRLipSyncProviderKind",
		"OVRLipSyncProviderKind",
		Z_Construct_UEnum_OVRLipSync_OVRLipSyncProviderKind_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OVRLipSync_OVRLipSyncProviderKind_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OVRLipSync_OVRLipSyncProviderKind_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OVRLipSync_OVRLipSyncProviderKind_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OVRLipSync_OVRLipSyncProviderKind()
	{
		if (!Z_Registration_Info_UEnum_OVRLipSyncProviderKind.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_OVRLipSyncProviderKind.InnerSingleton, Z_Construct_UEnum_OVRLipSync_OVRLipSyncProviderKind_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_OVRLipSyncProviderKind.InnerSingleton;
	}
	DEFINE_FUNCTION(UOVRLipSyncActorComponent::execOnVoiceCaptureTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnVoiceCaptureTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOVRLipSyncActorComponent::execFeedAudio)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_AudioData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FeedAudio(Z_Param_Out_AudioData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOVRLipSyncActorComponent::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOVRLipSyncActorComponent::execPermissionCallback)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Permissions);
		P_GET_TARRAY_REF(bool,Z_Param_Out_GrantResults);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PermissionCallback(Z_Param_Out_Permissions,Z_Param_Out_GrantResults);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOVRLipSyncActorComponent::execStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Start();
		P_NATIVE_END;
	}
	void UOVRLipSyncActorComponent::StaticRegisterNativesUOVRLipSyncActorComponent()
	{
		UClass* Class = UOVRLipSyncActorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FeedAudio", &UOVRLipSyncActorComponent::execFeedAudio },
			{ "OnVoiceCaptureTimer", &UOVRLipSyncActorComponent::execOnVoiceCaptureTimer },
			{ "PermissionCallback", &UOVRLipSyncActorComponent::execPermissionCallback },
			{ "Start", &UOVRLipSyncActorComponent::execStart },
			{ "Stop", &UOVRLipSyncActorComponent::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics
	{
		struct OVRLipSyncActorComponent_eventFeedAudio_Parms
		{
			TArray<uint8> AudioData;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AudioData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AudioData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::NewProp_AudioData_Inner = { "AudioData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::NewProp_AudioData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::NewProp_AudioData = { "AudioData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OVRLipSyncActorComponent_eventFeedAudio_Parms, AudioData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::NewProp_AudioData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::NewProp_AudioData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::NewProp_AudioData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::NewProp_AudioData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::Function_MetaDataParams[] = {
		{ "Category", "LipSync" },
		{ "ModuleRelativePath", "Public/OVRLipSyncLiveActorComponent.h" },
		{ "ToolTip", "Feed AudioBuffer containing packaged mono 16-bit signed integer PCM values" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOVRLipSyncActorComponent, nullptr, "FeedAudio", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::OVRLipSyncActorComponent_eventFeedAudio_Parms), Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOVRLipSyncActorComponent_OnVoiceCaptureTimer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVRLipSyncActorComponent_OnVoiceCaptureTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OVRLipSyncLiveActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVRLipSyncActorComponent_OnVoiceCaptureTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOVRLipSyncActorComponent, nullptr, "OnVoiceCaptureTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOVRLipSyncActorComponent_OnVoiceCaptureTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponent_OnVoiceCaptureTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOVRLipSyncActorComponent_OnVoiceCaptureTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOVRLipSyncActorComponent_OnVoiceCaptureTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics
	{
		struct OVRLipSyncActorComponent_eventPermissionCallback_Parms
		{
			TArray<FString> Permissions;
			TArray<bool> GrantResults;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Permissions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Permissions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Permissions;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_GrantResults_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantResults_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantResults;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics::NewProp_Permissions_Inner = { "Permissions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics::NewProp_Permissions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics::NewProp_Permissions = { "Permissions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OVRLipSyncActorComponent_eventPermissionCallback_Parms, Permissions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics::NewProp_Permissions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics::NewProp_Permissions_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics::NewProp_GrantResults_Inner = { "GrantResults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics::NewProp_GrantResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics::NewProp_GrantResults = { "GrantResults", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OVRLipSyncActorComponent_eventPermissionCallback_Parms, GrantResults), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics::NewProp_GrantResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics::NewProp_GrantResults_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics::NewProp_Permissions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics::NewProp_Permissions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics::NewProp_GrantResults_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics::NewProp_GrantResults,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OVRLipSyncLiveActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOVRLipSyncActorComponent, nullptr, "PermissionCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics::OVRLipSyncActorComponent_eventPermissionCallback_Parms), Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOVRLipSyncActorComponent_Start_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVRLipSyncActorComponent_Start_Statics::Function_MetaDataParams[] = {
		{ "Category", "LipSync" },
		{ "ModuleRelativePath", "Public/OVRLipSyncLiveActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVRLipSyncActorComponent_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOVRLipSyncActorComponent, nullptr, "Start", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOVRLipSyncActorComponent_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponent_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOVRLipSyncActorComponent_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOVRLipSyncActorComponent_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOVRLipSyncActorComponent_Stop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVRLipSyncActorComponent_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "LipSync" },
		{ "ModuleRelativePath", "Public/OVRLipSyncLiveActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVRLipSyncActorComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOVRLipSyncActorComponent, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOVRLipSyncActorComponent_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponent_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOVRLipSyncActorComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOVRLipSyncActorComponent_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOVRLipSyncActorComponent);
	UClass* Z_Construct_UClass_UOVRLipSyncActorComponent_NoRegister()
	{
		return UOVRLipSyncActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOVRLipSyncActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BufferSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ProviderKind_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProviderKind_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ProviderKind;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableHardwareAcceleration_MetaData[];
#endif
		static void NewProp_EnableHardwareAcceleration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableHardwareAcceleration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOVRLipSyncActorComponentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OVRLipSync,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio, "FeedAudio" }, // 3884365718
		{ &Z_Construct_UFunction_UOVRLipSyncActorComponent_OnVoiceCaptureTimer, "OnVoiceCaptureTimer" }, // 3809999708
		{ &Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback, "PermissionCallback" }, // 411163193
		{ &Z_Construct_UFunction_UOVRLipSyncActorComponent_Start, "Start" }, // 1583498741
		{ &Z_Construct_UFunction_UOVRLipSyncActorComponent_Stop, "Stop" }, // 3250730566
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "OVRLipSyncLiveActorComponent.h" },
		{ "ModuleRelativePath", "Public/OVRLipSyncLiveActorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_SampleRate_MetaData[] = {
		{ "Category", "OVRLipSyncActorComponent" },
		{ "ModuleRelativePath", "Public/OVRLipSyncLiveActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOVRLipSyncActorComponent, SampleRate), METADATA_PARAMS(Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_SampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_SampleRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_BufferSize_MetaData[] = {
		{ "Category", "OVRLipSyncActorComponent" },
		{ "ModuleRelativePath", "Public/OVRLipSyncLiveActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_BufferSize = { "BufferSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOVRLipSyncActorComponent, BufferSize), METADATA_PARAMS(Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_BufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_BufferSize_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_ProviderKind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_ProviderKind_MetaData[] = {
		{ "Category", "OVRLipSyncActorComponent" },
		{ "ModuleRelativePath", "Public/OVRLipSyncLiveActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_ProviderKind = { "ProviderKind", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOVRLipSyncActorComponent, ProviderKind), Z_Construct_UEnum_OVRLipSync_OVRLipSyncProviderKind, METADATA_PARAMS(Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_ProviderKind_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_ProviderKind_MetaData)) }; // 1922008224
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_EnableHardwareAcceleration_MetaData[] = {
		{ "Category", "OVRLipSyncActorComponent" },
		{ "ModuleRelativePath", "Public/OVRLipSyncLiveActorComponent.h" },
		{ "ToolTip", "Enable hardware acceleration on supported platforms" },
	};
#endif
	void Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_EnableHardwareAcceleration_SetBit(void* Obj)
	{
		((UOVRLipSyncActorComponent*)Obj)->EnableHardwareAcceleration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_EnableHardwareAcceleration = { "EnableHardwareAcceleration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOVRLipSyncActorComponent), &Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_EnableHardwareAcceleration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_EnableHardwareAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_EnableHardwareAcceleration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_SampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_BufferSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_ProviderKind_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_ProviderKind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_EnableHardwareAcceleration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOVRLipSyncActorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::ClassParams = {
		&UOVRLipSyncActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOVRLipSyncActorComponent()
	{
		if (!Z_Registration_Info_UClass_UOVRLipSyncActorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOVRLipSyncActorComponent.OuterSingleton, Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOVRLipSyncActorComponent.OuterSingleton;
	}
	template<> OVRLIPSYNC_API UClass* StaticClass<UOVRLipSyncActorComponent>()
	{
		return UOVRLipSyncActorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOVRLipSyncActorComponent);
	UOVRLipSyncActorComponent::~UOVRLipSyncActorComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_tozea_OneDrive_Documentos_Unreal_Projects_MegaProject2_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tozea_OneDrive_Documentos_Unreal_Projects_MegaProject2_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_Statics::EnumInfo[] = {
		{ OVRLipSyncProviderKind_StaticEnum, TEXT("OVRLipSyncProviderKind"), &Z_Registration_Info_UEnum_OVRLipSyncProviderKind, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1922008224U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tozea_OneDrive_Documentos_Unreal_Projects_MegaProject2_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOVRLipSyncActorComponent, UOVRLipSyncActorComponent::StaticClass, TEXT("UOVRLipSyncActorComponent"), &Z_Registration_Info_UClass_UOVRLipSyncActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOVRLipSyncActorComponent), 302127257U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tozea_OneDrive_Documentos_Unreal_Projects_MegaProject2_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_841405048(TEXT("/Script/OVRLipSync"),
		Z_CompiledInDeferFile_FID_Users_tozea_OneDrive_Documentos_Unreal_Projects_MegaProject2_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tozea_OneDrive_Documentos_Unreal_Projects_MegaProject2_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_tozea_OneDrive_Documentos_Unreal_Projects_MegaProject2_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tozea_OneDrive_Documentos_Unreal_Projects_MegaProject2_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
