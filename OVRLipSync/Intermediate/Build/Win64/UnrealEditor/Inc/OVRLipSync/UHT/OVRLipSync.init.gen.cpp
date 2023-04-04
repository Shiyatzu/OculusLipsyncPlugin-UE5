// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOVRLipSync_init() {}
	OVRLIPSYNC_API UFunction* Z_Construct_UDelegateFunction_OVRLipSync_OVRLipSyncVisemesDataReadyDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_OVRLipSync;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_OVRLipSync()
	{
		if (!Z_Registration_Info_UPackage__Script_OVRLipSync.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_OVRLipSync_OVRLipSyncVisemesDataReadyDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/OVRLipSync",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x2BBAC046,
				0xCF0EA560,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_OVRLipSync.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_OVRLipSync.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_OVRLipSync(Z_Construct_UPackage__Script_OVRLipSync, TEXT("/Script/OVRLipSync"), Z_Registration_Info_UPackage__Script_OVRLipSync, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2BBAC046, 0xCF0EA560));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
