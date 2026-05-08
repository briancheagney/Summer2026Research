// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLSpoutOutputPass.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOWLSpoutOutputPass() {}

// ********** Begin Cross Module References ********************************************************
COMPOSURE_API UClass* Z_Construct_UClass_UCompositingElementOutput();
OWLCOMPOSURE_API UClass* Z_Construct_UClass_UOWLSpoutOutputPass();
OWLCOMPOSURE_API UClass* Z_Construct_UClass_UOWLSpoutOutputPass_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWLComposure();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOWLSpoutOutputPass ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UOWLSpoutOutputPass;
UClass* UOWLSpoutOutputPass::GetPrivateStaticClass()
{
	using TClass = UOWLSpoutOutputPass;
	if (!Z_Registration_Info_UClass_UOWLSpoutOutputPass.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OWLSpoutOutputPass"),
			Z_Registration_Info_UClass_UOWLSpoutOutputPass.InnerSingleton,
			StaticRegisterNativesUOWLSpoutOutputPass,
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
	return Z_Registration_Info_UClass_UOWLSpoutOutputPass.InnerSingleton;
}
UClass* Z_Construct_UClass_UOWLSpoutOutputPass_NoRegister()
{
	return UOWLSpoutOutputPass::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOWLSpoutOutputPass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "OWLSpoutOutputPass.h" },
		{ "ModuleRelativePath", "Public/OWLSpoutOutputPass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SenderName_MetaData[] = {
		{ "Category", "Compositing Pass" },
		{ "DisplayAfter", "PassName" },
		{ "ModuleRelativePath", "Public/OWLSpoutOutputPass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFixGamma_MetaData[] = {
		{ "Category", "Compositing Pass" },
		{ "Comment", "/* Untick this box if gamma SHOULD NOT be corrected to match the viewport gamma -- ie if you have a data /depth pass  */" },
		{ "DisplayAfter", "PassName" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/OWLSpoutOutputPass.h" },
		{ "ToolTip", "Untick this box if gamma SHOULD NOT be corrected to match the viewport gamma -- ie if you have a data /depth pass" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOWLSpoutOutputPass constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_SenderName;
	static void NewProp_bFixGamma_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFixGamma;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOWLSpoutOutputPass constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWLSpoutOutputPass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UOWLSpoutOutputPass_Statics

// ********** Begin Class UOWLSpoutOutputPass Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOWLSpoutOutputPass_Statics::NewProp_SenderName = { "SenderName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLSpoutOutputPass, SenderName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SenderName_MetaData), NewProp_SenderName_MetaData) };
void Z_Construct_UClass_UOWLSpoutOutputPass_Statics::NewProp_bFixGamma_SetBit(void* Obj)
{
	((UOWLSpoutOutputPass*)Obj)->bFixGamma = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLSpoutOutputPass_Statics::NewProp_bFixGamma = { "bFixGamma", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLSpoutOutputPass), &Z_Construct_UClass_UOWLSpoutOutputPass_Statics::NewProp_bFixGamma_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFixGamma_MetaData), NewProp_bFixGamma_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWLSpoutOutputPass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLSpoutOutputPass_Statics::NewProp_SenderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLSpoutOutputPass_Statics::NewProp_bFixGamma,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSpoutOutputPass_Statics::PropPointers) < 2048);
// ********** End Class UOWLSpoutOutputPass Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_UOWLSpoutOutputPass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCompositingElementOutput,
	(UObject* (*)())Z_Construct_UPackage__Script_OWLComposure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSpoutOutputPass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWLSpoutOutputPass_Statics::ClassParams = {
	&UOWLSpoutOutputPass::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOWLSpoutOutputPass_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSpoutOutputPass_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSpoutOutputPass_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWLSpoutOutputPass_Statics::Class_MetaDataParams)
};
void UOWLSpoutOutputPass::StaticRegisterNativesUOWLSpoutOutputPass()
{
}
UClass* Z_Construct_UClass_UOWLSpoutOutputPass()
{
	if (!Z_Registration_Info_UClass_UOWLSpoutOutputPass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWLSpoutOutputPass.OuterSingleton, Z_Construct_UClass_UOWLSpoutOutputPass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWLSpoutOutputPass.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOWLSpoutOutputPass);
UOWLSpoutOutputPass::~UOWLSpoutOutputPass() {}
// ********** End Class UOWLSpoutOutputPass ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLSpoutOutputPass_h__Script_OWLComposure_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWLSpoutOutputPass, UOWLSpoutOutputPass::StaticClass, TEXT("UOWLSpoutOutputPass"), &Z_Registration_Info_UClass_UOWLSpoutOutputPass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWLSpoutOutputPass), 3820907942U) },
	};
}; // Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLSpoutOutputPass_h__Script_OWLComposure_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLSpoutOutputPass_h__Script_OWLComposure_428576536{
	TEXT("/Script/OWLComposure"),
	Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLSpoutOutputPass_h__Script_OWLComposure_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLSpoutOutputPass_h__Script_OWLComposure_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
