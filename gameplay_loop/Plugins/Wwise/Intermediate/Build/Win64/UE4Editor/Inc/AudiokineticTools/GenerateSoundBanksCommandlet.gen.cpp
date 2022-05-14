// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudiokineticTools/Classes/AssetManagement/GenerateSoundBanksCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenerateSoundBanksCommandlet() {}
// Cross Module References
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UGenerateSoundBanksCommandlet_NoRegister();
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UGenerateSoundBanksCommandlet();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_AudiokineticTools();
// End Cross Module References
	void UGenerateSoundBanksCommandlet::StaticRegisterNativesUGenerateSoundBanksCommandlet()
	{
	}
	UClass* Z_Construct_UClass_UGenerateSoundBanksCommandlet_NoRegister()
	{
		return UGenerateSoundBanksCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UGenerateSoundBanksCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenerateSoundBanksCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateSoundBanksCommandlet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AssetManagement/GenerateSoundBanksCommandlet.h" },
		{ "ModuleRelativePath", "Classes/AssetManagement/GenerateSoundBanksCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenerateSoundBanksCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenerateSoundBanksCommandlet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGenerateSoundBanksCommandlet_Statics::ClassParams = {
		&UGenerateSoundBanksCommandlet::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGenerateSoundBanksCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateSoundBanksCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenerateSoundBanksCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGenerateSoundBanksCommandlet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGenerateSoundBanksCommandlet, 4292840663);
	template<> AUDIOKINETICTOOLS_API UClass* StaticClass<UGenerateSoundBanksCommandlet>()
	{
		return UGenerateSoundBanksCommandlet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGenerateSoundBanksCommandlet(Z_Construct_UClass_UGenerateSoundBanksCommandlet, &UGenerateSoundBanksCommandlet::StaticClass, TEXT("/Script/AudiokineticTools"), TEXT("UGenerateSoundBanksCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenerateSoundBanksCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
