// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudiokineticTools/Classes/Sequencer/InterpTrackAkAudioEventHelper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackAkAudioEventHelper() {}
// Cross Module References
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UInterpTrackAkAudioEventHelper_NoRegister();
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UInterpTrackAkAudioEventHelper();
	MATINEE_API UClass* Z_Construct_UClass_UInterpTrackHelper();
	UPackage* Z_Construct_UPackage__Script_AudiokineticTools();
// End Cross Module References
	void UInterpTrackAkAudioEventHelper::StaticRegisterNativesUInterpTrackAkAudioEventHelper()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackAkAudioEventHelper_NoRegister()
	{
		return UInterpTrackAkAudioEventHelper::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackAkAudioEventHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackAkAudioEventHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackAkAudioEventHelper_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sequencer/InterpTrackAkAudioEventHelper.h" },
		{ "ModuleRelativePath", "Classes/Sequencer/InterpTrackAkAudioEventHelper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackAkAudioEventHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackAkAudioEventHelper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackAkAudioEventHelper_Statics::ClassParams = {
		&UInterpTrackAkAudioEventHelper::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackAkAudioEventHelper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackAkAudioEventHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackAkAudioEventHelper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackAkAudioEventHelper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackAkAudioEventHelper, 2023019167);
	template<> AUDIOKINETICTOOLS_API UClass* StaticClass<UInterpTrackAkAudioEventHelper>()
	{
		return UInterpTrackAkAudioEventHelper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackAkAudioEventHelper(Z_Construct_UClass_UInterpTrackAkAudioEventHelper, &UInterpTrackAkAudioEventHelper::StaticClass, TEXT("/Script/AudiokineticTools"), TEXT("UInterpTrackAkAudioEventHelper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackAkAudioEventHelper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
