// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudiokineticTools/Classes/AssetManagement/SanitizeWwiseObjectPathCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSanitizeWwiseObjectPathCommandlet() {}
// Cross Module References
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_USanitizeWwiseObjectPathCommandlet_NoRegister();
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_USanitizeWwiseObjectPathCommandlet();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_AudiokineticTools();
// End Cross Module References
	void USanitizeWwiseObjectPathCommandlet::StaticRegisterNativesUSanitizeWwiseObjectPathCommandlet()
	{
	}
	UClass* Z_Construct_UClass_USanitizeWwiseObjectPathCommandlet_NoRegister()
	{
		return USanitizeWwiseObjectPathCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_USanitizeWwiseObjectPathCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USanitizeWwiseObjectPathCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USanitizeWwiseObjectPathCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetManagement/SanitizeWwiseObjectPathCommandlet.h" },
		{ "ModuleRelativePath", "Classes/AssetManagement/SanitizeWwiseObjectPathCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USanitizeWwiseObjectPathCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USanitizeWwiseObjectPathCommandlet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USanitizeWwiseObjectPathCommandlet_Statics::ClassParams = {
		&USanitizeWwiseObjectPathCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USanitizeWwiseObjectPathCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USanitizeWwiseObjectPathCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USanitizeWwiseObjectPathCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USanitizeWwiseObjectPathCommandlet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USanitizeWwiseObjectPathCommandlet, 3112892175);
	template<> AUDIOKINETICTOOLS_API UClass* StaticClass<USanitizeWwiseObjectPathCommandlet>()
	{
		return USanitizeWwiseObjectPathCommandlet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USanitizeWwiseObjectPathCommandlet(Z_Construct_UClass_USanitizeWwiseObjectPathCommandlet, &USanitizeWwiseObjectPathCommandlet::StaticClass, TEXT("/Script/AudiokineticTools"), TEXT("USanitizeWwiseObjectPathCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USanitizeWwiseObjectPathCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
