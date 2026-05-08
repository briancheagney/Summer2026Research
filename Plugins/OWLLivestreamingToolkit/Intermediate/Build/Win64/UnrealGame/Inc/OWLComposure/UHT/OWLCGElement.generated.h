// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWLCGElement.h"

#ifdef OWLCOMPOSURE_OWLCGElement_generated_h
#error "OWLCGElement.generated.h already included, missing '#pragma once' in OWLCGElement.h"
#endif
#define OWLCOMPOSURE_OWLCGElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FOWLActorLayer ****************************************************
struct Z_Construct_UScriptStruct_FOWLActorLayer_Statics;
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGElement_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOWLActorLayer_Statics; \
	OWLCOMPOSURE_API static class UScriptStruct* StaticStruct();


struct FOWLActorLayer;
// ********** End ScriptStruct FOWLActorLayer ******************************************************

// ********** Begin Class AOWLCGElement ************************************************************
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGElement_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateDistortion);


struct Z_Construct_UClass_AOWLCGElement_Statics;
OWLCOMPOSURE_API UClass* Z_Construct_UClass_AOWLCGElement_NoRegister();

#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGElement_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOWLCGElement(); \
	friend struct ::Z_Construct_UClass_AOWLCGElement_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OWLCOMPOSURE_API UClass* ::Z_Construct_UClass_AOWLCGElement_NoRegister(); \
public: \
	DECLARE_CLASS2(AOWLCGElement, AOWLBaseComp, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWLComposure"), Z_Construct_UClass_AOWLCGElement_NoRegister) \
	DECLARE_SERIALIZER(AOWLCGElement) \
	virtual UObject* _getUObject() const override { return const_cast<AOWLCGElement*>(this); }


#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGElement_h_40_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AOWLCGElement(AOWLCGElement&&) = delete; \
	AOWLCGElement(const AOWLCGElement&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWLCGElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWLCGElement); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOWLCGElement) \
	NO_API virtual ~AOWLCGElement();


#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGElement_h_37_PROLOG
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGElement_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGElement_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGElement_h_40_INCLASS_NO_PURE_DECLS \
	FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGElement_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AOWLCGElement;

// ********** End Class AOWLCGElement **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGElement_h

// ********** Begin Enum EOWLIncludeExclude ********************************************************
#define FOREACH_ENUM_EOWLINCLUDEEXCLUDE(op) \
	op(EOWLIncludeExclude::EICE_Exclude) \
	op(EOWLIncludeExclude::EICE_Include) 

enum class EOWLIncludeExclude : uint8;
template<> struct TIsUEnumClass<EOWLIncludeExclude> { enum { Value = true }; };
template<> OWLCOMPOSURE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOWLIncludeExclude>();
// ********** End Enum EOWLIncludeExclude **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
