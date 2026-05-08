// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataTypes/OWLFaceCrop.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOWLFaceCrop() {}

// ********** Begin Cross Module References ********************************************************
OWL360CAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FOWLCroppedFaces();
OWL360CAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FOWLFaceCrop();
UPackage* Z_Construct_UPackage__Script_OWL360Camera();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FOWLFaceCrop ******************************************************
struct Z_Construct_UScriptStruct_FOWLFaceCrop_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FOWLFaceCrop); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOWLFaceCrop); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/OWLFaceCrop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[] = {
		{ "Category", "Crop" },
		{ "ModuleRelativePath", "Public/DataTypes/OWLFaceCrop.h" },
		{ "UIMax", "0.990000" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[] = {
		{ "Category", "Crop" },
		{ "ModuleRelativePath", "Public/DataTypes/OWLFaceCrop.h" },
		{ "UIMax", "0.990000" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Top_MetaData[] = {
		{ "Category", "Crop" },
		{ "ModuleRelativePath", "Public/DataTypes/OWLFaceCrop.h" },
		{ "UIMax", "0.990000" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bottom_MetaData[] = {
		{ "Category", "Crop" },
		{ "ModuleRelativePath", "Public/DataTypes/OWLFaceCrop.h" },
		{ "UIMax", "0.990000" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOWLFaceCrop constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Left;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Right;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Top;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Bottom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOWLFaceCrop constinit property declarations ************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWLFaceCrop>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FOWLFaceCrop_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOWLFaceCrop;
class UScriptStruct* FOWLFaceCrop::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOWLFaceCrop.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOWLFaceCrop.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWLFaceCrop, (UObject*)Z_Construct_UPackage__Script_OWL360Camera(), TEXT("OWLFaceCrop"));
	}
	return Z_Registration_Info_UScriptStruct_FOWLFaceCrop.OuterSingleton;
	}

// ********** Begin ScriptStruct FOWLFaceCrop Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWLFaceCrop_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLFaceCrop, Left), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Left_MetaData), NewProp_Left_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWLFaceCrop_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLFaceCrop, Right), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Right_MetaData), NewProp_Right_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWLFaceCrop_Statics::NewProp_Top = { "Top", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLFaceCrop, Top), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Top_MetaData), NewProp_Top_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWLFaceCrop_Statics::NewProp_Bottom = { "Bottom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLFaceCrop, Bottom), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bottom_MetaData), NewProp_Bottom_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWLFaceCrop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLFaceCrop_Statics::NewProp_Left,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLFaceCrop_Statics::NewProp_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLFaceCrop_Statics::NewProp_Top,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLFaceCrop_Statics::NewProp_Bottom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLFaceCrop_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FOWLFaceCrop Property Definitions ***********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWLFaceCrop_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWL360Camera,
	nullptr,
	&NewStructOps,
	"OWLFaceCrop",
	Z_Construct_UScriptStruct_FOWLFaceCrop_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLFaceCrop_Statics::PropPointers),
	sizeof(FOWLFaceCrop),
	alignof(FOWLFaceCrop),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLFaceCrop_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWLFaceCrop_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWLFaceCrop()
{
	if (!Z_Registration_Info_UScriptStruct_FOWLFaceCrop.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOWLFaceCrop.InnerSingleton, Z_Construct_UScriptStruct_FOWLFaceCrop_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOWLFaceCrop.InnerSingleton);
}
// ********** End ScriptStruct FOWLFaceCrop ********************************************************

// ********** Begin ScriptStruct FOWLCroppedFaces **************************************************
struct Z_Construct_UScriptStruct_FOWLCroppedFaces_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FOWLCroppedFaces); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOWLCroppedFaces); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/OWLFaceCrop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Front_MetaData[] = {
		{ "Category", "Crop" },
		{ "ModuleRelativePath", "Public/DataTypes/OWLFaceCrop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Back_MetaData[] = {
		{ "Category", "Crop" },
		{ "ModuleRelativePath", "Public/DataTypes/OWLFaceCrop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[] = {
		{ "Category", "Crop" },
		{ "ModuleRelativePath", "Public/DataTypes/OWLFaceCrop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[] = {
		{ "Category", "Crop" },
		{ "ModuleRelativePath", "Public/DataTypes/OWLFaceCrop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Up_MetaData[] = {
		{ "Category", "Crop" },
		{ "ModuleRelativePath", "Public/DataTypes/OWLFaceCrop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Down_MetaData[] = {
		{ "Category", "Crop" },
		{ "ModuleRelativePath", "Public/DataTypes/OWLFaceCrop.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOWLCroppedFaces constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Front;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Back;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Left;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Right;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Up;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Down;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOWLCroppedFaces constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWLCroppedFaces>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FOWLCroppedFaces_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOWLCroppedFaces;
class UScriptStruct* FOWLCroppedFaces::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOWLCroppedFaces.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOWLCroppedFaces.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWLCroppedFaces, (UObject*)Z_Construct_UPackage__Script_OWL360Camera(), TEXT("OWLCroppedFaces"));
	}
	return Z_Registration_Info_UScriptStruct_FOWLCroppedFaces.OuterSingleton;
	}

// ********** Begin ScriptStruct FOWLCroppedFaces Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWLCroppedFaces_Statics::NewProp_Front = { "Front", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLCroppedFaces, Front), Z_Construct_UScriptStruct_FOWLFaceCrop, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Front_MetaData), NewProp_Front_MetaData) }; // 1037139182
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWLCroppedFaces_Statics::NewProp_Back = { "Back", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLCroppedFaces, Back), Z_Construct_UScriptStruct_FOWLFaceCrop, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Back_MetaData), NewProp_Back_MetaData) }; // 1037139182
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWLCroppedFaces_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLCroppedFaces, Left), Z_Construct_UScriptStruct_FOWLFaceCrop, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Left_MetaData), NewProp_Left_MetaData) }; // 1037139182
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWLCroppedFaces_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLCroppedFaces, Right), Z_Construct_UScriptStruct_FOWLFaceCrop, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Right_MetaData), NewProp_Right_MetaData) }; // 1037139182
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWLCroppedFaces_Statics::NewProp_Up = { "Up", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLCroppedFaces, Up), Z_Construct_UScriptStruct_FOWLFaceCrop, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Up_MetaData), NewProp_Up_MetaData) }; // 1037139182
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWLCroppedFaces_Statics::NewProp_Down = { "Down", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLCroppedFaces, Down), Z_Construct_UScriptStruct_FOWLFaceCrop, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Down_MetaData), NewProp_Down_MetaData) }; // 1037139182
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWLCroppedFaces_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLCroppedFaces_Statics::NewProp_Front,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLCroppedFaces_Statics::NewProp_Back,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLCroppedFaces_Statics::NewProp_Left,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLCroppedFaces_Statics::NewProp_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLCroppedFaces_Statics::NewProp_Up,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLCroppedFaces_Statics::NewProp_Down,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLCroppedFaces_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FOWLCroppedFaces Property Definitions *******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWLCroppedFaces_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWL360Camera,
	nullptr,
	&NewStructOps,
	"OWLCroppedFaces",
	Z_Construct_UScriptStruct_FOWLCroppedFaces_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLCroppedFaces_Statics::PropPointers),
	sizeof(FOWLCroppedFaces),
	alignof(FOWLCroppedFaces),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLCroppedFaces_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWLCroppedFaces_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWLCroppedFaces()
{
	if (!Z_Registration_Info_UScriptStruct_FOWLCroppedFaces.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOWLCroppedFaces.InnerSingleton, Z_Construct_UScriptStruct_FOWLCroppedFaces_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOWLCroppedFaces.InnerSingleton);
}
// ********** End ScriptStruct FOWLCroppedFaces ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_DataTypes_OWLFaceCrop_h__Script_OWL360Camera_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOWLFaceCrop::StaticStruct, Z_Construct_UScriptStruct_FOWLFaceCrop_Statics::NewStructOps, TEXT("OWLFaceCrop"),&Z_Registration_Info_UScriptStruct_FOWLFaceCrop, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWLFaceCrop), 1037139182U) },
		{ FOWLCroppedFaces::StaticStruct, Z_Construct_UScriptStruct_FOWLCroppedFaces_Statics::NewStructOps, TEXT("OWLCroppedFaces"),&Z_Registration_Info_UScriptStruct_FOWLCroppedFaces, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWLCroppedFaces), 994457558U) },
	};
}; // Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_DataTypes_OWLFaceCrop_h__Script_OWL360Camera_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_DataTypes_OWLFaceCrop_h__Script_OWL360Camera_1508239553{
	TEXT("/Script/OWL360Camera"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_DataTypes_OWLFaceCrop_h__Script_OWL360Camera_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_DataTypes_OWLFaceCrop_h__Script_OWL360Camera_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
