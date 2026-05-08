// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Features/ViewportSettings.h"

#ifdef LIVESTREAMINGTOOLKIT_ViewportSettings_generated_h
#error "ViewportSettings.generated.h already included, missing '#pragma once' in ViewportSettings.h"
#endif
#define LIVESTREAMINGTOOLKIT_ViewportSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UViewportSettings ********************************************************
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_Features_ViewportSettings_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPostPIEStarted); \
	DECLARE_FUNCTION(execBindEvents);


struct Z_Construct_UClass_UViewportSettings_Statics;
LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_UViewportSettings_NoRegister();

#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_Features_ViewportSettings_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUViewportSettings(); \
	friend struct ::Z_Construct_UClass_UViewportSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVESTREAMINGTOOLKIT_API UClass* ::Z_Construct_UClass_UViewportSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UViewportSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LivestreamingToolkit"), Z_Construct_UClass_UViewportSettings_NoRegister) \
	DECLARE_SERIALIZER(UViewportSettings)


#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_Features_ViewportSettings_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UViewportSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UViewportSettings(UViewportSettings&&) = delete; \
	UViewportSettings(const UViewportSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UViewportSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewportSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UViewportSettings) \
	NO_API virtual ~UViewportSettings();


#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_Features_ViewportSettings_h_8_PROLOG
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_Features_ViewportSettings_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_Features_ViewportSettings_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_Features_ViewportSettings_h_11_INCLASS_NO_PURE_DECLS \
	FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_Features_ViewportSettings_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UViewportSettings;

// ********** End Class UViewportSettings **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_Features_ViewportSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
