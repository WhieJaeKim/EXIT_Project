// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef CPP_EXIT_Obstacle_generated_h
#error "Obstacle.generated.h already included, missing '#pragma once' in Obstacle.h"
#endif
#define CPP_EXIT_Obstacle_generated_h

#define CPP_Exit_Source_CPP_Exit_Public_Obstacle_h_12_SPARSE_DATA
#define CPP_Exit_Source_CPP_Exit_Public_Obstacle_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCollisionEnter);


#define CPP_Exit_Source_CPP_Exit_Public_Obstacle_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCollisionEnter);


#define CPP_Exit_Source_CPP_Exit_Public_Obstacle_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAObstacle(); \
	friend struct Z_Construct_UClass_AObstacle_Statics; \
public: \
	DECLARE_CLASS(AObstacle, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPP_Exit"), NO_API) \
	DECLARE_SERIALIZER(AObstacle)


#define CPP_Exit_Source_CPP_Exit_Public_Obstacle_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAObstacle(); \
	friend struct Z_Construct_UClass_AObstacle_Statics; \
public: \
	DECLARE_CLASS(AObstacle, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPP_Exit"), NO_API) \
	DECLARE_SERIALIZER(AObstacle)


#define CPP_Exit_Source_CPP_Exit_Public_Obstacle_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AObstacle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AObstacle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObstacle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObstacle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AObstacle(AObstacle&&); \
	NO_API AObstacle(const AObstacle&); \
public:


#define CPP_Exit_Source_CPP_Exit_Public_Obstacle_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AObstacle(AObstacle&&); \
	NO_API AObstacle(const AObstacle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObstacle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObstacle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AObstacle)


#define CPP_Exit_Source_CPP_Exit_Public_Obstacle_h_12_PRIVATE_PROPERTY_OFFSET
#define CPP_Exit_Source_CPP_Exit_Public_Obstacle_h_9_PROLOG
#define CPP_Exit_Source_CPP_Exit_Public_Obstacle_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPP_Exit_Source_CPP_Exit_Public_Obstacle_h_12_PRIVATE_PROPERTY_OFFSET \
	CPP_Exit_Source_CPP_Exit_Public_Obstacle_h_12_SPARSE_DATA \
	CPP_Exit_Source_CPP_Exit_Public_Obstacle_h_12_RPC_WRAPPERS \
	CPP_Exit_Source_CPP_Exit_Public_Obstacle_h_12_INCLASS \
	CPP_Exit_Source_CPP_Exit_Public_Obstacle_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CPP_Exit_Source_CPP_Exit_Public_Obstacle_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPP_Exit_Source_CPP_Exit_Public_Obstacle_h_12_PRIVATE_PROPERTY_OFFSET \
	CPP_Exit_Source_CPP_Exit_Public_Obstacle_h_12_SPARSE_DATA \
	CPP_Exit_Source_CPP_Exit_Public_Obstacle_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CPP_Exit_Source_CPP_Exit_Public_Obstacle_h_12_INCLASS_NO_PURE_DECLS \
	CPP_Exit_Source_CPP_Exit_Public_Obstacle_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP_EXIT_API UClass* StaticClass<class AObstacle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CPP_Exit_Source_CPP_Exit_Public_Obstacle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
