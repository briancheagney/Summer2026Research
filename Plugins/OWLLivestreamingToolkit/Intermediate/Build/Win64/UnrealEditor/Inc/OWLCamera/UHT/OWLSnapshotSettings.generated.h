// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWLSnapshotSettings.h"

#ifdef OWLCAMERA_OWLSnapshotSettings_generated_h
#error "OWLSnapshotSettings.generated.h already included, missing '#pragma once' in OWLSnapshotSettings.h"
#endif
#define OWLCAMERA_OWLSnapshotSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnSnapshotCompletionDelegate *****************************************
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLSnapshotSettings_h_9_DELEGATE \
OWLCAMERA_API void FOnSnapshotCompletionDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSnapshotCompletionDelegate, const FString& OutputPath, bool bSuccess);


// ********** End Delegate FOnSnapshotCompletionDelegate *******************************************

// ********** Begin ScriptStruct FOWLSnapshotSettings **********************************************
struct Z_Construct_UScriptStruct_FOWLSnapshotSettings_Statics;
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLSnapshotSettings_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOWLSnapshotSettings_Statics; \
	static class UScriptStruct* StaticStruct();


struct FOWLSnapshotSettings;
// ********** End ScriptStruct FOWLSnapshotSettings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLSnapshotSettings_h

// ********** Begin Enum EOWLImageFormat ***********************************************************
#define FOREACH_ENUM_EOWLIMAGEFORMAT(op) \
	op(EOWLImageFormat::PNG) 

enum class EOWLImageFormat : uint8;
template<> struct TIsUEnumClass<EOWLImageFormat> { enum { Value = true }; };
template<> OWLCAMERA_NON_ATTRIBUTED_API UEnum* StaticEnum<EOWLImageFormat>();
// ********** End Enum EOWLImageFormat *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
