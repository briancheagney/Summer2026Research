// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWLMediaOutput.h"

#ifdef OWLMEDIA_OWLMediaOutput_generated_h
#error "OWLMediaOutput.generated.h already included, missing '#pragma once' in OWLMediaOutput.h"
#endif
#define OWLMEDIA_OWLMediaOutput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AOWLMediaOutput **********************************************************
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsReconnecting); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execStart);


struct Z_Construct_UClass_AOWLMediaOutput_Statics;
OWLMEDIA_API UClass* Z_Construct_UClass_AOWLMediaOutput_NoRegister();

#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOWLMediaOutput(); \
	friend struct ::Z_Construct_UClass_AOWLMediaOutput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OWLMEDIA_API UClass* ::Z_Construct_UClass_AOWLMediaOutput_NoRegister(); \
public: \
	DECLARE_CLASS2(AOWLMediaOutput, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWLMedia"), Z_Construct_UClass_AOWLMediaOutput_NoRegister) \
	DECLARE_SERIALIZER(AOWLMediaOutput)


#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AOWLMediaOutput(AOWLMediaOutput&&) = delete; \
	AOWLMediaOutput(const AOWLMediaOutput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWLMediaOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWLMediaOutput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOWLMediaOutput) \
	NO_API virtual ~AOWLMediaOutput();


#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_12_PROLOG
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_15_INCLASS_NO_PURE_DECLS \
	FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AOWLMediaOutput;

// ********** End Class AOWLMediaOutput ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
