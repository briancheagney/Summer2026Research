// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWLSpoutSenderManager.h"

#ifdef OWLSPOUT_OWLSpoutSenderManager_generated_h
#error "OWLSpoutSenderManager.generated.h already included, missing '#pragma once' in OWLSpoutSenderManager.h"
#endif
#define OWLSPOUT_OWLSpoutSenderManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureRenderTarget2D;
struct FOWLSpoutSenderInterface;

// ********** Begin ScriptStruct FOWLSpoutSenderInterface ******************************************
struct Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics;
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutSenderManager_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics; \
	static class UScriptStruct* StaticStruct();


struct FOWLSpoutSenderInterface;
// ********** End ScriptStruct FOWLSpoutSenderInterface ********************************************

// ********** Begin Class AOWLSpoutSenderManager ***************************************************
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutSenderManager_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDeactivateSenderByIndex); \
	DECLARE_FUNCTION(execActivateSenderByIndex); \
	DECLARE_FUNCTION(execDeactivateSender); \
	DECLARE_FUNCTION(execActivateSender); \
	DECLARE_FUNCTION(execRemoveSenderByName); \
	DECLARE_FUNCTION(execCreateSender); \
	DECLARE_FUNCTION(execAddNewSender);


struct Z_Construct_UClass_AOWLSpoutSenderManager_Statics;
OWLSPOUT_API UClass* Z_Construct_UClass_AOWLSpoutSenderManager_NoRegister();

#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutSenderManager_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOWLSpoutSenderManager(); \
	friend struct ::Z_Construct_UClass_AOWLSpoutSenderManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OWLSPOUT_API UClass* ::Z_Construct_UClass_AOWLSpoutSenderManager_NoRegister(); \
public: \
	DECLARE_CLASS2(AOWLSpoutSenderManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWLSpout"), Z_Construct_UClass_AOWLSpoutSenderManager_NoRegister) \
	DECLARE_SERIALIZER(AOWLSpoutSenderManager)


#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutSenderManager_h_54_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AOWLSpoutSenderManager(AOWLSpoutSenderManager&&) = delete; \
	AOWLSpoutSenderManager(const AOWLSpoutSenderManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWLSpoutSenderManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWLSpoutSenderManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOWLSpoutSenderManager) \
	NO_API virtual ~AOWLSpoutSenderManager();


#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutSenderManager_h_51_PROLOG
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutSenderManager_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutSenderManager_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutSenderManager_h_54_INCLASS_NO_PURE_DECLS \
	FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutSenderManager_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AOWLSpoutSenderManager;

// ********** End Class AOWLSpoutSenderManager *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutSenderManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
