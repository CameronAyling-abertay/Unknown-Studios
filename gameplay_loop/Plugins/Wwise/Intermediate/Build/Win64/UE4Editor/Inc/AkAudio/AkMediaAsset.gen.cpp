// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkMediaAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkMediaAsset() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMediaAssetData_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMediaAssetData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMediaAsset_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMediaAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkLocalizedMediaAsset_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkLocalizedMediaAsset();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkExternalMediaAsset_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkExternalMediaAsset();
// End Cross Module References
	void UAkMediaAssetData::StaticRegisterNativesUAkMediaAssetData()
	{
	}
	UClass* Z_Construct_UClass_UAkMediaAssetData_NoRegister()
	{
		return UAkMediaAssetData::StaticClass();
	}
	struct Z_Construct_UClass_UAkMediaAssetData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsStreamed_MetaData[];
#endif
		static void NewProp_IsStreamed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsStreamed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseDeviceMemory_MetaData[];
#endif
		static void NewProp_UseDeviceMemory_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseDeviceMemory;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastWriteTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_LastWriteTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaContentHash_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt64PropertyParams NewProp_MediaContentHash;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkMediaAssetData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAssetData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkMediaAsset.h" },
		{ "ModuleRelativePath", "Classes/AkMediaAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_IsStreamed_MetaData[] = {
		{ "Category", "AkMediaAsset" },
		{ "ModuleRelativePath", "Classes/AkMediaAsset.h" },
	};
#endif
	void Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_IsStreamed_SetBit(void* Obj)
	{
		((UAkMediaAssetData*)Obj)->IsStreamed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_IsStreamed = { "IsStreamed", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkMediaAssetData), &Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_IsStreamed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_IsStreamed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_IsStreamed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_UseDeviceMemory_MetaData[] = {
		{ "Category", "AkMediaAsset" },
		{ "ModuleRelativePath", "Classes/AkMediaAsset.h" },
	};
#endif
	void Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_UseDeviceMemory_SetBit(void* Obj)
	{
		((UAkMediaAssetData*)Obj)->UseDeviceMemory = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_UseDeviceMemory = { "UseDeviceMemory", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkMediaAssetData), &Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_UseDeviceMemory_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_UseDeviceMemory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_UseDeviceMemory_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_LastWriteTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkMediaAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_LastWriteTime = { "LastWriteTime", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkMediaAssetData, LastWriteTime), METADATA_PARAMS(Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_LastWriteTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_LastWriteTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_MediaContentHash_MetaData[] = {
		{ "Category", "AkMediaAsset" },
		{ "ModuleRelativePath", "Classes/AkMediaAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt64PropertyParams Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_MediaContentHash = { "MediaContentHash", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkMediaAssetData, MediaContentHash), METADATA_PARAMS(Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_MediaContentHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_MediaContentHash_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkMediaAssetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_IsStreamed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_UseDeviceMemory,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_LastWriteTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_MediaContentHash,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkMediaAssetData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkMediaAssetData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkMediaAssetData_Statics::ClassParams = {
		&UAkMediaAssetData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkMediaAssetData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAssetData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkMediaAssetData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAssetData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkMediaAssetData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkMediaAssetData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkMediaAssetData, 1949211594);
	template<> AKAUDIO_API UClass* StaticClass<UAkMediaAssetData>()
	{
		return UAkMediaAssetData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkMediaAssetData(Z_Construct_UClass_UAkMediaAssetData, &UAkMediaAssetData::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkMediaAssetData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkMediaAssetData);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkMediaAssetData)
	void UAkMediaAsset::StaticRegisterNativesUAkMediaAsset()
	{
	}
	UClass* Z_Construct_UClass_UAkMediaAsset_NoRegister()
	{
		return UAkMediaAsset::StaticClass();
	}
	struct Z_Construct_UClass_UAkMediaAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Id;
#if WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MediaAssetDataPerPlatform_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MediaAssetDataPerPlatform_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaAssetDataPerPlatform_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MediaAssetDataPerPlatform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MediaName;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoLoad_MetaData[];
#endif
		static void NewProp_AutoLoad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoLoad;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UserData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentMediaAssetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentMediaAssetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkMediaAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkMediaAsset.h" },
		{ "ModuleRelativePath", "Classes/AkMediaAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "AkMediaAsset" },
		{ "ModuleRelativePath", "Classes/AkMediaAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkMediaAsset, Id), METADATA_PARAMS(Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_Id_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaAssetDataPerPlatform_ValueProp = { "MediaAssetDataPerPlatform", nullptr, (EPropertyFlags)0x0000000800020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UAkMediaAssetData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaAssetDataPerPlatform_Key_KeyProp = { "MediaAssetDataPerPlatform_Key", nullptr, (EPropertyFlags)0x0000000800020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaAssetDataPerPlatform_MetaData[] = {
		{ "Category", "AkMediaAsset" },
		{ "ModuleRelativePath", "Classes/AkMediaAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaAssetDataPerPlatform = { "MediaAssetDataPerPlatform", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkMediaAsset, MediaAssetDataPerPlatform), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaAssetDataPerPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaAssetDataPerPlatform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaName_MetaData[] = {
		{ "Category", "AkMediaAsset" },
		{ "ModuleRelativePath", "Classes/AkMediaAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaName = { "MediaName", nullptr, (EPropertyFlags)0x0010010800020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkMediaAsset, MediaName), METADATA_PARAMS(Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_AutoLoad_MetaData[] = {
		{ "Category", "AkMediaAsset" },
		{ "ModuleRelativePath", "Classes/AkMediaAsset.h" },
	};
#endif
	void Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_AutoLoad_SetBit(void* Obj)
	{
		((UAkMediaAsset*)Obj)->AutoLoad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_AutoLoad = { "AutoLoad", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkMediaAsset), &Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_AutoLoad_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_AutoLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_AutoLoad_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_UserData_Inner = { "UserData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_UserData_MetaData[] = {
		{ "Category", "AkMediaAsset" },
		{ "ModuleRelativePath", "Classes/AkMediaAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkMediaAsset, UserData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_UserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_UserData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_CurrentMediaAssetData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkMediaAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_CurrentMediaAssetData = { "CurrentMediaAssetData", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkMediaAsset, CurrentMediaAssetData), Z_Construct_UClass_UAkMediaAssetData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_CurrentMediaAssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_CurrentMediaAssetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkMediaAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_Id,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaAssetDataPerPlatform_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaAssetDataPerPlatform_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaAssetDataPerPlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaName,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_AutoLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_UserData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_UserData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_CurrentMediaAssetData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkMediaAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkMediaAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkMediaAsset_Statics::ClassParams = {
		&UAkMediaAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkMediaAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkMediaAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkMediaAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkMediaAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkMediaAsset, 3424320823);
	template<> AKAUDIO_API UClass* StaticClass<UAkMediaAsset>()
	{
		return UAkMediaAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkMediaAsset(Z_Construct_UClass_UAkMediaAsset, &UAkMediaAsset::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkMediaAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkMediaAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkMediaAsset)
	void UAkLocalizedMediaAsset::StaticRegisterNativesUAkLocalizedMediaAsset()
	{
	}
	UClass* Z_Construct_UClass_UAkLocalizedMediaAsset_NoRegister()
	{
		return UAkLocalizedMediaAsset::StaticClass();
	}
	struct Z_Construct_UClass_UAkLocalizedMediaAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkLocalizedMediaAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkMediaAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLocalizedMediaAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkMediaAsset.h" },
		{ "ModuleRelativePath", "Classes/AkMediaAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkLocalizedMediaAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkLocalizedMediaAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkLocalizedMediaAsset_Statics::ClassParams = {
		&UAkLocalizedMediaAsset::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkLocalizedMediaAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLocalizedMediaAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkLocalizedMediaAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkLocalizedMediaAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkLocalizedMediaAsset, 519569413);
	template<> AKAUDIO_API UClass* StaticClass<UAkLocalizedMediaAsset>()
	{
		return UAkLocalizedMediaAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkLocalizedMediaAsset(Z_Construct_UClass_UAkLocalizedMediaAsset, &UAkLocalizedMediaAsset::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkLocalizedMediaAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkLocalizedMediaAsset);
	void UAkExternalMediaAsset::StaticRegisterNativesUAkExternalMediaAsset()
	{
	}
	UClass* Z_Construct_UClass_UAkExternalMediaAsset_NoRegister()
	{
		return UAkExternalMediaAsset::StaticClass();
	}
	struct Z_Construct_UClass_UAkExternalMediaAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkExternalMediaAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkMediaAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkExternalMediaAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkMediaAsset.h" },
		{ "ModuleRelativePath", "Classes/AkMediaAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkExternalMediaAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkExternalMediaAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkExternalMediaAsset_Statics::ClassParams = {
		&UAkExternalMediaAsset::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkExternalMediaAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkExternalMediaAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkExternalMediaAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkExternalMediaAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkExternalMediaAsset, 3198558724);
	template<> AKAUDIO_API UClass* StaticClass<UAkExternalMediaAsset>()
	{
		return UAkExternalMediaAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkExternalMediaAsset(Z_Construct_UClass_UAkExternalMediaAsset, &UAkExternalMediaAsset::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkExternalMediaAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkExternalMediaAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
