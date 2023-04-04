// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OVRLipSyncActorComponentBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
#ifdef OVRLIPSYNC_OVRLipSyncActorComponentBase_generated_h
#error "OVRLipSyncActorComponentBase.generated.h already included, missing '#pragma once' in OVRLipSyncActorComponentBase.h"
#endif
#define OVRLIPSYNC_OVRLipSyncActorComponentBase_generated_h

#define FID_Users_tozea_OneDrive_Documentos_Unreal_Projects_MegaProject2_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_31_DELEGATE \
static inline void FOVRLipSyncVisemesDataReadyDelegate_DelegateWrapper(const FMulticastScriptDelegate& OVRLipSyncVisemesDataReadyDelegate) \
{ \
	OVRLipSyncVisemesDataReadyDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Users_tozea_OneDrive_Documentos_Unreal_Projects_MegaProject2_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_SPARSE_DATA
#define FID_Users_tozea_OneDrive_Documentos_Unreal_Projects_MegaProject2_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAssignVisemesToMorphTargets); \
	DECLARE_FUNCTION(execGetLaughterScore); \
	DECLARE_FUNCTION(execGetVisemeNames); \
	DECLARE_FUNCTION(execGetVisemes);


#define FID_Users_tozea_OneDrive_Documentos_Unreal_Projects_MegaProject2_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAssignVisemesToMorphTargets); \
	DECLARE_FUNCTION(execGetLaughterScore); \
	DECLARE_FUNCTION(execGetVisemeNames); \
	DECLARE_FUNCTION(execGetVisemes);


#define FID_Users_tozea_OneDrive_Documentos_Unreal_Projects_MegaProject2_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_ACCESSORS
#define FID_Users_tozea_OneDrive_Documentos_Unreal_Projects_MegaProject2_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOVRLipSyncActorComponentBase(); \
	friend struct Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics; \
public: \
	DECLARE_CLASS(UOVRLipSyncActorComponentBase, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OVRLipSync"), NO_API) \
	DECLARE_SERIALIZER(UOVRLipSyncActorComponentBase)


#define FID_Users_tozea_OneDrive_Documentos_Unreal_Projects_MegaProject2_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUOVRLipSyncActorComponentBase(); \
	friend struct Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics; \
public: \
	DECLARE_CLASS(UOVRLipSyncActorComponentBase, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OVRLipSync"), NO_API) \
	DECLARE_SERIALIZER(UOVRLipSyncActorComponentBase)


#define FID_Users_tozea_OneDrive_Documentos_Unreal_Projects_MegaProject2_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOVRLipSyncActorComponentBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOVRLipSyncActorComponentBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOVRLipSyncActorComponentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOVRLipSyncActorComponentBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOVRLipSyncActorComponentBase(UOVRLipSyncActorComponentBase&&); \
	NO_API UOVRLipSyncActorComponentBase(const UOVRLipSyncActorComponentBase&); \
public: \
	NO_API virtual ~UOVRLipSyncActorComponentBase();


#define FID_Users_tozea_OneDrive_Documentos_Unreal_Projects_MegaProject2_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOVRLipSyncActorComponentBase(UOVRLipSyncActorComponentBase&&); \
	NO_API UOVRLipSyncActorComponentBase(const UOVRLipSyncActorComponentBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOVRLipSyncActorComponentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOVRLipSyncActorComponentBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOVRLipSyncActorComponentBase) \
	NO_API virtual ~UOVRLipSyncActorComponentBase();


#define FID_Users_tozea_OneDrive_Documentos_Unreal_Projects_MegaProject2_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_33_PROLOG
#define FID_Users_tozea_OneDrive_Documentos_Unreal_Projects_MegaProject2_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_tozea_OneDrive_Documentos_Unreal_Projects_MegaProject2_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_SPARSE_DATA \
	FID_Users_tozea_OneDrive_Documentos_Unreal_Projects_MegaProject2_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_RPC_WRAPPERS \
	FID_Users_tozea_OneDrive_Documentos_Unreal_Projects_MegaProject2_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_ACCESSORS \
	FID_Users_tozea_OneDrive_Documentos_Unreal_Projects_MegaProject2_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_INCLASS \
	FID_Users_tozea_OneDrive_Documentos_Unreal_Projects_MegaProject2_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_tozea_OneDrive_Documentos_Unreal_Projects_MegaProject2_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_tozea_OneDrive_Documentos_Unreal_Projects_MegaProject2_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_SPARSE_DATA \
	FID_Users_tozea_OneDrive_Documentos_Unreal_Projects_MegaProject2_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_tozea_OneDrive_Documentos_Unreal_Projects_MegaProject2_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_ACCESSORS \
	FID_Users_tozea_OneDrive_Documentos_Unreal_Projects_MegaProject2_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_INCLASS_NO_PURE_DECLS \
	FID_Users_tozea_OneDrive_Documentos_Unreal_Projects_MegaProject2_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OVRLIPSYNC_API UClass* StaticClass<class UOVRLipSyncActorComponentBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_tozea_OneDrive_Documentos_Unreal_Projects_MegaProject2_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
