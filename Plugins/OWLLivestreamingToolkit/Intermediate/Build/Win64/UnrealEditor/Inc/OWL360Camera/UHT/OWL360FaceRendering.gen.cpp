// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWL360FaceRendering.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOWL360FaceRendering() {}

// ********** Begin Cross Module References ********************************************************
OWL360CAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FOWL360FaceRenderingSettings();
UPackage* Z_Construct_UPackage__Script_OWL360Camera();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FOWL360FaceRenderingSettings **************************************
struct Z_Construct_UScriptStruct_FOWL360FaceRenderingSettings_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FOWL360FaceRenderingSettings); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOWL360FaceRenderingSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWL360FaceRendering.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Front_MetaData[] = {
		{ "Category", "Faces" },
		{ "ModuleRelativePath", "Public/OWL360FaceRendering.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Back_MetaData[] = {
		{ "Category", "Faces" },
		{ "ModuleRelativePath", "Public/OWL360FaceRendering.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[] = {
		{ "Category", "Faces" },
		{ "ModuleRelativePath", "Public/OWL360FaceRendering.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[] = {
		{ "Category", "Faces" },
		{ "ModuleRelativePath", "Public/OWL360FaceRendering.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Top_MetaData[] = {
		{ "Category", "Faces" },
		{ "ModuleRelativePath", "Public/OWL360FaceRendering.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bottom_MetaData[] = {
		{ "Category", "Faces" },
		{ "ModuleRelativePath", "Public/OWL360FaceRendering.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOWL360FaceRenderingSettings constinit property declarations ******
	static void NewProp_Front_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Front;
	static void NewProp_Back_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Back;
	static void NewProp_Left_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Left;
	static void NewProp_Right_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Right;
	static void NewProp_Top_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Top;
	static void NewProp_Bottom_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Bottom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOWL360FaceRenderingSettings constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWL360FaceRenderingSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FOWL360FaceRenderingSettings_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOWL360FaceRenderingSettings;
class UScriptStruct* FOWL360FaceRenderingSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOWL360FaceRenderingSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOWL360FaceRenderingSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWL360FaceRenderingSettings, (UObject*)Z_Construct_UPackage__Script_OWL360Camera(), TEXT("OWL360FaceRenderingSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FOWL360FaceRenderingSettings.OuterSingleton;
	}

// ********** Begin ScriptStruct FOWL360FaceRenderingSettings Property Definitions *****************
void Z_Construct_UScriptStruct_FOWL360FaceRenderingSettings_Statics::NewProp_Front_SetBit(void* Obj)
{
	((FOWL360FaceRenderingSettings*)Obj)->Front = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360FaceRenderingSettings_Statics::NewProp_Front = { "Front", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOWL360FaceRenderingSettings), &Z_Construct_UScriptStruct_FOWL360FaceRenderingSettings_Statics::NewProp_Front_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Front_MetaData), NewProp_Front_MetaData) };
void Z_Construct_UScriptStruct_FOWL360FaceRenderingSettings_Statics::NewProp_Back_SetBit(void* Obj)
{
	((FOWL360FaceRenderingSettings*)Obj)->Back = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360FaceRenderingSettings_Statics::NewProp_Back = { "Back", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOWL360FaceRenderingSettings), &Z_Construct_UScriptStruct_FOWL360FaceRenderingSettings_Statics::NewProp_Back_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Back_MetaData), NewProp_Back_MetaData) };
void Z_Construct_UScriptStruct_FOWL360FaceRenderingSettings_Statics::NewProp_Left_SetBit(void* Obj)
{
	((FOWL360FaceRenderingSettings*)Obj)->Left = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360FaceRenderingSettings_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOWL360FaceRenderingSettings), &Z_Construct_UScriptStruct_FOWL360FaceRenderingSettings_Statics::NewProp_Left_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Left_MetaData), NewProp_Left_MetaData) };
void Z_Construct_UScriptStruct_FOWL360FaceRenderingSettings_Statics::NewProp_Right_SetBit(void* Obj)
{
	((FOWL360FaceRenderingSettings*)Obj)->Right = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360FaceRenderingSettings_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOWL360FaceRenderingSettings), &Z_Construct_UScriptStruct_FOWL360FaceRenderingSettings_Statics::NewProp_Right_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Right_MetaData), NewProp_Right_MetaData) };
void Z_Construct_UScriptStruct_FOWL360FaceRenderingSettings_Statics::NewProp_Top_SetBit(void* Obj)
{
	((FOWL360FaceRenderingSettings*)Obj)->Top = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360FaceRenderingSettings_Statics::NewProp_Top = { "Top", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOWL360FaceRenderingSettings), &Z_Construct_UScriptStruct_FOWL360FaceRenderingSettings_Statics::NewProp_Top_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Top_MetaData), NewProp_Top_MetaData) };
void Z_Construct_UScriptStruct_FOWL360FaceRenderingSettings_Statics::NewProp_Bottom_SetBit(void* Obj)
{
	((FOWL360FaceRenderingSettings*)Obj)->Bottom = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360FaceRenderingSettings_Statics::NewProp_Bottom = { "Bottom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOWL360FaceRenderingSettings), &Z_Construct_UScriptStruct_FOWL360FaceRenderingSettings_Statics::NewProp_Bottom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bottom_MetaData), NewProp_Bottom_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWL360FaceRenderingSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360FaceRenderingSettings_Statics::NewProp_Front,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360FaceRenderingSettings_Statics::NewProp_Back,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360FaceRenderingSettings_Statics::NewProp_Left,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360FaceRenderingSettings_Statics::NewProp_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360FaceRenderingSettings_Statics::NewProp_Top,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360FaceRenderingSettings_Statics::NewProp_Bottom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360FaceRenderingSettings_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FOWL360FaceRenderingSettings Property Definitions *******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWL360FaceRenderingSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWL360Camera,
	nullptr,
	&NewStructOps,
	"OWL360FaceRenderingSettings",
	Z_Construct_UScriptStruct_FOWL360FaceRenderingSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360FaceRenderingSettings_Statics::PropPointers),
	sizeof(FOWL360FaceRenderingSettings),
	alignof(FOWL360FaceRenderingSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360FaceRenderingSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWL360FaceRenderingSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWL360FaceRenderingSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FOWL360FaceRenderingSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOWL360FaceRenderingSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWL360FaceRenderingSettings_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOWL360FaceRenderingSettings.InnerSingleton);
}
// ********** End ScriptStruct FOWL360FaceRenderingSettings ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_OWL360FaceRendering_h__Script_OWL360Camera_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOWL360FaceRenderingSettings::StaticStruct, Z_Construct_UScriptStruct_FOWL360FaceRenderingSettings_Statics::NewStructOps, TEXT("OWL360FaceRenderingSettings"),&Z_Registration_Info_UScriptStruct_FOWL360FaceRenderingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWL360FaceRenderingSettings), 3093852358U) },
	};
}; // Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_OWL360FaceRendering_h__Script_OWL360Camera_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_OWL360FaceRendering_h__Script_OWL360Camera_2588578683{
	TEXT("/Script/OWL360Camera"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_OWL360FaceRendering_h__Script_OWL360Camera_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_OWL360FaceRendering_h__Script_OWL360Camera_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
