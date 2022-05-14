// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkAudioEvent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAudioEvent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetDataSwitchContainerData_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetDataSwitchContainerData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGroupValue_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMediaAsset_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetDataSwitchContainer_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetDataSwitchContainer();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetDataWithMedia();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEventData_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEventData();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkTrigger_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetBase();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetPlatformData_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioBank_NoRegister();
// End Cross Module References
	void UAkAssetDataSwitchContainerData::StaticRegisterNativesUAkAssetDataSwitchContainerData()
	{
	}
	UClass* Z_Construct_UClass_UAkAssetDataSwitchContainerData_NoRegister()
	{
		return UAkAssetDataSwitchContainerData::StaticClass();
	}
	struct Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_GroupValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultGroupValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultGroupValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MediaList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MediaList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Children_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Children;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkAudioEvent.h" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_GroupValue_MetaData[] = {
		{ "Category", "AkAudioEvent" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_GroupValue = { "GroupValue", nullptr, (EPropertyFlags)0x0014000000020001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAssetDataSwitchContainerData, GroupValue), Z_Construct_UClass_UAkGroupValue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_GroupValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_GroupValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_DefaultGroupValue_MetaData[] = {
		{ "Category", "AkAudioEvent" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_DefaultGroupValue = { "DefaultGroupValue", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAssetDataSwitchContainerData, DefaultGroupValue), Z_Construct_UClass_UAkGroupValue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_DefaultGroupValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_DefaultGroupValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_MediaList_Inner = { "MediaList", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAkMediaAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_MediaList_MetaData[] = {
		{ "Category", "AkAudioEvent" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_MediaList = { "MediaList", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAssetDataSwitchContainerData, MediaList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_MediaList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_MediaList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAkAssetDataSwitchContainerData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_Children_MetaData[] = {
		{ "Category", "AkAudioEvent" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAssetDataSwitchContainerData, Children), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_Children_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_Children_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_GroupValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_DefaultGroupValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_MediaList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_MediaList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_Children_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_Children,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAssetDataSwitchContainerData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::ClassParams = {
		&UAkAssetDataSwitchContainerData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAssetDataSwitchContainerData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkAssetDataSwitchContainerData, 1533355660);
	template<> AKAUDIO_API UClass* StaticClass<UAkAssetDataSwitchContainerData>()
	{
		return UAkAssetDataSwitchContainerData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkAssetDataSwitchContainerData(Z_Construct_UClass_UAkAssetDataSwitchContainerData, &UAkAssetDataSwitchContainerData::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkAssetDataSwitchContainerData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAssetDataSwitchContainerData);
	void UAkAssetDataSwitchContainer::StaticRegisterNativesUAkAssetDataSwitchContainer()
	{
	}
	UClass* Z_Construct_UClass_UAkAssetDataSwitchContainer_NoRegister()
	{
		return UAkAssetDataSwitchContainer::StaticClass();
	}
	struct Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SwitchContainers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwitchContainers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SwitchContainers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultGroupValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultGroupValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAssetDataWithMedia,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkAudioEvent.h" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::NewProp_SwitchContainers_Inner = { "SwitchContainers", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAkAssetDataSwitchContainerData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::NewProp_SwitchContainers_MetaData[] = {
		{ "Category", "AkAudioEvent" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::NewProp_SwitchContainers = { "SwitchContainers", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAssetDataSwitchContainer, SwitchContainers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::NewProp_SwitchContainers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::NewProp_SwitchContainers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::NewProp_DefaultGroupValue_MetaData[] = {
		{ "Category", "AkAudioEvent" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::NewProp_DefaultGroupValue = { "DefaultGroupValue", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAssetDataSwitchContainer, DefaultGroupValue), Z_Construct_UClass_UAkGroupValue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::NewProp_DefaultGroupValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::NewProp_DefaultGroupValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::NewProp_SwitchContainers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::NewProp_SwitchContainers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::NewProp_DefaultGroupValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAssetDataSwitchContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::ClassParams = {
		&UAkAssetDataSwitchContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAssetDataSwitchContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkAssetDataSwitchContainer, 630885872);
	template<> AKAUDIO_API UClass* StaticClass<UAkAssetDataSwitchContainer>()
	{
		return UAkAssetDataSwitchContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkAssetDataSwitchContainer(Z_Construct_UClass_UAkAssetDataSwitchContainer, &UAkAssetDataSwitchContainer::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkAssetDataSwitchContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAssetDataSwitchContainer);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkAssetDataSwitchContainer)
	void UAkAudioEventData::StaticRegisterNativesUAkAudioEventData()
	{
	}
	UClass* Z_Construct_UClass_UAkAudioEventData_NoRegister()
	{
		return UAkAudioEventData::StaticClass();
	}
	struct Z_Construct_UClass_UAkAudioEventData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAttenuationRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAttenuationRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInfinite_MetaData[];
#endif
		static void NewProp_IsInfinite_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInfinite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumDuration;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocalizedMedia_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocalizedMedia_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalizedMedia_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LocalizedMedia;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PostedEvents_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostedEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_PostedEvents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserDefinedSends_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserDefinedSends_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_UserDefinedSends;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PostedTriggers_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostedTriggers_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_PostedTriggers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GroupValues_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_GroupValues;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAudioEventData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAssetDataSwitchContainer,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEventData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkAudioEvent.h" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MaxAttenuationRadius_MetaData[] = {
		{ "Category", "AkAudioEvent" },
		{ "Comment", "/** Maximum attenuation radius for this event */" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
		{ "ToolTip", "Maximum attenuation radius for this event" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MaxAttenuationRadius = { "MaxAttenuationRadius", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAudioEventData, MaxAttenuationRadius), METADATA_PARAMS(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MaxAttenuationRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MaxAttenuationRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_IsInfinite_MetaData[] = {
		{ "Category", "AkAudioEvent" },
		{ "Comment", "/** Whether this event is infinite (looping) or finite (duration parameters are valid) */" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
		{ "ToolTip", "Whether this event is infinite (looping) or finite (duration parameters are valid)" },
	};
#endif
	void Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_IsInfinite_SetBit(void* Obj)
	{
		((UAkAudioEventData*)Obj)->IsInfinite = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_IsInfinite = { "IsInfinite", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkAudioEventData), &Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_IsInfinite_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_IsInfinite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_IsInfinite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MinimumDuration_MetaData[] = {
		{ "Category", "AkAudioEvent" },
		{ "Comment", "/** Minimum duration */" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
		{ "ToolTip", "Minimum duration" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MinimumDuration = { "MinimumDuration", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAudioEventData, MinimumDuration), METADATA_PARAMS(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MinimumDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MinimumDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MaximumDuration_MetaData[] = {
		{ "Category", "AkAudioEvent" },
		{ "Comment", "/** Maximum duration */" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
		{ "ToolTip", "Maximum duration" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MaximumDuration = { "MaximumDuration", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAudioEventData, MaximumDuration), METADATA_PARAMS(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MaximumDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MaximumDuration_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_LocalizedMedia_ValueProp = { "LocalizedMedia", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UAkAssetDataSwitchContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_LocalizedMedia_Key_KeyProp = { "LocalizedMedia_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_LocalizedMedia_MetaData[] = {
		{ "Category", "AkAudioEvent" },
		{ "Comment", "// This map is used when the event is part of a AkAudioBank\n" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
		{ "ToolTip", "This map is used when the event is part of a AkAudioBank" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_LocalizedMedia = { "LocalizedMedia", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAudioEventData, LocalizedMedia), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_LocalizedMedia_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_LocalizedMedia_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedEvents_ElementProp = { "PostedEvents", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedEvents_MetaData[] = {
		{ "Category", "AkAudioEvent" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedEvents = { "PostedEvents", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAudioEventData, PostedEvents), METADATA_PARAMS(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedEvents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_UserDefinedSends_ElementProp = { "UserDefinedSends", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_UserDefinedSends_MetaData[] = {
		{ "Category", "AkAudioEvent" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_UserDefinedSends = { "UserDefinedSends", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAudioEventData, UserDefinedSends), METADATA_PARAMS(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_UserDefinedSends_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_UserDefinedSends_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedTriggers_ElementProp = { "PostedTriggers", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAkTrigger_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedTriggers_MetaData[] = {
		{ "Category", "AkAudioEvent" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedTriggers = { "PostedTriggers", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAudioEventData, PostedTriggers), METADATA_PARAMS(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedTriggers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedTriggers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_GroupValues_ElementProp = { "GroupValues", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAkGroupValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_GroupValues_MetaData[] = {
		{ "Category", "AkAudioEvent" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_GroupValues = { "GroupValues", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAudioEventData, GroupValues), METADATA_PARAMS(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_GroupValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_GroupValues_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAudioEventData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MaxAttenuationRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_IsInfinite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MinimumDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MaximumDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_LocalizedMedia_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_LocalizedMedia_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_LocalizedMedia,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedEvents_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_UserDefinedSends_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_UserDefinedSends,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedTriggers_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedTriggers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_GroupValues_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_GroupValues,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAudioEventData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAudioEventData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkAudioEventData_Statics::ClassParams = {
		&UAkAudioEventData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkAudioEventData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEventData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAudioEventData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEventData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAudioEventData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkAudioEventData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkAudioEventData, 802669841);
	template<> AKAUDIO_API UClass* StaticClass<UAkAudioEventData>()
	{
		return UAkAudioEventData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkAudioEventData(Z_Construct_UClass_UAkAudioEventData, &UAkAudioEventData::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkAudioEventData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAudioEventData);
	DEFINE_FUNCTION(UAkAudioEvent::execGetMaximumDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaximumDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkAudioEvent::execGetMinimumDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMinimumDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkAudioEvent::execGetIsInfinite)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsInfinite();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkAudioEvent::execGetMaxAttenuationRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxAttenuationRadius();
		P_NATIVE_END;
	}
	void UAkAudioEvent::StaticRegisterNativesUAkAudioEvent()
	{
		UClass* Class = UAkAudioEvent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIsInfinite", &UAkAudioEvent::execGetIsInfinite },
			{ "GetMaxAttenuationRadius", &UAkAudioEvent::execGetMaxAttenuationRadius },
			{ "GetMaximumDuration", &UAkAudioEvent::execGetMaximumDuration },
			{ "GetMinimumDuration", &UAkAudioEvent::execGetMinimumDuration },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkAudioEvent_GetIsInfinite_Statics
	{
		struct AkAudioEvent_eventGetIsInfinite_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAkAudioEvent_GetIsInfinite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkAudioEvent_eventGetIsInfinite_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkAudioEvent_GetIsInfinite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkAudioEvent_eventGetIsInfinite_Parms), &Z_Construct_UFunction_UAkAudioEvent_GetIsInfinite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkAudioEvent_GetIsInfinite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_GetIsInfinite_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkAudioEvent_GetIsInfinite_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "AkAudioEvent" },
		{ "Comment", "/** Whether this event is infinite (looping) or finite (duration parameters are valid) */" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
		{ "ToolTip", "Whether this event is infinite (looping) or finite (duration parameters are valid)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkAudioEvent_GetIsInfinite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkAudioEvent, nullptr, "GetIsInfinite", nullptr, nullptr, sizeof(AkAudioEvent_eventGetIsInfinite_Parms), Z_Construct_UFunction_UAkAudioEvent_GetIsInfinite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioEvent_GetIsInfinite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkAudioEvent_GetIsInfinite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioEvent_GetIsInfinite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkAudioEvent_GetIsInfinite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkAudioEvent_GetIsInfinite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkAudioEvent_GetMaxAttenuationRadius_Statics
	{
		struct AkAudioEvent_eventGetMaxAttenuationRadius_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkAudioEvent_GetMaxAttenuationRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkAudioEvent_eventGetMaxAttenuationRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkAudioEvent_GetMaxAttenuationRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_GetMaxAttenuationRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkAudioEvent_GetMaxAttenuationRadius_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "AkAudioEvent" },
		{ "Comment", "/** Maximum attenuation radius for this event */" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
		{ "ToolTip", "Maximum attenuation radius for this event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkAudioEvent_GetMaxAttenuationRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkAudioEvent, nullptr, "GetMaxAttenuationRadius", nullptr, nullptr, sizeof(AkAudioEvent_eventGetMaxAttenuationRadius_Parms), Z_Construct_UFunction_UAkAudioEvent_GetMaxAttenuationRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioEvent_GetMaxAttenuationRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkAudioEvent_GetMaxAttenuationRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioEvent_GetMaxAttenuationRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkAudioEvent_GetMaxAttenuationRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkAudioEvent_GetMaxAttenuationRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkAudioEvent_GetMaximumDuration_Statics
	{
		struct AkAudioEvent_eventGetMaximumDuration_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkAudioEvent_GetMaximumDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkAudioEvent_eventGetMaximumDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkAudioEvent_GetMaximumDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_GetMaximumDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkAudioEvent_GetMaximumDuration_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "AkAudioEvent" },
		{ "Comment", "/** Maximum duration */" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
		{ "ToolTip", "Maximum duration" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkAudioEvent_GetMaximumDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkAudioEvent, nullptr, "GetMaximumDuration", nullptr, nullptr, sizeof(AkAudioEvent_eventGetMaximumDuration_Parms), Z_Construct_UFunction_UAkAudioEvent_GetMaximumDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioEvent_GetMaximumDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkAudioEvent_GetMaximumDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioEvent_GetMaximumDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkAudioEvent_GetMaximumDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkAudioEvent_GetMaximumDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkAudioEvent_GetMinimumDuration_Statics
	{
		struct AkAudioEvent_eventGetMinimumDuration_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkAudioEvent_GetMinimumDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkAudioEvent_eventGetMinimumDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkAudioEvent_GetMinimumDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioEvent_GetMinimumDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkAudioEvent_GetMinimumDuration_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "AkAudioEvent" },
		{ "Comment", "/** Minimum duration */" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
		{ "ToolTip", "Minimum duration" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkAudioEvent_GetMinimumDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkAudioEvent, nullptr, "GetMinimumDuration", nullptr, nullptr, sizeof(AkAudioEvent_eventGetMinimumDuration_Parms), Z_Construct_UFunction_UAkAudioEvent_GetMinimumDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioEvent_GetMinimumDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkAudioEvent_GetMinimumDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioEvent_GetMinimumDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkAudioEvent_GetMinimumDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkAudioEvent_GetMinimumDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister()
	{
		return UAkAudioEvent::StaticClass();
	}
	struct Z_Construct_UClass_UAkAudioEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LocalizedPlatformAssetDataMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocalizedPlatformAssetDataMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalizedPlatformAssetDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LocalizedPlatformAssetDataMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredBank_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RequiredBank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLocalizedPlatformData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentLocalizedPlatformData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAttenuationRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAttenuationRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInfinite_MetaData[];
#endif
		static void NewProp_IsInfinite_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInfinite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAudioEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAssetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkAudioEvent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkAudioEvent_GetIsInfinite, "GetIsInfinite" }, // 2788921320
		{ &Z_Construct_UFunction_UAkAudioEvent_GetMaxAttenuationRadius, "GetMaxAttenuationRadius" }, // 4059946609
		{ &Z_Construct_UFunction_UAkAudioEvent_GetMaximumDuration, "GetMaximumDuration" }, // 1565929867
		{ &Z_Construct_UFunction_UAkAudioEvent_GetMinimumDuration, "GetMinimumDuration" }, // 1322460141
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEvent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkAudioEvent.h" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_LocalizedPlatformAssetDataMap_ValueProp = { "LocalizedPlatformAssetDataMap", nullptr, (EPropertyFlags)0x0004000000020001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UAkAssetPlatformData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_LocalizedPlatformAssetDataMap_Key_KeyProp = { "LocalizedPlatformAssetDataMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_LocalizedPlatformAssetDataMap_MetaData[] = {
		{ "Category", "AkAudioEvent" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_LocalizedPlatformAssetDataMap = { "LocalizedPlatformAssetDataMap", nullptr, (EPropertyFlags)0x0014000000020001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAudioEvent, LocalizedPlatformAssetDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_LocalizedPlatformAssetDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_LocalizedPlatformAssetDataMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_RequiredBank_MetaData[] = {
		{ "Category", "AkAudioEvent" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_RequiredBank = { "RequiredBank", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAudioEvent, RequiredBank), Z_Construct_UClass_UAkAudioBank_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_RequiredBank_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_RequiredBank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_CurrentLocalizedPlatformData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_CurrentLocalizedPlatformData = { "CurrentLocalizedPlatformData", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAudioEvent, CurrentLocalizedPlatformData), Z_Construct_UClass_UAkAssetPlatformData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_CurrentLocalizedPlatformData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_CurrentLocalizedPlatformData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MaxAttenuationRadius_MetaData[] = {
		{ "BlueprintGetter", "GetMaxAttenuationRadius" },
		{ "Category", "AkAudioEvent" },
		{ "Comment", "/** Maximum attenuation radius for this event */" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
		{ "ToolTip", "Maximum attenuation radius for this event" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MaxAttenuationRadius = { "MaxAttenuationRadius", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAudioEvent, MaxAttenuationRadius), METADATA_PARAMS(Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MaxAttenuationRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MaxAttenuationRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_IsInfinite_MetaData[] = {
		{ "BlueprintGetter", "GetIsInfinite" },
		{ "Category", "AkAudioEvent" },
		{ "Comment", "/** Whether this event is infinite (looping) or finite (duration parameters are valid) */" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
		{ "ToolTip", "Whether this event is infinite (looping) or finite (duration parameters are valid)" },
	};
#endif
	void Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_IsInfinite_SetBit(void* Obj)
	{
		((UAkAudioEvent*)Obj)->IsInfinite = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_IsInfinite = { "IsInfinite", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkAudioEvent), &Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_IsInfinite_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_IsInfinite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_IsInfinite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MinimumDuration_MetaData[] = {
		{ "BlueprintGetter", "GetMinimumDuration" },
		{ "Category", "AkAudioEvent" },
		{ "Comment", "/** Minimum duration */" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
		{ "ToolTip", "Minimum duration" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MinimumDuration = { "MinimumDuration", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAudioEvent, MinimumDuration), METADATA_PARAMS(Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MinimumDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MinimumDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MaximumDuration_MetaData[] = {
		{ "BlueprintGetter", "GetMaximumDuration" },
		{ "Category", "AkAudioEvent" },
		{ "Comment", "/** Maximum duration */" },
		{ "ModuleRelativePath", "Classes/AkAudioEvent.h" },
		{ "ToolTip", "Maximum duration" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MaximumDuration = { "MaximumDuration", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAudioEvent, MaximumDuration), METADATA_PARAMS(Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MaximumDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MaximumDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAudioEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_LocalizedPlatformAssetDataMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_LocalizedPlatformAssetDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_LocalizedPlatformAssetDataMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_RequiredBank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_CurrentLocalizedPlatformData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MaxAttenuationRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_IsInfinite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MinimumDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEvent_Statics::NewProp_MaximumDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAudioEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAudioEvent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkAudioEvent_Statics::ClassParams = {
		&UAkAudioEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkAudioEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEvent_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAudioEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAudioEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkAudioEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkAudioEvent, 1041321154);
	template<> AKAUDIO_API UClass* StaticClass<UAkAudioEvent>()
	{
		return UAkAudioEvent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkAudioEvent(Z_Construct_UClass_UAkAudioEvent, &UAkAudioEvent::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkAudioEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAudioEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
