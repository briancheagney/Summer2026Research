// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWLNDISenderManager.h"

#ifdef OWLNDI_OWLNDISenderManager_generated_h
#error "OWLNDISenderManager.generated.h already included, missing '#pragma once' in OWLNDISenderManager.h"
#endif
#define OWLNDI_OWLNDISenderManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FOWLNDISenderInterface ********************************************
struct Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics;
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDISenderManager_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics; \
	static class UScriptStruct* StaticStruct();


struct FOWLNDISenderInterface;
// ********** End ScriptStruct FOWLNDISenderInterface **********************************************

// ********** Begin Class AOWLNDISenderManager *****************************************************
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDISenderManager_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDeactivateSender); \
	DECLARE_FUNCTION(execActivateSender);


struct Z_Construct_UClass_AOWLNDISenderManager_Statics;
OWLNDI_API UClass* Z_Construct_UClass_AOWLNDISenderManager_NoRegister();

#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDISenderManager_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOWLNDISenderManager(); \
	friend struct ::Z_Construct_UClass_AOWLNDISenderManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OWLNDI_API UClass* ::Z_Construct_UClass_AOWLNDISenderManager_NoRegister(); \
public: \
	DECLARE_CLASS2(AOWLNDISenderManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWLNDI"), Z_Construct_UClass_AOWLNDISenderManager_NoRegister) \
	DECLARE_SERIALIZER(AOWLNDISenderManager)


#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDISenderManager_h_66_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AOWLNDISenderManager(AOWLNDISenderManager&&) = delete; \
	AOWLNDISenderManager(const AOWLNDISenderManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWLNDISenderManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWLNDISenderManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOWLNDISenderManager) \
	NO_API virtual ~AOWLNDISenderManager();


#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDISenderManager_h_63_PROLOG
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDISenderManager_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDISenderManager_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDISenderManager_h_66_INCLASS_NO_PURE_DECLS \
	FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDISenderManager_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AOWLNDISenderManager;

// ********** End Class AOWLNDISenderManager *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDISenderManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
