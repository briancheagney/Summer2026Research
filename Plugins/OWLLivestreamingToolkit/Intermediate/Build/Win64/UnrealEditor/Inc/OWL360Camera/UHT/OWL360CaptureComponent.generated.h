// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWL360CaptureComponent.h"

#ifdef OWL360CAMERA_OWL360CaptureComponent_generated_h
#error "OWL360CaptureComponent.generated.h already included, missing '#pragma once' in OWL360CaptureComponent.h"
#endif
#define OWL360CAMERA_OWL360CaptureComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UCameraComponent;
class UPrimitiveComponent;

// ********** Begin ScriptStruct FOWLFaceControl ***************************************************
struct Z_Construct_UScriptStruct_FOWLFaceControl_Statics;
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_OWL360CaptureComponent_h_50_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOWLFaceControl_Statics; \
	OWL360CAMERA_API static class UScriptStruct* StaticStruct();


struct FOWLFaceControl;
// ********** End ScriptStruct FOWLFaceControl *****************************************************

// ********** Begin Class UOWL360CaptureComponent **************************************************
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_OWL360CaptureComponent_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsFOVAdjustable); \
	DECLARE_FUNCTION(execRayTracingEnabled); \
	DECLARE_FUNCTION(execIs180Projection); \
	DECLARE_FUNCTION(execIsStereoProjection); \
	DECLARE_FUNCTION(execClearHiddenComponents); \
	DECLARE_FUNCTION(execClearShowOnlyComponents); \
	DECLARE_FUNCTION(execRemoveShowOnlyActorComponents); \
	DECLARE_FUNCTION(execRemoveShowOnlyComponent); \
	DECLARE_FUNCTION(execShowOnlyActorComponents); \
	DECLARE_FUNCTION(execShowOnlyComponent); \
	DECLARE_FUNCTION(execHideActorComponents); \
	DECLARE_FUNCTION(execHideComponent); \
	DECLARE_FUNCTION(execSetOutputResolution); \
	DECLARE_FUNCTION(execGetOutputResolution); \
	DECLARE_FUNCTION(execGetTargetCamera); \
	DECLARE_FUNCTION(execTakeSnapshot); \
	DECLARE_FUNCTION(execCaptureScene); \
	DECLARE_FUNCTION(execResetCrop); \
	DECLARE_FUNCTION(execCalculateAutoCrop);


struct Z_Construct_UClass_UOWL360CaptureComponent_Statics;
OWL360CAMERA_API UClass* Z_Construct_UClass_UOWL360CaptureComponent_NoRegister();

#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_OWL360CaptureComponent_h_93_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOWL360CaptureComponent(); \
	friend struct ::Z_Construct_UClass_UOWL360CaptureComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OWL360CAMERA_API UClass* ::Z_Construct_UClass_UOWL360CaptureComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UOWL360CaptureComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWL360Camera"), Z_Construct_UClass_UOWL360CaptureComponent_NoRegister) \
	DECLARE_SERIALIZER(UOWL360CaptureComponent)


#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_OWL360CaptureComponent_h_93_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOWL360CaptureComponent(UOWL360CaptureComponent&&) = delete; \
	UOWL360CaptureComponent(const UOWL360CaptureComponent&) = delete; \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWL360CaptureComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWL360CaptureComponent)


#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_OWL360CaptureComponent_h_90_PROLOG
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_OWL360CaptureComponent_h_93_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_OWL360CaptureComponent_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_OWL360CaptureComponent_h_93_INCLASS_NO_PURE_DECLS \
	FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_OWL360CaptureComponent_h_93_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOWL360CaptureComponent;

// ********** End Class UOWL360CaptureComponent ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_OWL360CaptureComponent_h

// ********** Begin Enum EOWLPostProcessUpdateLocation *********************************************
#define FOREACH_ENUM_EOWLPOSTPROCESSUPDATELOCATION(op) \
	op(EOWLPostProcessUpdateLocation::L_UpdateOn360) \
	op(EOWLPostProcessUpdateLocation::L_UpdateOnCamera) 

enum class EOWLPostProcessUpdateLocation : uint8;
template<> struct TIsUEnumClass<EOWLPostProcessUpdateLocation> { enum { Value = true }; };
template<> OWL360CAMERA_NON_ATTRIBUTED_API UEnum* StaticEnum<EOWLPostProcessUpdateLocation>();
// ********** End Enum EOWLPostProcessUpdateLocation ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
