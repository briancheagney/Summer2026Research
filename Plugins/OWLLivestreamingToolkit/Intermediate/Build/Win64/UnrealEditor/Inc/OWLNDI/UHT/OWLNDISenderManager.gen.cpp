// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLNDISenderManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOWLNDISenderManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
OWLNDI_API UClass* Z_Construct_UClass_AOWLNDISenderManager();
OWLNDI_API UClass* Z_Construct_UClass_AOWLNDISenderManager_NoRegister();
OWLNDI_API UEnum* Z_Construct_UEnum_OWLNDI_ENDIVideoConversionFormat();
OWLNDI_API UScriptStruct* Z_Construct_UScriptStruct_FOWLNDISenderInterface();
UPackage* Z_Construct_UPackage__Script_OWLNDI();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FOWLNDISenderInterface ********************************************
struct Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FOWLNDISenderInterface); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOWLNDISenderInterface); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWLNDISenderManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Active_MetaData[] = {
		{ "Category", "OWLNDISender" },
		{ "ModuleRelativePath", "Public/OWLNDISenderManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureAudio_MetaData[] = {
		{ "Category", "OWLNDISender" },
		{ "ModuleRelativePath", "Public/OWLNDISenderManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "OWLNDISender" },
		{ "Comment", "/* NDI sender name that is used in editor targets */" },
		{ "ModuleRelativePath", "Public/OWLNDISenderManager.h" },
		{ "ToolTip", "NDI sender name that is used in editor targets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandaloneName_MetaData[] = {
		{ "Category", "OWLNDISender" },
		{ "Comment", "/* NDI sender name that is used in game (standalone/packaged) targets  */" },
		{ "ModuleRelativePath", "Public/OWLNDISenderManager.h" },
		{ "ToolTip", "NDI sender name that is used in game (standalone/packaged) targets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VideoConversionFormat_MetaData[] = {
		{ "Category", "OWLNDISender" },
		{ "ModuleRelativePath", "Public/OWLNDISenderManager.h" },
		{ "ToolTip", "Select video format. Note: P216 (10-bit) requires an HDR-compatible render target (e.g., Float or 16-bit)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceRenderTarget_MetaData[] = {
		{ "Category", "OWLNDISender" },
		{ "ModuleRelativePath", "Public/OWLNDISenderManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Submix_MetaData[] = {
		{ "Category", "OWLNDISender" },
		{ "Comment", "/* Optional submix to narrow down audio you send to the NDI stream */" },
		{ "ModuleRelativePath", "Public/OWLNDISenderManager.h" },
		{ "ToolTip", "Optional submix to narrow down audio you send to the NDI stream" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWLNDISenderManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOWLNDISenderInterface constinit property declarations ************
	static void NewProp_Active_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Active;
	static void NewProp_CaptureAudio_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CaptureAudio;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StandaloneName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VideoConversionFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VideoConversionFormat;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceRenderTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Submix;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOWLNDISenderInterface constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWLNDISenderInterface>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOWLNDISenderInterface;
class UScriptStruct* FOWLNDISenderInterface::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOWLNDISenderInterface.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOWLNDISenderInterface.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWLNDISenderInterface, (UObject*)Z_Construct_UPackage__Script_OWLNDI(), TEXT("OWLNDISenderInterface"));
	}
	return Z_Registration_Info_UScriptStruct_FOWLNDISenderInterface.OuterSingleton;
	}

// ********** Begin ScriptStruct FOWLNDISenderInterface Property Definitions ***********************
void Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_Active_SetBit(void* Obj)
{
	((FOWLNDISenderInterface*)Obj)->Active = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_Active = { "Active", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOWLNDISenderInterface), &Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_Active_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Active_MetaData), NewProp_Active_MetaData) };
void Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_CaptureAudio_SetBit(void* Obj)
{
	((FOWLNDISenderInterface*)Obj)->CaptureAudio = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_CaptureAudio = { "CaptureAudio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOWLNDISenderInterface), &Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_CaptureAudio_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureAudio_MetaData), NewProp_CaptureAudio_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLNDISenderInterface, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_StandaloneName = { "StandaloneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLNDISenderInterface, StandaloneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandaloneName_MetaData), NewProp_StandaloneName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_VideoConversionFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_VideoConversionFormat = { "VideoConversionFormat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLNDISenderInterface, VideoConversionFormat), Z_Construct_UEnum_OWLNDI_ENDIVideoConversionFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VideoConversionFormat_MetaData), NewProp_VideoConversionFormat_MetaData) }; // 3946547430
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_SourceRenderTarget = { "SourceRenderTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLNDISenderInterface, SourceRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceRenderTarget_MetaData), NewProp_SourceRenderTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_Submix = { "Submix", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLNDISenderInterface, Submix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Submix_MetaData), NewProp_Submix_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLNDISenderInterface, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_World_MetaData), NewProp_World_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_Active,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_CaptureAudio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_StandaloneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_VideoConversionFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_VideoConversionFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_SourceRenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_Submix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_World,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FOWLNDISenderInterface Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWLNDI,
	nullptr,
	&NewStructOps,
	"OWLNDISenderInterface",
	Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::PropPointers),
	sizeof(FOWLNDISenderInterface),
	alignof(FOWLNDISenderInterface),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWLNDISenderInterface()
{
	if (!Z_Registration_Info_UScriptStruct_FOWLNDISenderInterface.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOWLNDISenderInterface.InnerSingleton, Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOWLNDISenderInterface.InnerSingleton);
}
// ********** End ScriptStruct FOWLNDISenderInterface **********************************************

// ********** Begin Class AOWLNDISenderManager Function ActivateSender *****************************
struct Z_Construct_UFunction_AOWLNDISenderManager_ActivateSender_Statics
{
	struct OWLNDISenderManager_eventActivateSender_Parms
	{
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Off World Live NDI Sender Settings" },
		{ "Comment", "/* Activate a Sender of a given index. Returns false if sender not found */" },
		{ "ModuleRelativePath", "Public/OWLNDISenderManager.h" },
		{ "ToolTip", "Activate a Sender of a given index. Returns false if sender not found" },
	};
#endif // WITH_METADATA

// ********** Begin Function ActivateSender constinit property declarations ************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ActivateSender constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ActivateSender Property Definitions ***********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWLNDISenderManager_ActivateSender_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLNDISenderManager_eventActivateSender_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AOWLNDISenderManager_ActivateSender_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OWLNDISenderManager_eventActivateSender_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWLNDISenderManager_ActivateSender_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWLNDISenderManager_eventActivateSender_Parms), &Z_Construct_UFunction_AOWLNDISenderManager_ActivateSender_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLNDISenderManager_ActivateSender_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLNDISenderManager_ActivateSender_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLNDISenderManager_ActivateSender_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLNDISenderManager_ActivateSender_Statics::PropPointers) < 2048);
// ********** End Function ActivateSender Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLNDISenderManager_ActivateSender_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AOWLNDISenderManager, nullptr, "ActivateSender", 	Z_Construct_UFunction_AOWLNDISenderManager_ActivateSender_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLNDISenderManager_ActivateSender_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AOWLNDISenderManager_ActivateSender_Statics::OWLNDISenderManager_eventActivateSender_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLNDISenderManager_ActivateSender_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWLNDISenderManager_ActivateSender_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AOWLNDISenderManager_ActivateSender_Statics::OWLNDISenderManager_eventActivateSender_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWLNDISenderManager_ActivateSender()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWLNDISenderManager_ActivateSender_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWLNDISenderManager::execActivateSender)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ActivateSender(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class AOWLNDISenderManager Function ActivateSender *******************************

// ********** Begin Class AOWLNDISenderManager Function DeactivateSender ***************************
struct Z_Construct_UFunction_AOWLNDISenderManager_DeactivateSender_Statics
{
	struct OWLNDISenderManager_eventDeactivateSender_Parms
	{
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Off World Live NDI Sender Settings" },
		{ "Comment", "/* Dectivate a Sender of a given index. Returns false if sender not found */" },
		{ "ModuleRelativePath", "Public/OWLNDISenderManager.h" },
		{ "ToolTip", "Dectivate a Sender of a given index. Returns false if sender not found" },
	};
#endif // WITH_METADATA

// ********** Begin Function DeactivateSender constinit property declarations **********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DeactivateSender constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DeactivateSender Property Definitions *********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWLNDISenderManager_DeactivateSender_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLNDISenderManager_eventDeactivateSender_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AOWLNDISenderManager_DeactivateSender_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OWLNDISenderManager_eventDeactivateSender_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWLNDISenderManager_DeactivateSender_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWLNDISenderManager_eventDeactivateSender_Parms), &Z_Construct_UFunction_AOWLNDISenderManager_DeactivateSender_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLNDISenderManager_DeactivateSender_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLNDISenderManager_DeactivateSender_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLNDISenderManager_DeactivateSender_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLNDISenderManager_DeactivateSender_Statics::PropPointers) < 2048);
// ********** End Function DeactivateSender Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLNDISenderManager_DeactivateSender_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AOWLNDISenderManager, nullptr, "DeactivateSender", 	Z_Construct_UFunction_AOWLNDISenderManager_DeactivateSender_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLNDISenderManager_DeactivateSender_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AOWLNDISenderManager_DeactivateSender_Statics::OWLNDISenderManager_eventDeactivateSender_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLNDISenderManager_DeactivateSender_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWLNDISenderManager_DeactivateSender_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AOWLNDISenderManager_DeactivateSender_Statics::OWLNDISenderManager_eventDeactivateSender_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWLNDISenderManager_DeactivateSender()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWLNDISenderManager_DeactivateSender_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWLNDISenderManager::execDeactivateSender)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DeactivateSender(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class AOWLNDISenderManager Function DeactivateSender *****************************

// ********** Begin Class AOWLNDISenderManager *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AOWLNDISenderManager;
UClass* AOWLNDISenderManager::GetPrivateStaticClass()
{
	using TClass = AOWLNDISenderManager;
	if (!Z_Registration_Info_UClass_AOWLNDISenderManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OWLNDISenderManager"),
			Z_Registration_Info_UClass_AOWLNDISenderManager.InnerSingleton,
			StaticRegisterNativesAOWLNDISenderManager,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AOWLNDISenderManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AOWLNDISenderManager_NoRegister()
{
	return AOWLNDISenderManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AOWLNDISenderManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "OWL NDI Sender Manager" },
		{ "IncludePath", "OWLNDISenderManager.h" },
		{ "ModuleRelativePath", "Public/OWLNDISenderManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NDISenders_MetaData[] = {
		{ "Category", "Off World Live NDI Sender Settings" },
		{ "ModuleRelativePath", "Public/OWLNDISenderManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AOWLNDISenderManager constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_NDISenders_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NDISenders;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AOWLNDISenderManager constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ActivateSender"), .Pointer = &AOWLNDISenderManager::execActivateSender },
		{ .NameUTF8 = UTF8TEXT("DeactivateSender"), .Pointer = &AOWLNDISenderManager::execDeactivateSender },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWLNDISenderManager_ActivateSender, "ActivateSender" }, // 2669583023
		{ &Z_Construct_UFunction_AOWLNDISenderManager_DeactivateSender, "DeactivateSender" }, // 3060112477
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWLNDISenderManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AOWLNDISenderManager_Statics

// ********** Begin Class AOWLNDISenderManager Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWLNDISenderManager_Statics::NewProp_NDISenders_Inner = { "NDISenders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOWLNDISenderInterface, METADATA_PARAMS(0, nullptr) }; // 3921568687
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOWLNDISenderManager_Statics::NewProp_NDISenders = { "NDISenders", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWLNDISenderManager, NDISenders), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NDISenders_MetaData), NewProp_NDISenders_MetaData) }; // 3921568687
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWLNDISenderManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLNDISenderManager_Statics::NewProp_NDISenders_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLNDISenderManager_Statics::NewProp_NDISenders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLNDISenderManager_Statics::PropPointers) < 2048);
// ********** End Class AOWLNDISenderManager Property Definitions **********************************
UObject* (*const Z_Construct_UClass_AOWLNDISenderManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OWLNDI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLNDISenderManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWLNDISenderManager_Statics::ClassParams = {
	&AOWLNDISenderManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AOWLNDISenderManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AOWLNDISenderManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLNDISenderManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AOWLNDISenderManager_Statics::Class_MetaDataParams)
};
void AOWLNDISenderManager::StaticRegisterNativesAOWLNDISenderManager()
{
	UClass* Class = AOWLNDISenderManager::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AOWLNDISenderManager_Statics::Funcs));
}
UClass* Z_Construct_UClass_AOWLNDISenderManager()
{
	if (!Z_Registration_Info_UClass_AOWLNDISenderManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWLNDISenderManager.OuterSingleton, Z_Construct_UClass_AOWLNDISenderManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOWLNDISenderManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AOWLNDISenderManager);
AOWLNDISenderManager::~AOWLNDISenderManager() {}
// ********** End Class AOWLNDISenderManager *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDISenderManager_h__Script_OWLNDI_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOWLNDISenderInterface::StaticStruct, Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewStructOps, TEXT("OWLNDISenderInterface"),&Z_Registration_Info_UScriptStruct_FOWLNDISenderInterface, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWLNDISenderInterface), 3921568687U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOWLNDISenderManager, AOWLNDISenderManager::StaticClass, TEXT("AOWLNDISenderManager"), &Z_Registration_Info_UClass_AOWLNDISenderManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWLNDISenderManager), 3011464489U) },
	};
}; // Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDISenderManager_h__Script_OWLNDI_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDISenderManager_h__Script_OWLNDI_1188969264{
	TEXT("/Script/OWLNDI"),
	Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDISenderManager_h__Script_OWLNDI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDISenderManager_h__Script_OWLNDI_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDISenderManager_h__Script_OWLNDI_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDISenderManager_h__Script_OWLNDI_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
