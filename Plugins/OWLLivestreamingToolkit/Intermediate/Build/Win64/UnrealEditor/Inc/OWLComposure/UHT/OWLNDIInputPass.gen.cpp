// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLNDIInputPass.h"
#include "OWLNDIReceiverManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOWLNDIInputPass() {}

// ********** Begin Cross Module References ********************************************************
COMPOSURE_API UClass* Z_Construct_UClass_UCompositingElementInput();
OWLCOMPOSURE_API UClass* Z_Construct_UClass_UOWLNDIInputPass();
OWLCOMPOSURE_API UClass* Z_Construct_UClass_UOWLNDIInputPass_NoRegister();
OWLNDI_API UScriptStruct* Z_Construct_UScriptStruct_FOWLNDIReceiverInterface();
UPackage* Z_Construct_UPackage__Script_OWLComposure();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOWLNDIInputPass *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UOWLNDIInputPass;
UClass* UOWLNDIInputPass::GetPrivateStaticClass()
{
	using TClass = UOWLNDIInputPass;
	if (!Z_Registration_Info_UClass_UOWLNDIInputPass.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OWLNDIInputPass"),
			Z_Registration_Info_UClass_UOWLNDIInputPass.InnerSingleton,
			StaticRegisterNativesUOWLNDIInputPass,
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
	return Z_Registration_Info_UClass_UOWLNDIInputPass.InnerSingleton;
}
UClass* Z_Construct_UClass_UOWLNDIInputPass_NoRegister()
{
	return UOWLNDIInputPass::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOWLNDIInputPass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OWLNDIInputPass.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OWLNDIInputPass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Receiver_MetaData[] = {
		{ "Category", "OWL" },
		{ "ModuleRelativePath", "Public/OWLNDIInputPass.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOWLNDIInputPass constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Receiver;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOWLNDIInputPass constinit property declarations ***************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWLNDIInputPass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UOWLNDIInputPass_Statics

// ********** Begin Class UOWLNDIInputPass Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWLNDIInputPass_Statics::NewProp_Receiver = { "Receiver", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLNDIInputPass, Receiver), Z_Construct_UScriptStruct_FOWLNDIReceiverInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Receiver_MetaData), NewProp_Receiver_MetaData) }; // 2651694112
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWLNDIInputPass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLNDIInputPass_Statics::NewProp_Receiver,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLNDIInputPass_Statics::PropPointers) < 2048);
// ********** End Class UOWLNDIInputPass Property Definitions **************************************
UObject* (*const Z_Construct_UClass_UOWLNDIInputPass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCompositingElementInput,
	(UObject* (*)())Z_Construct_UPackage__Script_OWLComposure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLNDIInputPass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWLNDIInputPass_Statics::ClassParams = {
	&UOWLNDIInputPass::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOWLNDIInputPass_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOWLNDIInputPass_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLNDIInputPass_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWLNDIInputPass_Statics::Class_MetaDataParams)
};
void UOWLNDIInputPass::StaticRegisterNativesUOWLNDIInputPass()
{
}
UClass* Z_Construct_UClass_UOWLNDIInputPass()
{
	if (!Z_Registration_Info_UClass_UOWLNDIInputPass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWLNDIInputPass.OuterSingleton, Z_Construct_UClass_UOWLNDIInputPass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWLNDIInputPass.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOWLNDIInputPass);
UOWLNDIInputPass::~UOWLNDIInputPass() {}
// ********** End Class UOWLNDIInputPass ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLNDIInputPass_h__Script_OWLComposure_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWLNDIInputPass, UOWLNDIInputPass::StaticClass, TEXT("UOWLNDIInputPass"), &Z_Registration_Info_UClass_UOWLNDIInputPass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWLNDIInputPass), 1651634931U) },
	};
}; // Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLNDIInputPass_h__Script_OWLComposure_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLNDIInputPass_h__Script_OWLComposure_3614436075{
	TEXT("/Script/OWLComposure"),
	Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLNDIInputPass_h__Script_OWLComposure_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLNDIInputPass_h__Script_OWLComposure_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
