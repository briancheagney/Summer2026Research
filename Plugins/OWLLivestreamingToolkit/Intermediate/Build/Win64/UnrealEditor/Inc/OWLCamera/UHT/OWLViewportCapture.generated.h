// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWLViewportCapture.h"

#ifdef OWLCAMERA_OWLViewportCapture_generated_h
#error "OWLViewportCapture.generated.h already included, missing '#pragma once' in OWLViewportCapture.h"
#endif
#define OWLCAMERA_OWLViewportCapture_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnViewportCaptureResized *********************************************
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLViewportCapture_h_15_DELEGATE \
OWLCAMERA_API void FOnViewportCaptureResized_DelegateWrapper(const FMulticastScriptDelegate& OnViewportCaptureResized);


// ********** End Delegate FOnViewportCaptureResized ***********************************************

// ********** Begin Class AOWLViewportCapture ******************************************************
struct Z_Construct_UClass_AOWLViewportCapture_Statics;
OWLCAMERA_API UClass* Z_Construct_UClass_AOWLViewportCapture_NoRegister();

#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLViewportCapture_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOWLViewportCapture(); \
	friend struct ::Z_Construct_UClass_AOWLViewportCapture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OWLCAMERA_API UClass* ::Z_Construct_UClass_AOWLViewportCapture_NoRegister(); \
public: \
	DECLARE_CLASS2(AOWLViewportCapture, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWLCamera"), Z_Construct_UClass_AOWLViewportCapture_NoRegister) \
	DECLARE_SERIALIZER(AOWLViewportCapture)


#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLViewportCapture_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AOWLViewportCapture(AOWLViewportCapture&&) = delete; \
	AOWLViewportCapture(const AOWLViewportCapture&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWLViewportCapture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWLViewportCapture); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOWLViewportCapture) \
	NO_API virtual ~AOWLViewportCapture();


#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLViewportCapture_h_17_PROLOG
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLViewportCapture_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLViewportCapture_h_20_INCLASS_NO_PURE_DECLS \
	FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLViewportCapture_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AOWLViewportCapture;

// ********** End Class AOWLViewportCapture ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLViewportCapture_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
