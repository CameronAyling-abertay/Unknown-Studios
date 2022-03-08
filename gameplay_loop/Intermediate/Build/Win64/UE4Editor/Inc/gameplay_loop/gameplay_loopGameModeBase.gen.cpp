// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gameplay_loop/gameplay_loopGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodegameplay_loopGameModeBase() {}
// Cross Module References
	GAMEPLAY_LOOP_API UClass* Z_Construct_UClass_Agameplay_loopGameModeBase_NoRegister();
	GAMEPLAY_LOOP_API UClass* Z_Construct_UClass_Agameplay_loopGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_gameplay_loop();
// End Cross Module References
	void Agameplay_loopGameModeBase::StaticRegisterNativesAgameplay_loopGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_Agameplay_loopGameModeBase_NoRegister()
	{
		return Agameplay_loopGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_Agameplay_loopGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Agameplay_loopGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_gameplay_loop,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Agameplay_loopGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "gameplay_loopGameModeBase.h" },
		{ "ModuleRelativePath", "gameplay_loopGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Agameplay_loopGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Agameplay_loopGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Agameplay_loopGameModeBase_Statics::ClassParams = {
		&Agameplay_loopGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Agameplay_loopGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Agameplay_loopGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Agameplay_loopGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Agameplay_loopGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Agameplay_loopGameModeBase, 3008426082);
	template<> GAMEPLAY_LOOP_API UClass* StaticClass<Agameplay_loopGameModeBase>()
	{
		return Agameplay_loopGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Agameplay_loopGameModeBase(Z_Construct_UClass_Agameplay_loopGameModeBase, &Agameplay_loopGameModeBase::StaticClass, TEXT("/Script/gameplay_loop"), TEXT("Agameplay_loopGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Agameplay_loopGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
