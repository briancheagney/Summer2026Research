// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWL360Camera/OWLMRQ360Hooks.h"

#ifdef OWLMRQPIPELINE_OWLMRQ360Hooks_generated_h
#error "OWLMRQ360Hooks.generated.h already included, missing '#pragma once' in OWLMRQ360Hooks.h"
#endif
#define OWLMRQPIPELINE_OWLMRQ360Hooks_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMoviePipeline;
class UOWL360CameraMoviePipelinePass;
class UOWL360CaptureComponent;
struct FOWL360HookTileInfo;
struct FOWLMovieSampleState;
struct FPostProcessSettings;

// ********** Begin ScriptStruct FOWLMovieSampleState **********************************************
struct Z_Construct_UScriptStruct_FOWLMovieSampleState_Statics;
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWLMRQ360Hooks_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOWLMovieSampleState_Statics; \
	OWLMRQPIPELINE_API static class UScriptStruct* StaticStruct();


struct FOWLMovieSampleState;
// ********** End ScriptStruct FOWLMovieSampleState ************************************************

// ********** Begin ScriptStruct FOWL360HookStitchInfo *********************************************
struct Z_Construct_UScriptStruct_FOWL360HookStitchInfo_Statics;
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWLMRQ360Hooks_h_138_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOWL360HookStitchInfo_Statics; \
	OWLMRQPIPELINE_API static class UScriptStruct* StaticStruct();


struct FOWL360HookStitchInfo;
// ********** End ScriptStruct FOWL360HookStitchInfo ***********************************************

// ********** Begin ScriptStruct FOWL360HookTileInfo ***********************************************
struct Z_Construct_UScriptStruct_FOWL360HookTileInfo_Statics;
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWLMRQ360Hooks_h_158_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOWL360HookTileInfo_Statics; \
	OWLMRQPIPELINE_API static class UScriptStruct* StaticStruct(); \
	typedef FOWL360HookStitchInfo Super;


struct FOWL360HookTileInfo;
// ********** End ScriptStruct FOWL360HookTileInfo *************************************************

// ********** Begin Class UOWLMRQ360Hooks **********************************************************
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWLMRQ360Hooks_h_194_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execModifyTilePostProcess_GameThread); \
	DECLARE_FUNCTION(execPreRenderCamera_GameThread); \
	DECLARE_FUNCTION(execTearDown_GameThread); \
	DECLARE_FUNCTION(execSetup_GameThread);


#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWLMRQ360Hooks_h_194_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UOWLMRQ360Hooks_Statics;
OWLMRQPIPELINE_API UClass* Z_Construct_UClass_UOWLMRQ360Hooks_NoRegister();

#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWLMRQ360Hooks_h_194_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOWLMRQ360Hooks(); \
	friend struct ::Z_Construct_UClass_UOWLMRQ360Hooks_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OWLMRQPIPELINE_API UClass* ::Z_Construct_UClass_UOWLMRQ360Hooks_NoRegister(); \
public: \
	DECLARE_CLASS2(UOWLMRQ360Hooks, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/OWLMRQPipeline"), Z_Construct_UClass_UOWLMRQ360Hooks_NoRegister) \
	DECLARE_SERIALIZER(UOWLMRQ360Hooks)


#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWLMRQ360Hooks_h_194_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWLMRQ360Hooks(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOWLMRQ360Hooks(UOWLMRQ360Hooks&&) = delete; \
	UOWLMRQ360Hooks(const UOWLMRQ360Hooks&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWLMRQ360Hooks); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWLMRQ360Hooks); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWLMRQ360Hooks)


#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWLMRQ360Hooks_h_191_PROLOG
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWLMRQ360Hooks_h_194_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWLMRQ360Hooks_h_194_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWLMRQ360Hooks_h_194_CALLBACK_WRAPPERS \
	FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWLMRQ360Hooks_h_194_INCLASS_NO_PURE_DECLS \
	FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWLMRQ360Hooks_h_194_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOWLMRQ360Hooks;

// ********** End Class UOWLMRQ360Hooks ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWLMRQ360Hooks_h

// ********** Begin Enum EOWL360MRQPassType ********************************************************
#define FOREACH_ENUM_EOWL360MRQPASSTYPE(op) \
	op(PT_Combined) \
	op(PT_SingleFacePass) \
	op(PT_StitchPass) 
// ********** End Enum EOWL360MRQPassType **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
