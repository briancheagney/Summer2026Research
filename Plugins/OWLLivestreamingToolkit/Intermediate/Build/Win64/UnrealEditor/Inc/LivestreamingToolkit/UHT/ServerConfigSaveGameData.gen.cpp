// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveGameData/ServerConfigSaveGameData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeServerConfigSaveGameData() {}

// ********** Begin Cross Module References ********************************************************
LIVESTREAMINGTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPluginSettingsSaveGameData();
LIVESTREAMINGTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPluginUpdateSaveGameData();
UPackage* Z_Construct_UPackage__Script_LivestreamingToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPluginUpdateSaveGameData *****************************************
struct Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPluginUpdateSaveGameData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPluginUpdateSaveGameData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/SaveGameData/ServerConfigSaveGameData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkipPluginVersion_MetaData[] = {
		{ "Category", "OWL Plugin Update" },
		{ "ModuleRelativePath", "Private/SaveGameData/ServerConfigSaveGameData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkippedPluginVersionHash_MetaData[] = {
		{ "Category", "OWL Plugin Update" },
		{ "ModuleRelativePath", "Private/SaveGameData/ServerConfigSaveGameData.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPluginUpdateSaveGameData constinit property declarations *********
	static void NewProp_SkipPluginVersion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SkipPluginVersion;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SkippedPluginVersionHash;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPluginUpdateSaveGameData constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPluginUpdateSaveGameData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPluginUpdateSaveGameData;
class UScriptStruct* FPluginUpdateSaveGameData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPluginUpdateSaveGameData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPluginUpdateSaveGameData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPluginUpdateSaveGameData, (UObject*)Z_Construct_UPackage__Script_LivestreamingToolkit(), TEXT("PluginUpdateSaveGameData"));
	}
	return Z_Registration_Info_UScriptStruct_FPluginUpdateSaveGameData.OuterSingleton;
	}

// ********** Begin ScriptStruct FPluginUpdateSaveGameData Property Definitions ********************
void Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::NewProp_SkipPluginVersion_SetBit(void* Obj)
{
	((FPluginUpdateSaveGameData*)Obj)->SkipPluginVersion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::NewProp_SkipPluginVersion = { "SkipPluginVersion", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPluginUpdateSaveGameData), &Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::NewProp_SkipPluginVersion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkipPluginVersion_MetaData), NewProp_SkipPluginVersion_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::NewProp_SkippedPluginVersionHash = { "SkippedPluginVersionHash", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPluginUpdateSaveGameData, SkippedPluginVersionHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkippedPluginVersionHash_MetaData), NewProp_SkippedPluginVersionHash_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::NewProp_SkipPluginVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::NewProp_SkippedPluginVersionHash,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPluginUpdateSaveGameData Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkit,
	nullptr,
	&NewStructOps,
	"PluginUpdateSaveGameData",
	Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::PropPointers),
	sizeof(FPluginUpdateSaveGameData),
	alignof(FPluginUpdateSaveGameData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPluginUpdateSaveGameData()
{
	if (!Z_Registration_Info_UScriptStruct_FPluginUpdateSaveGameData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPluginUpdateSaveGameData.InnerSingleton, Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPluginUpdateSaveGameData.InnerSingleton);
}
// ********** End ScriptStruct FPluginUpdateSaveGameData *******************************************

// ********** Begin ScriptStruct FPluginSettingsSaveGameData ***************************************
struct Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPluginSettingsSaveGameData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPluginSettingsSaveGameData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/SaveGameData/ServerConfigSaveGameData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableEditorViewportRendering_MetaData[] = {
		{ "ModuleRelativePath", "Private/SaveGameData/ServerConfigSaveGameData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableRuntimeViewportRendering_MetaData[] = {
		{ "ModuleRelativePath", "Private/SaveGameData/ServerConfigSaveGameData.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPluginSettingsSaveGameData constinit property declarations *******
	static void NewProp_EnableEditorViewportRendering_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableEditorViewportRendering;
	static void NewProp_EnableRuntimeViewportRendering_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableRuntimeViewportRendering;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPluginSettingsSaveGameData constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPluginSettingsSaveGameData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPluginSettingsSaveGameData;
class UScriptStruct* FPluginSettingsSaveGameData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPluginSettingsSaveGameData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPluginSettingsSaveGameData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPluginSettingsSaveGameData, (UObject*)Z_Construct_UPackage__Script_LivestreamingToolkit(), TEXT("PluginSettingsSaveGameData"));
	}
	return Z_Registration_Info_UScriptStruct_FPluginSettingsSaveGameData.OuterSingleton;
	}

// ********** Begin ScriptStruct FPluginSettingsSaveGameData Property Definitions ******************
void Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableEditorViewportRendering_SetBit(void* Obj)
{
	((FPluginSettingsSaveGameData*)Obj)->EnableEditorViewportRendering = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableEditorViewportRendering = { "EnableEditorViewportRendering", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPluginSettingsSaveGameData), &Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableEditorViewportRendering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableEditorViewportRendering_MetaData), NewProp_EnableEditorViewportRendering_MetaData) };
void Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableRuntimeViewportRendering_SetBit(void* Obj)
{
	((FPluginSettingsSaveGameData*)Obj)->EnableRuntimeViewportRendering = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableRuntimeViewportRendering = { "EnableRuntimeViewportRendering", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPluginSettingsSaveGameData), &Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableRuntimeViewportRendering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableRuntimeViewportRendering_MetaData), NewProp_EnableRuntimeViewportRendering_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableEditorViewportRendering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableRuntimeViewportRendering,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPluginSettingsSaveGameData Property Definitions ********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkit,
	nullptr,
	&NewStructOps,
	"PluginSettingsSaveGameData",
	Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::PropPointers),
	sizeof(FPluginSettingsSaveGameData),
	alignof(FPluginSettingsSaveGameData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPluginSettingsSaveGameData()
{
	if (!Z_Registration_Info_UScriptStruct_FPluginSettingsSaveGameData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPluginSettingsSaveGameData.InnerSingleton, Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPluginSettingsSaveGameData.InnerSingleton);
}
// ********** End ScriptStruct FPluginSettingsSaveGameData *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_SaveGameData_ServerConfigSaveGameData_h__Script_LivestreamingToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPluginUpdateSaveGameData::StaticStruct, Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::NewStructOps, TEXT("PluginUpdateSaveGameData"),&Z_Registration_Info_UScriptStruct_FPluginUpdateSaveGameData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPluginUpdateSaveGameData), 4083407599U) },
		{ FPluginSettingsSaveGameData::StaticStruct, Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewStructOps, TEXT("PluginSettingsSaveGameData"),&Z_Registration_Info_UScriptStruct_FPluginSettingsSaveGameData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPluginSettingsSaveGameData), 987434008U) },
	};
}; // Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_SaveGameData_ServerConfigSaveGameData_h__Script_LivestreamingToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_SaveGameData_ServerConfigSaveGameData_h__Script_LivestreamingToolkit_830120923{
	TEXT("/Script/LivestreamingToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_SaveGameData_ServerConfigSaveGameData_h__Script_LivestreamingToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_SaveGameData_ServerConfigSaveGameData_h__Script_LivestreamingToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
