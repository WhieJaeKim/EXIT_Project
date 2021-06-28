// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_Exit/Public/CPP_ExitGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_ExitGameModeBase() {}
// Cross Module References
	CPP_EXIT_API UClass* Z_Construct_UClass_ACPP_ExitGameModeBase_NoRegister();
	CPP_EXIT_API UClass* Z_Construct_UClass_ACPP_ExitGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CPP_Exit();
// End Cross Module References
	void ACPP_ExitGameModeBase::StaticRegisterNativesACPP_ExitGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ACPP_ExitGameModeBase_NoRegister()
	{
		return ACPP_ExitGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_ExitGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_ExitGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CPP_Exit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_ExitGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//class CPP_EXIT_API ACPP_ExitGameModeBase : public AGameModeBase\n" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CPP_ExitGameModeBase.h" },
		{ "ModuleRelativePath", "Public/CPP_ExitGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "class CPP_EXIT_API ACPP_ExitGameModeBase : public AGameModeBase" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_ExitGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_ExitGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACPP_ExitGameModeBase_Statics::ClassParams = {
		&ACPP_ExitGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACPP_ExitGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ExitGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_ExitGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACPP_ExitGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACPP_ExitGameModeBase, 1134497624);
	template<> CPP_EXIT_API UClass* StaticClass<ACPP_ExitGameModeBase>()
	{
		return ACPP_ExitGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACPP_ExitGameModeBase(Z_Construct_UClass_ACPP_ExitGameModeBase, &ACPP_ExitGameModeBase::StaticClass, TEXT("/Script/CPP_Exit"), TEXT("ACPP_ExitGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_ExitGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
