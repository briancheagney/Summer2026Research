// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NDIEnums.h"

#ifdef OWLNDI_NDIEnums_generated_h
#error "NDIEnums.generated.h already included, missing '#pragma once' in NDIEnums.h"
#endif
#define OWLNDI_NDIEnums_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_NDIEnums_h

// ********** Begin Enum ENDIVideoConversionFormat *************************************************
#define FOREACH_ENUM_ENDIVIDEOCONVERSIONFORMAT(op) \
	op(ENDIVideoConversionFormat::NDIVCF_BGRA) \
	op(ENDIVideoConversionFormat::NDIVCF_UYVY) 

enum class ENDIVideoConversionFormat : uint8;
template<> struct TIsUEnumClass<ENDIVideoConversionFormat> { enum { Value = true }; };
template<> OWLNDI_NON_ATTRIBUTED_API UEnum* StaticEnum<ENDIVideoConversionFormat>();
// ********** End Enum ENDIVideoConversionFormat ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
