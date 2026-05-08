// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWL360PreviewCamComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOWL360PreviewCamComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent();
OWL360CAMERA_API UClass* Z_Construct_UClass_UOWL360PreviewCamComponent();
OWL360CAMERA_API UClass* Z_Construct_UClass_UOWL360PreviewCamComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWL360Camera();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOWL360PreviewCamComponent ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UOWL360PreviewCamComponent;
UClass* UOWL360PreviewCamComponent::GetPrivateStaticClass()
{
	using TClass = UOWL360PreviewCamComponent;
	if (!Z_Registration_Info_UClass_UOWL360PreviewCamComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OWL360PreviewCamComponent"),
			Z_Registration_Info_UClass_UOWL360PreviewCamComponent.InnerSingleton,
			StaticRegisterNativesUOWL360PreviewCamComponent,
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
	return Z_Registration_Info_UClass_UOWL360PreviewCamComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UOWL360PreviewCamComponent_NoRegister()
{
	return UOWL360PreviewCamComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOWL360PreviewCamComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Camera" },
		{ "HideCategories", "CameraSettings Mobility Rendering LOD Trigger PhysicsVolume" },
		{ "HideFunctions", "SetFieldOfView SetAspectRatio" },
		{ "IncludePath", "OWL360PreviewCamComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/OWL360PreviewCamComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOWL360PreviewCamComponent constinit property declarations ***************
// ********** End Class UOWL360PreviewCamComponent constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWL360PreviewCamComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UOWL360PreviewCamComponent_Statics
UObject* (*const Z_Construct_UClass_UOWL360PreviewCamComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OWL360Camera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360PreviewCamComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWL360PreviewCamComponent_Statics::ClassParams = {
	&UOWL360PreviewCamComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWL360PreviewCamComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWL360PreviewCamComponent_Statics::Class_MetaDataParams)
};
void UOWL360PreviewCamComponent::StaticRegisterNativesUOWL360PreviewCamComponent()
{
}
UClass* Z_Construct_UClass_UOWL360PreviewCamComponent()
{
	if (!Z_Registration_Info_UClass_UOWL360PreviewCamComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWL360PreviewCamComponent.OuterSingleton, Z_Construct_UClass_UOWL360PreviewCamComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWL360PreviewCamComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOWL360PreviewCamComponent);
UOWL360PreviewCamComponent::~UOWL360PreviewCamComponent() {}
// ********** End Class UOWL360PreviewCamComponent *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Private_OWL360PreviewCamComponent_h__Script_OWL360Camera_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWL360PreviewCamComponent, UOWL360PreviewCamComponent::StaticClass, TEXT("UOWL360PreviewCamComponent"), &Z_Registration_Info_UClass_UOWL360PreviewCamComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWL360PreviewCamComponent), 529531822U) },
	};
}; // Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Private_OWL360PreviewCamComponent_h__Script_OWL360Camera_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Private_OWL360PreviewCamComponent_h__Script_OWL360Camera_573981795{
	TEXT("/Script/OWL360Camera"),
	Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Private_OWL360PreviewCamComponent_h__Script_OWL360Camera_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Private_OWL360PreviewCamComponent_h__Script_OWL360Camera_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
