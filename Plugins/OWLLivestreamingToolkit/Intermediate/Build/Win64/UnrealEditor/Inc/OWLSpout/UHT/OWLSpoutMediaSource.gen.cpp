// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaFramework/Input/OWLSpoutMediaSource.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOWLSpoutMediaSource() {}

// ********** Begin Cross Module References ********************************************************
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource();
OWLSPOUT_API UClass* Z_Construct_UClass_UOWLSpoutMediaSource();
OWLSPOUT_API UClass* Z_Construct_UClass_UOWLSpoutMediaSource_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWLSpout();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOWLSpoutMediaSource Function ChangeSpoutSender **************************
struct Z_Construct_UFunction_UOWLSpoutMediaSource_ChangeSpoutSender_Statics
{
	struct OWLSpoutMediaSource_eventChangeSpoutSender_Parms
	{
		FString NewSenderName;
		bool bMaintainPlaybackState;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spout" },
		{ "CPP_Default_bMaintainPlaybackState", "true" },
		{ "ModuleRelativePath", "Public/MediaFramework/Input/OWLSpoutMediaSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewSenderName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ChangeSpoutSender constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewSenderName;
	static void NewProp_bMaintainPlaybackState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainPlaybackState;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ChangeSpoutSender constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ChangeSpoutSender Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWLSpoutMediaSource_ChangeSpoutSender_Statics::NewProp_NewSenderName = { "NewSenderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLSpoutMediaSource_eventChangeSpoutSender_Parms, NewSenderName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewSenderName_MetaData), NewProp_NewSenderName_MetaData) };
void Z_Construct_UFunction_UOWLSpoutMediaSource_ChangeSpoutSender_Statics::NewProp_bMaintainPlaybackState_SetBit(void* Obj)
{
	((OWLSpoutMediaSource_eventChangeSpoutSender_Parms*)Obj)->bMaintainPlaybackState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWLSpoutMediaSource_ChangeSpoutSender_Statics::NewProp_bMaintainPlaybackState = { "bMaintainPlaybackState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWLSpoutMediaSource_eventChangeSpoutSender_Parms), &Z_Construct_UFunction_UOWLSpoutMediaSource_ChangeSpoutSender_Statics::NewProp_bMaintainPlaybackState_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOWLSpoutMediaSource_ChangeSpoutSender_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OWLSpoutMediaSource_eventChangeSpoutSender_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWLSpoutMediaSource_ChangeSpoutSender_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWLSpoutMediaSource_eventChangeSpoutSender_Parms), &Z_Construct_UFunction_UOWLSpoutMediaSource_ChangeSpoutSender_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLSpoutMediaSource_ChangeSpoutSender_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLSpoutMediaSource_ChangeSpoutSender_Statics::NewProp_NewSenderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLSpoutMediaSource_ChangeSpoutSender_Statics::NewProp_bMaintainPlaybackState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLSpoutMediaSource_ChangeSpoutSender_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLSpoutMediaSource_ChangeSpoutSender_Statics::PropPointers) < 2048);
// ********** End Function ChangeSpoutSender Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLSpoutMediaSource_ChangeSpoutSender_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOWLSpoutMediaSource, nullptr, "ChangeSpoutSender", 	Z_Construct_UFunction_UOWLSpoutMediaSource_ChangeSpoutSender_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLSpoutMediaSource_ChangeSpoutSender_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOWLSpoutMediaSource_ChangeSpoutSender_Statics::OWLSpoutMediaSource_eventChangeSpoutSender_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLSpoutMediaSource_ChangeSpoutSender_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLSpoutMediaSource_ChangeSpoutSender_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOWLSpoutMediaSource_ChangeSpoutSender_Statics::OWLSpoutMediaSource_eventChangeSpoutSender_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWLSpoutMediaSource_ChangeSpoutSender()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLSpoutMediaSource_ChangeSpoutSender_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLSpoutMediaSource::execChangeSpoutSender)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NewSenderName);
	P_GET_UBOOL(Z_Param_bMaintainPlaybackState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ChangeSpoutSender(Z_Param_NewSenderName,Z_Param_bMaintainPlaybackState);
	P_NATIVE_END;
}
// ********** End Class UOWLSpoutMediaSource Function ChangeSpoutSender ****************************

// ********** Begin Class UOWLSpoutMediaSource Function GetAvailableSpoutSenderNames ***************
struct Z_Construct_UFunction_UOWLSpoutMediaSource_GetAvailableSpoutSenderNames_Statics
{
	struct OWLSpoutMediaSource_eventGetAvailableSpoutSenderNames_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MediaFramework/Input/OWLSpoutMediaSource.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAvailableSpoutSenderNames constinit property declarations **********
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAvailableSpoutSenderNames constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAvailableSpoutSenderNames Property Definitions *********************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWLSpoutMediaSource_GetAvailableSpoutSenderNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOWLSpoutMediaSource_GetAvailableSpoutSenderNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLSpoutMediaSource_eventGetAvailableSpoutSenderNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLSpoutMediaSource_GetAvailableSpoutSenderNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLSpoutMediaSource_GetAvailableSpoutSenderNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLSpoutMediaSource_GetAvailableSpoutSenderNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLSpoutMediaSource_GetAvailableSpoutSenderNames_Statics::PropPointers) < 2048);
// ********** End Function GetAvailableSpoutSenderNames Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLSpoutMediaSource_GetAvailableSpoutSenderNames_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOWLSpoutMediaSource, nullptr, "GetAvailableSpoutSenderNames", 	Z_Construct_UFunction_UOWLSpoutMediaSource_GetAvailableSpoutSenderNames_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLSpoutMediaSource_GetAvailableSpoutSenderNames_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOWLSpoutMediaSource_GetAvailableSpoutSenderNames_Statics::OWLSpoutMediaSource_eventGetAvailableSpoutSenderNames_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLSpoutMediaSource_GetAvailableSpoutSenderNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLSpoutMediaSource_GetAvailableSpoutSenderNames_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOWLSpoutMediaSource_GetAvailableSpoutSenderNames_Statics::OWLSpoutMediaSource_eventGetAvailableSpoutSenderNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWLSpoutMediaSource_GetAvailableSpoutSenderNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLSpoutMediaSource_GetAvailableSpoutSenderNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLSpoutMediaSource::execGetAvailableSpoutSenderNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetAvailableSpoutSenderNames();
	P_NATIVE_END;
}
// ********** End Class UOWLSpoutMediaSource Function GetAvailableSpoutSenderNames *****************

// ********** Begin Class UOWLSpoutMediaSource Function GetAvailableSpoutSenders *******************
struct Z_Construct_UFunction_UOWLSpoutMediaSource_GetAvailableSpoutSenders_Statics
{
	struct OWLSpoutMediaSource_eventGetAvailableSpoutSenders_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spout" },
		{ "ModuleRelativePath", "Public/MediaFramework/Input/OWLSpoutMediaSource.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAvailableSpoutSenders constinit property declarations **************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAvailableSpoutSenders constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAvailableSpoutSenders Property Definitions *************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWLSpoutMediaSource_GetAvailableSpoutSenders_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOWLSpoutMediaSource_GetAvailableSpoutSenders_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLSpoutMediaSource_eventGetAvailableSpoutSenders_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLSpoutMediaSource_GetAvailableSpoutSenders_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLSpoutMediaSource_GetAvailableSpoutSenders_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLSpoutMediaSource_GetAvailableSpoutSenders_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLSpoutMediaSource_GetAvailableSpoutSenders_Statics::PropPointers) < 2048);
// ********** End Function GetAvailableSpoutSenders Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLSpoutMediaSource_GetAvailableSpoutSenders_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOWLSpoutMediaSource, nullptr, "GetAvailableSpoutSenders", 	Z_Construct_UFunction_UOWLSpoutMediaSource_GetAvailableSpoutSenders_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLSpoutMediaSource_GetAvailableSpoutSenders_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOWLSpoutMediaSource_GetAvailableSpoutSenders_Statics::OWLSpoutMediaSource_eventGetAvailableSpoutSenders_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLSpoutMediaSource_GetAvailableSpoutSenders_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLSpoutMediaSource_GetAvailableSpoutSenders_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOWLSpoutMediaSource_GetAvailableSpoutSenders_Statics::OWLSpoutMediaSource_eventGetAvailableSpoutSenders_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWLSpoutMediaSource_GetAvailableSpoutSenders()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLSpoutMediaSource_GetAvailableSpoutSenders_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLSpoutMediaSource::execGetAvailableSpoutSenders)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=UOWLSpoutMediaSource::GetAvailableSpoutSenders();
	P_NATIVE_END;
}
// ********** End Class UOWLSpoutMediaSource Function GetAvailableSpoutSenders *********************

// ********** Begin Class UOWLSpoutMediaSource Function GetSpoutSenderName *************************
struct Z_Construct_UFunction_UOWLSpoutMediaSource_GetSpoutSenderName_Statics
{
	struct OWLSpoutMediaSource_eventGetSpoutSenderName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spout" },
		{ "ModuleRelativePath", "Public/MediaFramework/Input/OWLSpoutMediaSource.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSpoutSenderName constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSpoutSenderName constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSpoutSenderName Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWLSpoutMediaSource_GetSpoutSenderName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLSpoutMediaSource_eventGetSpoutSenderName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLSpoutMediaSource_GetSpoutSenderName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLSpoutMediaSource_GetSpoutSenderName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLSpoutMediaSource_GetSpoutSenderName_Statics::PropPointers) < 2048);
// ********** End Function GetSpoutSenderName Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLSpoutMediaSource_GetSpoutSenderName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOWLSpoutMediaSource, nullptr, "GetSpoutSenderName", 	Z_Construct_UFunction_UOWLSpoutMediaSource_GetSpoutSenderName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLSpoutMediaSource_GetSpoutSenderName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOWLSpoutMediaSource_GetSpoutSenderName_Statics::OWLSpoutMediaSource_eventGetSpoutSenderName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLSpoutMediaSource_GetSpoutSenderName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLSpoutMediaSource_GetSpoutSenderName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOWLSpoutMediaSource_GetSpoutSenderName_Statics::OWLSpoutMediaSource_eventGetSpoutSenderName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWLSpoutMediaSource_GetSpoutSenderName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLSpoutMediaSource_GetSpoutSenderName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLSpoutMediaSource::execGetSpoutSenderName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetSpoutSenderName();
	P_NATIVE_END;
}
// ********** End Class UOWLSpoutMediaSource Function GetSpoutSenderName ***************************

// ********** Begin Class UOWLSpoutMediaSource Function GetValidationErrors ************************
struct Z_Construct_UFunction_UOWLSpoutMediaSource_GetValidationErrors_Statics
{
	struct OWLSpoutMediaSource_eventGetValidationErrors_Parms
	{
		TArray<FText> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spout" },
		{ "ModuleRelativePath", "Public/MediaFramework/Input/OWLSpoutMediaSource.h" },
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
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOWLSpoutMediaSource_GetValidationErrors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOWLSpoutMediaSource_GetValidationErrors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLSpoutMediaSource_eventGetValidationErrors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLSpoutMediaSource_GetValidationErrors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLSpoutMediaSource_GetValidationErrors_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLSpoutMediaSource_GetValidationErrors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLSpoutMediaSource_GetValidationErrors_Statics::PropPointers) < 2048);
// ********** End Function GetValidationErrors Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLSpoutMediaSource_GetValidationErrors_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOWLSpoutMediaSource, nullptr, "GetValidationErrors", 	Z_Construct_UFunction_UOWLSpoutMediaSource_GetValidationErrors_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLSpoutMediaSource_GetValidationErrors_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOWLSpoutMediaSource_GetValidationErrors_Statics::OWLSpoutMediaSource_eventGetValidationErrors_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLSpoutMediaSource_GetValidationErrors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLSpoutMediaSource_GetValidationErrors_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOWLSpoutMediaSource_GetValidationErrors_Statics::OWLSpoutMediaSource_eventGetValidationErrors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWLSpoutMediaSource_GetValidationErrors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLSpoutMediaSource_GetValidationErrors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLSpoutMediaSource::execGetValidationErrors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FText>*)Z_Param__Result=P_THIS->GetValidationErrors();
	P_NATIVE_END;
}
// ********** End Class UOWLSpoutMediaSource Function GetValidationErrors **************************

// ********** Begin Class UOWLSpoutMediaSource Function OnMediaPlayerClosed ************************
#if WITH_EDITOR
struct Z_Construct_UFunction_UOWLSpoutMediaSource_OnMediaPlayerClosed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MediaFramework/Input/OWLSpoutMediaSource.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnMediaPlayerClosed constinit property declarations *******************
// ********** End Function OnMediaPlayerClosed constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLSpoutMediaSource_OnMediaPlayerClosed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOWLSpoutMediaSource, nullptr, "OnMediaPlayerClosed", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLSpoutMediaSource_OnMediaPlayerClosed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLSpoutMediaSource_OnMediaPlayerClosed_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UOWLSpoutMediaSource_OnMediaPlayerClosed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLSpoutMediaSource_OnMediaPlayerClosed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLSpoutMediaSource::execOnMediaPlayerClosed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMediaPlayerClosed();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// ********** End Class UOWLSpoutMediaSource Function OnMediaPlayerClosed **************************

// ********** Begin Class UOWLSpoutMediaSource Function SetSpoutSenderName *************************
struct Z_Construct_UFunction_UOWLSpoutMediaSource_SetSpoutSenderName_Statics
{
	struct OWLSpoutMediaSource_eventSetSpoutSenderName_Parms
	{
		FString InSenderName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spout" },
		{ "ModuleRelativePath", "Public/MediaFramework/Input/OWLSpoutMediaSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSenderName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSpoutSenderName constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_InSenderName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSpoutSenderName constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSpoutSenderName Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWLSpoutMediaSource_SetSpoutSenderName_Statics::NewProp_InSenderName = { "InSenderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLSpoutMediaSource_eventSetSpoutSenderName_Parms, InSenderName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSenderName_MetaData), NewProp_InSenderName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLSpoutMediaSource_SetSpoutSenderName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLSpoutMediaSource_SetSpoutSenderName_Statics::NewProp_InSenderName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLSpoutMediaSource_SetSpoutSenderName_Statics::PropPointers) < 2048);
// ********** End Function SetSpoutSenderName Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLSpoutMediaSource_SetSpoutSenderName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOWLSpoutMediaSource, nullptr, "SetSpoutSenderName", 	Z_Construct_UFunction_UOWLSpoutMediaSource_SetSpoutSenderName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLSpoutMediaSource_SetSpoutSenderName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOWLSpoutMediaSource_SetSpoutSenderName_Statics::OWLSpoutMediaSource_eventSetSpoutSenderName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLSpoutMediaSource_SetSpoutSenderName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLSpoutMediaSource_SetSpoutSenderName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOWLSpoutMediaSource_SetSpoutSenderName_Statics::OWLSpoutMediaSource_eventSetSpoutSenderName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWLSpoutMediaSource_SetSpoutSenderName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLSpoutMediaSource_SetSpoutSenderName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLSpoutMediaSource::execSetSpoutSenderName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InSenderName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSpoutSenderName(Z_Param_InSenderName);
	P_NATIVE_END;
}
// ********** End Class UOWLSpoutMediaSource Function SetSpoutSenderName ***************************

// ********** Begin Class UOWLSpoutMediaSource *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UOWLSpoutMediaSource;
UClass* UOWLSpoutMediaSource::GetPrivateStaticClass()
{
	using TClass = UOWLSpoutMediaSource;
	if (!Z_Registration_Info_UClass_UOWLSpoutMediaSource.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OWLSpoutMediaSource"),
			Z_Registration_Info_UClass_UOWLSpoutMediaSource.InnerSingleton,
			StaticRegisterNativesUOWLSpoutMediaSource,
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
	return Z_Registration_Info_UClass_UOWLSpoutMediaSource.InnerSingleton;
}
UClass* Z_Construct_UClass_UOWLSpoutMediaSource_NoRegister()
{
	return UOWLSpoutMediaSource::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOWLSpoutMediaSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Platforms Object" },
		{ "IncludePath", "MediaFramework/Input/OWLSpoutMediaSource.h" },
		{ "MediaIOCustomLayout", "Spout" },
		{ "ModuleRelativePath", "Public/MediaFramework/Input/OWLSpoutMediaSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpoutSenderName_MetaData[] = {
		{ "Category", "Spout" },
		{ "GetOptions", "GetAvailableSpoutSenderNames" },
		{ "ModuleRelativePath", "Public/MediaFramework/Input/OWLSpoutMediaSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFixGamma_MetaData[] = {
		{ "Category", "Spout" },
		{ "ModuleRelativePath", "Public/MediaFramework/Input/OWLSpoutMediaSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_b8To16Bit_MetaData[] = {
		{ "Category", "Spout" },
		{ "DisplayName", "Upgrade 8bit to 16" },
		{ "ModuleRelativePath", "Public/MediaFramework/Input/OWLSpoutMediaSource.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOWLSpoutMediaSource constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_SpoutSenderName;
	static void NewProp_bFixGamma_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFixGamma;
	static void NewProp_b8To16Bit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_b8To16Bit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOWLSpoutMediaSource constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ChangeSpoutSender"), .Pointer = &UOWLSpoutMediaSource::execChangeSpoutSender },
		{ .NameUTF8 = UTF8TEXT("GetAvailableSpoutSenderNames"), .Pointer = &UOWLSpoutMediaSource::execGetAvailableSpoutSenderNames },
		{ .NameUTF8 = UTF8TEXT("GetAvailableSpoutSenders"), .Pointer = &UOWLSpoutMediaSource::execGetAvailableSpoutSenders },
		{ .NameUTF8 = UTF8TEXT("GetSpoutSenderName"), .Pointer = &UOWLSpoutMediaSource::execGetSpoutSenderName },
		{ .NameUTF8 = UTF8TEXT("GetValidationErrors"), .Pointer = &UOWLSpoutMediaSource::execGetValidationErrors },
#if WITH_EDITOR
		{ .NameUTF8 = UTF8TEXT("OnMediaPlayerClosed"), .Pointer = &UOWLSpoutMediaSource::execOnMediaPlayerClosed },
#endif // WITH_EDITOR
		{ .NameUTF8 = UTF8TEXT("SetSpoutSenderName"), .Pointer = &UOWLSpoutMediaSource::execSetSpoutSenderName },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWLSpoutMediaSource_ChangeSpoutSender, "ChangeSpoutSender" }, // 2848495508
		{ &Z_Construct_UFunction_UOWLSpoutMediaSource_GetAvailableSpoutSenderNames, "GetAvailableSpoutSenderNames" }, // 4236227008
		{ &Z_Construct_UFunction_UOWLSpoutMediaSource_GetAvailableSpoutSenders, "GetAvailableSpoutSenders" }, // 3163288134
		{ &Z_Construct_UFunction_UOWLSpoutMediaSource_GetSpoutSenderName, "GetSpoutSenderName" }, // 3150812727
		{ &Z_Construct_UFunction_UOWLSpoutMediaSource_GetValidationErrors, "GetValidationErrors" }, // 323927838
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UOWLSpoutMediaSource_OnMediaPlayerClosed, "OnMediaPlayerClosed" }, // 359338357
#endif // WITH_EDITOR
		{ &Z_Construct_UFunction_UOWLSpoutMediaSource_SetSpoutSenderName, "SetSpoutSenderName" }, // 3335382351
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWLSpoutMediaSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UOWLSpoutMediaSource_Statics

// ********** Begin Class UOWLSpoutMediaSource Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOWLSpoutMediaSource_Statics::NewProp_SpoutSenderName = { "SpoutSenderName", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLSpoutMediaSource, SpoutSenderName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpoutSenderName_MetaData), NewProp_SpoutSenderName_MetaData) };
void Z_Construct_UClass_UOWLSpoutMediaSource_Statics::NewProp_bFixGamma_SetBit(void* Obj)
{
	((UOWLSpoutMediaSource*)Obj)->bFixGamma = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLSpoutMediaSource_Statics::NewProp_bFixGamma = { "bFixGamma", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLSpoutMediaSource), &Z_Construct_UClass_UOWLSpoutMediaSource_Statics::NewProp_bFixGamma_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFixGamma_MetaData), NewProp_bFixGamma_MetaData) };
void Z_Construct_UClass_UOWLSpoutMediaSource_Statics::NewProp_b8To16Bit_SetBit(void* Obj)
{
	((UOWLSpoutMediaSource*)Obj)->b8To16Bit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLSpoutMediaSource_Statics::NewProp_b8To16Bit = { "b8To16Bit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLSpoutMediaSource), &Z_Construct_UClass_UOWLSpoutMediaSource_Statics::NewProp_b8To16Bit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_b8To16Bit_MetaData), NewProp_b8To16Bit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWLSpoutMediaSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLSpoutMediaSource_Statics::NewProp_SpoutSenderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLSpoutMediaSource_Statics::NewProp_bFixGamma,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLSpoutMediaSource_Statics::NewProp_b8To16Bit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSpoutMediaSource_Statics::PropPointers) < 2048);
// ********** End Class UOWLSpoutMediaSource Property Definitions **********************************
UObject* (*const Z_Construct_UClass_UOWLSpoutMediaSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMediaSource,
	(UObject* (*)())Z_Construct_UPackage__Script_OWLSpout,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSpoutMediaSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWLSpoutMediaSource_Statics::ClassParams = {
	&UOWLSpoutMediaSource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOWLSpoutMediaSource_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSpoutMediaSource_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSpoutMediaSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWLSpoutMediaSource_Statics::Class_MetaDataParams)
};
void UOWLSpoutMediaSource::StaticRegisterNativesUOWLSpoutMediaSource()
{
	UClass* Class = UOWLSpoutMediaSource::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UOWLSpoutMediaSource_Statics::Funcs));
}
UClass* Z_Construct_UClass_UOWLSpoutMediaSource()
{
	if (!Z_Registration_Info_UClass_UOWLSpoutMediaSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWLSpoutMediaSource.OuterSingleton, Z_Construct_UClass_UOWLSpoutMediaSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWLSpoutMediaSource.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOWLSpoutMediaSource);
UOWLSpoutMediaSource::~UOWLSpoutMediaSource() {}
// ********** End Class UOWLSpoutMediaSource *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_MediaFramework_Input_OWLSpoutMediaSource_h__Script_OWLSpout_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWLSpoutMediaSource, UOWLSpoutMediaSource::StaticClass, TEXT("UOWLSpoutMediaSource"), &Z_Registration_Info_UClass_UOWLSpoutMediaSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWLSpoutMediaSource), 3900733770U) },
	};
}; // Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_MediaFramework_Input_OWLSpoutMediaSource_h__Script_OWLSpout_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_MediaFramework_Input_OWLSpoutMediaSource_h__Script_OWLSpout_1934152800{
	TEXT("/Script/OWLSpout"),
	Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_MediaFramework_Input_OWLSpoutMediaSource_h__Script_OWLSpout_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_MediaFramework_Input_OWLSpoutMediaSource_h__Script_OWLSpout_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
