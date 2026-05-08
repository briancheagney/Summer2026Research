// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/OWLNDISoundWaveFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOWLNDISoundWaveFactory() {}

// ********** Begin Cross Module References ********************************************************
LIVESTREAMINGTOOLKITEDITOR_API UClass* Z_Construct_UClass_UOWLNDISoundWaveFactory();
LIVESTREAMINGTOOLKITEDITOR_API UClass* Z_Construct_UClass_UOWLNDISoundWaveFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_LivestreamingToolkitEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOWLNDISoundWaveFactory **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UOWLNDISoundWaveFactory;
UClass* UOWLNDISoundWaveFactory::GetPrivateStaticClass()
{
	using TClass = UOWLNDISoundWaveFactory;
	if (!Z_Registration_Info_UClass_UOWLNDISoundWaveFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OWLNDISoundWaveFactory"),
			Z_Registration_Info_UClass_UOWLNDISoundWaveFactory.InnerSingleton,
			StaticRegisterNativesUOWLNDISoundWaveFactory,
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
	return Z_Registration_Info_UClass_UOWLNDISoundWaveFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UOWLNDISoundWaveFactory_NoRegister()
{
	return UOWLNDISoundWaveFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOWLNDISoundWaveFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/OWLNDISoundWaveFactory.h" },
		{ "ModuleRelativePath", "Public/Factories/OWLNDISoundWaveFactory.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOWLNDISoundWaveFactory constinit property declarations ******************
// ********** End Class UOWLNDISoundWaveFactory constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWLNDISoundWaveFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UOWLNDISoundWaveFactory_Statics
UObject* (*const Z_Construct_UClass_UOWLNDISoundWaveFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkitEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLNDISoundWaveFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWLNDISoundWaveFactory_Statics::ClassParams = {
	&UOWLNDISoundWaveFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLNDISoundWaveFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWLNDISoundWaveFactory_Statics::Class_MetaDataParams)
};
void UOWLNDISoundWaveFactory::StaticRegisterNativesUOWLNDISoundWaveFactory()
{
}
UClass* Z_Construct_UClass_UOWLNDISoundWaveFactory()
{
	if (!Z_Registration_Info_UClass_UOWLNDISoundWaveFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWLNDISoundWaveFactory.OuterSingleton, Z_Construct_UClass_UOWLNDISoundWaveFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWLNDISoundWaveFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOWLNDISoundWaveFactory);
UOWLNDISoundWaveFactory::~UOWLNDISoundWaveFactory() {}
// ********** End Class UOWLNDISoundWaveFactory ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkitEditor_Public_Factories_OWLNDISoundWaveFactory_h__Script_LivestreamingToolkitEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWLNDISoundWaveFactory, UOWLNDISoundWaveFactory::StaticClass, TEXT("UOWLNDISoundWaveFactory"), &Z_Registration_Info_UClass_UOWLNDISoundWaveFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWLNDISoundWaveFactory), 3392399952U) },
	};
}; // Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkitEditor_Public_Factories_OWLNDISoundWaveFactory_h__Script_LivestreamingToolkitEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkitEditor_Public_Factories_OWLNDISoundWaveFactory_h__Script_LivestreamingToolkitEditor_2534231354{
	TEXT("/Script/LivestreamingToolkitEditor"),
	Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkitEditor_Public_Factories_OWLNDISoundWaveFactory_h__Script_LivestreamingToolkitEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkitEditor_Public_Factories_OWLNDISoundWaveFactory_h__Script_LivestreamingToolkitEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
