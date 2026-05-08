// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLBlueprintFunctionLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOWLBlueprintFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_UOWLBlueprintFunctionLibrary();
LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_UOWLBlueprintFunctionLibrary_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_LivestreamingToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOWLBlueprintFunctionLibrary Function DrawUMGToRenderTarget **************
struct Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics
{
	struct OWLBlueprintFunctionLibrary_eventDrawUMGToRenderTarget_Parms
	{
		UUserWidget* UMGWidget;
		FIntPoint Size;
		float DeltaTime;
		UTextureRenderTarget2D* RenderTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWL Livestreaming Toolkit" },
		{ "Comment", "/**\n\x09 * Use this to render any UMG Widgets\n\x09 */" },
		{ "ModuleRelativePath", "Public/OWLBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Use this to render any UMG Widgets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UMGWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function DrawUMGToRenderTarget constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UMGWidget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DrawUMGToRenderTarget constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DrawUMGToRenderTarget Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::NewProp_UMGWidget = { "UMGWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLBlueprintFunctionLibrary_eventDrawUMGToRenderTarget_Parms, UMGWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UMGWidget_MetaData), NewProp_UMGWidget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLBlueprintFunctionLibrary_eventDrawUMGToRenderTarget_Parms, Size), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLBlueprintFunctionLibrary_eventDrawUMGToRenderTarget_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLBlueprintFunctionLibrary_eventDrawUMGToRenderTarget_Parms, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::NewProp_UMGWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::NewProp_RenderTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::PropPointers) < 2048);
// ********** End Function DrawUMGToRenderTarget Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOWLBlueprintFunctionLibrary, nullptr, "DrawUMGToRenderTarget", 	Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::OWLBlueprintFunctionLibrary_eventDrawUMGToRenderTarget_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::OWLBlueprintFunctionLibrary_eventDrawUMGToRenderTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLBlueprintFunctionLibrary::execDrawUMGToRenderTarget)
{
	P_GET_OBJECT(UUserWidget,Z_Param_UMGWidget);
	P_GET_STRUCT(FIntPoint,Z_Param_Size);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_GET_OBJECT_REF(UTextureRenderTarget2D,Z_Param_Out_RenderTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOWLBlueprintFunctionLibrary::DrawUMGToRenderTarget(Z_Param_UMGWidget,Z_Param_Size,Z_Param_DeltaTime,Z_Param_Out_RenderTarget);
	P_NATIVE_END;
}
// ********** End Class UOWLBlueprintFunctionLibrary Function DrawUMGToRenderTarget ****************

// ********** Begin Class UOWLBlueprintFunctionLibrary Function GetIsEditorViewportRendering *******
struct Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics
{
	struct OWLBlueprintFunctionLibrary_eventGetIsEditorViewportRendering_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWL Livestreaming Toolkit" },
		{ "Comment", "/**\n\x09* rendering status of the viewport that renders at Editor time\n\x09*/" },
		{ "ModuleRelativePath", "Public/OWLBlueprintFunctionLibrary.h" },
		{ "ToolTip", "rendering status of the viewport that renders at Editor time" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetIsEditorViewportRendering constinit property declarations **********
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetIsEditorViewportRendering constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetIsEditorViewportRendering Property Definitions *********************
void Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OWLBlueprintFunctionLibrary_eventGetIsEditorViewportRendering_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWLBlueprintFunctionLibrary_eventGetIsEditorViewportRendering_Parms), &Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics::PropPointers) < 2048);
// ********** End Function GetIsEditorViewportRendering Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOWLBlueprintFunctionLibrary, nullptr, "GetIsEditorViewportRendering", 	Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics::OWLBlueprintFunctionLibrary_eventGetIsEditorViewportRendering_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics::OWLBlueprintFunctionLibrary_eventGetIsEditorViewportRendering_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsEditorViewportRendering()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsEditorViewportRendering_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLBlueprintFunctionLibrary::execGetIsEditorViewportRendering)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOWLBlueprintFunctionLibrary::GetIsEditorViewportRendering();
	P_NATIVE_END;
}
// ********** End Class UOWLBlueprintFunctionLibrary Function GetIsEditorViewportRendering *********

// ********** Begin Class UOWLBlueprintFunctionLibrary Function GetIsRuntimeViewportRendering ******
struct Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics
{
	struct OWLBlueprintFunctionLibrary_eventGetIsRuntimeViewportRendering_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWL Livestreaming Toolkit" },
		{ "Comment", "/**\n\x09* rendering status of the viewport at PIE or Standalone game time\n\x09*/" },
		{ "ModuleRelativePath", "Public/OWLBlueprintFunctionLibrary.h" },
		{ "ToolTip", "rendering status of the viewport at PIE or Standalone game time" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetIsRuntimeViewportRendering constinit property declarations *********
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetIsRuntimeViewportRendering constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetIsRuntimeViewportRendering Property Definitions ********************
void Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OWLBlueprintFunctionLibrary_eventGetIsRuntimeViewportRendering_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWLBlueprintFunctionLibrary_eventGetIsRuntimeViewportRendering_Parms), &Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics::PropPointers) < 2048);
// ********** End Function GetIsRuntimeViewportRendering Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOWLBlueprintFunctionLibrary, nullptr, "GetIsRuntimeViewportRendering", 	Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics::OWLBlueprintFunctionLibrary_eventGetIsRuntimeViewportRendering_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics::OWLBlueprintFunctionLibrary_eventGetIsRuntimeViewportRendering_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsRuntimeViewportRendering()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsRuntimeViewportRendering_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLBlueprintFunctionLibrary::execGetIsRuntimeViewportRendering)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOWLBlueprintFunctionLibrary::GetIsRuntimeViewportRendering();
	P_NATIVE_END;
}
// ********** End Class UOWLBlueprintFunctionLibrary Function GetIsRuntimeViewportRendering ********

// ********** Begin Class UOWLBlueprintFunctionLibrary Function InitOWLApplicationLicense **********
struct Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_InitOWLApplicationLicense_Statics
{
	struct OWLBlueprintFunctionLibrary_eventInitOWLApplicationLicense_Parms
	{
		FString ApplicationAPICode;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWL Livestreaming Toolkit" },
		{ "Comment", "/**\n\x09 This function will validate an Application License.\n\x09 It is best called as early as possible in the Unreal Lifecycle.\n\x09 We recommend calling it on `GameInstance::Init()` - see our Knowledgebase article.\n\n\x09 It should be accompanied by the following entry in `Config/DefaultGame.ini`\n\x09 which will prevent the activation of the default OWL authentication process.\n\x09 ```\n\x09 [/Script/OffWorldLive]\n     bUseApplicationLicense=1\n\x09 ```\n\n\x09 N.B. This function will only authenticate in packaged games\n\x09*/" },
		{ "ModuleRelativePath", "Public/OWLBlueprintFunctionLibrary.h" },
		{ "ToolTip", "This function will validate an Application License.\nIt is best called as early as possible in the Unreal Lifecycle.\nWe recommend calling it on `GameInstance::Init()` - see our Knowledgebase article.\n\nIt should be accompanied by the following entry in `Config/DefaultGame.ini`\nwhich will prevent the activation of the default OWL authentication process.\n```\n[/Script/OffWorldLive]\nbUseApplicationLicense=1\n```\n\nN.B. This function will only authenticate in packaged games" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitOWLApplicationLicense constinit property declarations *************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ApplicationAPICode;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitOWLApplicationLicense constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitOWLApplicationLicense Property Definitions ************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_InitOWLApplicationLicense_Statics::NewProp_ApplicationAPICode = { "ApplicationAPICode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLBlueprintFunctionLibrary_eventInitOWLApplicationLicense_Parms, ApplicationAPICode), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_InitOWLApplicationLicense_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OWLBlueprintFunctionLibrary_eventInitOWLApplicationLicense_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_InitOWLApplicationLicense_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWLBlueprintFunctionLibrary_eventInitOWLApplicationLicense_Parms), &Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_InitOWLApplicationLicense_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_InitOWLApplicationLicense_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_InitOWLApplicationLicense_Statics::NewProp_ApplicationAPICode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_InitOWLApplicationLicense_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_InitOWLApplicationLicense_Statics::PropPointers) < 2048);
// ********** End Function InitOWLApplicationLicense Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_InitOWLApplicationLicense_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOWLBlueprintFunctionLibrary, nullptr, "InitOWLApplicationLicense", 	Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_InitOWLApplicationLicense_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_InitOWLApplicationLicense_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_InitOWLApplicationLicense_Statics::OWLBlueprintFunctionLibrary_eventInitOWLApplicationLicense_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_InitOWLApplicationLicense_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_InitOWLApplicationLicense_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_InitOWLApplicationLicense_Statics::OWLBlueprintFunctionLibrary_eventInitOWLApplicationLicense_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_InitOWLApplicationLicense()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_InitOWLApplicationLicense_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLBlueprintFunctionLibrary::execInitOWLApplicationLicense)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ApplicationAPICode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOWLBlueprintFunctionLibrary::InitOWLApplicationLicense(Z_Param_ApplicationAPICode);
	P_NATIVE_END;
}
// ********** End Class UOWLBlueprintFunctionLibrary Function InitOWLApplicationLicense ************

// ********** Begin Class UOWLBlueprintFunctionLibrary Function InstallLicense *********************
struct Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_InstallLicense_Statics
{
	struct OWLBlueprintFunctionLibrary_eventInstallLicense_Parms
	{
		FString LicenseCode;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWL Livestreaming Toolkit" },
		{ "Comment", "/**\n\x09* Install a node-locked or metered license to this workstation\n\x09*/" },
		{ "ModuleRelativePath", "Public/OWLBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Install a node-locked or metered license to this workstation" },
	};
#endif // WITH_METADATA

// ********** Begin Function InstallLicense constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_LicenseCode;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InstallLicense constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InstallLicense Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_InstallLicense_Statics::NewProp_LicenseCode = { "LicenseCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLBlueprintFunctionLibrary_eventInstallLicense_Parms, LicenseCode), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_InstallLicense_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OWLBlueprintFunctionLibrary_eventInstallLicense_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_InstallLicense_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWLBlueprintFunctionLibrary_eventInstallLicense_Parms), &Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_InstallLicense_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_InstallLicense_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_InstallLicense_Statics::NewProp_LicenseCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_InstallLicense_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_InstallLicense_Statics::PropPointers) < 2048);
// ********** End Function InstallLicense Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_InstallLicense_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOWLBlueprintFunctionLibrary, nullptr, "InstallLicense", 	Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_InstallLicense_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_InstallLicense_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_InstallLicense_Statics::OWLBlueprintFunctionLibrary_eventInstallLicense_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_InstallLicense_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_InstallLicense_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_InstallLicense_Statics::OWLBlueprintFunctionLibrary_eventInstallLicense_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_InstallLicense()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_InstallLicense_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLBlueprintFunctionLibrary::execInstallLicense)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_LicenseCode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOWLBlueprintFunctionLibrary::InstallLicense(Z_Param_LicenseCode);
	P_NATIVE_END;
}
// ********** End Class UOWLBlueprintFunctionLibrary Function InstallLicense ***********************

// ********** Begin Class UOWLBlueprintFunctionLibrary Function LaunchLicenseUtility ***************
struct Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_LaunchLicenseUtility_Statics
{
	struct OWLBlueprintFunctionLibrary_eventLaunchLicenseUtility_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWL Livestreaming Toolkit" },
		{ "Comment", "/**\n\x09* Launch the Licensing Utility to manage your licenses\n\x09*/" },
		{ "ModuleRelativePath", "Public/OWLBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Launch the Licensing Utility to manage your licenses" },
	};
#endif // WITH_METADATA

// ********** Begin Function LaunchLicenseUtility constinit property declarations ******************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LaunchLicenseUtility constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LaunchLicenseUtility Property Definitions *****************************
void Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_LaunchLicenseUtility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OWLBlueprintFunctionLibrary_eventLaunchLicenseUtility_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_LaunchLicenseUtility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWLBlueprintFunctionLibrary_eventLaunchLicenseUtility_Parms), &Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_LaunchLicenseUtility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_LaunchLicenseUtility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_LaunchLicenseUtility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_LaunchLicenseUtility_Statics::PropPointers) < 2048);
// ********** End Function LaunchLicenseUtility Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_LaunchLicenseUtility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOWLBlueprintFunctionLibrary, nullptr, "LaunchLicenseUtility", 	Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_LaunchLicenseUtility_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_LaunchLicenseUtility_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_LaunchLicenseUtility_Statics::OWLBlueprintFunctionLibrary_eventLaunchLicenseUtility_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_LaunchLicenseUtility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_LaunchLicenseUtility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_LaunchLicenseUtility_Statics::OWLBlueprintFunctionLibrary_eventLaunchLicenseUtility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_LaunchLicenseUtility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_LaunchLicenseUtility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLBlueprintFunctionLibrary::execLaunchLicenseUtility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOWLBlueprintFunctionLibrary::LaunchLicenseUtility();
	P_NATIVE_END;
}
// ********** End Class UOWLBlueprintFunctionLibrary Function LaunchLicenseUtility *****************

// ********** Begin Class UOWLBlueprintFunctionLibrary Function OWLLogIn ***************************
struct Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogIn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWL Livestreaming Toolkit" },
		{ "Comment", "/**\n\x09* bind this function to the key of your choice to create a way to log in in packaged games\n\x09*/" },
		{ "ModuleRelativePath", "Public/OWLBlueprintFunctionLibrary.h" },
		{ "ToolTip", "bind this function to the key of your choice to create a way to log in in packaged games" },
	};
#endif // WITH_METADATA

// ********** Begin Function OWLLogIn constinit property declarations ******************************
// ********** End Function OWLLogIn constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogIn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOWLBlueprintFunctionLibrary, nullptr, "OWLLogIn", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogIn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogIn_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogIn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogIn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLBlueprintFunctionLibrary::execOWLLogIn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UOWLBlueprintFunctionLibrary::OWLLogIn();
	P_NATIVE_END;
}
// ********** End Class UOWLBlueprintFunctionLibrary Function OWLLogIn *****************************

// ********** Begin Class UOWLBlueprintFunctionLibrary Function OWLLogInStatus *********************
struct Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogInStatus_Statics
{
	struct OWLBlueprintFunctionLibrary_eventOWLLogInStatus_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWL Livestreaming Toolkit" },
		{ "Comment", "/**\n\x09* this function will return true if the user is logged in and false if they are logged out\n\x09*/" },
		{ "ModuleRelativePath", "Public/OWLBlueprintFunctionLibrary.h" },
		{ "ToolTip", "this function will return true if the user is logged in and false if they are logged out" },
	};
#endif // WITH_METADATA

// ********** Begin Function OWLLogInStatus constinit property declarations ************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OWLLogInStatus constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OWLLogInStatus Property Definitions ***********************************
void Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogInStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OWLBlueprintFunctionLibrary_eventOWLLogInStatus_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogInStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWLBlueprintFunctionLibrary_eventOWLLogInStatus_Parms), &Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogInStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogInStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogInStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogInStatus_Statics::PropPointers) < 2048);
// ********** End Function OWLLogInStatus Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogInStatus_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOWLBlueprintFunctionLibrary, nullptr, "OWLLogInStatus", 	Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogInStatus_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogInStatus_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogInStatus_Statics::OWLBlueprintFunctionLibrary_eventOWLLogInStatus_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogInStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogInStatus_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogInStatus_Statics::OWLBlueprintFunctionLibrary_eventOWLLogInStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogInStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogInStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLBlueprintFunctionLibrary::execOWLLogInStatus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOWLBlueprintFunctionLibrary::OWLLogInStatus();
	P_NATIVE_END;
}
// ********** End Class UOWLBlueprintFunctionLibrary Function OWLLogInStatus ***********************

// ********** Begin Class UOWLBlueprintFunctionLibrary Function OWLLogOut **************************
struct Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogOut_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWL Livestreaming Toolkit" },
		{ "Comment", "/**\n\x09* bind this function to the key of your choice to create a way to log in in packaged games\n\x09*/" },
		{ "ModuleRelativePath", "Public/OWLBlueprintFunctionLibrary.h" },
		{ "ToolTip", "bind this function to the key of your choice to create a way to log in in packaged games" },
	};
#endif // WITH_METADATA

// ********** Begin Function OWLLogOut constinit property declarations *****************************
// ********** End Function OWLLogOut constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogOut_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOWLBlueprintFunctionLibrary, nullptr, "OWLLogOut", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogOut_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogOut()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogOut_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLBlueprintFunctionLibrary::execOWLLogOut)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UOWLBlueprintFunctionLibrary::OWLLogOut();
	P_NATIVE_END;
}
// ********** End Class UOWLBlueprintFunctionLibrary Function OWLLogOut ****************************

// ********** Begin Class UOWLBlueprintFunctionLibrary Function SetEditorViewportRendering *********
struct Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetEditorViewportRendering_Statics
{
	struct OWLBlueprintFunctionLibrary_eventSetEditorViewportRendering_Parms
	{
		bool EnableViewportRendering;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWL Livestreaming Toolkit" },
		{ "Comment", "/**\n\x09* enable/ disable the viewport that renders at Editor time\n\x09*/" },
		{ "ModuleRelativePath", "Public/OWLBlueprintFunctionLibrary.h" },
		{ "ToolTip", "enable/ disable the viewport that renders at Editor time" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetEditorViewportRendering constinit property declarations ************
	static void NewProp_EnableViewportRendering_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableViewportRendering;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetEditorViewportRendering constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetEditorViewportRendering Property Definitions ***********************
void Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetEditorViewportRendering_Statics::NewProp_EnableViewportRendering_SetBit(void* Obj)
{
	((OWLBlueprintFunctionLibrary_eventSetEditorViewportRendering_Parms*)Obj)->EnableViewportRendering = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetEditorViewportRendering_Statics::NewProp_EnableViewportRendering = { "EnableViewportRendering", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWLBlueprintFunctionLibrary_eventSetEditorViewportRendering_Parms), &Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetEditorViewportRendering_Statics::NewProp_EnableViewportRendering_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetEditorViewportRendering_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetEditorViewportRendering_Statics::NewProp_EnableViewportRendering,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetEditorViewportRendering_Statics::PropPointers) < 2048);
// ********** End Function SetEditorViewportRendering Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetEditorViewportRendering_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOWLBlueprintFunctionLibrary, nullptr, "SetEditorViewportRendering", 	Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetEditorViewportRendering_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetEditorViewportRendering_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetEditorViewportRendering_Statics::OWLBlueprintFunctionLibrary_eventSetEditorViewportRendering_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetEditorViewportRendering_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetEditorViewportRendering_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetEditorViewportRendering_Statics::OWLBlueprintFunctionLibrary_eventSetEditorViewportRendering_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetEditorViewportRendering()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetEditorViewportRendering_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLBlueprintFunctionLibrary::execSetEditorViewportRendering)
{
	P_GET_UBOOL(Z_Param_EnableViewportRendering);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOWLBlueprintFunctionLibrary::SetEditorViewportRendering(Z_Param_EnableViewportRendering);
	P_NATIVE_END;
}
// ********** End Class UOWLBlueprintFunctionLibrary Function SetEditorViewportRendering ***********

// ********** Begin Class UOWLBlueprintFunctionLibrary Function SetRuntimeViewportRendering ********
struct Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetRuntimeViewportRendering_Statics
{
	struct OWLBlueprintFunctionLibrary_eventSetRuntimeViewportRendering_Parms
	{
		bool EnableViewportRendering;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWL Livestreaming Toolkit" },
		{ "Comment", "/**\n\x09* enable/ disable the viewport that renders at PIE or Standalone game time\n\x09*/" },
		{ "ModuleRelativePath", "Public/OWLBlueprintFunctionLibrary.h" },
		{ "ToolTip", "enable/ disable the viewport that renders at PIE or Standalone game time" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetRuntimeViewportRendering constinit property declarations ***********
	static void NewProp_EnableViewportRendering_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableViewportRendering;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetRuntimeViewportRendering constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetRuntimeViewportRendering Property Definitions **********************
void Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetRuntimeViewportRendering_Statics::NewProp_EnableViewportRendering_SetBit(void* Obj)
{
	((OWLBlueprintFunctionLibrary_eventSetRuntimeViewportRendering_Parms*)Obj)->EnableViewportRendering = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetRuntimeViewportRendering_Statics::NewProp_EnableViewportRendering = { "EnableViewportRendering", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWLBlueprintFunctionLibrary_eventSetRuntimeViewportRendering_Parms), &Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetRuntimeViewportRendering_Statics::NewProp_EnableViewportRendering_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetRuntimeViewportRendering_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetRuntimeViewportRendering_Statics::NewProp_EnableViewportRendering,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetRuntimeViewportRendering_Statics::PropPointers) < 2048);
// ********** End Function SetRuntimeViewportRendering Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetRuntimeViewportRendering_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOWLBlueprintFunctionLibrary, nullptr, "SetRuntimeViewportRendering", 	Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetRuntimeViewportRendering_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetRuntimeViewportRendering_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetRuntimeViewportRendering_Statics::OWLBlueprintFunctionLibrary_eventSetRuntimeViewportRendering_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetRuntimeViewportRendering_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetRuntimeViewportRendering_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetRuntimeViewportRendering_Statics::OWLBlueprintFunctionLibrary_eventSetRuntimeViewportRendering_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetRuntimeViewportRendering()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetRuntimeViewportRendering_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLBlueprintFunctionLibrary::execSetRuntimeViewportRendering)
{
	P_GET_UBOOL(Z_Param_EnableViewportRendering);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOWLBlueprintFunctionLibrary::SetRuntimeViewportRendering(Z_Param_EnableViewportRendering);
	P_NATIVE_END;
}
// ********** End Class UOWLBlueprintFunctionLibrary Function SetRuntimeViewportRendering **********

// ********** Begin Class UOWLBlueprintFunctionLibrary Function ToggleEditorViewportRendering ******
struct Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_ToggleEditorViewportRendering_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWL Livestreaming Toolkit" },
		{ "Comment", "/**\n\x09* toggle the viewport that renders at Editor time\n\x09*/" },
		{ "ModuleRelativePath", "Public/OWLBlueprintFunctionLibrary.h" },
		{ "ToolTip", "toggle the viewport that renders at Editor time" },
	};
#endif // WITH_METADATA

// ********** Begin Function ToggleEditorViewportRendering constinit property declarations *********
// ********** End Function ToggleEditorViewportRendering constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_ToggleEditorViewportRendering_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOWLBlueprintFunctionLibrary, nullptr, "ToggleEditorViewportRendering", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_ToggleEditorViewportRendering_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_ToggleEditorViewportRendering_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_ToggleEditorViewportRendering()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_ToggleEditorViewportRendering_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLBlueprintFunctionLibrary::execToggleEditorViewportRendering)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UOWLBlueprintFunctionLibrary::ToggleEditorViewportRendering();
	P_NATIVE_END;
}
// ********** End Class UOWLBlueprintFunctionLibrary Function ToggleEditorViewportRendering ********

// ********** Begin Class UOWLBlueprintFunctionLibrary Function ToggleRuntimeViewportRendering *****
struct Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_ToggleRuntimeViewportRendering_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWL Livestreaming Toolkit" },
		{ "Comment", "/**\n\x09* toggle the viewport that render at PIE or Standalone game time\n\x09*/" },
		{ "ModuleRelativePath", "Public/OWLBlueprintFunctionLibrary.h" },
		{ "ToolTip", "toggle the viewport that render at PIE or Standalone game time" },
	};
#endif // WITH_METADATA

// ********** Begin Function ToggleRuntimeViewportRendering constinit property declarations ********
// ********** End Function ToggleRuntimeViewportRendering constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_ToggleRuntimeViewportRendering_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOWLBlueprintFunctionLibrary, nullptr, "ToggleRuntimeViewportRendering", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_ToggleRuntimeViewportRendering_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_ToggleRuntimeViewportRendering_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_ToggleRuntimeViewportRendering()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_ToggleRuntimeViewportRendering_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLBlueprintFunctionLibrary::execToggleRuntimeViewportRendering)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UOWLBlueprintFunctionLibrary::ToggleRuntimeViewportRendering();
	P_NATIVE_END;
}
// ********** End Class UOWLBlueprintFunctionLibrary Function ToggleRuntimeViewportRendering *******

// ********** Begin Class UOWLBlueprintFunctionLibrary *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UOWLBlueprintFunctionLibrary;
UClass* UOWLBlueprintFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UOWLBlueprintFunctionLibrary;
	if (!Z_Registration_Info_UClass_UOWLBlueprintFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OWLBlueprintFunctionLibrary"),
			Z_Registration_Info_UClass_UOWLBlueprintFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUOWLBlueprintFunctionLibrary,
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
	return Z_Registration_Info_UClass_UOWLBlueprintFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UOWLBlueprintFunctionLibrary_NoRegister()
{
	return UOWLBlueprintFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOWLBlueprintFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "OWLBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/OWLBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOWLBlueprintFunctionLibrary constinit property declarations *************
// ********** End Class UOWLBlueprintFunctionLibrary constinit property declarations ***************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DrawUMGToRenderTarget"), .Pointer = &UOWLBlueprintFunctionLibrary::execDrawUMGToRenderTarget },
		{ .NameUTF8 = UTF8TEXT("GetIsEditorViewportRendering"), .Pointer = &UOWLBlueprintFunctionLibrary::execGetIsEditorViewportRendering },
		{ .NameUTF8 = UTF8TEXT("GetIsRuntimeViewportRendering"), .Pointer = &UOWLBlueprintFunctionLibrary::execGetIsRuntimeViewportRendering },
		{ .NameUTF8 = UTF8TEXT("InitOWLApplicationLicense"), .Pointer = &UOWLBlueprintFunctionLibrary::execInitOWLApplicationLicense },
		{ .NameUTF8 = UTF8TEXT("InstallLicense"), .Pointer = &UOWLBlueprintFunctionLibrary::execInstallLicense },
		{ .NameUTF8 = UTF8TEXT("LaunchLicenseUtility"), .Pointer = &UOWLBlueprintFunctionLibrary::execLaunchLicenseUtility },
		{ .NameUTF8 = UTF8TEXT("OWLLogIn"), .Pointer = &UOWLBlueprintFunctionLibrary::execOWLLogIn },
		{ .NameUTF8 = UTF8TEXT("OWLLogInStatus"), .Pointer = &UOWLBlueprintFunctionLibrary::execOWLLogInStatus },
		{ .NameUTF8 = UTF8TEXT("OWLLogOut"), .Pointer = &UOWLBlueprintFunctionLibrary::execOWLLogOut },
		{ .NameUTF8 = UTF8TEXT("SetEditorViewportRendering"), .Pointer = &UOWLBlueprintFunctionLibrary::execSetEditorViewportRendering },
		{ .NameUTF8 = UTF8TEXT("SetRuntimeViewportRendering"), .Pointer = &UOWLBlueprintFunctionLibrary::execSetRuntimeViewportRendering },
		{ .NameUTF8 = UTF8TEXT("ToggleEditorViewportRendering"), .Pointer = &UOWLBlueprintFunctionLibrary::execToggleEditorViewportRendering },
		{ .NameUTF8 = UTF8TEXT("ToggleRuntimeViewportRendering"), .Pointer = &UOWLBlueprintFunctionLibrary::execToggleRuntimeViewportRendering },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_DrawUMGToRenderTarget, "DrawUMGToRenderTarget" }, // 846685338
		{ &Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsEditorViewportRendering, "GetIsEditorViewportRendering" }, // 2593543429
		{ &Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_GetIsRuntimeViewportRendering, "GetIsRuntimeViewportRendering" }, // 458915769
		{ &Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_InitOWLApplicationLicense, "InitOWLApplicationLicense" }, // 1987913772
		{ &Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_InstallLicense, "InstallLicense" }, // 4178911744
		{ &Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_LaunchLicenseUtility, "LaunchLicenseUtility" }, // 2459444746
		{ &Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogIn, "OWLLogIn" }, // 4015430483
		{ &Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogInStatus, "OWLLogInStatus" }, // 4199689766
		{ &Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_OWLLogOut, "OWLLogOut" }, // 2293493110
		{ &Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetEditorViewportRendering, "SetEditorViewportRendering" }, // 1411420129
		{ &Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_SetRuntimeViewportRendering, "SetRuntimeViewportRendering" }, // 1516141276
		{ &Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_ToggleEditorViewportRendering, "ToggleEditorViewportRendering" }, // 4225573354
		{ &Z_Construct_UFunction_UOWLBlueprintFunctionLibrary_ToggleRuntimeViewportRendering, "ToggleRuntimeViewportRendering" }, // 320323375
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWLBlueprintFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UOWLBlueprintFunctionLibrary_Statics
UObject* (*const Z_Construct_UClass_UOWLBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLBlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWLBlueprintFunctionLibrary_Statics::ClassParams = {
	&UOWLBlueprintFunctionLibrary::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLBlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWLBlueprintFunctionLibrary_Statics::Class_MetaDataParams)
};
void UOWLBlueprintFunctionLibrary::StaticRegisterNativesUOWLBlueprintFunctionLibrary()
{
	UClass* Class = UOWLBlueprintFunctionLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UOWLBlueprintFunctionLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UOWLBlueprintFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UOWLBlueprintFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWLBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UOWLBlueprintFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWLBlueprintFunctionLibrary.OuterSingleton;
}
UOWLBlueprintFunctionLibrary::UOWLBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOWLBlueprintFunctionLibrary);
UOWLBlueprintFunctionLibrary::~UOWLBlueprintFunctionLibrary() {}
// ********** End Class UOWLBlueprintFunctionLibrary ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLBlueprintFunctionLibrary_h__Script_LivestreamingToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWLBlueprintFunctionLibrary, UOWLBlueprintFunctionLibrary::StaticClass, TEXT("UOWLBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UOWLBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWLBlueprintFunctionLibrary), 445653282U) },
	};
}; // Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLBlueprintFunctionLibrary_h__Script_LivestreamingToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLBlueprintFunctionLibrary_h__Script_LivestreamingToolkit_1100677099{
	TEXT("/Script/LivestreamingToolkit"),
	Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLBlueprintFunctionLibrary_h__Script_LivestreamingToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_OWLBlueprintFunctionLibrary_h__Script_LivestreamingToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
