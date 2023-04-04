// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OVRLipSync/Public/OVRLipSyncActorComponentBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOVRLipSyncActorComponentBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	OVRLIPSYNC_API UClass* Z_Construct_UClass_UOVRLipSyncActorComponentBase();
	OVRLIPSYNC_API UClass* Z_Construct_UClass_UOVRLipSyncActorComponentBase_NoRegister();
	OVRLIPSYNC_API UFunction* Z_Construct_UDelegateFunction_OVRLipSync_OVRLipSyncVisemesDataReadyDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OVRLipSync();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OVRLipSync_OVRLipSyncVisemesDataReadyDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OVRLipSync_OVRLipSyncVisemesDataReadyDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OVRLipSyncActorComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OVRLipSync_OVRLipSyncVisemesDataReadyDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OVRLipSync, nullptr, "OVRLipSyncVisemesDataReadyDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OVRLipSync_OVRLipSyncVisemesDataReadyDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OVRLipSync_OVRLipSyncVisemesDataReadyDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OVRLipSync_OVRLipSyncVisemesDataReadyDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OVRLipSync_OVRLipSyncVisemesDataReadyDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOVRLipSyncActorComponentBase::execAssignVisemesToMorphTargets)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Mesh);
		P_GET_TARRAY_REF(FString,Z_Param_Out_MorphTargetNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AssignVisemesToMorphTargets(Z_Param_Mesh,Z_Param_Out_MorphTargetNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOVRLipSyncActorComponentBase::execGetLaughterScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLaughterScore();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOVRLipSyncActorComponentBase::execGetVisemeNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetVisemeNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOVRLipSyncActorComponentBase::execGetVisemes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->GetVisemes();
		P_NATIVE_END;
	}
	void UOVRLipSyncActorComponentBase::StaticRegisterNativesUOVRLipSyncActorComponentBase()
	{
		UClass* Class = UOVRLipSyncActorComponentBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AssignVisemesToMorphTargets", &UOVRLipSyncActorComponentBase::execAssignVisemesToMorphTargets },
			{ "GetLaughterScore", &UOVRLipSyncActorComponentBase::execGetLaughterScore },
			{ "GetVisemeNames", &UOVRLipSyncActorComponentBase::execGetVisemeNames },
			{ "GetVisemes", &UOVRLipSyncActorComponentBase::execGetVisemes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics
	{
		struct OVRLipSyncActorComponentBase_eventAssignVisemesToMorphTargets_Parms
		{
			USkeletalMeshComponent* Mesh;
			TArray<FString> MorphTargetNames;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MorphTargetNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MorphTargetNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MorphTargetNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OVRLipSyncActorComponentBase_eventAssignVisemesToMorphTargets_Parms, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::NewProp_Mesh_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::NewProp_MorphTargetNames_Inner = { "MorphTargetNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::NewProp_MorphTargetNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::NewProp_MorphTargetNames = { "MorphTargetNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OVRLipSyncActorComponentBase_eventAssignVisemesToMorphTargets_Parms, MorphTargetNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::NewProp_MorphTargetNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::NewProp_MorphTargetNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::NewProp_MorphTargetNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::NewProp_MorphTargetNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "MorphTargetNames" },
		{ "Category", "LipSync" },
		{ "ModuleRelativePath", "Public/OVRLipSyncActorComponentBase.h" },
		{ "Tooltip", "Set skeletal mesh morph targets to the predicted viseme scores" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOVRLipSyncActorComponentBase, nullptr, "AssignVisemesToMorphTargets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::OVRLipSyncActorComponentBase_eventAssignVisemesToMorphTargets_Parms), Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics
	{
		struct OVRLipSyncActorComponentBase_eventGetLaughterScore_Parms
		{
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OVRLipSyncActorComponentBase_eventGetLaughterScore_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "LipSync" },
		{ "ModuleRelativePath", "Public/OVRLipSyncActorComponentBase.h" },
		{ "Tooltip", "Returns predicted laughter probability" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOVRLipSyncActorComponentBase, nullptr, "GetLaughterScore", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics::OVRLipSyncActorComponentBase_eventGetLaughterScore_Parms), Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics
	{
		struct OVRLipSyncActorComponentBase_eventGetVisemeNames_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OVRLipSyncActorComponentBase_eventGetVisemeNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "LipSync" },
		{ "ModuleRelativePath", "Public/OVRLipSyncActorComponentBase.h" },
		{ "Tooltip", "Returns list of viseme names" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOVRLipSyncActorComponentBase, nullptr, "GetVisemeNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::OVRLipSyncActorComponentBase_eventGetVisemeNames_Parms), Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics
	{
		struct OVRLipSyncActorComponentBase_eventGetVisemes_Parms
		{
			TArray<float> ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OVRLipSyncActorComponentBase_eventGetVisemes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::Function_MetaDataParams[] = {
		{ "Category", "LipSync" },
		{ "ModuleRelativePath", "Public/OVRLipSyncActorComponentBase.h" },
		{ "Tooltip", "Returns last predicted viseme scores" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOVRLipSyncActorComponentBase, nullptr, "GetVisemes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::OVRLipSyncActorComponentBase_eventGetVisemes_Parms), Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOVRLipSyncActorComponentBase);
	UClass* Z_Construct_UClass_UOVRLipSyncActorComponentBase_NoRegister()
	{
		return UOVRLipSyncActorComponentBase::StaticClass();
	}
	struct Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnVisemesReady_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVisemesReady;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OVRLipSync,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets, "AssignVisemesToMorphTargets" }, // 3557278167
		{ &Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore, "GetLaughterScore" }, // 1128617250
		{ &Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames, "GetVisemeNames" }, // 185872778
		{ &Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes, "GetVisemes" }, // 2396507404
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "OVRLipSyncActorComponentBase.h" },
		{ "ModuleRelativePath", "Public/OVRLipSyncActorComponentBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::NewProp_OnVisemesReady_MetaData[] = {
		{ "Category", "LipSync" },
		{ "ModuleRelativePath", "Public/OVRLipSyncActorComponentBase.h" },
		{ "Tooltip", "Event triggered when new prediction is ready" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::NewProp_OnVisemesReady = { "OnVisemesReady", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOVRLipSyncActorComponentBase, OnVisemesReady), Z_Construct_UDelegateFunction_OVRLipSync_OVRLipSyncVisemesDataReadyDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::NewProp_OnVisemesReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::NewProp_OnVisemesReady_MetaData)) }; // 1829465970
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::NewProp_OnVisemesReady,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOVRLipSyncActorComponentBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::ClassParams = {
		&UOVRLipSyncActorComponentBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOVRLipSyncActorComponentBase()
	{
		if (!Z_Registration_Info_UClass_UOVRLipSyncActorComponentBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOVRLipSyncActorComponentBase.OuterSingleton, Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOVRLipSyncActorComponentBase.OuterSingleton;
	}
	template<> OVRLIPSYNC_API UClass* StaticClass<UOVRLipSyncActorComponentBase>()
	{
		return UOVRLipSyncActorComponentBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOVRLipSyncActorComponentBase);
	UOVRLipSyncActorComponentBase::~UOVRLipSyncActorComponentBase() {}
	struct Z_CompiledInDeferFile_FID_Users_tozea_OneDrive_Documentos_Unreal_Projects_MegaProject2_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tozea_OneDrive_Documentos_Unreal_Projects_MegaProject2_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOVRLipSyncActorComponentBase, UOVRLipSyncActorComponentBase::StaticClass, TEXT("UOVRLipSyncActorComponentBase"), &Z_Registration_Info_UClass_UOVRLipSyncActorComponentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOVRLipSyncActorComponentBase), 3065080402U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tozea_OneDrive_Documentos_Unreal_Projects_MegaProject2_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_460782380(TEXT("/Script/OVRLipSync"),
		Z_CompiledInDeferFile_FID_Users_tozea_OneDrive_Documentos_Unreal_Projects_MegaProject2_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tozea_OneDrive_Documentos_Unreal_Projects_MegaProject2_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
