// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWLScreenCapturerOptions.h"

#ifdef OWLSCREENCAPTURE_OWLScreenCapturerOptions_generated_h
#error "OWLScreenCapturerOptions.generated.h already included, missing '#pragma once' in OWLScreenCapturerOptions.h"
#endif
#define OWLSCREENCAPTURE_OWLScreenCapturerOptions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FOWLScreenCaptureOptions ******************************************
struct Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics;
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapturerOptions_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics; \
	OWLSCREENCAPTURE_API static class UScriptStruct* StaticStruct();


struct FOWLScreenCaptureOptions;
// ********** End ScriptStruct FOWLScreenCaptureOptions ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapturerOptions_h

// ********** Begin Enum EOWLScreenCaptureType *****************************************************
#define FOREACH_ENUM_EOWLSCREENCAPTURETYPE(op) \
	op(EOWLScreenCaptureType::SCT_Monitor) \
	op(EOWLScreenCaptureType::SCT_Window) 

enum class EOWLScreenCaptureType : uint8;
template<> struct TIsUEnumClass<EOWLScreenCaptureType> { enum { Value = true }; };
template<> OWLSCREENCAPTURE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOWLScreenCaptureType>();
// ********** End Enum EOWLScreenCaptureType *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
