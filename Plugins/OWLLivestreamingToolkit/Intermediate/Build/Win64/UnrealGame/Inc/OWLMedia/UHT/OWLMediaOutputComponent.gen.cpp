// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLMediaOutputComponent.h"
#include "OWLFFmpegOutput.h"
#include "UObject/SoftObjectPath.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOWLMediaOutputComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
OWLCAMERA_API UClass* Z_Construct_UClass_UOWLCaptureComponent_NoRegister();
OWLMEDIA_API UClass* Z_Construct_UClass_UOWLMediaOutputComponent();
OWLMEDIA_API UClass* Z_Construct_UClass_UOWLMediaOutputComponent_NoRegister();
OWLMEDIA_API UEnum* Z_Construct_UEnum_OWLMedia_EOWLDestinationFormat();
OWLMEDIA_API UEnum* Z_Construct_UEnum_OWLMedia_EOWLHttpFormat();
OWLMEDIA_API UEnum* Z_Construct_UEnum_OWLMedia_EOWLMediaOutputType();
OWLMEDIA_API UFunction* Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStart__DelegateSignature();
OWLMEDIA_API UFunction* Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature();
OWLMEDIA_API UScriptStruct* Z_Construct_UScriptStruct_FOWLFFmpegSettings();
OWLMEDIA_API UScriptStruct* Z_Construct_UScriptStruct_FOWLHTTPSettings();
OWLMEDIA_API UScriptStruct* Z_Construct_UScriptStruct_FOWLRTMPSettings();
OWLMEDIA_API UScriptStruct* Z_Construct_UScriptStruct_FOWLRTSPSettings();
OWLMEDIA_API UScriptStruct* Z_Construct_UScriptStruct_FOWLSaveToFileSettings();
OWLMEDIA_API UScriptStruct* Z_Construct_UScriptStruct_FOWLSRTOptions();
OWLMEDIA_API UScriptStruct* Z_Construct_UScriptStruct_FOWLSRTSettings();
UPackage* Z_Construct_UPackage__Script_OWLMedia();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnMediaOutputStart ***************************************************
struct Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStart__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnMediaOutputStart constinit property declarations *******************
// ********** End Delegate FOnMediaOutputStart constinit property declarations *********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStart__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OWLMedia, nullptr, "OnMediaOutputStart__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStart__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStart__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStart__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStart__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMediaOutputStart_DelegateWrapper(const FMulticastScriptDelegate& OnMediaOutputStart)
{
	OnMediaOutputStart.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnMediaOutputStart *****************************************************

// ********** Begin Delegate FOnMediaOutputStop ****************************************************
struct Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics
{
	struct _Script_OWLMedia_eventOnMediaOutputStop_Parms
	{
		bool bGraceful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnMediaOutputStop constinit property declarations ********************
	static void NewProp_bGraceful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGraceful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnMediaOutputStop constinit property declarations **********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnMediaOutputStop Property Definitions *******************************
void Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::NewProp_bGraceful_SetBit(void* Obj)
{
	((_Script_OWLMedia_eventOnMediaOutputStop_Parms*)Obj)->bGraceful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::NewProp_bGraceful = { "bGraceful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OWLMedia_eventOnMediaOutputStop_Parms), &Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::NewProp_bGraceful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::NewProp_bGraceful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnMediaOutputStop Property Definitions *********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OWLMedia, nullptr, "OnMediaOutputStop__DelegateSignature", 	Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::_Script_OWLMedia_eventOnMediaOutputStop_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::_Script_OWLMedia_eventOnMediaOutputStop_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMediaOutputStop_DelegateWrapper(const FMulticastScriptDelegate& OnMediaOutputStop, bool bGraceful)
{
	struct _Script_OWLMedia_eventOnMediaOutputStop_Parms
	{
		bool bGraceful;
	};
	_Script_OWLMedia_eventOnMediaOutputStop_Parms Parms;
	Parms.bGraceful=bGraceful ? true : false;
	OnMediaOutputStop.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnMediaOutputStop ******************************************************

// ********** Begin ScriptStruct FOWLSaveToFileSettings ********************************************
struct Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FOWLSaveToFileSettings); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOWLSaveToFileSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestinationFormat_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "Comment", "/* The container format in which the media should be saved */" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
		{ "ToolTip", "The container format in which the media should be saved" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VideoOutputDir_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "Comment", "/* Destination directory for saving video */" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
		{ "ToolTip", "Destination directory for saving video" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VideoOutputFile_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "Comment", "/* Output file name (without extension) */" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
		{ "ToolTip", "Output file name (without extension)" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOWLSaveToFileSettings constinit property declarations ************
	static const UECodeGen_Private::FBytePropertyParams NewProp_DestinationFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DestinationFormat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VideoOutputDir;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VideoOutputFile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOWLSaveToFileSettings constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWLSaveToFileSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOWLSaveToFileSettings;
class UScriptStruct* FOWLSaveToFileSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOWLSaveToFileSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOWLSaveToFileSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWLSaveToFileSettings, (UObject*)Z_Construct_UPackage__Script_OWLMedia(), TEXT("OWLSaveToFileSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FOWLSaveToFileSettings.OuterSingleton;
	}

// ********** Begin ScriptStruct FOWLSaveToFileSettings Property Definitions ***********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_DestinationFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_DestinationFormat = { "DestinationFormat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLSaveToFileSettings, DestinationFormat), Z_Construct_UEnum_OWLMedia_EOWLDestinationFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestinationFormat_MetaData), NewProp_DestinationFormat_MetaData) }; // 2648948630
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_VideoOutputDir = { "VideoOutputDir", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLSaveToFileSettings, VideoOutputDir), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VideoOutputDir_MetaData), NewProp_VideoOutputDir_MetaData) }; // 1225349189
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_VideoOutputFile = { "VideoOutputFile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLSaveToFileSettings, VideoOutputFile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VideoOutputFile_MetaData), NewProp_VideoOutputFile_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_DestinationFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_DestinationFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_VideoOutputDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_VideoOutputFile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FOWLSaveToFileSettings Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWLMedia,
	nullptr,
	&NewStructOps,
	"OWLSaveToFileSettings",
	Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::PropPointers),
	sizeof(FOWLSaveToFileSettings),
	alignof(FOWLSaveToFileSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWLSaveToFileSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FOWLSaveToFileSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOWLSaveToFileSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOWLSaveToFileSettings.InnerSingleton);
}
// ********** End ScriptStruct FOWLSaveToFileSettings **********************************************

// ********** Begin ScriptStruct FOWLRTMPSettings **************************************************
struct Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FOWLRTMPSettings); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOWLRTMPSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamURL_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "Comment", "/* The Stream destination URL */" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
		{ "ToolTip", "The Stream destination URL" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamKey_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "Comment", "/* The Stream destination Key */" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
		{ "ToolTip", "The Stream destination Key" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOWLRTMPSettings constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_StreamURL;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StreamKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOWLRTMPSettings constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWLRTMPSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOWLRTMPSettings;
class UScriptStruct* FOWLRTMPSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOWLRTMPSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOWLRTMPSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWLRTMPSettings, (UObject*)Z_Construct_UPackage__Script_OWLMedia(), TEXT("OWLRTMPSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FOWLRTMPSettings.OuterSingleton;
	}

// ********** Begin ScriptStruct FOWLRTMPSettings Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::NewProp_StreamURL = { "StreamURL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLRTMPSettings, StreamURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamURL_MetaData), NewProp_StreamURL_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::NewProp_StreamKey = { "StreamKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLRTMPSettings, StreamKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamKey_MetaData), NewProp_StreamKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::NewProp_StreamURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::NewProp_StreamKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FOWLRTMPSettings Property Definitions *******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWLMedia,
	nullptr,
	&NewStructOps,
	"OWLRTMPSettings",
	Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::PropPointers),
	sizeof(FOWLRTMPSettings),
	alignof(FOWLRTMPSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWLRTMPSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FOWLRTMPSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOWLRTMPSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOWLRTMPSettings.InnerSingleton);
}
// ********** End ScriptStruct FOWLRTMPSettings ****************************************************

// ********** Begin ScriptStruct FOWLRTSPSettings **************************************************
struct Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FOWLRTSPSettings); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOWLRTSPSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamURL_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "Comment", "/* The RTSP Server ie rtsp://<domain>:port */" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
		{ "ToolTip", "The RTSP Server ie rtsp://<domain>:port" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOWLRTSPSettings constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_StreamURL;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOWLRTSPSettings constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWLRTSPSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOWLRTSPSettings;
class UScriptStruct* FOWLRTSPSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOWLRTSPSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOWLRTSPSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWLRTSPSettings, (UObject*)Z_Construct_UPackage__Script_OWLMedia(), TEXT("OWLRTSPSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FOWLRTSPSettings.OuterSingleton;
	}

// ********** Begin ScriptStruct FOWLRTSPSettings Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::NewProp_StreamURL = { "StreamURL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLRTSPSettings, StreamURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamURL_MetaData), NewProp_StreamURL_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::NewProp_StreamURL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FOWLRTSPSettings Property Definitions *******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWLMedia,
	nullptr,
	&NewStructOps,
	"OWLRTSPSettings",
	Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::PropPointers),
	sizeof(FOWLRTSPSettings),
	alignof(FOWLRTSPSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWLRTSPSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FOWLRTSPSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOWLRTSPSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOWLRTSPSettings.InnerSingleton);
}
// ********** End ScriptStruct FOWLRTSPSettings ****************************************************

// ********** Begin ScriptStruct FOWLSRTSettings ***************************************************
struct Z_Construct_UScriptStruct_FOWLSRTSettings_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FOWLSRTSettings); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOWLSRTSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamURL_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "Comment", "/* The Stream destination URL */" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
		{ "ToolTip", "The Stream destination URL" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOWLSRTSettings constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_StreamURL;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOWLSRTSettings constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWLSRTSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FOWLSRTSettings_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOWLSRTSettings;
class UScriptStruct* FOWLSRTSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOWLSRTSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOWLSRTSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWLSRTSettings, (UObject*)Z_Construct_UPackage__Script_OWLMedia(), TEXT("OWLSRTSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FOWLSRTSettings.OuterSingleton;
	}

// ********** Begin ScriptStruct FOWLSRTSettings Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::NewProp_StreamURL = { "StreamURL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLSRTSettings, StreamURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamURL_MetaData), NewProp_StreamURL_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLSRTSettings, Options), Z_Construct_UScriptStruct_FOWLSRTOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) }; // 1119971885
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::NewProp_StreamURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::NewProp_Options,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FOWLSRTSettings Property Definitions ********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWLMedia,
	nullptr,
	&NewStructOps,
	"OWLSRTSettings",
	Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::PropPointers),
	sizeof(FOWLSRTSettings),
	alignof(FOWLSRTSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWLSRTSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FOWLSRTSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOWLSRTSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOWLSRTSettings.InnerSingleton);
}
// ********** End ScriptStruct FOWLSRTSettings *****************************************************

// ********** Begin ScriptStruct FOWLHTTPSettings **************************************************
struct Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FOWLHTTPSettings); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOWLHTTPSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamURL_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "Comment", "/* The http destination for the post request */" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
		{ "ToolTip", "The http destination for the post request" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOWLHTTPSettings constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_StreamURL;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Format_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Format;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOWLHTTPSettings constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWLHTTPSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOWLHTTPSettings;
class UScriptStruct* FOWLHTTPSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOWLHTTPSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOWLHTTPSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWLHTTPSettings, (UObject*)Z_Construct_UPackage__Script_OWLMedia(), TEXT("OWLHTTPSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FOWLHTTPSettings.OuterSingleton;
	}

// ********** Begin ScriptStruct FOWLHTTPSettings Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::NewProp_StreamURL = { "StreamURL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLHTTPSettings, StreamURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamURL_MetaData), NewProp_StreamURL_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::NewProp_Format_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLHTTPSettings, Format), Z_Construct_UEnum_OWLMedia_EOWLHttpFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Format_MetaData), NewProp_Format_MetaData) }; // 1228237988
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::NewProp_StreamURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::NewProp_Format_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::NewProp_Format,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FOWLHTTPSettings Property Definitions *******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWLMedia,
	nullptr,
	&NewStructOps,
	"OWLHTTPSettings",
	Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::PropPointers),
	sizeof(FOWLHTTPSettings),
	alignof(FOWLHTTPSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWLHTTPSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FOWLHTTPSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOWLHTTPSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOWLHTTPSettings.InnerSingleton);
}
// ********** End ScriptStruct FOWLHTTPSettings ****************************************************

// ********** Begin Class UOWLMediaOutputComponent Function IsReconnecting *************************
struct Z_Construct_UFunction_UOWLMediaOutputComponent_IsReconnecting_Statics
{
	struct OWLMediaOutputComponent_eventIsReconnecting_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWL Media Output Component" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsReconnecting constinit property declarations ************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsReconnecting constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsReconnecting Property Definitions ***********************************
void Z_Construct_UFunction_UOWLMediaOutputComponent_IsReconnecting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OWLMediaOutputComponent_eventIsReconnecting_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWLMediaOutputComponent_IsReconnecting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWLMediaOutputComponent_eventIsReconnecting_Parms), &Z_Construct_UFunction_UOWLMediaOutputComponent_IsReconnecting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLMediaOutputComponent_IsReconnecting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLMediaOutputComponent_IsReconnecting_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLMediaOutputComponent_IsReconnecting_Statics::PropPointers) < 2048);
// ********** End Function IsReconnecting Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLMediaOutputComponent_IsReconnecting_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOWLMediaOutputComponent, nullptr, "IsReconnecting", 	Z_Construct_UFunction_UOWLMediaOutputComponent_IsReconnecting_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLMediaOutputComponent_IsReconnecting_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOWLMediaOutputComponent_IsReconnecting_Statics::OWLMediaOutputComponent_eventIsReconnecting_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLMediaOutputComponent_IsReconnecting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLMediaOutputComponent_IsReconnecting_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOWLMediaOutputComponent_IsReconnecting_Statics::OWLMediaOutputComponent_eventIsReconnecting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWLMediaOutputComponent_IsReconnecting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLMediaOutputComponent_IsReconnecting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLMediaOutputComponent::execIsReconnecting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsReconnecting();
	P_NATIVE_END;
}
// ********** End Class UOWLMediaOutputComponent Function IsReconnecting ***************************

// ********** Begin Class UOWLMediaOutputComponent Function Start **********************************
struct Z_Construct_UFunction_UOWLMediaOutputComponent_Start_Statics
{
	struct OWLMediaOutputComponent_eventStart_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWL Media Output Component" },
		{ "Comment", "/* Starts the media output. Warning, in some situations such\n     as when this is called on boot, this can be async. Use `OnStart` delegate\n     to ensure completion. */" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
		{ "ToolTip", "Starts the media output. Warning, in some situations such\n    as when this is called on boot, this can be async. Use `OnStart` delegate\n    to ensure completion." },
	};
#endif // WITH_METADATA

// ********** Begin Function Start constinit property declarations *********************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Start constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Start Property Definitions ********************************************
void Z_Construct_UFunction_UOWLMediaOutputComponent_Start_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OWLMediaOutputComponent_eventStart_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWLMediaOutputComponent_Start_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWLMediaOutputComponent_eventStart_Parms), &Z_Construct_UFunction_UOWLMediaOutputComponent_Start_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLMediaOutputComponent_Start_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLMediaOutputComponent_Start_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLMediaOutputComponent_Start_Statics::PropPointers) < 2048);
// ********** End Function Start Property Definitions **********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLMediaOutputComponent_Start_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOWLMediaOutputComponent, nullptr, "Start", 	Z_Construct_UFunction_UOWLMediaOutputComponent_Start_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLMediaOutputComponent_Start_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOWLMediaOutputComponent_Start_Statics::OWLMediaOutputComponent_eventStart_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLMediaOutputComponent_Start_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLMediaOutputComponent_Start_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOWLMediaOutputComponent_Start_Statics::OWLMediaOutputComponent_eventStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWLMediaOutputComponent_Start()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLMediaOutputComponent_Start_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLMediaOutputComponent::execStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Start();
	P_NATIVE_END;
}
// ********** End Class UOWLMediaOutputComponent Function Start ************************************

// ********** Begin Class UOWLMediaOutputComponent Function Stop ***********************************
struct Z_Construct_UFunction_UOWLMediaOutputComponent_Stop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWL Media Output Component" },
		{ "Comment", "/* Stops the media output component. This is blocking */" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
		{ "ToolTip", "Stops the media output component. This is blocking" },
	};
#endif // WITH_METADATA

// ********** Begin Function Stop constinit property declarations **********************************
// ********** End Function Stop constinit property declarations ************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLMediaOutputComponent_Stop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOWLMediaOutputComponent, nullptr, "Stop", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLMediaOutputComponent_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLMediaOutputComponent_Stop_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UOWLMediaOutputComponent_Stop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLMediaOutputComponent_Stop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLMediaOutputComponent::execStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Stop();
	P_NATIVE_END;
}
// ********** End Class UOWLMediaOutputComponent Function Stop *************************************

// ********** Begin Class UOWLMediaOutputComponent *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UOWLMediaOutputComponent;
UClass* UOWLMediaOutputComponent::GetPrivateStaticClass()
{
	using TClass = UOWLMediaOutputComponent;
	if (!Z_Registration_Info_UClass_UOWLMediaOutputComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OWLMediaOutputComponent"),
			Z_Registration_Info_UClass_UOWLMediaOutputComponent.InnerSingleton,
			StaticRegisterNativesUOWLMediaOutputComponent,
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
	return Z_Registration_Info_UClass_UOWLMediaOutputComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UOWLMediaOutputComponent_NoRegister()
{
	return UOWLMediaOutputComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOWLMediaOutputComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "OWLMediaOutputComponent.h" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputType_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveToFileSettings_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "EditCondition", "OutputType == EOWLMediaOutputType::T_FILEOUTPUT" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RTMPSettings_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "EditCondition", "OutputType == EOWLMediaOutputType::T_RTMP" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RTSPSettings_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "EditCondition", "OutputType == EOWLMediaOutputType::T_RTSP" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HTTPSettings_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "EditCondition", "OutputType == EOWLMediaOutputType::T_HTTP" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SRTSettings_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "EditCondition", "OutputType == EOWLMediaOutputType::T_SRT" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_APIKey_MetaData[] = {
		{ "Category", "Metered License Auth" },
		{ "EditCondition", "bOverrideAPIKey && !bHideAPIOptions" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAPIKey_MetaData[] = {
		{ "Category", "Metered License Auth" },
		{ "EditCondition", "!bHideAPIOptions" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHideAPIOptions_MetaData[] = {
		{ "Category", "Metered License Auth" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputRenderTarget_MetaData[] = {
		{ "Category", "Input Settings" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EncoderSettings_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseTimecodeProviderWhereAvailable_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasStarted_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DurationMs_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsMeteredPricing_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinutesRemaining_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingMinutesRemaining_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioBufferSize_MetaData[] = {
		{ "Category", "Output Settings|Advanced" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStop_MetaData[] = {
		{ "Category", "OWL Media Output" },
		{ "Comment", "// Expose delegates\n" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
		{ "ToolTip", "Expose delegates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStart_MetaData[] = {
		{ "Category", "OWL Media Output" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntermediateTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOWLMediaOutputComponent constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptureComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SaveToFileSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RTMPSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RTSPSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HTTPSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SRTSettings;
	static const UECodeGen_Private::FStrPropertyParams NewProp_APIKey;
	static void NewProp_bOverrideAPIKey_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAPIKey;
	static void NewProp_bHideAPIOptions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideAPIOptions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputRenderTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EncoderSettings;
	static void NewProp_bUseTimecodeProviderWhereAvailable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTimecodeProviderWhereAvailable;
	static void NewProp_HasStarted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasStarted;
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_DurationMs;
	static void NewProp_IsMeteredPricing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsMeteredPricing;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinutesRemaining;
	static void NewProp_LoadingMinutesRemaining_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LoadingMinutesRemaining;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AudioBufferSize;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStop;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStart;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IntermediateTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOWLMediaOutputComponent constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("IsReconnecting"), .Pointer = &UOWLMediaOutputComponent::execIsReconnecting },
		{ .NameUTF8 = UTF8TEXT("Start"), .Pointer = &UOWLMediaOutputComponent::execStart },
		{ .NameUTF8 = UTF8TEXT("Stop"), .Pointer = &UOWLMediaOutputComponent::execStop },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWLMediaOutputComponent_IsReconnecting, "IsReconnecting" }, // 3799559937
		{ &Z_Construct_UFunction_UOWLMediaOutputComponent_Start, "Start" }, // 2804242872
		{ &Z_Construct_UFunction_UOWLMediaOutputComponent_Stop, "Stop" }, // 1758852387
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWLMediaOutputComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UOWLMediaOutputComponent_Statics

// ********** Begin Class UOWLMediaOutputComponent Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_CaptureComponent = { "CaptureComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, CaptureComponent), Z_Construct_UClass_UOWLCaptureComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureComponent_MetaData), NewProp_CaptureComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_OutputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_OutputType = { "OutputType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, OutputType), Z_Construct_UEnum_OWLMedia_EOWLMediaOutputType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputType_MetaData), NewProp_OutputType_MetaData) }; // 272821548
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_SaveToFileSettings = { "SaveToFileSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, SaveToFileSettings), Z_Construct_UScriptStruct_FOWLSaveToFileSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveToFileSettings_MetaData), NewProp_SaveToFileSettings_MetaData) }; // 2007930840
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_RTMPSettings = { "RTMPSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, RTMPSettings), Z_Construct_UScriptStruct_FOWLRTMPSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RTMPSettings_MetaData), NewProp_RTMPSettings_MetaData) }; // 4182853687
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_RTSPSettings = { "RTSPSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, RTSPSettings), Z_Construct_UScriptStruct_FOWLRTSPSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RTSPSettings_MetaData), NewProp_RTSPSettings_MetaData) }; // 877351746
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_HTTPSettings = { "HTTPSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, HTTPSettings), Z_Construct_UScriptStruct_FOWLHTTPSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HTTPSettings_MetaData), NewProp_HTTPSettings_MetaData) }; // 3898193239
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_SRTSettings = { "SRTSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, SRTSettings), Z_Construct_UScriptStruct_FOWLSRTSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SRTSettings_MetaData), NewProp_SRTSettings_MetaData) }; // 3678443937
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_APIKey = { "APIKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, APIKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_APIKey_MetaData), NewProp_APIKey_MetaData) };
void Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bOverrideAPIKey_SetBit(void* Obj)
{
	((UOWLMediaOutputComponent*)Obj)->bOverrideAPIKey = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bOverrideAPIKey = { "bOverrideAPIKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLMediaOutputComponent), &Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bOverrideAPIKey_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideAPIKey_MetaData), NewProp_bOverrideAPIKey_MetaData) };
void Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bHideAPIOptions_SetBit(void* Obj)
{
	((UOWLMediaOutputComponent*)Obj)->bHideAPIOptions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bHideAPIOptions = { "bHideAPIOptions", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLMediaOutputComponent), &Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bHideAPIOptions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideAPIOptions_MetaData), NewProp_bHideAPIOptions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_InputRenderTarget = { "InputRenderTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, InputRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputRenderTarget_MetaData), NewProp_InputRenderTarget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_EncoderSettings = { "EncoderSettings", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, EncoderSettings), Z_Construct_UScriptStruct_FOWLFFmpegSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EncoderSettings_MetaData), NewProp_EncoderSettings_MetaData) }; // 1974222274
void Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bUseTimecodeProviderWhereAvailable_SetBit(void* Obj)
{
	((UOWLMediaOutputComponent*)Obj)->bUseTimecodeProviderWhereAvailable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bUseTimecodeProviderWhereAvailable = { "bUseTimecodeProviderWhereAvailable", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLMediaOutputComponent), &Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bUseTimecodeProviderWhereAvailable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseTimecodeProviderWhereAvailable_MetaData), NewProp_bUseTimecodeProviderWhereAvailable_MetaData) };
void Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_HasStarted_SetBit(void* Obj)
{
	((UOWLMediaOutputComponent*)Obj)->HasStarted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_HasStarted = { "HasStarted", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLMediaOutputComponent), &Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_HasStarted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasStarted_MetaData), NewProp_HasStarted_MetaData) };
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_DurationMs = { "DurationMs", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, DurationMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DurationMs_MetaData), NewProp_DurationMs_MetaData) };
void Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_IsMeteredPricing_SetBit(void* Obj)
{
	((UOWLMediaOutputComponent*)Obj)->IsMeteredPricing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_IsMeteredPricing = { "IsMeteredPricing", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLMediaOutputComponent), &Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_IsMeteredPricing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsMeteredPricing_MetaData), NewProp_IsMeteredPricing_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_MinutesRemaining = { "MinutesRemaining", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, MinutesRemaining), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinutesRemaining_MetaData), NewProp_MinutesRemaining_MetaData) };
void Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_LoadingMinutesRemaining_SetBit(void* Obj)
{
	((UOWLMediaOutputComponent*)Obj)->LoadingMinutesRemaining = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_LoadingMinutesRemaining = { "LoadingMinutesRemaining", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLMediaOutputComponent), &Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_LoadingMinutesRemaining_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingMinutesRemaining_MetaData), NewProp_LoadingMinutesRemaining_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_AudioBufferSize = { "AudioBufferSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, AudioBufferSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioBufferSize_MetaData), NewProp_AudioBufferSize_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_OnStop = { "OnStop", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, OnStop), Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStop_MetaData), NewProp_OnStop_MetaData) }; // 895215993
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_OnStart = { "OnStart", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, OnStart), Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStart__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStart_MetaData), NewProp_OnStart_MetaData) }; // 107781717
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_IntermediateTarget = { "IntermediateTarget", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, IntermediateTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntermediateTarget_MetaData), NewProp_IntermediateTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWLMediaOutputComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_CaptureComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_OutputType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_OutputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_SaveToFileSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_RTMPSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_RTSPSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_HTTPSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_SRTSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_APIKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bOverrideAPIKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bHideAPIOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_InputRenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_EncoderSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bUseTimecodeProviderWhereAvailable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_HasStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_DurationMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_IsMeteredPricing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_MinutesRemaining,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_LoadingMinutesRemaining,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_AudioBufferSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_OnStop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_OnStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_IntermediateTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLMediaOutputComponent_Statics::PropPointers) < 2048);
// ********** End Class UOWLMediaOutputComponent Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UOWLMediaOutputComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OWLMedia,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLMediaOutputComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::ClassParams = {
	&UOWLMediaOutputComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOWLMediaOutputComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOWLMediaOutputComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLMediaOutputComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWLMediaOutputComponent_Statics::Class_MetaDataParams)
};
void UOWLMediaOutputComponent::StaticRegisterNativesUOWLMediaOutputComponent()
{
	UClass* Class = UOWLMediaOutputComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UOWLMediaOutputComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UOWLMediaOutputComponent()
{
	if (!Z_Registration_Info_UClass_UOWLMediaOutputComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWLMediaOutputComponent.OuterSingleton, Z_Construct_UClass_UOWLMediaOutputComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWLMediaOutputComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOWLMediaOutputComponent);
// ********** End Class UOWLMediaOutputComponent ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutputComponent_h__Script_OWLMedia_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOWLSaveToFileSettings::StaticStruct, Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewStructOps, TEXT("OWLSaveToFileSettings"),&Z_Registration_Info_UScriptStruct_FOWLSaveToFileSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWLSaveToFileSettings), 2007930840U) },
		{ FOWLRTMPSettings::StaticStruct, Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::NewStructOps, TEXT("OWLRTMPSettings"),&Z_Registration_Info_UScriptStruct_FOWLRTMPSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWLRTMPSettings), 4182853687U) },
		{ FOWLRTSPSettings::StaticStruct, Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::NewStructOps, TEXT("OWLRTSPSettings"),&Z_Registration_Info_UScriptStruct_FOWLRTSPSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWLRTSPSettings), 877351746U) },
		{ FOWLSRTSettings::StaticStruct, Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::NewStructOps, TEXT("OWLSRTSettings"),&Z_Registration_Info_UScriptStruct_FOWLSRTSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWLSRTSettings), 3678443937U) },
		{ FOWLHTTPSettings::StaticStruct, Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::NewStructOps, TEXT("OWLHTTPSettings"),&Z_Registration_Info_UScriptStruct_FOWLHTTPSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWLHTTPSettings), 3898193239U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWLMediaOutputComponent, UOWLMediaOutputComponent::StaticClass, TEXT("UOWLMediaOutputComponent"), &Z_Registration_Info_UClass_UOWLMediaOutputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWLMediaOutputComponent), 2373044173U) },
	};
}; // Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutputComponent_h__Script_OWLMedia_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutputComponent_h__Script_OWLMedia_3325546239{
	TEXT("/Script/OWLMedia"),
	Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutputComponent_h__Script_OWLMedia_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutputComponent_h__Script_OWLMedia_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutputComponent_h__Script_OWLMedia_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutputComponent_h__Script_OWLMedia_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
