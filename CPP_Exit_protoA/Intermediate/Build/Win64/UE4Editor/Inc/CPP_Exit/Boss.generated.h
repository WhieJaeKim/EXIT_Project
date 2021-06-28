// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPP_EXIT_Boss_generated_h
#error "Boss.generated.h already included, missing '#pragma once' in Boss.h"
#endif
#define CPP_EXIT_Boss_generated_h

#define CPP_Exit_protoA_Source_CPP_Exit_Public_Boss_h_21_SPARSE_DATA
#define CPP_Exit_protoA_Source_CPP_Exit_Public_Boss_h_21_RPC_WRAPPERS
#define CPP_Exit_protoA_Source_CPP_Exit_Public_Boss_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define CPP_Exit_protoA_Source_CPP_Exit_Public_Boss_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoss(); \
	friend struct Z_Construct_UClass_ABoss_Statics; \
public: \
	DECLARE_CLASS(ABoss, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPP_Exit"), NO_API) \
	DECLARE_SERIALIZER(ABoss)


#define CPP_Exit_protoA_Source_CPP_Exit_Public_Boss_h_21_INCLASS \
private: \
	static void StaticRegisterNativesABoss(); \
	friend struct Z_Construct_UClass_ABoss_Statics; \
public: \
	DECLARE_CLASS(ABoss, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPP_Exit"), NO_API) \
	DECLARE_SERIALIZER(ABoss)


#define CPP_Exit_protoA_Source_CPP_Exit_Public_Boss_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABoss(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoss) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoss); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoss); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoss(ABoss&&); \
	NO_API ABoss(const ABoss&); \
public:


#define CPP_Exit_protoA_Source_CPP_Exit_Public_Boss_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoss(ABoss&&); \
	NO_API ABoss(const ABoss&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoss); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoss); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABoss)


#define CPP_Exit_protoA_Source_CPP_Exit_Public_Boss_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mState() { return STRUCT_OFFSET(ABoss, mState); }


#define CPP_Exit_protoA_Source_CPP_Exit_Public_Boss_h_18_PROLOG
#define CPP_Exit_protoA_Source_CPP_Exit_Public_Boss_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPP_Exit_protoA_Source_CPP_Exit_Public_Boss_h_21_PRIVATE_PROPERTY_OFFSET \
	CPP_Exit_protoA_Source_CPP_Exit_Public_Boss_h_21_SPARSE_DATA \
	CPP_Exit_protoA_Source_CPP_Exit_Public_Boss_h_21_RPC_WRAPPERS \
	CPP_Exit_protoA_Source_CPP_Exit_Public_Boss_h_21_INCLASS \
	CPP_Exit_protoA_Source_CPP_Exit_Public_Boss_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CPP_Exit_protoA_Source_CPP_Exit_Public_Boss_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPP_Exit_protoA_Source_CPP_Exit_Public_Boss_h_21_PRIVATE_PROPERTY_OFFSET \
	CPP_Exit_protoA_Source_CPP_Exit_Public_Boss_h_21_SPARSE_DATA \
	CPP_Exit_protoA_Source_CPP_Exit_Public_Boss_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	CPP_Exit_protoA_Source_CPP_Exit_Public_Boss_h_21_INCLASS_NO_PURE_DECLS \
	CPP_Exit_protoA_Source_CPP_Exit_Public_Boss_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP_EXIT_API UClass* StaticClass<class ABoss>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CPP_Exit_protoA_Source_CPP_Exit_Public_Boss_h


#define FOREACH_ENUM_EGAMESTATE(op) \
	op(EGameState::Idle) \
	op(EGameState::Walk) \
	op(EGameState::PatternOne) \
	op(EGameState::PatternTwo) \
	op(EGameState::PatternThree) 

enum class EGameState : uint8;
template<> CPP_EXIT_API UEnum* StaticEnum<EGameState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
