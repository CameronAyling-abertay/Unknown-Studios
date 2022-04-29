// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/InitializationSettings/AkAudioSession.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAudioSession() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionMode();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAudioSession();
// End Cross Module References
	static UEnum* EAkAudioSessionMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkAudioSessionMode, Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkAudioSessionMode"));
		}
		return Singleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkAudioSessionMode>()
	{
		return EAkAudioSessionMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAkAudioSessionMode(EAkAudioSessionMode_StaticEnum, TEXT("/Script/AkAudio"), TEXT("EAkAudioSessionMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_EAkAudioSessionMode_Hash() { return 1751469633U; }
	UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAkAudioSessionMode"), 0, Get_Z_Construct_UEnum_AkAudio_EAkAudioSessionMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAkAudioSessionMode::Default", (int64)EAkAudioSessionMode::Default },
				{ "EAkAudioSessionMode::VoiceChat", (int64)EAkAudioSessionMode::VoiceChat },
				{ "EAkAudioSessionMode::GameChat", (int64)EAkAudioSessionMode::GameChat },
				{ "EAkAudioSessionMode::VideoRecording", (int64)EAkAudioSessionMode::VideoRecording },
				{ "EAkAudioSessionMode::Measurement", (int64)EAkAudioSessionMode::Measurement },
				{ "EAkAudioSessionMode::MoviePlayback", (int64)EAkAudioSessionMode::MoviePlayback },
				{ "EAkAudioSessionMode::VideoChat", (int64)EAkAudioSessionMode::VideoChat },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Default.Name", "EAkAudioSessionMode::Default" },
				{ "GameChat.Name", "EAkAudioSessionMode::GameChat" },
				{ "Measurement.Name", "EAkAudioSessionMode::Measurement" },
				{ "ModuleRelativePath", "Classes/InitializationSettings/AkAudioSession.h" },
				{ "MoviePlayback.Name", "EAkAudioSessionMode::MoviePlayback" },
				{ "VideoChat.Name", "EAkAudioSessionMode::VideoChat" },
				{ "VideoRecording.Name", "EAkAudioSessionMode::VideoRecording" },
				{ "VoiceChat.Name", "EAkAudioSessionMode::VoiceChat" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				"EAkAudioSessionMode",
				"EAkAudioSessionMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAkAudioSessionCategoryOptions_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions, Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkAudioSessionCategoryOptions"));
		}
		return Singleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkAudioSessionCategoryOptions>()
	{
		return EAkAudioSessionCategoryOptions_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAkAudioSessionCategoryOptions(EAkAudioSessionCategoryOptions_StaticEnum, TEXT("/Script/AkAudio"), TEXT("EAkAudioSessionCategoryOptions"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions_Hash() { return 2809252709U; }
	UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAkAudioSessionCategoryOptions"), 0, Get_Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAkAudioSessionCategoryOptions::MixWithOthers", (int64)EAkAudioSessionCategoryOptions::MixWithOthers },
				{ "EAkAudioSessionCategoryOptions::DuckOthers", (int64)EAkAudioSessionCategoryOptions::DuckOthers },
				{ "EAkAudioSessionCategoryOptions::AllowBluetooth", (int64)EAkAudioSessionCategoryOptions::AllowBluetooth },
				{ "EAkAudioSessionCategoryOptions::DefaultToSpeaker", (int64)EAkAudioSessionCategoryOptions::DefaultToSpeaker },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AllowBluetooth.Name", "EAkAudioSessionCategoryOptions::AllowBluetooth" },
				{ "Bitmask", "" },
				{ "DefaultToSpeaker.Name", "EAkAudioSessionCategoryOptions::DefaultToSpeaker" },
				{ "DuckOthers.Name", "EAkAudioSessionCategoryOptions::DuckOthers" },
				{ "MixWithOthers.Name", "EAkAudioSessionCategoryOptions::MixWithOthers" },
				{ "ModuleRelativePath", "Classes/InitializationSettings/AkAudioSession.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				"EAkAudioSessionCategoryOptions",
				"EAkAudioSessionCategoryOptions",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAkAudioSessionCategory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory, Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkAudioSessionCategory"));
		}
		return Singleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkAudioSessionCategory>()
	{
		return EAkAudioSessionCategory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAkAudioSessionCategory(EAkAudioSessionCategory_StaticEnum, TEXT("/Script/AkAudio"), TEXT("EAkAudioSessionCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory_Hash() { return 3119758455U; }
	UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAkAudioSessionCategory"), 0, Get_Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAkAudioSessionCategory::Ambient", (int64)EAkAudioSessionCategory::Ambient },
				{ "EAkAudioSessionCategory::SoloAmbient", (int64)EAkAudioSessionCategory::SoloAmbient },
				{ "EAkAudioSessionCategory::PlayAndRecord", (int64)EAkAudioSessionCategory::PlayAndRecord },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Ambient.Name", "EAkAudioSessionCategory::Ambient" },
				{ "ModuleRelativePath", "Classes/InitializationSettings/AkAudioSession.h" },
				{ "PlayAndRecord.Name", "EAkAudioSessionCategory::PlayAndRecord" },
				{ "SoloAmbient.Name", "EAkAudioSessionCategory::SoloAmbient" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				"EAkAudioSessionCategory",
				"EAkAudioSessionCategory",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAkAudioSession::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkAudioSession_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAudioSession, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkAudioSession"), sizeof(FAkAudioSession), Get_Z_Construct_UScriptStruct_FAkAudioSession_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkAudioSession>()
{
	return FAkAudioSession::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkAudioSession(FAkAudioSession::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkAudioSession"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkAudioSession
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkAudioSession()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkAudioSession")),new UScriptStruct::TCppStructOps<FAkAudioSession>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkAudioSession;
	struct Z_Construct_UScriptStruct_FAkAudioSession_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AudioSessionCategory_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioSessionCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AudioSessionCategory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioSessionCategoryOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_AudioSessionCategoryOptions;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AudioSessionMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioSessionMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AudioSessionMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAudioSession_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkAudioSession.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkAudioSession>();
	}
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategory_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Audio Session" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkAudioSession.h" },
		{ "ToolTip", "The IDs of the iOS audio session categories, useful for defining app-level audio behaviours such as inter-app audio mixing policies and audio routing behaviours.These IDs are functionally equivalent to the corresponding constants defined by the iOS audio session service back-end (AVAudioSession). Refer to Xcode documentation for details on the audio session categories." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategory = { "AudioSessionCategory", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkAudioSession, AudioSessionCategory), Z_Construct_UEnum_AkAudio_EAkAudioSessionCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategoryOptions_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EAkAudioSessionCategoryOptions" },
		{ "Category", "Ak Initialization Settings|Audio Session" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkAudioSession.h" },
		{ "ToolTip", "The IDs of the iOS audio session category options, used for customizing the audio session category features. These IDs are functionally equivalent to the corresponding constants defined by the iOS audio session service back-end (AVAudioSession). Refer to Xcode documentation for details on the audio session category options." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategoryOptions = { "AudioSessionCategoryOptions", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkAudioSession, AudioSessionCategoryOptions), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategoryOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategoryOptions_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionMode_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Audio Session" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkAudioSession.h" },
		{ "ToolTip", "The IDs of the iOS audio session modes, used for customizing the audio session for typical app types. These IDs are functionally equivalent to the corresponding constants defined by the iOS audio session service back-end (AVAudioSession). Refer to Xcode documentation for details on the audio session category options." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionMode = { "AudioSessionMode", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkAudioSession, AudioSessionMode), Z_Construct_UEnum_AkAudio_EAkAudioSessionMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkAudioSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionCategoryOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAudioSession_Statics::NewProp_AudioSessionMode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkAudioSession_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkAudioSession",
		sizeof(FAkAudioSession),
		alignof(FAkAudioSession),
		Z_Construct_UScriptStruct_FAkAudioSession_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAudioSession_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAudioSession_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAudioSession_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkAudioSession()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkAudioSession_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkAudioSession"), sizeof(FAkAudioSession), Get_Z_Construct_UScriptStruct_FAkAudioSession_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkAudioSession_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkAudioSession_Hash() { return 631923011U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
