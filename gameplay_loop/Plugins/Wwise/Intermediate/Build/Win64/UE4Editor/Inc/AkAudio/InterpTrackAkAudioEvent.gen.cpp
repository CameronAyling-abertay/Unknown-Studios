// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/InterpTrackAkAudioEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackAkAudioEvent() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAudioEventTrackKey();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UInterpTrackAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UInterpTrackAkAudioEvent();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackVectorBase();
// End Cross Module References
class UScriptStruct* FAkAudioEventTrackKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAudioEventTrackKey, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkAudioEventTrackKey"), sizeof(FAkAudioEventTrackKey), Get_Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkAudioEventTrackKey>()
{
	return FAkAudioEventTrackKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkAudioEventTrackKey(FAkAudioEventTrackKey::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkAudioEventTrackKey"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkAudioEventTrackKey
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkAudioEventTrackKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkAudioEventTrackKey")),new UScriptStruct::TCppStructOps<FAkAudioEventTrackKey>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkAudioEventTrackKey;
	struct Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AkAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Information for one event in the track. */" },
		{ "ModuleRelativePath", "Classes/InterpTrackAkAudioEvent.h" },
		{ "ToolTip", "Information for one event in the track." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkAudioEventTrackKey>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Classes/InterpTrackAkAudioEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkAudioEventTrackKey, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::NewProp_AkAudioEvent_MetaData[] = {
		{ "Category", "AkAudioEventTrackKey" },
		{ "ModuleRelativePath", "Classes/InterpTrackAkAudioEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::NewProp_AkAudioEvent = { "AkAudioEvent", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkAudioEventTrackKey, AkAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::NewProp_AkAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::NewProp_AkAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::NewProp_EventName_MetaData[] = {
		{ "Category", "AkAudioEventTrackKey" },
		{ "ModuleRelativePath", "Classes/InterpTrackAkAudioEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkAudioEventTrackKey, EventName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::NewProp_EventName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::NewProp_AkAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::NewProp_EventName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkAudioEventTrackKey",
		sizeof(FAkAudioEventTrackKey),
		alignof(FAkAudioEventTrackKey),
		Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkAudioEventTrackKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkAudioEventTrackKey"), sizeof(FAkAudioEventTrackKey), Get_Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Hash() { return 2408914808U; }
	void UInterpTrackAkAudioEvent::StaticRegisterNativesUInterpTrackAkAudioEvent()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackAkAudioEvent_NoRegister()
	{
		return UInterpTrackAkAudioEvent::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackAkAudioEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Events_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Events;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bContinueEventOnMatineeEnd_MetaData[];
#endif
		static void NewProp_bContinueEventOnMatineeEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bContinueEventOnMatineeEnd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackAkAudioEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackVectorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackAkAudioEvent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*MinimalAPI*/" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "InterpTrackAkAudioEvent.h" },
		{ "ModuleRelativePath", "Classes/InterpTrackAkAudioEvent.h" },
		{ "ToolTip", "MinimalAPI" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackAkAudioEvent_Statics::NewProp_Events_Inner = { "Events", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAkAudioEventTrackKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackAkAudioEvent_Statics::NewProp_Events_MetaData[] = {
		{ "Comment", "/** Array of ak events to play at specific times. */" },
		{ "ModuleRelativePath", "Classes/InterpTrackAkAudioEvent.h" },
		{ "ToolTip", "Array of ak events to play at specific times." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpTrackAkAudioEvent_Statics::NewProp_Events = { "Events", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackAkAudioEvent, Events), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackAkAudioEvent_Statics::NewProp_Events_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackAkAudioEvent_Statics::NewProp_Events_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackAkAudioEvent_Statics::NewProp_bContinueEventOnMatineeEnd_MetaData[] = {
		{ "Category", "InterpTrackAkAudioEvent" },
		{ "Comment", "/** If true, events on this track will not be forced to finish when the matinee sequence finishes. */" },
		{ "ModuleRelativePath", "Classes/InterpTrackAkAudioEvent.h" },
		{ "ToolTip", "If true, events on this track will not be forced to finish when the matinee sequence finishes." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackAkAudioEvent_Statics::NewProp_bContinueEventOnMatineeEnd_SetBit(void* Obj)
	{
		((UInterpTrackAkAudioEvent*)Obj)->bContinueEventOnMatineeEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackAkAudioEvent_Statics::NewProp_bContinueEventOnMatineeEnd = { "bContinueEventOnMatineeEnd", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackAkAudioEvent), &Z_Construct_UClass_UInterpTrackAkAudioEvent_Statics::NewProp_bContinueEventOnMatineeEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackAkAudioEvent_Statics::NewProp_bContinueEventOnMatineeEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackAkAudioEvent_Statics::NewProp_bContinueEventOnMatineeEnd_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackAkAudioEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackAkAudioEvent_Statics::NewProp_Events_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackAkAudioEvent_Statics::NewProp_Events,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackAkAudioEvent_Statics::NewProp_bContinueEventOnMatineeEnd,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackAkAudioEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackAkAudioEvent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackAkAudioEvent_Statics::ClassParams = {
		&UInterpTrackAkAudioEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackAkAudioEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackAkAudioEvent_Statics::PropPointers),
		0,
		0x001020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackAkAudioEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackAkAudioEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackAkAudioEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackAkAudioEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackAkAudioEvent, 682370851);
	template<> AKAUDIO_API UClass* StaticClass<UInterpTrackAkAudioEvent>()
	{
		return UInterpTrackAkAudioEvent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackAkAudioEvent(Z_Construct_UClass_UInterpTrackAkAudioEvent, &UInterpTrackAkAudioEvent::StaticClass, TEXT("/Script/AkAudio"), TEXT("UInterpTrackAkAudioEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackAkAudioEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
