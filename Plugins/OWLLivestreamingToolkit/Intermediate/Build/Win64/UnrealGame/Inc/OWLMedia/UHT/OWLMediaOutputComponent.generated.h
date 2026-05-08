// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWLMediaOutputComponent.h"

#ifdef OWLMEDIA_OWLMediaOutputComponent_generated_h
#error "OWLMediaOutputComponent.generated.h already included, missing '#pragma once' in OWLMediaOutputComponent.h"
#endif
#define OWLMEDIA_OWLMediaOutputComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnMediaOutputStart ***************************************************
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutputComponent_h_24_DELEGATE \
OWLMEDIA_API void FOnMediaOutputStart_DelegateWrapper(const FMulticastScriptDelegate& OnMediaOutputStart);


// ********** End Delegate FOnMediaOutputStart *****************************************************

// ********** Begin Delegate FOnMediaOutputStop ****************************************************
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutputComponent_h_25_DELEGATE \
OWLMEDIA_API void FOnMediaOutputStop_DelegateWrapper(const FMulticastScriptDelegate& OnMediaOutputStop, bool bGraceful);


// ********** End Delegate FOnMediaOutputStop ******************************************************

// ********** Begin ScriptStruct FOWLSaveToFileSettings ********************************************
struct Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics;
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutputComponent_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics; \
	static class UScriptStruct* StaticStruct();


struct FOWLSaveToFileSettings;
// ********** End ScriptStruct FOWLSaveToFileSettings **********************************************

// ********** Begin ScriptStruct FOWLRTMPSettings **************************************************
struct Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics;
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutputComponent_h_48_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics; \
	static class UScriptStruct* StaticStruct();


struct FOWLRTMPSettings;
// ********** End ScriptStruct FOWLRTMPSettings ****************************************************

// ********** Begin ScriptStruct FOWLRTSPSettings **************************************************
struct Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics;
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutputComponent_h_62_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics; \
	static class UScriptStruct* StaticStruct();


struct FOWLRTSPSettings;
// ********** End ScriptStruct FOWLRTSPSettings ****************************************************

// ********** Begin ScriptStruct FOWLSRTSettings ***************************************************
struct Z_Construct_UScriptStruct_FOWLSRTSettings_Statics;
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutputComponent_h_72_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOWLSRTSettings_Statics; \
	static class UScriptStruct* StaticStruct();


struct FOWLSRTSettings;
// ********** End ScriptStruct FOWLSRTSettings *****************************************************

// ********** Begin ScriptStruct FOWLHTTPSettings **************************************************
struct Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics;
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutputComponent_h_84_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics; \
	static class UScriptStruct* StaticStruct();


struct FOWLHTTPSettings;
// ********** End ScriptStruct FOWLHTTPSettings ****************************************************

// ********** Begin Class UOWLMediaOutputComponent *************************************************
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutputComponent_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsReconnecting); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execStart);


struct Z_Construct_UClass_UOWLMediaOutputComponent_Statics;
OWLMEDIA_API UClass* Z_Construct_UClass_UOWLMediaOutputComponent_NoRegister();

#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutputComponent_h_96_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOWLMediaOutputComponent(); \
	friend struct ::Z_Construct_UClass_UOWLMediaOutputComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OWLMEDIA_API UClass* ::Z_Construct_UClass_UOWLMediaOutputComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UOWLMediaOutputComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWLMedia"), Z_Construct_UClass_UOWLMediaOutputComponent_NoRegister) \
	DECLARE_SERIALIZER(UOWLMediaOutputComponent)


#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutputComponent_h_96_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOWLMediaOutputComponent(UOWLMediaOutputComponent&&) = delete; \
	UOWLMediaOutputComponent(const UOWLMediaOutputComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWLMediaOutputComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWLMediaOutputComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOWLMediaOutputComponent)


#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutputComponent_h_93_PROLOG
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutputComponent_h_96_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutputComponent_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutputComponent_h_96_INCLASS_NO_PURE_DECLS \
	FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutputComponent_h_96_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOWLMediaOutputComponent;

// ********** End Class UOWLMediaOutputComponent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutputComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
