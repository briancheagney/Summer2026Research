// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWLNDIReceiverManager.h"

#ifdef OWLNDI_OWLNDIReceiverManager_generated_h
#error "OWLNDIReceiverManager.generated.h already included, missing '#pragma once' in OWLNDIReceiverManager.h"
#endif
#define OWLNDI_OWLNDIReceiverManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FNDISource;

// ********** Begin ScriptStruct FOWLNDIReceiverInterface ******************************************
struct Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics;
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIReceiverManager_h_82_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics; \
	static class UScriptStruct* StaticStruct();


struct FOWLNDIReceiverInterface;
// ********** End ScriptStruct FOWLNDIReceiverInterface ********************************************

// ********** Begin Class AOWLNDIReceiverManager ***************************************************
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIReceiverManager_h_337_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFrameDropRate); \
	DECLARE_FUNCTION(execGetQueueDepths); \
	DECLARE_FUNCTION(execGetPerformanceMetrics); \
	DECLARE_FUNCTION(execSetTallyState); \
	DECLARE_FUNCTION(execOpenWebControlPanel); \
	DECLARE_FUNCTION(execGetWebControlURL); \
	DECLARE_FUNCTION(execPTZManualFocus); \
	DECLARE_FUNCTION(execPTZAutoFocus); \
	DECLARE_FUNCTION(execPTZRecallPreset); \
	DECLARE_FUNCTION(execPTZStorePreset); \
	DECLARE_FUNCTION(execPTZZoom); \
	DECLARE_FUNCTION(execPTZPanTilt); \
	DECLARE_FUNCTION(execIsPTZSupported); \
	DECLARE_FUNCTION(execDeactivateReceiver); \
	DECLARE_FUNCTION(execActivateReceiver); \
	DECLARE_FUNCTION(execGetAvailableNDISources);


struct Z_Construct_UClass_AOWLNDIReceiverManager_Statics;
OWLNDI_API UClass* Z_Construct_UClass_AOWLNDIReceiverManager_NoRegister();

#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIReceiverManager_h_337_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOWLNDIReceiverManager(); \
	friend struct ::Z_Construct_UClass_AOWLNDIReceiverManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OWLNDI_API UClass* ::Z_Construct_UClass_AOWLNDIReceiverManager_NoRegister(); \
public: \
	DECLARE_CLASS2(AOWLNDIReceiverManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWLNDI"), Z_Construct_UClass_AOWLNDIReceiverManager_NoRegister) \
	DECLARE_SERIALIZER(AOWLNDIReceiverManager)


#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIReceiverManager_h_337_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AOWLNDIReceiverManager(AOWLNDIReceiverManager&&) = delete; \
	AOWLNDIReceiverManager(const AOWLNDIReceiverManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWLNDIReceiverManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWLNDIReceiverManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOWLNDIReceiverManager) \
	NO_API virtual ~AOWLNDIReceiverManager();


#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIReceiverManager_h_334_PROLOG
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIReceiverManager_h_337_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIReceiverManager_h_337_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIReceiverManager_h_337_INCLASS_NO_PURE_DECLS \
	FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIReceiverManager_h_337_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AOWLNDIReceiverManager;

// ********** End Class AOWLNDIReceiverManager *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIReceiverManager_h

// ********** Begin Enum EOWLNDIBandwidth **********************************************************
#define FOREACH_ENUM_EOWLNDIBANDWIDTH(op) \
	op(EOWLNDIBandwidth::MetadataOnly) \
	op(EOWLNDIBandwidth::AudioOnly) \
	op(EOWLNDIBandwidth::Lowest) \
	op(EOWLNDIBandwidth::Highest) 

enum class EOWLNDIBandwidth : uint8;
template<> struct TIsUEnumClass<EOWLNDIBandwidth> { enum { Value = true }; };
template<> OWLNDI_NON_ATTRIBUTED_API UEnum* StaticEnum<EOWLNDIBandwidth>();
// ********** End Enum EOWLNDIBandwidth ************************************************************

// ********** Begin Enum EOWLNDIAudioReferenceLevel ************************************************
#define FOREACH_ENUM_EOWLNDIAUDIOREFERENCELEVEL(op) \
	op(EOWLNDIAudioReferenceLevel::Default) \
	op(EOWLNDIAudioReferenceLevel::SMPTE) \
	op(EOWLNDIAudioReferenceLevel::EBU) \
	op(EOWLNDIAudioReferenceLevel::Manual) 

enum class EOWLNDIAudioReferenceLevel : uint8;
template<> struct TIsUEnumClass<EOWLNDIAudioReferenceLevel> { enum { Value = true }; };
template<> OWLNDI_NON_ATTRIBUTED_API UEnum* StaticEnum<EOWLNDIAudioReferenceLevel>();
// ********** End Enum EOWLNDIAudioReferenceLevel **************************************************

// ********** Begin Enum EOWLNDIColorFormat ********************************************************
#define FOREACH_ENUM_EOWLNDICOLORFORMAT(op) \
	op(EOWLNDIColorFormat::Best) \
	op(EOWLNDIColorFormat::Fastest) 

enum class EOWLNDIColorFormat : uint8;
template<> struct TIsUEnumClass<EOWLNDIColorFormat> { enum { Value = true }; };
template<> OWLNDI_NON_ATTRIBUTED_API UEnum* StaticEnum<EOWLNDIColorFormat>();
// ********** End Enum EOWLNDIColorFormat **********************************************************

// ********** Begin Enum EOWLNDIAudioSync **********************************************************
#define FOREACH_ENUM_EOWLNDIAUDIOSYNC(op) \
	op(EOWLNDIAudioSync::Automatic) \
	op(EOWLNDIAudioSync::Manual) 

enum class EOWLNDIAudioSync : uint8;
template<> struct TIsUEnumClass<EOWLNDIAudioSync> { enum { Value = true }; };
template<> OWLNDI_NON_ATTRIBUTED_API UEnum* StaticEnum<EOWLNDIAudioSync>();
// ********** End Enum EOWLNDIAudioSync ************************************************************

// ********** Begin Enum EOWLNDIConnectionStatus ***************************************************
#define FOREACH_ENUM_EOWLNDICONNECTIONSTATUS(op) \
	op(EOWLNDIConnectionStatus::Disconnected) \
	op(EOWLNDIConnectionStatus::Connecting) \
	op(EOWLNDIConnectionStatus::Connected) 

enum class EOWLNDIConnectionStatus : uint8;
template<> struct TIsUEnumClass<EOWLNDIConnectionStatus> { enum { Value = true }; };
template<> OWLNDI_NON_ATTRIBUTED_API UEnum* StaticEnum<EOWLNDIConnectionStatus>();
// ********** End Enum EOWLNDIConnectionStatus *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
