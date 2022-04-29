// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkReverbVolume.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkReverbVolume() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_AAkReverbVolume_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_AAkReverbVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkLateReverbComponent_NoRegister();
// End Cross Module References
	void AAkReverbVolume::StaticRegisterNativesAAkReverbVolume()
	{
	}
	UClass* Z_Construct_UClass_AAkReverbVolume_NoRegister()
	{
		return AAkReverbVolume::StaticClass();
	}
	struct Z_Construct_UClass_AAkReverbVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxBus_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AuxBus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxBusName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AuxBusName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SendLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SendLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LateReverbComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LateReverbComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAkReverbVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkReverbVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*------------------------------------------------------------------------------------\n\x09""AAkReverbVolume\n------------------------------------------------------------------------------------*/" },
		{ "HideCategories", "Advanced Attachment Volume Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "AkReverbVolume.h" },
		{ "ModuleRelativePath", "Classes/AkReverbVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "AAkReverbVolume" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Comment", "/** Whether this volume is currently enabled and able to affect sounds */" },
		{ "ModuleRelativePath", "Classes/AkReverbVolume.h" },
		{ "ToolTip", "Whether this volume is currently enabled and able to affect sounds" },
	};
#endif
	void Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((AAkReverbVolume*)Obj)->bEnabled_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AAkReverbVolume), &Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_AuxBus_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkReverbVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_AuxBus = { "AuxBus", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAkReverbVolume, AuxBus_DEPRECATED), Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_AuxBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_AuxBus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_AuxBusName_MetaData[] = {
		{ "Comment", "/** Wwise Auxiliary Bus associated to this AkReverbVolume */" },
		{ "ModuleRelativePath", "Classes/AkReverbVolume.h" },
		{ "ToolTip", "Wwise Auxiliary Bus associated to this AkReverbVolume" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_AuxBusName = { "AuxBusName", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAkReverbVolume, AuxBusName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_AuxBusName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_AuxBusName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_SendLevel_MetaData[] = {
		{ "Comment", "/** Maximum send level to the Wwise Auxiliary Bus associated to this AkReverbVolume */" },
		{ "ModuleRelativePath", "Classes/AkReverbVolume.h" },
		{ "ToolTip", "Maximum send level to the Wwise Auxiliary Bus associated to this AkReverbVolume" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_SendLevel = { "SendLevel", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAkReverbVolume, SendLevel_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_SendLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_SendLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_FadeRate_MetaData[] = {
		{ "Comment", "/** Rate at which to fade in/out the SendLevel of the current Reverb Volume when entering/exiting it, in percentage per second (0.2 will make the fade time 5 seconds) */" },
		{ "ModuleRelativePath", "Classes/AkReverbVolume.h" },
		{ "ToolTip", "Rate at which to fade in/out the SendLevel of the current Reverb Volume when entering/exiting it, in percentage per second (0.2 will make the fade time 5 seconds)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_FadeRate = { "FadeRate", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAkReverbVolume, FadeRate_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_FadeRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_FadeRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_Priority_MetaData[] = {
		{ "Comment", "/**\n\x09 * The precedence in which the AkReverbVolumes will be applied. In the case of overlapping volumes, only the ones \n\x09 * with the highest priority are chosen (the number of simultaneous AkReverbVolumes is configurable in the Unreal \n\x09 * Editor Project Settings under Plugins > Wwise). If two or more overlapping AkReverbVolumes have the same \n\x09 * priority, the chosen AkReverbVolume is unpredictable.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AkReverbVolume.h" },
		{ "ToolTip", "The precedence in which the AkReverbVolumes will be applied. In the case of overlapping volumes, only the ones\nwith the highest priority are chosen (the number of simultaneous AkReverbVolumes is configurable in the Unreal\nEditor Project Settings under Plugins > Wwise). If two or more overlapping AkReverbVolumes have the same\npriority, the chosen AkReverbVolume is unpredictable." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAkReverbVolume, Priority_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_LateReverbComponent_MetaData[] = {
		{ "Category", "LateReverb" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AkReverbVolume.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_LateReverbComponent = { "LateReverbComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAkReverbVolume, LateReverbComponent), Z_Construct_UClass_UAkLateReverbComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_LateReverbComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_LateReverbComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAkReverbVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_AuxBus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_AuxBusName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_SendLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_FadeRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_LateReverbComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAkReverbVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAkReverbVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAkReverbVolume_Statics::ClassParams = {
		&AAkReverbVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAkReverbVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAkReverbVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAkReverbVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAkReverbVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAkReverbVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAkReverbVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAkReverbVolume, 2661161183);
	template<> AKAUDIO_API UClass* StaticClass<AAkReverbVolume>()
	{
		return AAkReverbVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAkReverbVolume(Z_Construct_UClass_AAkReverbVolume, &AAkReverbVolume::StaticClass, TEXT("/Script/AkAudio"), TEXT("AAkReverbVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAkReverbVolume);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AAkReverbVolume)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
