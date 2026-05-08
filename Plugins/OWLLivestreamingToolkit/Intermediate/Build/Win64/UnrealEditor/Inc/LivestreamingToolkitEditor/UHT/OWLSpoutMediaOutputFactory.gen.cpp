// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/OWLSpoutMediaOutputFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOWLSpoutMediaOutputFactory() {}

// ********** Begin Cross Module References ********************************************************
LIVESTREAMINGTOOLKITEDITOR_API UClass* Z_Construct_UClass_UOWLSpoutMediaOutputFactory();
LIVESTREAMINGTOOLKITEDITOR_API UClass* Z_Construct_UClass_UOWLSpoutMediaOutputFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_LivestreamingToolkitEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOWLSpoutMediaOutputFactory **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UOWLSpoutMediaOutputFactory;
UClass* UOWLSpoutMediaOutputFactory::GetPrivateStaticClass()
{
	using TClass = UOWLSpoutMediaOutputFactory;
	if (!Z_Registration_Info_UClass_UOWLSpoutMediaOutputFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OWLSpoutMediaOutputFactory"),
			Z_Registration_Info_UClass_UOWLSpoutMediaOutputFactory.InnerSingleton,
			StaticRegisterNativesUOWLSpoutMediaOutputFactory,
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
	return Z_Registration_Info_UClass_UOWLSpoutMediaOutputFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UOWLSpoutMediaOutputFactory_NoRegister()
{
	return UOWLSpoutMediaOutputFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOWLSpoutMediaOutputFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Factory for creating OWL Spout Media Output assets.\n * This makes the Spout Media Output appear in the Content Browser and dropdowns.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/OWLSpoutMediaOutputFactory.h" },
		{ "ModuleRelativePath", "Public/Factories/OWLSpoutMediaOutputFactory.h" },
		{ "ToolTip", "Factory for creating OWL Spout Media Output assets.\nThis makes the Spout Media Output appear in the Content Browser and dropdowns." },
	};
#endif // WITH_METADATA

// ********** Begin Class UOWLSpoutMediaOutputFactory constinit property declarations **************
// ********** End Class UOWLSpoutMediaOutputFactory constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWLSpoutMediaOutputFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UOWLSpoutMediaOutputFactory_Statics
UObject* (*const Z_Construct_UClass_UOWLSpoutMediaOutputFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkitEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSpoutMediaOutputFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWLSpoutMediaOutputFactory_Statics::ClassParams = {
	&UOWLSpoutMediaOutputFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSpoutMediaOutputFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWLSpoutMediaOutputFactory_Statics::Class_MetaDataParams)
};
void UOWLSpoutMediaOutputFactory::StaticRegisterNativesUOWLSpoutMediaOutputFactory()
{
}
UClass* Z_Construct_UClass_UOWLSpoutMediaOutputFactory()
{
	if (!Z_Registration_Info_UClass_UOWLSpoutMediaOutputFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWLSpoutMediaOutputFactory.OuterSingleton, Z_Construct_UClass_UOWLSpoutMediaOutputFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWLSpoutMediaOutputFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOWLSpoutMediaOutputFactory);
UOWLSpoutMediaOutputFactory::~UOWLSpoutMediaOutputFactory() {}
// ********** End Class UOWLSpoutMediaOutputFactory ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkitEditor_Public_Factories_OWLSpoutMediaOutputFactory_h__Script_LivestreamingToolkitEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWLSpoutMediaOutputFactory, UOWLSpoutMediaOutputFactory::StaticClass, TEXT("UOWLSpoutMediaOutputFactory"), &Z_Registration_Info_UClass_UOWLSpoutMediaOutputFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWLSpoutMediaOutputFactory), 1784714794U) },
	};
}; // Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkitEditor_Public_Factories_OWLSpoutMediaOutputFactory_h__Script_LivestreamingToolkitEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkitEditor_Public_Factories_OWLSpoutMediaOutputFactory_h__Script_LivestreamingToolkitEditor_3321426155{
	TEXT("/Script/LivestreamingToolkitEditor"),
	Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkitEditor_Public_Factories_OWLSpoutMediaOutputFactory_h__Script_LivestreamingToolkitEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkitEditor_Public_Factories_OWLSpoutMediaOutputFactory_h__Script_LivestreamingToolkitEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
