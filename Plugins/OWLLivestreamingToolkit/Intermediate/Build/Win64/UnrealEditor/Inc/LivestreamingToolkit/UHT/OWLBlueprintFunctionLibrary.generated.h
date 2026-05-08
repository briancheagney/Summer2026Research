// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWLBlueprintFunctionLibrary.h"

#ifdef LIVESTREAMINGTOOLKIT_OWLBlueprintFunctionLibrary_generated_h
#error "OWLBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in OWLBlueprintFunctionLibrary.h"
#endif
#define LIVESTREAMINGTOOLKIT_OWLBlueprintFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureRenderTarget2D;
class UUserWidget;

// ********** Begin Class UOWLBlueprintFunctionLibrary *********************************************
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLBlueprintFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLaunchLicenseUtility); \
	DECLARE_FUNCTION(execInstallLicense); \
	DECLARE_FUNCTION(execInitOWLApplicationLicense); \
	DECLARE_FUNCTION(execOWLLogInStatus); \
	DECLARE_FUNCTION(execOWLLogOut); \
	DECLARE_FUNCTION(execOWLLogIn); \
	DECLARE_FUNCTION(execDrawUMGToRenderTarget); \
	DECLARE_FUNCTION(execGetIsRuntimeViewportRendering); \
	DECLARE_FUNCTION(execGetIsEditorViewportRendering); \
	DECLARE_FUNCTION(execSetRuntimeViewportRendering); \
	DECLARE_FUNCTION(execSetEditorViewportRendering); \
	DECLARE_FUNCTION(execToggleRuntimeViewportRendering); \
	DECLARE_FUNCTION(execToggleEditorViewportRendering);


struct Z_Construct_UClass_UOWLBlueprintFunctionLibrary_Statics;
LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_UOWLBlueprintFunctionLibrary_NoRegister();

#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLBlueprintFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOWLBlueprintFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UOWLBlueprintFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVESTREAMINGTOOLKIT_API UClass* ::Z_Construct_UClass_UOWLBlueprintFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UOWLBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LivestreamingToolkit"), Z_Construct_UClass_UOWLBlueprintFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UOWLBlueprintFunctionLibrary)


#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLBlueprintFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWLBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOWLBlueprintFunctionLibrary(UOWLBlueprintFunctionLibrary&&) = delete; \
	UOWLBlueprintFunctionLibrary(const UOWLBlueprintFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWLBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWLBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWLBlueprintFunctionLibrary) \
	NO_API virtual ~UOWLBlueprintFunctionLibrary();


#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLBlueprintFunctionLibrary_h_13_PROLOG
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLBlueprintFunctionLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLBlueprintFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLBlueprintFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLBlueprintFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOWLBlueprintFunctionLibrary;

// ********** End Class UOWLBlueprintFunctionLibrary ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLBlueprintFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
