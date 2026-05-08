// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/OWLNDIMediaSourceFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOWLNDIMediaSourceFactory() {}

// ********** Begin Cross Module References ********************************************************
LIVESTREAMINGTOOLKITEDITOR_API UClass* Z_Construct_UClass_UOWLNDIMediaSourceFactory();
LIVESTREAMINGTOOLKITEDITOR_API UClass* Z_Construct_UClass_UOWLNDIMediaSourceFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_LivestreamingToolkitEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOWLNDIMediaSourceFactory ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UOWLNDIMediaSourceFactory;
UClass* UOWLNDIMediaSourceFactory::GetPrivateStaticClass()
{
	using TClass = UOWLNDIMediaSourceFactory;
	if (!Z_Registration_Info_UClass_UOWLNDIMediaSourceFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OWLNDIMediaSourceFactory"),
			Z_Registration_Info_UClass_UOWLNDIMediaSourceFactory.InnerSingleton,
			StaticRegisterNativesUOWLNDIMediaSourceFactory,
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
	return Z_Registration_Info_UClass_UOWLNDIMediaSourceFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UOWLNDIMediaSourceFactory_NoRegister()
{
	return UOWLNDIMediaSourceFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOWLNDIMediaSourceFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a factory for UOWLNDIMediaSource objects.\n * This makes \"NDI Media Source\" appear in the Content Browser's right-click \"Media\" menu.\n */" },
		{ "IncludePath", "Factories/OWLNDIMediaSourceFactory.h" },
		{ "ModuleRelativePath", "Public/Factories/OWLNDIMediaSourceFactory.h" },
		{ "ToolTip", "Implements a factory for UOWLNDIMediaSource objects.\nThis makes \"NDI Media Source\" appear in the Content Browser's right-click \"Media\" menu." },
	};
#endif // WITH_METADATA

// ********** Begin Class UOWLNDIMediaSourceFactory constinit property declarations ****************
// ********** End Class UOWLNDIMediaSourceFactory constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWLNDIMediaSourceFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UOWLNDIMediaSourceFactory_Statics
UObject* (*const Z_Construct_UClass_UOWLNDIMediaSourceFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkitEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLNDIMediaSourceFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWLNDIMediaSourceFactory_Statics::ClassParams = {
	&UOWLNDIMediaSourceFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLNDIMediaSourceFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWLNDIMediaSourceFactory_Statics::Class_MetaDataParams)
};
void UOWLNDIMediaSourceFactory::StaticRegisterNativesUOWLNDIMediaSourceFactory()
{
}
UClass* Z_Construct_UClass_UOWLNDIMediaSourceFactory()
{
	if (!Z_Registration_Info_UClass_UOWLNDIMediaSourceFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWLNDIMediaSourceFactory.OuterSingleton, Z_Construct_UClass_UOWLNDIMediaSourceFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWLNDIMediaSourceFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOWLNDIMediaSourceFactory);
UOWLNDIMediaSourceFactory::~UOWLNDIMediaSourceFactory() {}
// ********** End Class UOWLNDIMediaSourceFactory **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkitEditor_Public_Factories_OWLNDIMediaSourceFactory_h__Script_LivestreamingToolkitEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWLNDIMediaSourceFactory, UOWLNDIMediaSourceFactory::StaticClass, TEXT("UOWLNDIMediaSourceFactory"), &Z_Registration_Info_UClass_UOWLNDIMediaSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWLNDIMediaSourceFactory), 1851535295U) },
	};
}; // Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkitEditor_Public_Factories_OWLNDIMediaSourceFactory_h__Script_LivestreamingToolkitEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkitEditor_Public_Factories_OWLNDIMediaSourceFactory_h__Script_LivestreamingToolkitEditor_2617679823{
	TEXT("/Script/LivestreamingToolkitEditor"),
	Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkitEditor_Public_Factories_OWLNDIMediaSourceFactory_h__Script_LivestreamingToolkitEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkitEditor_Public_Factories_OWLNDIMediaSourceFactory_h__Script_LivestreamingToolkitEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
