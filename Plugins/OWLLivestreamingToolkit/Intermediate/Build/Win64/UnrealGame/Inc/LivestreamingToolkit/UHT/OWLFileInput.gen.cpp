// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tools/OWLFileInput.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOWLFileInput() {}

// ********** Begin Cross Module References ********************************************************
LIVESTREAMINGTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FOWLFileInput();
UPackage* Z_Construct_UPackage__Script_LivestreamingToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FOWLFileInput *****************************************************
struct Z_Construct_UScriptStruct_FOWLFileInput_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FOWLFileInput); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOWLFileInput); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Tools/OWLFileInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "Category", "OWL File Input" },
		{ "ModuleRelativePath", "Public/Tools/OWLFileInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAbsolutePath_MetaData[] = {
		{ "Category", "OWL File Input" },
		{ "Comment", "/* if true, stores the absolute path, if false, a path relative to project directory or executable */" },
		{ "ModuleRelativePath", "Public/Tools/OWLFileInput.h" },
		{ "ToolTip", "if true, stores the absolute path, if false, a path relative to project directory or executable" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOWLFileInput constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static void NewProp_bAbsolutePath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbsolutePath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOWLFileInput constinit property declarations ***********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWLFileInput>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FOWLFileInput_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOWLFileInput;
class UScriptStruct* FOWLFileInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOWLFileInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOWLFileInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWLFileInput, (UObject*)Z_Construct_UPackage__Script_LivestreamingToolkit(), TEXT("OWLFileInput"));
	}
	return Z_Registration_Info_UScriptStruct_FOWLFileInput.OuterSingleton;
	}

// ********** Begin ScriptStruct FOWLFileInput Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLFileInput_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLFileInput, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
void Z_Construct_UScriptStruct_FOWLFileInput_Statics::NewProp_bAbsolutePath_SetBit(void* Obj)
{
	((FOWLFileInput*)Obj)->bAbsolutePath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWLFileInput_Statics::NewProp_bAbsolutePath = { "bAbsolutePath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOWLFileInput), &Z_Construct_UScriptStruct_FOWLFileInput_Statics::NewProp_bAbsolutePath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAbsolutePath_MetaData), NewProp_bAbsolutePath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWLFileInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLFileInput_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLFileInput_Statics::NewProp_bAbsolutePath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLFileInput_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FOWLFileInput Property Definitions **********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWLFileInput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkit,
	nullptr,
	&NewStructOps,
	"OWLFileInput",
	Z_Construct_UScriptStruct_FOWLFileInput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLFileInput_Statics::PropPointers),
	sizeof(FOWLFileInput),
	alignof(FOWLFileInput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLFileInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWLFileInput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWLFileInput()
{
	if (!Z_Registration_Info_UScriptStruct_FOWLFileInput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOWLFileInput.InnerSingleton, Z_Construct_UScriptStruct_FOWLFileInput_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOWLFileInput.InnerSingleton);
}
// ********** End ScriptStruct FOWLFileInput *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_Tools_OWLFileInput_h__Script_LivestreamingToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOWLFileInput::StaticStruct, Z_Construct_UScriptStruct_FOWLFileInput_Statics::NewStructOps, TEXT("OWLFileInput"),&Z_Registration_Info_UScriptStruct_FOWLFileInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWLFileInput), 888449331U) },
	};
}; // Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_Tools_OWLFileInput_h__Script_LivestreamingToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_Tools_OWLFileInput_h__Script_LivestreamingToolkit_2206730184{
	TEXT("/Script/LivestreamingToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_Tools_OWLFileInput_h__Script_LivestreamingToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_Tools_OWLFileInput_h__Script_LivestreamingToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
