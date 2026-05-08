// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/OWLSpoutMediaSourceFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOWLSpoutMediaSourceFactory() {}

// ********** Begin Cross Module References ********************************************************
LIVESTREAMINGTOOLKITEDITOR_API UClass* Z_Construct_UClass_UOWLSpoutMediaSourceFactory();
LIVESTREAMINGTOOLKITEDITOR_API UClass* Z_Construct_UClass_UOWLSpoutMediaSourceFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_LivestreamingToolkitEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOWLSpoutMediaSourceFactory **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UOWLSpoutMediaSourceFactory;
UClass* UOWLSpoutMediaSourceFactory::GetPrivateStaticClass()
{
	using TClass = UOWLSpoutMediaSourceFactory;
	if (!Z_Registration_Info_UClass_UOWLSpoutMediaSourceFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OWLSpoutMediaSourceFactory"),
			Z_Registration_Info_UClass_UOWLSpoutMediaSourceFactory.InnerSingleton,
			StaticRegisterNativesUOWLSpoutMediaSourceFactory,
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
	return Z_Registration_Info_UClass_UOWLSpoutMediaSourceFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UOWLSpoutMediaSourceFactory_NoRegister()
{
	return UOWLSpoutMediaSourceFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOWLSpoutMediaSourceFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a factory for UOWLSpoutMediaSource objects.\n * This makes \"Spout Media Source\" appear in the Content Browser's right-click \"Media\" menu.\n */" },
		{ "IncludePath", "Factories/OWLSpoutMediaSourceFactory.h" },
		{ "ModuleRelativePath", "Public/Factories/OWLSpoutMediaSourceFactory.h" },
		{ "ToolTip", "Implements a factory for UOWLSpoutMediaSource objects.\nThis makes \"Spout Media Source\" appear in the Content Browser's right-click \"Media\" menu." },
	};
#endif // WITH_METADATA

// ********** Begin Class UOWLSpoutMediaSourceFactory constinit property declarations **************
// ********** End Class UOWLSpoutMediaSourceFactory constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWLSpoutMediaSourceFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UOWLSpoutMediaSourceFactory_Statics
UObject* (*const Z_Construct_UClass_UOWLSpoutMediaSourceFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkitEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSpoutMediaSourceFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWLSpoutMediaSourceFactory_Statics::ClassParams = {
	&UOWLSpoutMediaSourceFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSpoutMediaSourceFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWLSpoutMediaSourceFactory_Statics::Class_MetaDataParams)
};
void UOWLSpoutMediaSourceFactory::StaticRegisterNativesUOWLSpoutMediaSourceFactory()
{
}
UClass* Z_Construct_UClass_UOWLSpoutMediaSourceFactory()
{
	if (!Z_Registration_Info_UClass_UOWLSpoutMediaSourceFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWLSpoutMediaSourceFactory.OuterSingleton, Z_Construct_UClass_UOWLSpoutMediaSourceFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWLSpoutMediaSourceFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOWLSpoutMediaSourceFactory);
UOWLSpoutMediaSourceFactory::~UOWLSpoutMediaSourceFactory() {}
// ********** End Class UOWLSpoutMediaSourceFactory ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkitEditor_Public_Factories_OWLSpoutMediaSourceFactory_h__Script_LivestreamingToolkitEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWLSpoutMediaSourceFactory, UOWLSpoutMediaSourceFactory::StaticClass, TEXT("UOWLSpoutMediaSourceFactory"), &Z_Registration_Info_UClass_UOWLSpoutMediaSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWLSpoutMediaSourceFactory), 3206974226U) },
	};
}; // Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkitEditor_Public_Factories_OWLSpoutMediaSourceFactory_h__Script_LivestreamingToolkitEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkitEditor_Public_Factories_OWLSpoutMediaSourceFactory_h__Script_LivestreamingToolkitEditor_799460554{
	TEXT("/Script/LivestreamingToolkitEditor"),
	Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkitEditor_Public_Factories_OWLSpoutMediaSourceFactory_h__Script_LivestreamingToolkitEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkitEditor_Public_Factories_OWLSpoutMediaSourceFactory_h__Script_LivestreamingToolkitEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
