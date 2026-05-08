// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaFramework/Output/OWLNDIMediaCapture.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOWLNDIMediaCapture() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
MEDIAIOCORE_API UClass* Z_Construct_UClass_UMediaCapture();
OWLNDI_API UClass* Z_Construct_UClass_UOWLNDIMediaCapture();
OWLNDI_API UClass* Z_Construct_UClass_UOWLNDIMediaCapture_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWLNDI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOWLNDIMediaCapture ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UOWLNDIMediaCapture;
UClass* UOWLNDIMediaCapture::GetPrivateStaticClass()
{
	using TClass = UOWLNDIMediaCapture;
	if (!Z_Registration_Info_UClass_UOWLNDIMediaCapture.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OWLNDIMediaCapture"),
			Z_Registration_Info_UClass_UOWLNDIMediaCapture.InnerSingleton,
			StaticRegisterNativesUOWLNDIMediaCapture,
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
	return Z_Registration_Info_UClass_UOWLNDIMediaCapture.InnerSingleton;
}
UClass* Z_Construct_UClass_UOWLNDIMediaCapture_NoRegister()
{
	return UOWLNDIMediaCapture::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOWLNDIMediaCapture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Implementation of media capture for NDI.\n * This class handles the actual capturing and sending of render targets via NDI.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "MediaFramework/Output/OWLNDIMediaCapture.h" },
		{ "ModuleRelativePath", "Public/MediaFramework/Output/OWLNDIMediaCapture.h" },
		{ "ToolTip", "Implementation of media capture for NDI.\nThis class handles the actual capturing and sending of render targets via NDI." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioSubmix_MetaData[] = {
		{ "ModuleRelativePath", "Public/MediaFramework/Output/OWLNDIMediaCapture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NDIRenderTarget_MetaData[] = {
		{ "Comment", "// === RENDER TARGET MANAGEMENT ===\n" },
		{ "ModuleRelativePath", "Public/MediaFramework/Output/OWLNDIMediaCapture.h" },
		{ "ToolTip", "=== RENDER TARGET MANAGEMENT ===" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOWLNDIMediaCapture constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioSubmix;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NDIRenderTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOWLNDIMediaCapture constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWLNDIMediaCapture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UOWLNDIMediaCapture_Statics

// ********** Begin Class UOWLNDIMediaCapture Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLNDIMediaCapture_Statics::NewProp_AudioSubmix = { "AudioSubmix", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLNDIMediaCapture, AudioSubmix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioSubmix_MetaData), NewProp_AudioSubmix_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLNDIMediaCapture_Statics::NewProp_NDIRenderTarget = { "NDIRenderTarget", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLNDIMediaCapture, NDIRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NDIRenderTarget_MetaData), NewProp_NDIRenderTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWLNDIMediaCapture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLNDIMediaCapture_Statics::NewProp_AudioSubmix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLNDIMediaCapture_Statics::NewProp_NDIRenderTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLNDIMediaCapture_Statics::PropPointers) < 2048);
// ********** End Class UOWLNDIMediaCapture Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_UOWLNDIMediaCapture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMediaCapture,
	(UObject* (*)())Z_Construct_UPackage__Script_OWLNDI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLNDIMediaCapture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWLNDIMediaCapture_Statics::ClassParams = {
	&UOWLNDIMediaCapture::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOWLNDIMediaCapture_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOWLNDIMediaCapture_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLNDIMediaCapture_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWLNDIMediaCapture_Statics::Class_MetaDataParams)
};
void UOWLNDIMediaCapture::StaticRegisterNativesUOWLNDIMediaCapture()
{
}
UClass* Z_Construct_UClass_UOWLNDIMediaCapture()
{
	if (!Z_Registration_Info_UClass_UOWLNDIMediaCapture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWLNDIMediaCapture.OuterSingleton, Z_Construct_UClass_UOWLNDIMediaCapture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWLNDIMediaCapture.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOWLNDIMediaCapture);
// ********** End Class UOWLNDIMediaCapture ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_MediaFramework_Output_OWLNDIMediaCapture_h__Script_OWLNDI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWLNDIMediaCapture, UOWLNDIMediaCapture::StaticClass, TEXT("UOWLNDIMediaCapture"), &Z_Registration_Info_UClass_UOWLNDIMediaCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWLNDIMediaCapture), 2768978120U) },
	};
}; // Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_MediaFramework_Output_OWLNDIMediaCapture_h__Script_OWLNDI_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_MediaFramework_Output_OWLNDIMediaCapture_h__Script_OWLNDI_4178722054{
	TEXT("/Script/OWLNDI"),
	Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_MediaFramework_Output_OWLNDIMediaCapture_h__Script_OWLNDI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_MediaFramework_Output_OWLNDIMediaCapture_h__Script_OWLNDI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
