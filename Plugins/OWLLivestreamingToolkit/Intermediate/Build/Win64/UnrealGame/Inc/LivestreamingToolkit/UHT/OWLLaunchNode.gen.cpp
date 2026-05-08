// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ServerAuth/OWLLaunchNode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOWLLaunchNode() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_UOWLLaunchNode();
LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_UOWLLaunchNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_LivestreamingToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOWLLaunchNode ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UOWLLaunchNode;
UClass* UOWLLaunchNode::GetPrivateStaticClass()
{
	using TClass = UOWLLaunchNode;
	if (!Z_Registration_Info_UClass_UOWLLaunchNode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OWLLaunchNode"),
			Z_Registration_Info_UClass_UOWLLaunchNode.InnerSingleton,
			StaticRegisterNativesUOWLLaunchNode,
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
	return Z_Registration_Info_UClass_UOWLLaunchNode.InnerSingleton;
}
UClass* Z_Construct_UClass_UOWLLaunchNode_NoRegister()
{
	return UOWLLaunchNode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOWLLaunchNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "OWL Internal Launch Node" },
		{ "IncludePath", "ServerAuth/OWLLaunchNode.h" },
		{ "ModuleRelativePath", "Private/ServerAuth/OWLLaunchNode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOWLLaunchNode constinit property declarations ***************************
// ********** End Class UOWLLaunchNode constinit property declarations *****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWLLaunchNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UOWLLaunchNode_Statics
UObject* (*const Z_Construct_UClass_UOWLLaunchNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLLaunchNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWLLaunchNode_Statics::ClassParams = {
	&UOWLLaunchNode::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLLaunchNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWLLaunchNode_Statics::Class_MetaDataParams)
};
void UOWLLaunchNode::StaticRegisterNativesUOWLLaunchNode()
{
}
UClass* Z_Construct_UClass_UOWLLaunchNode()
{
	if (!Z_Registration_Info_UClass_UOWLLaunchNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWLLaunchNode.OuterSingleton, Z_Construct_UClass_UOWLLaunchNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWLLaunchNode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOWLLaunchNode);
UOWLLaunchNode::~UOWLLaunchNode() {}
// ********** End Class UOWLLaunchNode *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_ServerAuth_OWLLaunchNode_h__Script_LivestreamingToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWLLaunchNode, UOWLLaunchNode::StaticClass, TEXT("UOWLLaunchNode"), &Z_Registration_Info_UClass_UOWLLaunchNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWLLaunchNode), 1627397944U) },
	};
}; // Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_ServerAuth_OWLLaunchNode_h__Script_LivestreamingToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_ServerAuth_OWLLaunchNode_h__Script_LivestreamingToolkit_115667614{
	TEXT("/Script/LivestreamingToolkit"),
	Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_ServerAuth_OWLLaunchNode_h__Script_LivestreamingToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_ServerAuth_OWLLaunchNode_h__Script_LivestreamingToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
