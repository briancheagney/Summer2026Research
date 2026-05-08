// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Features/ViewportSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeViewportSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_UViewportSettings();
LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_UViewportSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_LivestreamingToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UViewportSettings Function BindEvents ************************************
struct Z_Construct_UFunction_UViewportSettings_BindEvents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Features/ViewportSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function BindEvents constinit property declarations ****************************
// ********** End Function BindEvents constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportSettings_BindEvents_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UViewportSettings, nullptr, "BindEvents", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportSettings_BindEvents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewportSettings_BindEvents_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UViewportSettings_BindEvents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportSettings_BindEvents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UViewportSettings::execBindEvents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UViewportSettings::BindEvents();
	P_NATIVE_END;
}
// ********** End Class UViewportSettings Function BindEvents **************************************

// ********** Begin Class UViewportSettings Function OnPostPIEStarted ******************************
struct Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics
{
	struct ViewportSettings_eventOnPostPIEStarted_Parms
	{
		bool isSimulating;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Features/ViewportSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnPostPIEStarted constinit property declarations **********************
	static void NewProp_isSimulating_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isSimulating;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnPostPIEStarted constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnPostPIEStarted Property Definitions *********************************
void Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics::NewProp_isSimulating_SetBit(void* Obj)
{
	((ViewportSettings_eventOnPostPIEStarted_Parms*)Obj)->isSimulating = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics::NewProp_isSimulating = { "isSimulating", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ViewportSettings_eventOnPostPIEStarted_Parms), &Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics::NewProp_isSimulating_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics::NewProp_isSimulating,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics::PropPointers) < 2048);
// ********** End Function OnPostPIEStarted Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UViewportSettings, nullptr, "OnPostPIEStarted", 	Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics::ViewportSettings_eventOnPostPIEStarted_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics::ViewportSettings_eventOnPostPIEStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UViewportSettings::execOnPostPIEStarted)
{
	P_GET_UBOOL(Z_Param_isSimulating);
	P_FINISH;
	P_NATIVE_BEGIN;
	UViewportSettings::OnPostPIEStarted(Z_Param_isSimulating);
	P_NATIVE_END;
}
// ********** End Class UViewportSettings Function OnPostPIEStarted ********************************

// ********** Begin Class UViewportSettings ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UViewportSettings;
UClass* UViewportSettings::GetPrivateStaticClass()
{
	using TClass = UViewportSettings;
	if (!Z_Registration_Info_UClass_UViewportSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ViewportSettings"),
			Z_Registration_Info_UClass_UViewportSettings.InnerSingleton,
			StaticRegisterNativesUViewportSettings,
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
	return Z_Registration_Info_UClass_UViewportSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UViewportSettings_NoRegister()
{
	return UViewportSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UViewportSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Features/ViewportSettings.h" },
		{ "ModuleRelativePath", "Private/Features/ViewportSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UViewportSettings constinit property declarations ************************
// ********** End Class UViewportSettings constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BindEvents"), .Pointer = &UViewportSettings::execBindEvents },
		{ .NameUTF8 = UTF8TEXT("OnPostPIEStarted"), .Pointer = &UViewportSettings::execOnPostPIEStarted },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UViewportSettings_BindEvents, "BindEvents" }, // 3544671629
		{ &Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted, "OnPostPIEStarted" }, // 790104334
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewportSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UViewportSettings_Statics
UObject* (*const Z_Construct_UClass_UViewportSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewportSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewportSettings_Statics::ClassParams = {
	&UViewportSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UViewportSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UViewportSettings_Statics::Class_MetaDataParams)
};
void UViewportSettings::StaticRegisterNativesUViewportSettings()
{
	UClass* Class = UViewportSettings::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UViewportSettings_Statics::Funcs));
}
UClass* Z_Construct_UClass_UViewportSettings()
{
	if (!Z_Registration_Info_UClass_UViewportSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewportSettings.OuterSingleton, Z_Construct_UClass_UViewportSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UViewportSettings.OuterSingleton;
}
UViewportSettings::UViewportSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UViewportSettings);
UViewportSettings::~UViewportSettings() {}
// ********** End Class UViewportSettings **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_Features_ViewportSettings_h__Script_LivestreamingToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UViewportSettings, UViewportSettings::StaticClass, TEXT("UViewportSettings"), &Z_Registration_Info_UClass_UViewportSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewportSettings), 3654696452U) },
	};
}; // Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_Features_ViewportSettings_h__Script_LivestreamingToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_Features_ViewportSettings_h__Script_LivestreamingToolkit_2327555197{
	TEXT("/Script/LivestreamingToolkit"),
	Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_Features_ViewportSettings_h__Script_LivestreamingToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_Features_ViewportSettings_h__Script_LivestreamingToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
