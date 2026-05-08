// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLViewportCapture.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOWLViewportCapture() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
OWLCAMERA_API UClass* Z_Construct_UClass_AOWLViewportCapture();
OWLCAMERA_API UClass* Z_Construct_UClass_AOWLViewportCapture_NoRegister();
OWLCAMERA_API UFunction* Z_Construct_UDelegateFunction_OWLCamera_OnViewportCaptureResized__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OWLCamera();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnViewportCaptureResized *********************************************
struct Z_Construct_UDelegateFunction_OWLCamera_OnViewportCaptureResized__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWLViewportCapture.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnViewportCaptureResized constinit property declarations *************
// ********** End Delegate FOnViewportCaptureResized constinit property declarations ***************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OWLCamera_OnViewportCaptureResized__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OWLCamera, nullptr, "OnViewportCaptureResized__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWLCamera_OnViewportCaptureResized__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OWLCamera_OnViewportCaptureResized__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_OWLCamera_OnViewportCaptureResized__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OWLCamera_OnViewportCaptureResized__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnViewportCaptureResized_DelegateWrapper(const FMulticastScriptDelegate& OnViewportCaptureResized)
{
	OnViewportCaptureResized.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnViewportCaptureResized ***********************************************

// ********** Begin Class AOWLViewportCapture ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AOWLViewportCapture;
UClass* AOWLViewportCapture::GetPrivateStaticClass()
{
	using TClass = AOWLViewportCapture;
	if (!Z_Registration_Info_UClass_AOWLViewportCapture.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OWLViewportCapture"),
			Z_Registration_Info_UClass_AOWLViewportCapture.InnerSingleton,
			StaticRegisterNativesAOWLViewportCapture,
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
	return Z_Registration_Info_UClass_AOWLViewportCapture.InnerSingleton;
}
UClass* Z_Construct_UClass_AOWLViewportCapture_NoRegister()
{
	return AOWLViewportCapture::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AOWLViewportCapture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "OWL Viewport Capture" },
		{ "HideCategories", "Collision Attachment Actor" },
		{ "IncludePath", "OWLViewportCapture.h" },
		{ "ModuleRelativePath", "Public/OWLViewportCapture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureTarget_MetaData[] = {
		{ "Category", "Off World Live Capture Settings" },
		{ "ModuleRelativePath", "Public/OWLViewportCapture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseRendering_MetaData[] = {
		{ "Category", "Off World Live Capture Settings" },
		{ "ModuleRelativePath", "Public/OWLViewportCapture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCaptureWidgets_MetaData[] = {
		{ "Category", "Off World Live Capture Settings" },
		{ "Comment", "/* Capture widgets (Standalone / Packaged / PIE only -- will do nothing in editor) */" },
		{ "ModuleRelativePath", "Public/OWLViewportCapture.h" },
		{ "ToolTip", "Capture widgets (Standalone / Packaged / PIE only -- will do nothing in editor)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTargetResized_MetaData[] = {
		{ "Category", "Off World Live Capture Settings" },
		{ "ModuleRelativePath", "Public/OWLViewportCapture.h" },
		{ "Tooltip", "Event hook for handling updates when the resolution changes. When streaming from a packaged game viewport, this is useful to only start the media output after the initial resize." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFixGamma_MetaData[] = {
		{ "Category", "Off World Live Capture Settings" },
		{ "Comment", "/* Unreal internally works in Linear colorspace then applies sRGB conversion after UI render. Untick this if you require the raw linear values */" },
		{ "ModuleRelativePath", "Public/OWLViewportCapture.h" },
		{ "ToolTip", "Unreal internally works in Linear colorspace then applies sRGB conversion after UI render. Untick this if you require the raw linear values" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntermediateTarget_MetaData[] = {
		{ "HideInDetailPanel", "" },
		{ "ModuleRelativePath", "Public/OWLViewportCapture.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AOWLViewportCapture constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureTarget;
	static void NewProp_PauseRendering_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PauseRendering;
	static void NewProp_bCaptureWidgets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureWidgets;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTargetResized;
	static void NewProp_bFixGamma_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFixGamma;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IntermediateTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AOWLViewportCapture constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWLViewportCapture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AOWLViewportCapture_Statics

// ********** Begin Class AOWLViewportCapture Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_TextureTarget = { "TextureTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWLViewportCapture, TextureTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureTarget_MetaData), NewProp_TextureTarget_MetaData) };
void Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_PauseRendering_SetBit(void* Obj)
{
	((AOWLViewportCapture*)Obj)->PauseRendering = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_PauseRendering = { "PauseRendering", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOWLViewportCapture), &Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_PauseRendering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseRendering_MetaData), NewProp_PauseRendering_MetaData) };
void Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_bCaptureWidgets_SetBit(void* Obj)
{
	((AOWLViewportCapture*)Obj)->bCaptureWidgets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_bCaptureWidgets = { "bCaptureWidgets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOWLViewportCapture), &Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_bCaptureWidgets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCaptureWidgets_MetaData), NewProp_bCaptureWidgets_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_OnTargetResized = { "OnTargetResized", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWLViewportCapture, OnTargetResized), Z_Construct_UDelegateFunction_OWLCamera_OnViewportCaptureResized__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTargetResized_MetaData), NewProp_OnTargetResized_MetaData) }; // 493126268
void Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_bFixGamma_SetBit(void* Obj)
{
	((AOWLViewportCapture*)Obj)->bFixGamma = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_bFixGamma = { "bFixGamma", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOWLViewportCapture), &Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_bFixGamma_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFixGamma_MetaData), NewProp_bFixGamma_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_IntermediateTarget = { "IntermediateTarget", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWLViewportCapture, IntermediateTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntermediateTarget_MetaData), NewProp_IntermediateTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWLViewportCapture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_TextureTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_PauseRendering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_bCaptureWidgets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_OnTargetResized,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_bFixGamma,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_IntermediateTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLViewportCapture_Statics::PropPointers) < 2048);
// ********** End Class AOWLViewportCapture Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_AOWLViewportCapture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OWLCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLViewportCapture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWLViewportCapture_Statics::ClassParams = {
	&AOWLViewportCapture::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AOWLViewportCapture_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AOWLViewportCapture_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLViewportCapture_Statics::Class_MetaDataParams), Z_Construct_UClass_AOWLViewportCapture_Statics::Class_MetaDataParams)
};
void AOWLViewportCapture::StaticRegisterNativesAOWLViewportCapture()
{
}
UClass* Z_Construct_UClass_AOWLViewportCapture()
{
	if (!Z_Registration_Info_UClass_AOWLViewportCapture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWLViewportCapture.OuterSingleton, Z_Construct_UClass_AOWLViewportCapture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOWLViewportCapture.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AOWLViewportCapture);
AOWLViewportCapture::~AOWLViewportCapture() {}
// ********** End Class AOWLViewportCapture ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLViewportCapture_h__Script_OWLCamera_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOWLViewportCapture, AOWLViewportCapture::StaticClass, TEXT("AOWLViewportCapture"), &Z_Registration_Info_UClass_AOWLViewportCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWLViewportCapture), 3204002210U) },
	};
}; // Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLViewportCapture_h__Script_OWLCamera_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLViewportCapture_h__Script_OWLCamera_848022872{
	TEXT("/Script/OWLCamera"),
	Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLViewportCapture_h__Script_OWLCamera_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLViewportCapture_h__Script_OWLCamera_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
