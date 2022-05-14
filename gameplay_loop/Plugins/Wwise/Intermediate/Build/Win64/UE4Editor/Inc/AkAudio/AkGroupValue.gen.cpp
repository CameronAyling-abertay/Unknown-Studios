// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkGroupValue.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkGroupValue() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGroupValue_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGroupValue();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMediaAsset_NoRegister();
// End Cross Module References
	void UAkGroupValue::StaticRegisterNativesUAkGroupValue()
	{
	}
	UClass* Z_Construct_UClass_UAkGroupValue_NoRegister()
	{
		return UAkGroupValue::StaticClass();
	}
	struct Z_Construct_UClass_UAkGroupValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GroupID;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_MediaDependencies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaDependencies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MediaDependencies;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupShortID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_GroupShortID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkGroupValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAudioType,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGroupValue_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkGroupValue.h" },
		{ "ModuleRelativePath", "Classes/AkGroupValue.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGroupValue_Statics::NewProp_GroupID_MetaData[] = {
		{ "Category", "AkGroupValue" },
		{ "ModuleRelativePath", "Classes/AkGroupValue.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkGroupValue_Statics::NewProp_GroupID = { "GroupID", nullptr, (EPropertyFlags)0x0010010800020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkGroupValue, GroupID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UAkGroupValue_Statics::NewProp_GroupID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGroupValue_Statics::NewProp_GroupID_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAkGroupValue_Statics::NewProp_MediaDependencies_Inner = { "MediaDependencies", nullptr, (EPropertyFlags)0x0004000000020000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAkMediaAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGroupValue_Statics::NewProp_MediaDependencies_MetaData[] = {
		{ "Category", "AkGroupValue" },
		{ "ModuleRelativePath", "Classes/AkGroupValue.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAkGroupValue_Statics::NewProp_MediaDependencies = { "MediaDependencies", nullptr, (EPropertyFlags)0x0014000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkGroupValue, MediaDependencies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkGroupValue_Statics::NewProp_MediaDependencies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGroupValue_Statics::NewProp_MediaDependencies_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGroupValue_Statics::NewProp_GroupShortID_MetaData[] = {
		{ "Category", "AkGroupValue" },
		{ "ModuleRelativePath", "Classes/AkGroupValue.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UAkGroupValue_Statics::NewProp_GroupShortID = { "GroupShortID", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkGroupValue, GroupShortID), METADATA_PARAMS(Z_Construct_UClass_UAkGroupValue_Statics::NewProp_GroupShortID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGroupValue_Statics::NewProp_GroupShortID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkGroupValue_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGroupValue_Statics::NewProp_GroupID,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGroupValue_Statics::NewProp_MediaDependencies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGroupValue_Statics::NewProp_MediaDependencies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGroupValue_Statics::NewProp_GroupShortID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkGroupValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkGroupValue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkGroupValue_Statics::ClassParams = {
		&UAkGroupValue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkGroupValue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkGroupValue_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkGroupValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGroupValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkGroupValue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkGroupValue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkGroupValue, 2164001980);
	template<> AKAUDIO_API UClass* StaticClass<UAkGroupValue>()
	{
		return UAkGroupValue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkGroupValue(Z_Construct_UClass_UAkGroupValue, &UAkGroupValue::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkGroupValue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkGroupValue);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkGroupValue)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
