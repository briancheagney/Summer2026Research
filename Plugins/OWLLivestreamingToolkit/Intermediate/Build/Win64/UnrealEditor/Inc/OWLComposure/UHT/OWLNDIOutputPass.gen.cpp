// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLNDIOutputPass.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOWLNDIOutputPass() {}

// ********** Begin Cross Module References ********************************************************
COMPOSURE_API UClass* Z_Construct_UClass_UCompositingElementOutput();
ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
OWLCOMPOSURE_API UClass* Z_Construct_UClass_UOWLNDIOutputPass();
OWLCOMPOSURE_API UClass* Z_Construct_UClass_UOWLNDIOutputPass_NoRegister();
OWLNDI_API UEnum* Z_Construct_UEnum_OWLNDI_ENDIVideoConversionFormat();
UPackage* Z_Construct_UPackage__Script_OWLComposure();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOWLNDIOutputPass ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UOWLNDIOutputPass;
UClass* UOWLNDIOutputPass::GetPrivateStaticClass()
{
	using TClass = UOWLNDIOutputPass;
	if (!Z_Registration_Info_UClass_UOWLNDIOutputPass.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OWLNDIOutputPass"),
			Z_Registration_Info_UClass_UOWLNDIOutputPass.InnerSingleton,
			StaticRegisterNativesUOWLNDIOutputPass,
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
	return Z_Registration_Info_UClass_UOWLNDIOutputPass.InnerSingleton;
}
UClass* Z_Construct_UClass_UOWLNDIOutputPass_NoRegister()
{
	return UOWLNDIOutputPass::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOWLNDIOutputPass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OWLNDIOutputPass.h" },
		{ "ModuleRelativePath", "Public/OWLNDIOutputPass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SenderName_MetaData[] = {
		{ "Category", "NDI" },
		{ "ModuleRelativePath", "Public/OWLNDIOutputPass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VideoConversionFormat_MetaData[] = {
		{ "Category", "OWLNDISender" },
		{ "ModuleRelativePath", "Public/OWLNDIOutputPass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCaptureAudio_MetaData[] = {
		{ "Category", "NDI" },
		{ "ModuleRelativePath", "Public/OWLNDIOutputPass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Submix_MetaData[] = {
		{ "Category", "NDI" },
		{ "ModuleRelativePath", "Public/OWLNDIOutputPass.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOWLNDIOutputPass constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_SenderName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VideoConversionFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VideoConversionFormat;
	static void NewProp_bCaptureAudio_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureAudio;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Submix;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOWLNDIOutputPass constinit property declarations **************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWLNDIOutputPass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UOWLNDIOutputPass_Statics

// ********** Begin Class UOWLNDIOutputPass Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOWLNDIOutputPass_Statics::NewProp_SenderName = { "SenderName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLNDIOutputPass, SenderName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SenderName_MetaData), NewProp_SenderName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOWLNDIOutputPass_Statics::NewProp_VideoConversionFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOWLNDIOutputPass_Statics::NewProp_VideoConversionFormat = { "VideoConversionFormat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLNDIOutputPass, VideoConversionFormat), Z_Construct_UEnum_OWLNDI_ENDIVideoConversionFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VideoConversionFormat_MetaData), NewProp_VideoConversionFormat_MetaData) }; // 3946547430
void Z_Construct_UClass_UOWLNDIOutputPass_Statics::NewProp_bCaptureAudio_SetBit(void* Obj)
{
	((UOWLNDIOutputPass*)Obj)->bCaptureAudio = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLNDIOutputPass_Statics::NewProp_bCaptureAudio = { "bCaptureAudio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLNDIOutputPass), &Z_Construct_UClass_UOWLNDIOutputPass_Statics::NewProp_bCaptureAudio_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCaptureAudio_MetaData), NewProp_bCaptureAudio_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLNDIOutputPass_Statics::NewProp_Submix = { "Submix", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLNDIOutputPass, Submix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Submix_MetaData), NewProp_Submix_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWLNDIOutputPass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLNDIOutputPass_Statics::NewProp_SenderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLNDIOutputPass_Statics::NewProp_VideoConversionFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLNDIOutputPass_Statics::NewProp_VideoConversionFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLNDIOutputPass_Statics::NewProp_bCaptureAudio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLNDIOutputPass_Statics::NewProp_Submix,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLNDIOutputPass_Statics::PropPointers) < 2048);
// ********** End Class UOWLNDIOutputPass Property Definitions *************************************
UObject* (*const Z_Construct_UClass_UOWLNDIOutputPass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCompositingElementOutput,
	(UObject* (*)())Z_Construct_UPackage__Script_OWLComposure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLNDIOutputPass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWLNDIOutputPass_Statics::ClassParams = {
	&UOWLNDIOutputPass::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOWLNDIOutputPass_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOWLNDIOutputPass_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLNDIOutputPass_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWLNDIOutputPass_Statics::Class_MetaDataParams)
};
void UOWLNDIOutputPass::StaticRegisterNativesUOWLNDIOutputPass()
{
}
UClass* Z_Construct_UClass_UOWLNDIOutputPass()
{
	if (!Z_Registration_Info_UClass_UOWLNDIOutputPass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWLNDIOutputPass.OuterSingleton, Z_Construct_UClass_UOWLNDIOutputPass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWLNDIOutputPass.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOWLNDIOutputPass);
UOWLNDIOutputPass::~UOWLNDIOutputPass() {}
// ********** End Class UOWLNDIOutputPass **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLNDIOutputPass_h__Script_OWLComposure_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWLNDIOutputPass, UOWLNDIOutputPass::StaticClass, TEXT("UOWLNDIOutputPass"), &Z_Registration_Info_UClass_UOWLNDIOutputPass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWLNDIOutputPass), 2597929819U) },
	};
}; // Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLNDIOutputPass_h__Script_OWLComposure_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLNDIOutputPass_h__Script_OWLComposure_1192268740{
	TEXT("/Script/OWLComposure"),
	Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLNDIOutputPass_h__Script_OWLComposure_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLNDIOutputPass_h__Script_OWLComposure_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
