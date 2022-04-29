// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkInitBank.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkInitBank() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkPluginInfo();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkInitBankAssetData_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkInitBankAssetData();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetDataWithMedia();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkInitBank_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkInitBank();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetBase();
// End Cross Module References
class UScriptStruct* FAkPluginInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkPluginInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkPluginInfo, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkPluginInfo"), sizeof(FAkPluginInfo), Get_Z_Construct_UScriptStruct_FAkPluginInfo_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkPluginInfo>()
{
	return FAkPluginInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkPluginInfo(FAkPluginInfo::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkPluginInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkPluginInfo
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkPluginInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkPluginInfo")),new UScriptStruct::TCppStructOps<FAkPluginInfo>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkPluginInfo;
	struct Z_Construct_UScriptStruct_FAkPluginInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PluginID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PluginID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DLL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DLL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkPluginInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AkInitBank.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkPluginInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "AkInitBank" },
		{ "ModuleRelativePath", "Classes/AkInitBank.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkPluginInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_PluginID_MetaData[] = {
		{ "Category", "AkInitBank" },
		{ "ModuleRelativePath", "Classes/AkInitBank.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_PluginID = { "PluginID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkPluginInfo, PluginID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_PluginID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_PluginID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_DLL_MetaData[] = {
		{ "Category", "AkInitBank" },
		{ "ModuleRelativePath", "Classes/AkInitBank.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_DLL = { "DLL", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkPluginInfo, DLL), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_DLL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_DLL_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkPluginInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_PluginID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_DLL,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkPluginInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkPluginInfo",
		sizeof(FAkPluginInfo),
		alignof(FAkPluginInfo),
		Z_Construct_UScriptStruct_FAkPluginInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPluginInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkPluginInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPluginInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkPluginInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkPluginInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkPluginInfo"), sizeof(FAkPluginInfo), Get_Z_Construct_UScriptStruct_FAkPluginInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkPluginInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkPluginInfo_Hash() { return 3450722843U; }
	void UAkInitBankAssetData::StaticRegisterNativesUAkInitBankAssetData()
	{
	}
	UClass* Z_Construct_UClass_UAkInitBankAssetData_NoRegister()
	{
		return UAkInitBankAssetData::StaticClass();
	}
	struct Z_Construct_UClass_UAkInitBankAssetData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PluginInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PluginInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PluginInfos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkInitBankAssetData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAssetDataWithMedia,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkInitBankAssetData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkInitBank.h" },
		{ "ModuleRelativePath", "Classes/AkInitBank.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkInitBankAssetData_Statics::NewProp_PluginInfos_Inner = { "PluginInfos", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAkPluginInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkInitBankAssetData_Statics::NewProp_PluginInfos_MetaData[] = {
		{ "Category", "AkInitBank" },
		{ "ModuleRelativePath", "Classes/AkInitBank.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAkInitBankAssetData_Statics::NewProp_PluginInfos = { "PluginInfos", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkInitBankAssetData, PluginInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkInitBankAssetData_Statics::NewProp_PluginInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkInitBankAssetData_Statics::NewProp_PluginInfos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkInitBankAssetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkInitBankAssetData_Statics::NewProp_PluginInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkInitBankAssetData_Statics::NewProp_PluginInfos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkInitBankAssetData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkInitBankAssetData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkInitBankAssetData_Statics::ClassParams = {
		&UAkInitBankAssetData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkInitBankAssetData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkInitBankAssetData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkInitBankAssetData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkInitBankAssetData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkInitBankAssetData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkInitBankAssetData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkInitBankAssetData, 2972469168);
	template<> AKAUDIO_API UClass* StaticClass<UAkInitBankAssetData>()
	{
		return UAkInitBankAssetData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkInitBankAssetData(Z_Construct_UClass_UAkInitBankAssetData, &UAkInitBankAssetData::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkInitBankAssetData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkInitBankAssetData);
	void UAkInitBank::StaticRegisterNativesUAkInitBank()
	{
	}
	UClass* Z_Construct_UClass_UAkInitBank_NoRegister()
	{
		return UAkInitBank::StaticClass();
	}
	struct Z_Construct_UClass_UAkInitBank_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AvailableAudioCultures_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvailableAudioCultures_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AvailableAudioCultures;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultLanguage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultLanguage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkInitBank_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAssetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkInitBank_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkInitBank.h" },
		{ "ModuleRelativePath", "Classes/AkInitBank.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkInitBank_Statics::NewProp_AvailableAudioCultures_Inner = { "AvailableAudioCultures", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkInitBank_Statics::NewProp_AvailableAudioCultures_MetaData[] = {
		{ "Category", "AkInitBank" },
		{ "ModuleRelativePath", "Classes/AkInitBank.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAkInitBank_Statics::NewProp_AvailableAudioCultures = { "AvailableAudioCultures", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkInitBank, AvailableAudioCultures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkInitBank_Statics::NewProp_AvailableAudioCultures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkInitBank_Statics::NewProp_AvailableAudioCultures_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkInitBank_Statics::NewProp_DefaultLanguage_MetaData[] = {
		{ "Category", "AkInitBank" },
		{ "ModuleRelativePath", "Classes/AkInitBank.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkInitBank_Statics::NewProp_DefaultLanguage = { "DefaultLanguage", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkInitBank, DefaultLanguage), METADATA_PARAMS(Z_Construct_UClass_UAkInitBank_Statics::NewProp_DefaultLanguage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkInitBank_Statics::NewProp_DefaultLanguage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkInitBank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkInitBank_Statics::NewProp_AvailableAudioCultures_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkInitBank_Statics::NewProp_AvailableAudioCultures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkInitBank_Statics::NewProp_DefaultLanguage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkInitBank_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkInitBank>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkInitBank_Statics::ClassParams = {
		&UAkInitBank::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkInitBank_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkInitBank_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkInitBank_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkInitBank_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkInitBank()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkInitBank_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkInitBank, 2340627483);
	template<> AKAUDIO_API UClass* StaticClass<UAkInitBank>()
	{
		return UAkInitBank::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkInitBank(Z_Construct_UClass_UAkInitBank, &UAkInitBank::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkInitBank"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkInitBank);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
