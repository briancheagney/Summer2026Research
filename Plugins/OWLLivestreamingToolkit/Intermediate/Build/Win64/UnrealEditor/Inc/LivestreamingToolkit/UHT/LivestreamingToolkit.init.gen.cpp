// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLivestreamingToolkit_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_LivestreamingToolkit;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_LivestreamingToolkit()
	{
		if (!Z_Registration_Info_UPackage__Script_LivestreamingToolkit.OuterSingleton)
		{
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/LivestreamingToolkit",
			nullptr,
			0,
			PKG_CompiledIn | 0x00000000,
			0x4AF30490,
			0xE7D1670C,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_LivestreamingToolkit.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_LivestreamingToolkit.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_LivestreamingToolkit(Z_Construct_UPackage__Script_LivestreamingToolkit, TEXT("/Script/LivestreamingToolkit"), Z_Registration_Info_UPackage__Script_LivestreamingToolkit, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4AF30490, 0xE7D1670C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
