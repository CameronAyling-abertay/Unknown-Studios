// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudiokineticTools/Classes/Factories/ActorFactoryAkAmbientSound.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryAkAmbientSound() {}
// Cross Module References
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UActorFactoryAkAmbientSound_NoRegister();
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UActorFactoryAkAmbientSound();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_AudiokineticTools();
// End Cross Module References
	void UActorFactoryAkAmbientSound::StaticRegisterNativesUActorFactoryAkAmbientSound()
	{
	}
	UClass* Z_Construct_UClass_UActorFactoryAkAmbientSound_NoRegister()
	{
		return UActorFactoryAkAmbientSound::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryAkAmbientSound_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryAkAmbientSound_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryAkAmbientSound_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*------------------------------------------------------------------------------------\n\x09UActorFactoryAkAmbientSound\n------------------------------------------------------------------------------------*/" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Factories/ActorFactoryAkAmbientSound.h" },
		{ "ModuleRelativePath", "Classes/Factories/ActorFactoryAkAmbientSound.h" },
		{ "ToolTip", "UActorFactoryAkAmbientSound" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryAkAmbientSound_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryAkAmbientSound>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryAkAmbientSound_Statics::ClassParams = {
		&UActorFactoryAkAmbientSound::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000830ACu,
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryAkAmbientSound_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryAkAmbientSound_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryAkAmbientSound()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorFactoryAkAmbientSound_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorFactoryAkAmbientSound, 3683904216);
	template<> AUDIOKINETICTOOLS_API UClass* StaticClass<UActorFactoryAkAmbientSound>()
	{
		return UActorFactoryAkAmbientSound::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorFactoryAkAmbientSound(Z_Construct_UClass_UActorFactoryAkAmbientSound, &UActorFactoryAkAmbientSound::StaticClass, TEXT("/Script/AudiokineticTools"), TEXT("UActorFactoryAkAmbientSound"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryAkAmbientSound);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
