// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SaveGameData/OWLSaveGame.h"

#ifdef LIVESTREAMINGTOOLKIT_OWLSaveGame_generated_h
#error "OWLSaveGame.generated.h already included, missing '#pragma once' in OWLSaveGame.h"
#endif
#define LIVESTREAMINGTOOLKIT_OWLSaveGame_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOWLSaveGame *************************************************************
struct Z_Construct_UClass_UOWLSaveGame_Statics;
LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_UOWLSaveGame_NoRegister();

#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_SaveGameData_OWLSaveGame_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOWLSaveGame(); \
	friend struct ::Z_Construct_UClass_UOWLSaveGame_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVESTREAMINGTOOLKIT_API UClass* ::Z_Construct_UClass_UOWLSaveGame_NoRegister(); \
public: \
	DECLARE_CLASS2(UOWLSaveGame, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LivestreamingToolkit"), Z_Construct_UClass_UOWLSaveGame_NoRegister) \
	DECLARE_SERIALIZER(UOWLSaveGame)


#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_SaveGameData_OWLSaveGame_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOWLSaveGame(UOWLSaveGame&&) = delete; \
	UOWLSaveGame(const UOWLSaveGame&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWLSaveGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWLSaveGame); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOWLSaveGame) \
	NO_API virtual ~UOWLSaveGame();


#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_SaveGameData_OWLSaveGame_h_11_PROLOG
#define FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_SaveGameData_OWLSaveGame_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_SaveGameData_OWLSaveGame_h_14_INCLASS_NO_PURE_DECLS \
	FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_SaveGameData_OWLSaveGame_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOWLSaveGame;

// ********** End Class UOWLSaveGame ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CI_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_SaveGameData_OWLSaveGame_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
