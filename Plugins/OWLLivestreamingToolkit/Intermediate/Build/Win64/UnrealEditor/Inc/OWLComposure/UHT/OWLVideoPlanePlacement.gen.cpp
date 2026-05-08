// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLVideoPlanePlacement.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOWLVideoPlanePlacement() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTexture_NoRegister();
OWLCOMPOSURE_API UClass* Z_Construct_UClass_AOWLVideoPlanePlacement();
OWLCOMPOSURE_API UClass* Z_Construct_UClass_AOWLVideoPlanePlacement_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWLComposure();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AOWLVideoPlanePlacement **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AOWLVideoPlanePlacement;
UClass* AOWLVideoPlanePlacement::GetPrivateStaticClass()
{
	using TClass = AOWLVideoPlanePlacement;
	if (!Z_Registration_Info_UClass_AOWLVideoPlanePlacement.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OWLVideoPlanePlacement"),
			Z_Registration_Info_UClass_AOWLVideoPlanePlacement.InnerSingleton,
			StaticRegisterNativesAOWLVideoPlanePlacement,
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
	return Z_Registration_Info_UClass_AOWLVideoPlanePlacement.InnerSingleton;
}
UClass* Z_Construct_UClass_AOWLVideoPlanePlacement_NoRegister()
{
	return AOWLVideoPlanePlacement::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AOWLVideoPlanePlacement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Attachment Actor CameraActor" },
		{ "IncludePath", "OWLVideoPlanePlacement.h" },
		{ "ModuleRelativePath", "Public/OWLVideoPlanePlacement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResolutionControlsScale_MetaData[] = {
		{ "Category", "Video Input" },
		{ "Comment", "/* When this is ticked, use 'Scale Multiplier' below AND not the mesh component scale to adjust the size of this video plane */" },
		{ "ModuleRelativePath", "Public/OWLVideoPlanePlacement.h" },
		{ "ToolTip", "When this is ticked, use 'Scale Multiplier' below AND not the mesh component scale to adjust the size of this video plane" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[] = {
		{ "Category", "Video Input" },
		{ "Comment", "/* When 'Resolution Controls Scale' is ticked, set the aspect ratio of the plane using these resolution settings */" },
		{ "EditCondition", "bResolutionControlsScale" },
		{ "ModuleRelativePath", "Public/OWLVideoPlanePlacement.h" },
		{ "ToolTip", "When 'Resolution Controls Scale' is ticked, set the aspect ratio of the plane using these resolution settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleMultiplier_MetaData[] = {
		{ "Category", "Video Input" },
		{ "Comment", "/* Use this parameter to scale the plane while maintaining the correct aspect ratio*/" },
		{ "EditCondition", "bResolutionControlsScale" },
		{ "ModuleRelativePath", "Public/OWLVideoPlanePlacement.h" },
		{ "ToolTip", "Use this parameter to scale the plane while maintaining the correct aspect ratio" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AspectRatio_MetaData[] = {
		{ "Category", "Video Input" },
		{ "EditCondition", "false" },
		{ "ModuleRelativePath", "Public/OWLVideoPlanePlacement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaInput_MetaData[] = {
		{ "Comment", "/* UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=\"Video Input\")*/" },
		{ "ModuleRelativePath", "Public/OWLVideoPlanePlacement.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=\"Video Input\")" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Preview Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWLVideoPlanePlacement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWLVideoPlanePlacement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWLVideoPlanePlacement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWLVideoPlanePlacement.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AOWLVideoPlanePlacement constinit property declarations ******************
	static void NewProp_bResolutionControlsScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResolutionControlsScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Resolution;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AspectRatio;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaInput;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginalMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AOWLVideoPlanePlacement constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWLVideoPlanePlacement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AOWLVideoPlanePlacement_Statics

// ********** Begin Class AOWLVideoPlanePlacement Property Definitions *****************************
void Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_bResolutionControlsScale_SetBit(void* Obj)
{
	((AOWLVideoPlanePlacement*)Obj)->bResolutionControlsScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_bResolutionControlsScale = { "bResolutionControlsScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOWLVideoPlanePlacement), &Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_bResolutionControlsScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResolutionControlsScale_MetaData), NewProp_bResolutionControlsScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWLVideoPlanePlacement, Resolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resolution_MetaData), NewProp_Resolution_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_ScaleMultiplier = { "ScaleMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWLVideoPlanePlacement, ScaleMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleMultiplier_MetaData), NewProp_ScaleMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_AspectRatio = { "AspectRatio", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWLVideoPlanePlacement, AspectRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AspectRatio_MetaData), NewProp_AspectRatio_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_MediaInput = { "MediaInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWLVideoPlanePlacement, MediaInput), Z_Construct_UClass_UMediaTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaInput_MetaData), NewProp_MediaInput_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWLVideoPlanePlacement, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWLVideoPlanePlacement, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_OriginalMaterial = { "OriginalMaterial", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWLVideoPlanePlacement, OriginalMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalMaterial_MetaData), NewProp_OriginalMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_DynamicMaterial = { "DynamicMaterial", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWLVideoPlanePlacement, DynamicMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicMaterial_MetaData), NewProp_DynamicMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_bResolutionControlsScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_Resolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_ScaleMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_AspectRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_MediaInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_OriginalMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::NewProp_DynamicMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::PropPointers) < 2048);
// ********** End Class AOWLVideoPlanePlacement Property Definitions *******************************
UObject* (*const Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OWLComposure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::ClassParams = {
	&AOWLVideoPlanePlacement::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::Class_MetaDataParams), Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::Class_MetaDataParams)
};
void AOWLVideoPlanePlacement::StaticRegisterNativesAOWLVideoPlanePlacement()
{
}
UClass* Z_Construct_UClass_AOWLVideoPlanePlacement()
{
	if (!Z_Registration_Info_UClass_AOWLVideoPlanePlacement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWLVideoPlanePlacement.OuterSingleton, Z_Construct_UClass_AOWLVideoPlanePlacement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOWLVideoPlanePlacement.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AOWLVideoPlanePlacement);
AOWLVideoPlanePlacement::~AOWLVideoPlanePlacement() {}
// ********** End Class AOWLVideoPlanePlacement ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLVideoPlanePlacement_h__Script_OWLComposure_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOWLVideoPlanePlacement, AOWLVideoPlanePlacement::StaticClass, TEXT("AOWLVideoPlanePlacement"), &Z_Registration_Info_UClass_AOWLVideoPlanePlacement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWLVideoPlanePlacement), 672019574U) },
	};
}; // Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLVideoPlanePlacement_h__Script_OWLComposure_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLVideoPlanePlacement_h__Script_OWLComposure_2956211907{
	TEXT("/Script/OWLComposure"),
	Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLVideoPlanePlacement_h__Script_OWLComposure_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLVideoPlanePlacement_h__Script_OWLComposure_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
