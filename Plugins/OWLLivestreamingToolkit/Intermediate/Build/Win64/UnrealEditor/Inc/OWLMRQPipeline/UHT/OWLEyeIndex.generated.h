// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWL360Camera/OWLEyeIndex.h"

#ifdef OWLMRQPIPELINE_OWLEyeIndex_generated_h
#error "OWLEyeIndex.generated.h already included, missing '#pragma once' in OWLEyeIndex.h"
#endif
#define OWLMRQPIPELINE_OWLEyeIndex_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMRQPipeline_Public_OWL360Camera_OWLEyeIndex_h

// ********** Begin Enum EOWLMRQEyeIndex ***********************************************************
#define FOREACH_ENUM_EOWLMRQEYEINDEX(op) \
	op(EOWLMRQEyeIndex::Left) \
	op(EOWLMRQEyeIndex::Right) 

enum class EOWLMRQEyeIndex : uint8;
template<> struct TIsUEnumClass<EOWLMRQEyeIndex> { enum { Value = true }; };
template<> OWLMRQPIPELINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOWLMRQEyeIndex>();
// ********** End Enum EOWLMRQEyeIndex *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
