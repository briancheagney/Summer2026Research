// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWL360Camera/OWL360PipelineSettings.h"

#ifdef OWLMRQPIPELINE_OWL360PipelineSettings_generated_h
#error "OWL360PipelineSettings.generated.h already included, missing '#pragma once' in OWL360PipelineSettings.h"
#endif
#define OWLMRQPIPELINE_OWL360PipelineSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FOWL360TilingSettings *********************************************
struct Z_Construct_UScriptStruct_FOWL360TilingSettings_Statics;
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWL360PipelineSettings_h_45_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOWL360TilingSettings_Statics; \
	OWLMRQPIPELINE_API static class UScriptStruct* StaticStruct();


struct FOWL360TilingSettings;
// ********** End ScriptStruct FOWL360TilingSettings ***********************************************

// ********** Begin ScriptStruct FOWL360OutputSettings *********************************************
struct Z_Construct_UScriptStruct_FOWL360OutputSettings_Statics;
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWL360PipelineSettings_h_72_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOWL360OutputSettings_Statics; \
	OWLMRQPIPELINE_API static class UScriptStruct* StaticStruct();


struct FOWL360OutputSettings;
// ********** End ScriptStruct FOWL360OutputSettings ***********************************************

// ********** Begin ScriptStruct FOWL360OptimisationSettings ***************************************
struct Z_Construct_UScriptStruct_FOWL360OptimisationSettings_Statics;
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWL360PipelineSettings_h_139_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOWL360OptimisationSettings_Statics; \
	OWLMRQPIPELINE_API static class UScriptStruct* StaticStruct();


struct FOWL360OptimisationSettings;
// ********** End ScriptStruct FOWL360OptimisationSettings *****************************************

// ********** Begin ScriptStruct FOWL360RenderingSettings ******************************************
struct Z_Construct_UScriptStruct_FOWL360RenderingSettings_Statics;
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWL360PipelineSettings_h_166_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOWL360RenderingSettings_Statics; \
	OWLMRQPIPELINE_API static class UScriptStruct* StaticStruct();


struct FOWL360RenderingSettings;
// ********** End ScriptStruct FOWL360RenderingSettings ********************************************

// ********** Begin ScriptStruct FOWL360PipelineSettings *******************************************
struct Z_Construct_UScriptStruct_FOWL360PipelineSettings_Statics;
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWL360PipelineSettings_h_197_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOWL360PipelineSettings_Statics; \
	OWLMRQPIPELINE_API static class UScriptStruct* StaticStruct();


struct FOWL360PipelineSettings;
// ********** End ScriptStruct FOWL360PipelineSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWL360PipelineSettings_h

// ********** Begin Enum EOWLBitDepth **************************************************************
#define FOREACH_ENUM_EOWLBITDEPTH(op) \
	op(EOWLBitDepth::BT_8Bit) \
	op(EOWLBitDepth::BT_16Bit) \
	op(EOWLBitDepth::BT_32Bit) 

enum class EOWLBitDepth : uint8;
template<> struct TIsUEnumClass<EOWLBitDepth> { enum { Value = true }; };
template<> OWLMRQPIPELINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOWLBitDepth>();
// ********** End Enum EOWLBitDepth ****************************************************************

// ********** Begin Enum EOWLCompositeMode *********************************************************
#define FOREACH_ENUM_EOWLCOMPOSITEMODE(op) \
	op(EOWLCompositeMode::CM_Over) \
	op(EOWLCompositeMode::CM_Multiply) \
	op(EOWLCompositeMode::CM_Add) \
	op(EOWLCompositeMode::CM_Subtract) \
	op(EOWLCompositeMode::CM_Screen) \
	op(EOWLCompositeMode::CM_Difference) 

enum class EOWLCompositeMode : uint8;
template<> struct TIsUEnumClass<EOWLCompositeMode> { enum { Value = true }; };
template<> OWLMRQPIPELINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOWLCompositeMode>();
// ********** End Enum EOWLCompositeMode ***********************************************************

// ********** Begin Enum EOWLInterpolationType *****************************************************
#define FOREACH_ENUM_EOWLINTERPOLATIONTYPE(op) \
	op(EOWLInterpolationType::EI_Point) \
	op(EOWLInterpolationType::EI_Bilinear) 

enum class EOWLInterpolationType : uint8;
template<> struct TIsUEnumClass<EOWLInterpolationType> { enum { Value = true }; };
template<> OWLMRQPIPELINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOWLInterpolationType>();
// ********** End Enum EOWLInterpolationType *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
