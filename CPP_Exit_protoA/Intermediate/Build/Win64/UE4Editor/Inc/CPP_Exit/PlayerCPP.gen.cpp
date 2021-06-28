// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_Exit/Public/PlayerCPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCPP() {}
// Cross Module References
	CPP_EXIT_API UClass* Z_Construct_UClass_APlayerCPP_NoRegister();
	CPP_EXIT_API UClass* Z_Construct_UClass_APlayerCPP();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_CPP_Exit();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void APlayerCPP::StaticRegisterNativesAPlayerCPP()
	{
	}
	UClass* Z_Construct_UClass_APlayerCPP_NoRegister()
	{
		return APlayerCPP::StaticClass();
	}
	struct Z_Construct_UClass_APlayerCPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_boxComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_boxComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_meshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_meshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_hor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ver_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_moveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_moveSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerCPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_CPP_Exit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCPP_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerCPP.h" },
		{ "ModuleRelativePath", "Public/PlayerCPP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCPP_Statics::NewProp_boxComp_MetaData[] = {
		{ "Category", "Body" },
		{ "Comment", "// ??\xc3\xbc (?\xe6\xb5\xb9 ????)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerCPP.h" },
		{ "ToolTip", "??\xc3\xbc (?\xe6\xb5\xb9 ????)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCPP_Statics::NewProp_boxComp = { "boxComp", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerCPP, boxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCPP_Statics::NewProp_boxComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCPP_Statics::NewProp_boxComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCPP_Statics::NewProp_meshComp_MetaData[] = {
		{ "Category", "Body" },
		{ "Comment", "// ?\xdc\xb0?\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerCPP.h" },
		{ "ToolTip", "?\xdc\xb0?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCPP_Statics::NewProp_meshComp = { "meshComp", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerCPP, meshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCPP_Statics::NewProp_meshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCPP_Statics::NewProp_meshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCPP_Statics::NewProp_hor_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerCPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCPP_Statics::NewProp_hor = { "hor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerCPP, hor), METADATA_PARAMS(Z_Construct_UClass_APlayerCPP_Statics::NewProp_hor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCPP_Statics::NewProp_hor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCPP_Statics::NewProp_ver_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerCPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCPP_Statics::NewProp_ver = { "ver", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerCPP, ver), METADATA_PARAMS(Z_Construct_UClass_APlayerCPP_Statics::NewProp_ver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCPP_Statics::NewProp_ver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCPP_Statics::NewProp_moveSpeed_MetaData[] = {
		{ "Category", "Stat" },
		{ "Comment", "////UE???? speed ???? ?????\xcf\xb5??? ????\n" },
		{ "ModuleRelativePath", "Public/PlayerCPP.h" },
		{ "ToolTip", "/UE???? speed ???? ?????\xcf\xb5??? ????" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCPP_Statics::NewProp_moveSpeed = { "moveSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerCPP, moveSpeed), METADATA_PARAMS(Z_Construct_UClass_APlayerCPP_Statics::NewProp_moveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCPP_Statics::NewProp_moveSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerCPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCPP_Statics::NewProp_boxComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCPP_Statics::NewProp_meshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCPP_Statics::NewProp_hor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCPP_Statics::NewProp_ver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCPP_Statics::NewProp_moveSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerCPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerCPP_Statics::ClassParams = {
		&APlayerCPP::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlayerCPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCPP_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerCPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerCPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerCPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerCPP, 1224052872);
	template<> CPP_EXIT_API UClass* StaticClass<APlayerCPP>()
	{
		return APlayerCPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerCPP(Z_Construct_UClass_APlayerCPP, &APlayerCPP::StaticClass, TEXT("/Script/CPP_Exit"), TEXT("APlayerCPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
