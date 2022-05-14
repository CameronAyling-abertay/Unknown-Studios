// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudiokineticTools/Private/AssetManagement/AkFolderSearchFilter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkFolderSearchFilter() {}
// Cross Module References
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkFolderSearchFilter_NoRegister();
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkFolderSearchFilter();
	CONTENTBROWSER_API UClass* Z_Construct_UClass_UContentBrowserFrontEndFilterExtension();
	UPackage* Z_Construct_UPackage__Script_AudiokineticTools();
// End Cross Module References
	void UAkFolderSearchFilter::StaticRegisterNativesUAkFolderSearchFilter()
	{
	}
	UClass* Z_Construct_UClass_UAkFolderSearchFilter_NoRegister()
	{
		return UAkFolderSearchFilter::StaticClass();
	}
	struct Z_Construct_UClass_UAkFolderSearchFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkFolderSearchFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContentBrowserFrontEndFilterExtension,
		(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkFolderSearchFilter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetManagement/AkFolderSearchFilter.h" },
		{ "ModuleRelativePath", "Private/AssetManagement/AkFolderSearchFilter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkFolderSearchFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkFolderSearchFilter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkFolderSearchFilter_Statics::ClassParams = {
		&UAkFolderSearchFilter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAkFolderSearchFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkFolderSearchFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkFolderSearchFilter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkFolderSearchFilter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkFolderSearchFilter, 1523709077);
	template<> AUDIOKINETICTOOLS_API UClass* StaticClass<UAkFolderSearchFilter>()
	{
		return UAkFolderSearchFilter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkFolderSearchFilter(Z_Construct_UClass_UAkFolderSearchFilter, &UAkFolderSearchFilter::StaticClass, TEXT("/Script/AudiokineticTools"), TEXT("UAkFolderSearchFilter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkFolderSearchFilter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
