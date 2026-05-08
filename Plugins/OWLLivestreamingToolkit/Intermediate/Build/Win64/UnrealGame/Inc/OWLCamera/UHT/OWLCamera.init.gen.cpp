// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLCamera_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	OWLCAMERA_API UFunction* Z_Construct_UDelegateFunction_OWLCamera_OnCaptureComponentResized__DelegateSignature();
	OWLCAMERA_API UFunction* Z_Construct_UDelegateFunction_OWLCamera_OnConvergencePlaneManipulated__DelegateSignature();
	OWLCAMERA_API UFunction* Z_Construct_UDelegateFunction_OWLCamera_OnSnapshotCompletionDelegate__DelegateSignature();
	OWLCAMERA_API UFunction* Z_Construct_UDelegateFunction_OWLCamera_OnViewportCaptureResized__DelegateSignature();
	OWLCAMERA_API UFunction* Z_Construct_UDelegateFunction_UOWLCaptureComponent_OnConvergenceDistanceChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_OWLCamera;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_OWLCamera()
	{
		if (!Z_Registration_Info_UPackage__Script_OWLCamera.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_OWLCamera_OnCaptureComponentResized__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_OWLCamera_OnConvergencePlaneManipulated__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_OWLCamera_OnSnapshotCompletionDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_OWLCamera_OnViewportCaptureResized__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_UOWLCaptureComponent_OnConvergenceDistanceChanged__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/OWLCamera",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x42EFA00A,
			0xF8CCF876,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_OWLCamera.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_OWLCamera.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_OWLCamera(Z_Construct_UPackage__Script_OWLCamera, TEXT("/Script/OWLCamera"), Z_Registration_Info_UPackage__Script_OWLCamera, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x42EFA00A, 0xF8CCF876));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
