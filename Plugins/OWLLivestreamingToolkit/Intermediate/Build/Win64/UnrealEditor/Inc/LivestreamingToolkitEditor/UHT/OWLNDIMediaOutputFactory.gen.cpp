// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/OWLNDIMediaOutputFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOWLNDIMediaOutputFactory() {}

// ********** Begin Cross Module References ********************************************************
LIVESTREAMINGTOOLKITEDITOR_API UClass* Z_Construct_UClass_UOWLNDIMediaOutputFactory();
LIVESTREAMINGTOOLKITEDITOR_API UClass* Z_Construct_UClass_UOWLNDIMediaOutputFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_LivestreamingToolkitEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOWLNDIMediaOutputFactory ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UOWLNDIMediaOutputFactory;
UClass* UOWLNDIMediaOutputFactory::GetPrivateStaticClass()
{
	using TClass = UOWLNDIMediaOutputFactory;
	if (!Z_Registration_Info_UClass_UOWLNDIMediaOutputFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OWLNDIMediaOutputFactory"),
			Z_Registration_Info_UClass_UOWLNDIMediaOutputFactory.InnerSingleton,
			StaticRegisterNativesUOWLNDIMediaOutputFactory,
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
	return Z_Registration_Info_UClass_UOWLNDIMediaOutputFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UOWLNDIMediaOutputFactory_NoRegister()
{
	return UOWLNDIMediaOutputFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOWLNDIMediaOutputFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Factory for creating OWL NDI Media Output assets.\n * This makes the NDI Media Output appear in the Content Browser and dropdowns.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/OWLNDIMediaOutputFactory.h" },
		{ "ModuleRelativePath", "Public/Factories/OWLNDIMediaOutputFactory.h" },
		{ "ToolTip", "Factory for creating OWL NDI Media Output assets.\nThis makes the NDI Media Output appear in the Content Browser and dropdowns." },
	};
#endif // WITH_METADATA

// ********** Begin Class UOWLNDIMediaOutputFactory constinit property declarations ****************
// ********** End Class UOWLNDIMediaOutputFactory constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWLNDIMediaOutputFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UOWLNDIMediaOutputFactory_Statics
UObject* (*const Z_Construct_UClass_UOWLNDIMediaOutputFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkitEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLNDIMediaOutputFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWLNDIMediaOutputFactory_Statics::ClassParams = {
	&UOWLNDIMediaOutputFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLNDIMediaOutputFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWLNDIMediaOutputFactory_Statics::Class_MetaDataParams)
};
void UOWLNDIMediaOutputFactory::StaticRegisterNativesUOWLNDIMediaOutputFactory()
{
}
UClass* Z_Construct_UClass_UOWLNDIMediaOutputFactory()
{
	if (!Z_Registration_Info_UClass_UOWLNDIMediaOutputFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWLNDIMediaOutputFactory.OuterSingleton, Z_Construct_UClass_UOWLNDIMediaOutputFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWLNDIMediaOutputFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOWLNDIMediaOutputFactory);
UOWLNDIMediaOutputFactory::~UOWLNDIMediaOutputFactory() {}
// ********** End Class UOWLNDIMediaOutputFactory **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkitEditor_Public_Factories_OWLNDIMediaOutputFactory_h__Script_LivestreamingToolkitEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWLNDIMediaOutputFactory, UOWLNDIMediaOutputFactory::StaticClass, TEXT("UOWLNDIMediaOutputFactory"), &Z_Registration_Info_UClass_UOWLNDIMediaOutputFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWLNDIMediaOutputFactory), 4216937515U) },
	};
}; // Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkitEditor_Public_Factories_OWLNDIMediaOutputFactory_h__Script_LivestreamingToolkitEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkitEditor_Public_Factories_OWLNDIMediaOutputFactory_h__Script_LivestreamingToolkitEditor_1415879119{
	TEXT("/Script/LivestreamingToolkitEditor"),
	Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkitEditor_Public_Factories_OWLNDIMediaOutputFactory_h__Script_LivestreamingToolkitEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkitEditor_Public_Factories_OWLNDIMediaOutputFactory_h__Script_LivestreamingToolkitEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
