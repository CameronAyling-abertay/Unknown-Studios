// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkAssetBase.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAssetBase() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetData_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetDataWithMedia_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetDataWithMedia();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMediaAsset_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetPlatformData_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetPlatformData();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetBase_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetBase();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType();
// End Cross Module References
	void UAkAssetData::StaticRegisterNativesUAkAssetData()
	{
	}
	UClass* Z_Construct_UClass_UAkAssetData_NoRegister()
	{
		return UAkAssetData::StaticClass();
	}
	struct Z_Construct_UClass_UAkAssetData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedHash_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_CachedHash;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAssetData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkAssetBase.h" },
		{ "ModuleRelativePath", "Classes/AkAssetBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetData_Statics::NewProp_CachedHash_MetaData[] = {
		{ "Category", "AkAssetBase" },
		{ "ModuleRelativePath", "Classes/AkAssetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UAkAssetData_Statics::NewProp_CachedHash = { "CachedHash", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAssetData, CachedHash), METADATA_PARAMS(Z_Construct_UClass_UAkAssetData_Statics::NewProp_CachedHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetData_Statics::NewProp_CachedHash_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAssetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetData_Statics::NewProp_CachedHash,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAssetData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAssetData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkAssetData_Statics::ClassParams = {
		&UAkAssetData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkAssetData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAssetData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAssetData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkAssetData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkAssetData, 4212096157);
	template<> AKAUDIO_API UClass* StaticClass<UAkAssetData>()
	{
		return UAkAssetData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkAssetData(Z_Construct_UClass_UAkAssetData, &UAkAssetData::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkAssetData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAssetData);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkAssetData)
	void UAkAssetDataWithMedia::StaticRegisterNativesUAkAssetDataWithMedia()
	{
	}
	UClass* Z_Construct_UClass_UAkAssetDataWithMedia_NoRegister()
	{
		return UAkAssetDataWithMedia::StaticClass();
	}
	struct Z_Construct_UClass_UAkAssetDataWithMedia_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MediaList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MediaList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAssetDataWithMedia_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAssetData,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetDataWithMedia_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkAssetBase.h" },
		{ "ModuleRelativePath", "Classes/AkAssetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAssetDataWithMedia_Statics::NewProp_MediaList_Inner = { "MediaList", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAkMediaAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetDataWithMedia_Statics::NewProp_MediaList_MetaData[] = {
		{ "Category", "AkAssetBase" },
		{ "ModuleRelativePath", "Classes/AkAssetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAkAssetDataWithMedia_Statics::NewProp_MediaList = { "MediaList", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAssetDataWithMedia, MediaList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkAssetDataWithMedia_Statics::NewProp_MediaList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetDataWithMedia_Statics::NewProp_MediaList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAssetDataWithMedia_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetDataWithMedia_Statics::NewProp_MediaList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetDataWithMedia_Statics::NewProp_MediaList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAssetDataWithMedia_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAssetDataWithMedia>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkAssetDataWithMedia_Statics::ClassParams = {
		&UAkAssetDataWithMedia::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkAssetDataWithMedia_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetDataWithMedia_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAssetDataWithMedia_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetDataWithMedia_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAssetDataWithMedia()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkAssetDataWithMedia_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkAssetDataWithMedia, 215654291);
	template<> AKAUDIO_API UClass* StaticClass<UAkAssetDataWithMedia>()
	{
		return UAkAssetDataWithMedia::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkAssetDataWithMedia(Z_Construct_UClass_UAkAssetDataWithMedia, &UAkAssetDataWithMedia::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkAssetDataWithMedia"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAssetDataWithMedia);
	void UAkAssetPlatformData::StaticRegisterNativesUAkAssetPlatformData()
	{
	}
	UClass* Z_Construct_UClass_UAkAssetPlatformData_NoRegister()
	{
		return UAkAssetPlatformData::StaticClass();
	}
	struct Z_Construct_UClass_UAkAssetPlatformData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetDataPerPlatform_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetDataPerPlatform_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetDataPerPlatform_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AssetDataPerPlatform;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAssetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentAssetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAssetPlatformData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetPlatformData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkAssetBase.h" },
		{ "ModuleRelativePath", "Classes/AkAssetBase.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_AssetDataPerPlatform_ValueProp = { "AssetDataPerPlatform", nullptr, (EPropertyFlags)0x0000000800020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UAkAssetData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_AssetDataPerPlatform_Key_KeyProp = { "AssetDataPerPlatform_Key", nullptr, (EPropertyFlags)0x0000000800020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_AssetDataPerPlatform_MetaData[] = {
		{ "Category", "AkAssetBase" },
		{ "ModuleRelativePath", "Classes/AkAssetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_AssetDataPerPlatform = { "AssetDataPerPlatform", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAssetPlatformData, AssetDataPerPlatform), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_AssetDataPerPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_AssetDataPerPlatform_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_CurrentAssetData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkAssetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_CurrentAssetData = { "CurrentAssetData", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAssetPlatformData, CurrentAssetData), Z_Construct_UClass_UAkAssetData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_CurrentAssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_CurrentAssetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAssetPlatformData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_AssetDataPerPlatform_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_AssetDataPerPlatform_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_AssetDataPerPlatform,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_CurrentAssetData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAssetPlatformData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAssetPlatformData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkAssetPlatformData_Statics::ClassParams = {
		&UAkAssetPlatformData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkAssetPlatformData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetPlatformData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAssetPlatformData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetPlatformData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAssetPlatformData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkAssetPlatformData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkAssetPlatformData, 1888162245);
	template<> AKAUDIO_API UClass* StaticClass<UAkAssetPlatformData>()
	{
		return UAkAssetPlatformData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkAssetPlatformData(Z_Construct_UClass_UAkAssetPlatformData, &UAkAssetPlatformData::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkAssetPlatformData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAssetPlatformData);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkAssetPlatformData)
	void UAkAssetBase::StaticRegisterNativesUAkAssetBase()
	{
	}
	UClass* Z_Construct_UClass_UAkAssetBase_NoRegister()
	{
		return UAkAssetBase::StaticClass();
	}
	struct Z_Construct_UClass_UAkAssetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformAssetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlatformAssetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAssetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAudioType,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkAssetBase.h" },
		{ "ModuleRelativePath", "Classes/AkAssetBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetBase_Statics::NewProp_PlatformAssetData_MetaData[] = {
		{ "Category", "AkAssetBase" },
		{ "ModuleRelativePath", "Classes/AkAssetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAssetBase_Statics::NewProp_PlatformAssetData = { "PlatformAssetData", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAssetBase, PlatformAssetData), Z_Construct_UClass_UAkAssetPlatformData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkAssetBase_Statics::NewProp_PlatformAssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetBase_Statics::NewProp_PlatformAssetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAssetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetBase_Statics::NewProp_PlatformAssetData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAssetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAssetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkAssetBase_Statics::ClassParams = {
		&UAkAssetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkAssetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAssetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAssetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkAssetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkAssetBase, 2379242575);
	template<> AKAUDIO_API UClass* StaticClass<UAkAssetBase>()
	{
		return UAkAssetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkAssetBase(Z_Construct_UClass_UAkAssetBase, &UAkAssetBase::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkAssetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAssetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
