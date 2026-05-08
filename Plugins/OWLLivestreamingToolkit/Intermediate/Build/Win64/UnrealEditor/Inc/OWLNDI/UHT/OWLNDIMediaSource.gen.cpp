// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaFramework/Input/OWLNDIMediaSource.h"
#include "OpenColorIOColorSpace.h"
#include "OWLNDIFinder.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOWLNDIMediaSource() {}

// ********** Begin Cross Module References ********************************************************
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource();
OPENCOLORIO_API UClass* Z_Construct_UClass_UOpenColorIOConfiguration_NoRegister();
OPENCOLORIO_API UScriptStruct* Z_Construct_UScriptStruct_FOpenColorIOColorSpace();
OWLNDI_API UClass* Z_Construct_UClass_UOWLNDIMediaSource();
OWLNDI_API UClass* Z_Construct_UClass_UOWLNDIMediaSource_NoRegister();
OWLNDI_API UEnum* Z_Construct_UEnum_OWLNDI_EOWLNDIAudioReferenceLevel();
OWLNDI_API UEnum* Z_Construct_UEnum_OWLNDI_EOWLNDIBandwidth();
OWLNDI_API UEnum* Z_Construct_UEnum_OWLNDI_EOWLNDIColorFormat();
OWLNDI_API UScriptStruct* Z_Construct_UScriptStruct_FNDISource();
UPackage* Z_Construct_UPackage__Script_OWLNDI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOWLNDIMediaSource Function ChangeNDISource ******************************
struct Z_Construct_UFunction_UOWLNDIMediaSource_ChangeNDISource_Statics
{
	struct OWLNDIMediaSource_eventChangeNDISource_Parms
	{
		FString NewSourceName;
		bool bMaintainPlaybackState;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NDI" },
		{ "CPP_Default_bMaintainPlaybackState", "true" },
		{ "ModuleRelativePath", "Public/MediaFramework/Input/OWLNDIMediaSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewSourceName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ChangeNDISource constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewSourceName;
	static void NewProp_bMaintainPlaybackState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainPlaybackState;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ChangeNDISource constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ChangeNDISource Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWLNDIMediaSource_ChangeNDISource_Statics::NewProp_NewSourceName = { "NewSourceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLNDIMediaSource_eventChangeNDISource_Parms, NewSourceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewSourceName_MetaData), NewProp_NewSourceName_MetaData) };
void Z_Construct_UFunction_UOWLNDIMediaSource_ChangeNDISource_Statics::NewProp_bMaintainPlaybackState_SetBit(void* Obj)
{
	((OWLNDIMediaSource_eventChangeNDISource_Parms*)Obj)->bMaintainPlaybackState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWLNDIMediaSource_ChangeNDISource_Statics::NewProp_bMaintainPlaybackState = { "bMaintainPlaybackState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWLNDIMediaSource_eventChangeNDISource_Parms), &Z_Construct_UFunction_UOWLNDIMediaSource_ChangeNDISource_Statics::NewProp_bMaintainPlaybackState_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOWLNDIMediaSource_ChangeNDISource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OWLNDIMediaSource_eventChangeNDISource_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWLNDIMediaSource_ChangeNDISource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWLNDIMediaSource_eventChangeNDISource_Parms), &Z_Construct_UFunction_UOWLNDIMediaSource_ChangeNDISource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLNDIMediaSource_ChangeNDISource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLNDIMediaSource_ChangeNDISource_Statics::NewProp_NewSourceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLNDIMediaSource_ChangeNDISource_Statics::NewProp_bMaintainPlaybackState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLNDIMediaSource_ChangeNDISource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLNDIMediaSource_ChangeNDISource_Statics::PropPointers) < 2048);
// ********** End Function ChangeNDISource Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLNDIMediaSource_ChangeNDISource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOWLNDIMediaSource, nullptr, "ChangeNDISource", 	Z_Construct_UFunction_UOWLNDIMediaSource_ChangeNDISource_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLNDIMediaSource_ChangeNDISource_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOWLNDIMediaSource_ChangeNDISource_Statics::OWLNDIMediaSource_eventChangeNDISource_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLNDIMediaSource_ChangeNDISource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLNDIMediaSource_ChangeNDISource_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOWLNDIMediaSource_ChangeNDISource_Statics::OWLNDIMediaSource_eventChangeNDISource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWLNDIMediaSource_ChangeNDISource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLNDIMediaSource_ChangeNDISource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLNDIMediaSource::execChangeNDISource)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NewSourceName);
	P_GET_UBOOL(Z_Param_bMaintainPlaybackState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ChangeNDISource(Z_Param_NewSourceName,Z_Param_bMaintainPlaybackState);
	P_NATIVE_END;
}
// ********** End Class UOWLNDIMediaSource Function ChangeNDISource ********************************

// ********** Begin Class UOWLNDIMediaSource Function GetAvailableNDISourceNames *******************
struct Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableNDISourceNames_Statics
{
	struct OWLNDIMediaSource_eventGetAvailableNDISourceNames_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MediaFramework/Input/OWLNDIMediaSource.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAvailableNDISourceNames constinit property declarations ************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAvailableNDISourceNames constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAvailableNDISourceNames Property Definitions ***********************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableNDISourceNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableNDISourceNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLNDIMediaSource_eventGetAvailableNDISourceNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableNDISourceNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableNDISourceNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableNDISourceNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableNDISourceNames_Statics::PropPointers) < 2048);
// ********** End Function GetAvailableNDISourceNames Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableNDISourceNames_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOWLNDIMediaSource, nullptr, "GetAvailableNDISourceNames", 	Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableNDISourceNames_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableNDISourceNames_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableNDISourceNames_Statics::OWLNDIMediaSource_eventGetAvailableNDISourceNames_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableNDISourceNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableNDISourceNames_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableNDISourceNames_Statics::OWLNDIMediaSource_eventGetAvailableNDISourceNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableNDISourceNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableNDISourceNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLNDIMediaSource::execGetAvailableNDISourceNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetAvailableNDISourceNames();
	P_NATIVE_END;
}
// ********** End Class UOWLNDIMediaSource Function GetAvailableNDISourceNames *********************

// ********** Begin Class UOWLNDIMediaSource Function GetAvailableNDISources ***********************
struct Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableNDISources_Statics
{
	struct OWLNDIMediaSource_eventGetAvailableNDISources_Parms
	{
		TArray<FNDISource> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NDI" },
		{ "ModuleRelativePath", "Public/MediaFramework/Input/OWLNDIMediaSource.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAvailableNDISources constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAvailableNDISources constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAvailableNDISources Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableNDISources_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNDISource, METADATA_PARAMS(0, nullptr) }; // 2959272678
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableNDISources_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLNDIMediaSource_eventGetAvailableNDISources_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2959272678
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableNDISources_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableNDISources_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableNDISources_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableNDISources_Statics::PropPointers) < 2048);
// ********** End Function GetAvailableNDISources Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableNDISources_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOWLNDIMediaSource, nullptr, "GetAvailableNDISources", 	Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableNDISources_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableNDISources_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableNDISources_Statics::OWLNDIMediaSource_eventGetAvailableNDISources_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableNDISources_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableNDISources_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableNDISources_Statics::OWLNDIMediaSource_eventGetAvailableNDISources_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableNDISources()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableNDISources_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLNDIMediaSource::execGetAvailableNDISources)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FNDISource>*)Z_Param__Result=UOWLNDIMediaSource::GetAvailableNDISources();
	P_NATIVE_END;
}
// ********** End Class UOWLNDIMediaSource Function GetAvailableNDISources *************************

// ********** Begin Class UOWLNDIMediaSource Function GetAvailableOCIOColorSpaces ******************
struct Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableOCIOColorSpaces_Statics
{
	struct OWLNDIMediaSource_eventGetAvailableOCIOColorSpaces_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Color Management" },
		{ "ModuleRelativePath", "Public/MediaFramework/Input/OWLNDIMediaSource.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAvailableOCIOColorSpaces constinit property declarations ***********
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAvailableOCIOColorSpaces constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAvailableOCIOColorSpaces Property Definitions **********************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableOCIOColorSpaces_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableOCIOColorSpaces_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLNDIMediaSource_eventGetAvailableOCIOColorSpaces_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableOCIOColorSpaces_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableOCIOColorSpaces_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableOCIOColorSpaces_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableOCIOColorSpaces_Statics::PropPointers) < 2048);
// ********** End Function GetAvailableOCIOColorSpaces Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableOCIOColorSpaces_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOWLNDIMediaSource, nullptr, "GetAvailableOCIOColorSpaces", 	Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableOCIOColorSpaces_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableOCIOColorSpaces_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableOCIOColorSpaces_Statics::OWLNDIMediaSource_eventGetAvailableOCIOColorSpaces_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableOCIOColorSpaces_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableOCIOColorSpaces_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableOCIOColorSpaces_Statics::OWLNDIMediaSource_eventGetAvailableOCIOColorSpaces_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableOCIOColorSpaces()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableOCIOColorSpaces_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLNDIMediaSource::execGetAvailableOCIOColorSpaces)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetAvailableOCIOColorSpaces();
	P_NATIVE_END;
}
// ********** End Class UOWLNDIMediaSource Function GetAvailableOCIOColorSpaces ********************

// ********** Begin Class UOWLNDIMediaSource Function GetNDISourceName *****************************
struct Z_Construct_UFunction_UOWLNDIMediaSource_GetNDISourceName_Statics
{
	struct OWLNDIMediaSource_eventGetNDISourceName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NDI" },
		{ "ModuleRelativePath", "Public/MediaFramework/Input/OWLNDIMediaSource.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNDISourceName constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNDISourceName constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNDISourceName Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWLNDIMediaSource_GetNDISourceName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLNDIMediaSource_eventGetNDISourceName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLNDIMediaSource_GetNDISourceName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLNDIMediaSource_GetNDISourceName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLNDIMediaSource_GetNDISourceName_Statics::PropPointers) < 2048);
// ********** End Function GetNDISourceName Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLNDIMediaSource_GetNDISourceName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOWLNDIMediaSource, nullptr, "GetNDISourceName", 	Z_Construct_UFunction_UOWLNDIMediaSource_GetNDISourceName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLNDIMediaSource_GetNDISourceName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOWLNDIMediaSource_GetNDISourceName_Statics::OWLNDIMediaSource_eventGetNDISourceName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLNDIMediaSource_GetNDISourceName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLNDIMediaSource_GetNDISourceName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOWLNDIMediaSource_GetNDISourceName_Statics::OWLNDIMediaSource_eventGetNDISourceName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWLNDIMediaSource_GetNDISourceName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLNDIMediaSource_GetNDISourceName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLNDIMediaSource::execGetNDISourceName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetNDISourceName();
	P_NATIVE_END;
}
// ********** End Class UOWLNDIMediaSource Function GetNDISourceName *******************************

// ********** Begin Class UOWLNDIMediaSource Function GetValidationErrors **************************
struct Z_Construct_UFunction_UOWLNDIMediaSource_GetValidationErrors_Statics
{
	struct OWLNDIMediaSource_eventGetValidationErrors_Parms
	{
		TArray<FText> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NDI" },
		{ "ModuleRelativePath", "Public/MediaFramework/Input/OWLNDIMediaSource.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetValidationErrors constinit property declarations *******************
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetValidationErrors constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetValidationErrors Property Definitions ******************************
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOWLNDIMediaSource_GetValidationErrors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOWLNDIMediaSource_GetValidationErrors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLNDIMediaSource_eventGetValidationErrors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLNDIMediaSource_GetValidationErrors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLNDIMediaSource_GetValidationErrors_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLNDIMediaSource_GetValidationErrors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLNDIMediaSource_GetValidationErrors_Statics::PropPointers) < 2048);
// ********** End Function GetValidationErrors Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLNDIMediaSource_GetValidationErrors_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOWLNDIMediaSource, nullptr, "GetValidationErrors", 	Z_Construct_UFunction_UOWLNDIMediaSource_GetValidationErrors_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLNDIMediaSource_GetValidationErrors_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOWLNDIMediaSource_GetValidationErrors_Statics::OWLNDIMediaSource_eventGetValidationErrors_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLNDIMediaSource_GetValidationErrors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLNDIMediaSource_GetValidationErrors_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOWLNDIMediaSource_GetValidationErrors_Statics::OWLNDIMediaSource_eventGetValidationErrors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWLNDIMediaSource_GetValidationErrors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLNDIMediaSource_GetValidationErrors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLNDIMediaSource::execGetValidationErrors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FText>*)Z_Param__Result=P_THIS->GetValidationErrors();
	P_NATIVE_END;
}
// ********** End Class UOWLNDIMediaSource Function GetValidationErrors ****************************

// ********** Begin Class UOWLNDIMediaSource Function OnMediaPlayerClosed **************************
#if WITH_EDITOR
struct Z_Construct_UFunction_UOWLNDIMediaSource_OnMediaPlayerClosed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MediaFramework/Input/OWLNDIMediaSource.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnMediaPlayerClosed constinit property declarations *******************
// ********** End Function OnMediaPlayerClosed constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLNDIMediaSource_OnMediaPlayerClosed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOWLNDIMediaSource, nullptr, "OnMediaPlayerClosed", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLNDIMediaSource_OnMediaPlayerClosed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLNDIMediaSource_OnMediaPlayerClosed_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UOWLNDIMediaSource_OnMediaPlayerClosed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLNDIMediaSource_OnMediaPlayerClosed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLNDIMediaSource::execOnMediaPlayerClosed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMediaPlayerClosed();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// ********** End Class UOWLNDIMediaSource Function OnMediaPlayerClosed ****************************

// ********** Begin Class UOWLNDIMediaSource Function SetNDISourceName *****************************
struct Z_Construct_UFunction_UOWLNDIMediaSource_SetNDISourceName_Statics
{
	struct OWLNDIMediaSource_eventSetNDISourceName_Parms
	{
		FString InSourceName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NDI" },
		{ "ModuleRelativePath", "Public/MediaFramework/Input/OWLNDIMediaSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSourceName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetNDISourceName constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_InSourceName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetNDISourceName constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetNDISourceName Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWLNDIMediaSource_SetNDISourceName_Statics::NewProp_InSourceName = { "InSourceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLNDIMediaSource_eventSetNDISourceName_Parms, InSourceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSourceName_MetaData), NewProp_InSourceName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLNDIMediaSource_SetNDISourceName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLNDIMediaSource_SetNDISourceName_Statics::NewProp_InSourceName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLNDIMediaSource_SetNDISourceName_Statics::PropPointers) < 2048);
// ********** End Function SetNDISourceName Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLNDIMediaSource_SetNDISourceName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOWLNDIMediaSource, nullptr, "SetNDISourceName", 	Z_Construct_UFunction_UOWLNDIMediaSource_SetNDISourceName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLNDIMediaSource_SetNDISourceName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOWLNDIMediaSource_SetNDISourceName_Statics::OWLNDIMediaSource_eventSetNDISourceName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLNDIMediaSource_SetNDISourceName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLNDIMediaSource_SetNDISourceName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOWLNDIMediaSource_SetNDISourceName_Statics::OWLNDIMediaSource_eventSetNDISourceName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWLNDIMediaSource_SetNDISourceName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLNDIMediaSource_SetNDISourceName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLNDIMediaSource::execSetNDISourceName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InSourceName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNDISourceName(Z_Param_InSourceName);
	P_NATIVE_END;
}
// ********** End Class UOWLNDIMediaSource Function SetNDISourceName *******************************

// ********** Begin Class UOWLNDIMediaSource *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UOWLNDIMediaSource;
UClass* UOWLNDIMediaSource::GetPrivateStaticClass()
{
	using TClass = UOWLNDIMediaSource;
	if (!Z_Registration_Info_UClass_UOWLNDIMediaSource.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OWLNDIMediaSource"),
			Z_Registration_Info_UClass_UOWLNDIMediaSource.InnerSingleton,
			StaticRegisterNativesUOWLNDIMediaSource,
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
	return Z_Registration_Info_UClass_UOWLNDIMediaSource.InnerSingleton;
}
UClass* Z_Construct_UClass_UOWLNDIMediaSource_NoRegister()
{
	return UOWLNDIMediaSource::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOWLNDIMediaSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Platforms Object" },
		{ "IncludePath", "MediaFramework/Input/OWLNDIMediaSource.h" },
		{ "MediaIOCustomLayout", "NDI" },
		{ "ModuleRelativePath", "Public/MediaFramework/Input/OWLNDIMediaSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NDISourceName_MetaData[] = {
		{ "Category", "NDI Connection" },
		{ "GetOptions", "GetAvailableNDISourceNames" },
		{ "ModuleRelativePath", "Public/MediaFramework/Input/OWLNDIMediaSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bandwidth_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Public/MediaFramework/Input/OWLNDIMediaSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorFormat_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Public/MediaFramework/Input/OWLNDIMediaSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConvertGamma_MetaData[] = {
		{ "Category", "Color Management" },
		{ "ModuleRelativePath", "Public/MediaFramework/Input/OWLNDIMediaSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseOCIO_MetaData[] = {
		{ "Category", "Color Management" },
		{ "ModuleRelativePath", "Public/MediaFramework/Input/OWLNDIMediaSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OCIOConfiguration_MetaData[] = {
		{ "Category", "Color Management" },
		{ "EditCondition", "bUseOCIO" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MediaFramework/Input/OWLNDIMediaSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceColorSpace_MetaData[] = {
		{ "Category", "Color Management" },
		{ "EditCondition", "bUseOCIO && OCIOConfiguration != nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MediaFramework/Input/OWLNDIMediaSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestinationColorSpace_MetaData[] = {
		{ "Category", "Color Management" },
		{ "EditCondition", "bUseOCIO && OCIOConfiguration != nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MediaFramework/Input/OWLNDIMediaSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAudio_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/MediaFramework/Input/OWLNDIMediaSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioReferenceLevel_MetaData[] = {
		{ "Category", "Audio" },
		{ "EditCondition", "bEnableAudio" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MediaFramework/Input/OWLNDIMediaSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomAudioScale_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.1" },
		{ "EditCondition", "bEnableAudio && AudioReferenceLevel == EOWLNDIAudioReferenceLevel::Manual" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MediaFramework/Input/OWLNDIMediaSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTallyOnProgram_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/MediaFramework/Input/OWLNDIMediaSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTallyOnPreview_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/MediaFramework/Input/OWLNDIMediaSource.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOWLNDIMediaSource constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_NDISourceName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Bandwidth_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Bandwidth;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorFormat;
	static void NewProp_bConvertGamma_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertGamma;
	static void NewProp_bUseOCIO_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOCIO;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OCIOConfiguration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceColorSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DestinationColorSpace;
	static void NewProp_bEnableAudio_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAudio;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AudioReferenceLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioReferenceLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CustomAudioScale;
	static void NewProp_bTallyOnProgram_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTallyOnProgram;
	static void NewProp_bTallyOnPreview_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTallyOnPreview;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOWLNDIMediaSource constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ChangeNDISource"), .Pointer = &UOWLNDIMediaSource::execChangeNDISource },
		{ .NameUTF8 = UTF8TEXT("GetAvailableNDISourceNames"), .Pointer = &UOWLNDIMediaSource::execGetAvailableNDISourceNames },
		{ .NameUTF8 = UTF8TEXT("GetAvailableNDISources"), .Pointer = &UOWLNDIMediaSource::execGetAvailableNDISources },
		{ .NameUTF8 = UTF8TEXT("GetAvailableOCIOColorSpaces"), .Pointer = &UOWLNDIMediaSource::execGetAvailableOCIOColorSpaces },
		{ .NameUTF8 = UTF8TEXT("GetNDISourceName"), .Pointer = &UOWLNDIMediaSource::execGetNDISourceName },
		{ .NameUTF8 = UTF8TEXT("GetValidationErrors"), .Pointer = &UOWLNDIMediaSource::execGetValidationErrors },
#if WITH_EDITOR
		{ .NameUTF8 = UTF8TEXT("OnMediaPlayerClosed"), .Pointer = &UOWLNDIMediaSource::execOnMediaPlayerClosed },
#endif // WITH_EDITOR
		{ .NameUTF8 = UTF8TEXT("SetNDISourceName"), .Pointer = &UOWLNDIMediaSource::execSetNDISourceName },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWLNDIMediaSource_ChangeNDISource, "ChangeNDISource" }, // 637635339
		{ &Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableNDISourceNames, "GetAvailableNDISourceNames" }, // 3980158187
		{ &Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableNDISources, "GetAvailableNDISources" }, // 1175500077
		{ &Z_Construct_UFunction_UOWLNDIMediaSource_GetAvailableOCIOColorSpaces, "GetAvailableOCIOColorSpaces" }, // 1682716219
		{ &Z_Construct_UFunction_UOWLNDIMediaSource_GetNDISourceName, "GetNDISourceName" }, // 117863722
		{ &Z_Construct_UFunction_UOWLNDIMediaSource_GetValidationErrors, "GetValidationErrors" }, // 3956262261
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UOWLNDIMediaSource_OnMediaPlayerClosed, "OnMediaPlayerClosed" }, // 2561617833
#endif // WITH_EDITOR
		{ &Z_Construct_UFunction_UOWLNDIMediaSource_SetNDISourceName, "SetNDISourceName" }, // 3264765423
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWLNDIMediaSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UOWLNDIMediaSource_Statics

// ********** Begin Class UOWLNDIMediaSource Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_NDISourceName = { "NDISourceName", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLNDIMediaSource, NDISourceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NDISourceName_MetaData), NewProp_NDISourceName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_Bandwidth_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_Bandwidth = { "Bandwidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLNDIMediaSource, Bandwidth), Z_Construct_UEnum_OWLNDI_EOWLNDIBandwidth, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bandwidth_MetaData), NewProp_Bandwidth_MetaData) }; // 2363964166
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_ColorFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_ColorFormat = { "ColorFormat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLNDIMediaSource, ColorFormat), Z_Construct_UEnum_OWLNDI_EOWLNDIColorFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorFormat_MetaData), NewProp_ColorFormat_MetaData) }; // 4064498576
void Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_bConvertGamma_SetBit(void* Obj)
{
	((UOWLNDIMediaSource*)Obj)->bConvertGamma = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_bConvertGamma = { "bConvertGamma", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLNDIMediaSource), &Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_bConvertGamma_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConvertGamma_MetaData), NewProp_bConvertGamma_MetaData) };
void Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_bUseOCIO_SetBit(void* Obj)
{
	((UOWLNDIMediaSource*)Obj)->bUseOCIO = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_bUseOCIO = { "bUseOCIO", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLNDIMediaSource), &Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_bUseOCIO_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseOCIO_MetaData), NewProp_bUseOCIO_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_OCIOConfiguration = { "OCIOConfiguration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLNDIMediaSource, OCIOConfiguration), Z_Construct_UClass_UOpenColorIOConfiguration_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OCIOConfiguration_MetaData), NewProp_OCIOConfiguration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_SourceColorSpace = { "SourceColorSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLNDIMediaSource, SourceColorSpace), Z_Construct_UScriptStruct_FOpenColorIOColorSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceColorSpace_MetaData), NewProp_SourceColorSpace_MetaData) }; // 3327113334
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_DestinationColorSpace = { "DestinationColorSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLNDIMediaSource, DestinationColorSpace), Z_Construct_UScriptStruct_FOpenColorIOColorSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestinationColorSpace_MetaData), NewProp_DestinationColorSpace_MetaData) }; // 3327113334
void Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_bEnableAudio_SetBit(void* Obj)
{
	((UOWLNDIMediaSource*)Obj)->bEnableAudio = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_bEnableAudio = { "bEnableAudio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLNDIMediaSource), &Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_bEnableAudio_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAudio_MetaData), NewProp_bEnableAudio_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_AudioReferenceLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_AudioReferenceLevel = { "AudioReferenceLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLNDIMediaSource, AudioReferenceLevel), Z_Construct_UEnum_OWLNDI_EOWLNDIAudioReferenceLevel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioReferenceLevel_MetaData), NewProp_AudioReferenceLevel_MetaData) }; // 513663902
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_CustomAudioScale = { "CustomAudioScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLNDIMediaSource, CustomAudioScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomAudioScale_MetaData), NewProp_CustomAudioScale_MetaData) };
void Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_bTallyOnProgram_SetBit(void* Obj)
{
	((UOWLNDIMediaSource*)Obj)->bTallyOnProgram = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_bTallyOnProgram = { "bTallyOnProgram", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLNDIMediaSource), &Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_bTallyOnProgram_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTallyOnProgram_MetaData), NewProp_bTallyOnProgram_MetaData) };
void Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_bTallyOnPreview_SetBit(void* Obj)
{
	((UOWLNDIMediaSource*)Obj)->bTallyOnPreview = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_bTallyOnPreview = { "bTallyOnPreview", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLNDIMediaSource), &Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_bTallyOnPreview_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTallyOnPreview_MetaData), NewProp_bTallyOnPreview_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWLNDIMediaSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_NDISourceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_Bandwidth_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_Bandwidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_ColorFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_ColorFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_bConvertGamma,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_bUseOCIO,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_OCIOConfiguration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_SourceColorSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_DestinationColorSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_bEnableAudio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_AudioReferenceLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_AudioReferenceLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_CustomAudioScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_bTallyOnProgram,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLNDIMediaSource_Statics::NewProp_bTallyOnPreview,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLNDIMediaSource_Statics::PropPointers) < 2048);
// ********** End Class UOWLNDIMediaSource Property Definitions ************************************
UObject* (*const Z_Construct_UClass_UOWLNDIMediaSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMediaSource,
	(UObject* (*)())Z_Construct_UPackage__Script_OWLNDI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLNDIMediaSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWLNDIMediaSource_Statics::ClassParams = {
	&UOWLNDIMediaSource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOWLNDIMediaSource_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOWLNDIMediaSource_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLNDIMediaSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWLNDIMediaSource_Statics::Class_MetaDataParams)
};
void UOWLNDIMediaSource::StaticRegisterNativesUOWLNDIMediaSource()
{
	UClass* Class = UOWLNDIMediaSource::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UOWLNDIMediaSource_Statics::Funcs));
}
UClass* Z_Construct_UClass_UOWLNDIMediaSource()
{
	if (!Z_Registration_Info_UClass_UOWLNDIMediaSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWLNDIMediaSource.OuterSingleton, Z_Construct_UClass_UOWLNDIMediaSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWLNDIMediaSource.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOWLNDIMediaSource);
UOWLNDIMediaSource::~UOWLNDIMediaSource() {}
// ********** End Class UOWLNDIMediaSource *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_MediaFramework_Input_OWLNDIMediaSource_h__Script_OWLNDI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWLNDIMediaSource, UOWLNDIMediaSource::StaticClass, TEXT("UOWLNDIMediaSource"), &Z_Registration_Info_UClass_UOWLNDIMediaSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWLNDIMediaSource), 189157394U) },
	};
}; // Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_MediaFramework_Input_OWLNDIMediaSource_h__Script_OWLNDI_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_MediaFramework_Input_OWLNDIMediaSource_h__Script_OWLNDI_292587939{
	TEXT("/Script/OWLNDI"),
	Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_MediaFramework_Input_OWLNDIMediaSource_h__Script_OWLNDI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_MediaFramework_Input_OWLNDIMediaSource_h__Script_OWLNDI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
