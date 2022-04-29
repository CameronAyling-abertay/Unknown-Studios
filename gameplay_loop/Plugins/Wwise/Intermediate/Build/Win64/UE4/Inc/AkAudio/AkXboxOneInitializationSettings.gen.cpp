// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/Platforms/AkPlatform_XboxOne/AkXboxOneInitializationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkXboxOneInitializationSettings() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkXboxOneAdvancedInitializationSettings();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkXboxOneInitializationSettings_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkXboxOneInitializationSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettings();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInitialisationSettingsBase_NoRegister();
// End Cross Module References
class UScriptStruct* FAkXboxOneApuHeapInitializationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkXboxOneApuHeapInitializationSettings"), sizeof(FAkXboxOneApuHeapInitializationSettings), Get_Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkXboxOneApuHeapInitializationSettings>()
{
	return FAkXboxOneApuHeapInitializationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings(FAkXboxOneApuHeapInitializationSettings::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkXboxOneApuHeapInitializationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkXboxOneApuHeapInitializationSettings
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkXboxOneApuHeapInitializationSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkXboxOneApuHeapInitializationSettings")),new UScriptStruct::TCppStructOps<FAkXboxOneApuHeapInitializationSettings>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkXboxOneApuHeapInitializationSettings;
	struct Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_CachedSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonCachedSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NonCachedSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_XboxOne/AkXboxOneInitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkXboxOneApuHeapInitializationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Statics::NewProp_CachedSize_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_XboxOne/AkXboxOneInitializationSettings.h" },
		{ "ToolTip", "APU heap cached size sent to the \"ApuCreateHeap()\" function." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Statics::NewProp_CachedSize = { "CachedSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkXboxOneApuHeapInitializationSettings, CachedSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Statics::NewProp_CachedSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Statics::NewProp_CachedSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Statics::NewProp_NonCachedSize_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_XboxOne/AkXboxOneInitializationSettings.h" },
		{ "ToolTip", "APU heap non-cached size sent to the \"ApuCreateHeap()\" function." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Statics::NewProp_NonCachedSize = { "NonCachedSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkXboxOneApuHeapInitializationSettings, NonCachedSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Statics::NewProp_NonCachedSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Statics::NewProp_NonCachedSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Statics::NewProp_CachedSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Statics::NewProp_NonCachedSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkXboxOneApuHeapInitializationSettings",
		sizeof(FAkXboxOneApuHeapInitializationSettings),
		alignof(FAkXboxOneApuHeapInitializationSettings),
		Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkXboxOneApuHeapInitializationSettings"), sizeof(FAkXboxOneApuHeapInitializationSettings), Get_Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Hash() { return 402035732U; }

static_assert(std::is_polymorphic<FAkXboxOneAdvancedInitializationSettings>() == std::is_polymorphic<FAkAdvancedInitializationSettingsWithMultiCoreRendering>(), "USTRUCT FAkXboxOneAdvancedInitializationSettings cannot be polymorphic unless super FAkAdvancedInitializationSettingsWithMultiCoreRendering is polymorphic");

class UScriptStruct* FAkXboxOneAdvancedInitializationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkXboxOneAdvancedInitializationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkXboxOneAdvancedInitializationSettings, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkXboxOneAdvancedInitializationSettings"), sizeof(FAkXboxOneAdvancedInitializationSettings), Get_Z_Construct_UScriptStruct_FAkXboxOneAdvancedInitializationSettings_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkXboxOneAdvancedInitializationSettings>()
{
	return FAkXboxOneAdvancedInitializationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkXboxOneAdvancedInitializationSettings(FAkXboxOneAdvancedInitializationSettings::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkXboxOneAdvancedInitializationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkXboxOneAdvancedInitializationSettings
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkXboxOneAdvancedInitializationSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkXboxOneAdvancedInitializationSettings")),new UScriptStruct::TCppStructOps<FAkXboxOneAdvancedInitializationSettings>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkXboxOneAdvancedInitializationSettings;
	struct Z_Construct_UScriptStruct_FAkXboxOneAdvancedInitializationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumNumberOfXMAVoices_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_MaximumNumberOfXMAVoices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseHardwareCodecLowLatencyMode_MetaData[];
#endif
		static void NewProp_UseHardwareCodecLowLatencyMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseHardwareCodecLowLatencyMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkXboxOneAdvancedInitializationSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_XboxOne/AkXboxOneInitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkXboxOneAdvancedInitializationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkXboxOneAdvancedInitializationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkXboxOneAdvancedInitializationSettings_Statics::NewProp_MaximumNumberOfXMAVoices_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_XboxOne/AkXboxOneInitializationSettings.h" },
		{ "ToolTip", "Maximum number of hardware-accelerated XMA voices used at run-time. Default is 128 voices." },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FAkXboxOneAdvancedInitializationSettings_Statics::NewProp_MaximumNumberOfXMAVoices = { "MaximumNumberOfXMAVoices", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkXboxOneAdvancedInitializationSettings, MaximumNumberOfXMAVoices), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkXboxOneAdvancedInitializationSettings_Statics::NewProp_MaximumNumberOfXMAVoices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXboxOneAdvancedInitializationSettings_Statics::NewProp_MaximumNumberOfXMAVoices_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkXboxOneAdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_XboxOne/AkXboxOneInitializationSettings.h" },
		{ "ToolTip", "Use low latency mode for hardware XMA decoding (default is false). If true, decoding jobs are submitted at the beginning of the Wwise update and it will be necessary to wait for the result." },
	};
#endif
	void Z_Construct_UScriptStruct_FAkXboxOneAdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode_SetBit(void* Obj)
	{
		((FAkXboxOneAdvancedInitializationSettings*)Obj)->UseHardwareCodecLowLatencyMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkXboxOneAdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode = { "UseHardwareCodecLowLatencyMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAkXboxOneAdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkXboxOneAdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkXboxOneAdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXboxOneAdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkXboxOneAdvancedInitializationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkXboxOneAdvancedInitializationSettings_Statics::NewProp_MaximumNumberOfXMAVoices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkXboxOneAdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkXboxOneAdvancedInitializationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering,
		&NewStructOps,
		"AkXboxOneAdvancedInitializationSettings",
		sizeof(FAkXboxOneAdvancedInitializationSettings),
		alignof(FAkXboxOneAdvancedInitializationSettings),
		Z_Construct_UScriptStruct_FAkXboxOneAdvancedInitializationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXboxOneAdvancedInitializationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkXboxOneAdvancedInitializationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXboxOneAdvancedInitializationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkXboxOneAdvancedInitializationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkXboxOneAdvancedInitializationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkXboxOneAdvancedInitializationSettings"), sizeof(FAkXboxOneAdvancedInitializationSettings), Get_Z_Construct_UScriptStruct_FAkXboxOneAdvancedInitializationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkXboxOneAdvancedInitializationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkXboxOneAdvancedInitializationSettings_Hash() { return 2930961213U; }
	DEFINE_FUNCTION(UAkXboxOneInitializationSettings::execMigrateMultiCoreRendering)
	{
		P_GET_UBOOL(Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MigrateMultiCoreRendering(Z_Param_NewValue);
		P_NATIVE_END;
	}
	void UAkXboxOneInitializationSettings::StaticRegisterNativesUAkXboxOneInitializationSettings()
	{
		UClass* Class = UAkXboxOneInitializationSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MigrateMultiCoreRendering", &UAkXboxOneInitializationSettings::execMigrateMultiCoreRendering },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkXboxOneInitializationSettings_MigrateMultiCoreRendering_Statics
	{
		struct AkXboxOneInitializationSettings_eventMigrateMultiCoreRendering_Parms
		{
			bool NewValue;
		};
		static void NewProp_NewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAkXboxOneInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue_SetBit(void* Obj)
	{
		((AkXboxOneInitializationSettings_eventMigrateMultiCoreRendering_Parms*)Obj)->NewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkXboxOneInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkXboxOneInitializationSettings_eventMigrateMultiCoreRendering_Parms), &Z_Construct_UFunction_UAkXboxOneInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkXboxOneInitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkXboxOneInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkXboxOneInitializationSettings_MigrateMultiCoreRendering_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_XboxOne/AkXboxOneInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkXboxOneInitializationSettings_MigrateMultiCoreRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkXboxOneInitializationSettings, nullptr, "MigrateMultiCoreRendering", nullptr, nullptr, sizeof(AkXboxOneInitializationSettings_eventMigrateMultiCoreRendering_Parms), Z_Construct_UFunction_UAkXboxOneInitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkXboxOneInitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkXboxOneInitializationSettings_MigrateMultiCoreRendering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkXboxOneInitializationSettings_MigrateMultiCoreRendering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkXboxOneInitializationSettings_MigrateMultiCoreRendering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkXboxOneInitializationSettings_MigrateMultiCoreRendering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkXboxOneInitializationSettings_NoRegister()
	{
		return UAkXboxOneInitializationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommonSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CommonSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApuHeapSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ApuHeapSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommunicationSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CommunicationSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdvancedSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdvancedSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkXboxOneInitializationSettings_MigrateMultiCoreRendering, "MigrateMultiCoreRendering" }, // 526547686
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Platforms/AkPlatform_XboxOne/AkXboxOneInitializationSettings.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_XboxOne/AkXboxOneInitializationSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::NewProp_CommonSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_XboxOne/AkXboxOneInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::NewProp_CommonSettings = { "CommonSettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkXboxOneInitializationSettings, CommonSettings), Z_Construct_UScriptStruct_FAkCommonInitializationSettings, METADATA_PARAMS(Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::NewProp_CommonSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::NewProp_CommonSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::NewProp_ApuHeapSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "DisplayName", "APU Heap Settings" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_XboxOne/AkXboxOneInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::NewProp_ApuHeapSettings = { "ApuHeapSettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkXboxOneInitializationSettings, ApuHeapSettings), Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings, METADATA_PARAMS(Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::NewProp_ApuHeapSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::NewProp_ApuHeapSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::NewProp_CommunicationSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_XboxOne/AkXboxOneInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::NewProp_CommunicationSettings = { "CommunicationSettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkXboxOneInitializationSettings, CommunicationSettings), Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization, METADATA_PARAMS(Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::NewProp_CommunicationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::NewProp_CommunicationSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::NewProp_AdvancedSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_XboxOne/AkXboxOneInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::NewProp_AdvancedSettings = { "AdvancedSettings", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkXboxOneInitializationSettings, AdvancedSettings), Z_Construct_UScriptStruct_FAkXboxOneAdvancedInitializationSettings, METADATA_PARAMS(Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::NewProp_AdvancedSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::NewProp_AdvancedSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::NewProp_CommonSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::NewProp_ApuHeapSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::NewProp_CommunicationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::NewProp_AdvancedSettings,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAkPlatformInitialisationSettingsBase_NoRegister, (int32)VTABLE_OFFSET(UAkXboxOneInitializationSettings, IAkPlatformInitialisationSettingsBase), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkXboxOneInitializationSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::ClassParams = {
		&UAkXboxOneInitializationSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkXboxOneInitializationSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkXboxOneInitializationSettings, 1796701916);
	template<> AKAUDIO_API UClass* StaticClass<UAkXboxOneInitializationSettings>()
	{
		return UAkXboxOneInitializationSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkXboxOneInitializationSettings(Z_Construct_UClass_UAkXboxOneInitializationSettings, &UAkXboxOneInitializationSettings::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkXboxOneInitializationSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkXboxOneInitializationSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
