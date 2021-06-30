// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_Exit/Public/EnemyMove.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyMove() {}
// Cross Module References
	CPP_EXIT_API UClass* Z_Construct_UClass_UEnemyMove_NoRegister();
	CPP_EXIT_API UClass* Z_Construct_UClass_UEnemyMove();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CPP_Exit();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UEnemyMove::StaticRegisterNativesUEnemyMove()
	{
	}
	UClass* Z_Construct_UClass_UEnemyMove_NoRegister()
	{
		return UEnemyMove::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyMove_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dir_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_dir;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyMove_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CPP_Exit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyMove_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "EnemyMove.h" },
		{ "ModuleRelativePath", "Public/EnemyMove.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyMove_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "Stat" },
		{ "Comment", "// ?\xcc\xb5??? ???\xc3\xb5? ?\xd3\xbc???\n// ?\xcc\xb5??\xd3\xb5?\n" },
		{ "ModuleRelativePath", "Public/EnemyMove.h" },
		{ "ToolTip", "?\xcc\xb5??? ???\xc3\xb5? ?\xd3\xbc???\n?\xcc\xb5??\xd3\xb5?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyMove_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyMove, speed), METADATA_PARAMS(Z_Construct_UClass_UEnemyMove_Statics::NewProp_speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyMove_Statics::NewProp_speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyMove_Statics::NewProp_target_MetaData[] = {
		{ "Category", "Target" },
		{ "Comment", "// ?\xca\xbf??\xd3\xbc? : \xc5\xb8??\n" },
		{ "ModuleRelativePath", "Public/EnemyMove.h" },
		{ "ToolTip", "?\xca\xbf??\xd3\xbc? : \xc5\xb8??" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyMove_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyMove, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemyMove_Statics::NewProp_target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyMove_Statics::NewProp_target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyMove_Statics::NewProp_dir_MetaData[] = {
		{ "Category", "Stat" },
		{ "Comment", "// ?????\xce\xb0??\n" },
		{ "ModuleRelativePath", "Public/EnemyMove.h" },
		{ "ToolTip", "?????\xce\xb0??" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnemyMove_Statics::NewProp_dir = { "dir", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyMove, dir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UEnemyMove_Statics::NewProp_dir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyMove_Statics::NewProp_dir_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyMove_Statics::NewProp_speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyMove_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyMove_Statics::NewProp_dir,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyMove_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyMove>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnemyMove_Statics::ClassParams = {
		&UEnemyMove::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnemyMove_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyMove_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemyMove_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyMove_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemyMove()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnemyMove_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnemyMove, 3816074215);
	template<> CPP_EXIT_API UClass* StaticClass<UEnemyMove>()
	{
		return UEnemyMove::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnemyMove(Z_Construct_UClass_UEnemyMove, &UEnemyMove::StaticClass, TEXT("/Script/CPP_Exit"), TEXT("UEnemyMove"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyMove);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
