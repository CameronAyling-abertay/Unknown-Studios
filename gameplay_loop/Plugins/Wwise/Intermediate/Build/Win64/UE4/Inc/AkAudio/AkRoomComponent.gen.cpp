// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkRoomComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkRoomComponent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRoomComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRoomComponent();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGameObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTextureSetComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAkRoomComponent::execGetPrimitiveParent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPrimitiveComponent**)Z_Param__Result=P_THIS->GetPrimitiveParent();
		P_NATIVE_END;
	}
	void UAkRoomComponent::StaticRegisterNativesUAkRoomComponent()
	{
		UClass* Class = UAkRoomComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPrimitiveParent", &UAkRoomComponent::execGetPrimitiveParent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkRoomComponent_GetPrimitiveParent_Statics
	{
		struct AkRoomComponent_eventGetPrimitiveParent_Parms
		{
			UPrimitiveComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkRoomComponent_GetPrimitiveParent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkRoomComponent_GetPrimitiveParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkRoomComponent_eventGetPrimitiveParent_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkRoomComponent_GetPrimitiveParent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkRoomComponent_GetPrimitiveParent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkRoomComponent_GetPrimitiveParent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkRoomComponent_GetPrimitiveParent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkRoomComponent_GetPrimitiveParent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkRoomComponent" },
		{ "ModuleRelativePath", "Classes/AkRoomComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkRoomComponent_GetPrimitiveParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkRoomComponent, nullptr, "GetPrimitiveParent", nullptr, nullptr, sizeof(AkRoomComponent_eventGetPrimitiveParent_Parms), Z_Construct_UFunction_UAkRoomComponent_GetPrimitiveParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkRoomComponent_GetPrimitiveParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkRoomComponent_GetPrimitiveParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkRoomComponent_GetPrimitiveParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkRoomComponent_GetPrimitiveParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkRoomComponent_GetPrimitiveParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkRoomComponent_NoRegister()
	{
		return UAkRoomComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAkRoomComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDynamic_MetaData[];
#endif
		static void NewProp_bDynamic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDynamic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallOcclusion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WallOcclusion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxSendLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AuxSendLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoPost_MetaData[];
#endif
		static void NewProp_AutoPost_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoPost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeometryComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GeometryComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkRoomComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkGameObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkRoomComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkRoomComponent_GetPrimitiveParent, "GetPrimitiveParent" }, // 3608861217
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkRoomComponent_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "AkComponent" },
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audiokinetic" },
		{ "HideCategories", "Transform Rendering Mobility LOD Component Activation Tags Transform Rendering Mobility LOD Component Activation Trigger PhysicsVolume" },
		{ "IncludePath", "AkRoomComponent.h" },
		{ "ModuleRelativePath", "Classes/AkRoomComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_bEnable_MetaData[] = {
		{ "Category", "Toggle" },
		{ "Comment", "/** \n\x09* Enable room transmission feature. Additional properties are available in the Room category. \n\x09* If Enable Room begins as false, changing Enable Room during runtime will only have an effect\n\x09* if Room Is Dynamic = true.\n\x09*/" },
		{ "DisplayName", "Enable Room" },
		{ "ModuleRelativePath", "Classes/AkRoomComponent.h" },
		{ "ToolTip", "Enable room transmission feature. Additional properties are available in the Room category.\nIf Enable Room begins as false, changing Enable Room during runtime will only have an effect\nif Room Is Dynamic = true." },
	};
#endif
	void Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((UAkRoomComponent*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAkRoomComponent), &Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_bEnable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_bDynamic_MetaData[] = {
		{ "Category", "Toggle" },
		{ "Comment", "/** \n\x09* If true, the portal connections for this room can change during runtime when this room moves.\n\x09* For worlds containing many portals, this can be expensive. Note that this room's portal connections \n\x09* may still change, even when Room Is Dynamic = false, when dynamic portals are moved (i.e. when portals\n\x09* move who have bDynamic = true).\n\x09* When Room Is Dynamic = true, enabling and disabling rooms will have immediate effect, without needing\n\x09* to update emitters and/or listeners directly. */" },
		{ "DisplayName", "Room Is Dynamic" },
		{ "ModuleRelativePath", "Classes/AkRoomComponent.h" },
		{ "ToolTip", "If true, the portal connections for this room can change during runtime when this room moves.\nFor worlds containing many portals, this can be expensive. Note that this room's portal connections\nmay still change, even when Room Is Dynamic = false, when dynamic portals are moved (i.e. when portals\nmove who have bDynamic = true).\nWhen Room Is Dynamic = true, enabling and disabling rooms will have immediate effect, without needing\nto update emitters and/or listeners directly." },
	};
#endif
	void Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_bDynamic_SetBit(void* Obj)
	{
		((UAkRoomComponent*)Obj)->bDynamic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_bDynamic = { "bDynamic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkRoomComponent), &Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_bDynamic_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_bDynamic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_bDynamic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "Room" },
		{ "Comment", "/**\n\x09* The precedence in which the Rooms will be applied. In the case of overlapping rooms, only the one\n\x09* with the highest priority is chosen. If two or more overlapping rooms have the same\n\x09* priority, the chosen room is unpredictable.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AkRoomComponent.h" },
		{ "ToolTip", "The precedence in which the Rooms will be applied. In the case of overlapping rooms, only the one\nwith the highest priority is chosen. If two or more overlapping rooms have the same\npriority, the chosen room is unpredictable." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkRoomComponent, Priority), METADATA_PARAMS(Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_WallOcclusion_MetaData[] = {
		{ "Category", "Room" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/**\n\x09* Used to set the transmission loss value in wwise, on emitters in the room, when no audio paths to the \n\x09* listener are found via sound propagation in Wwise Spatial Audio. This value can be thought of as \n\x09* 'thickness', as it relates to how much sound energy is transmitted through the wall. Valid range 0.0f-1.0f, \n\x09* and is mapped to the occlusion curve as defined in the Wwise project.\n\x09*/" },
		{ "DisplayName", "Transmission Loss" },
		{ "ModuleRelativePath", "Classes/AkRoomComponent.h" },
		{ "ToolTip", "Used to set the transmission loss value in wwise, on emitters in the room, when no audio paths to the\nlistener are found via sound propagation in Wwise Spatial Audio. This value can be thought of as\n'thickness', as it relates to how much sound energy is transmitted through the wall. Valid range 0.0f-1.0f,\nand is mapped to the occlusion curve as defined in the Wwise project." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_WallOcclusion = { "WallOcclusion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkRoomComponent, WallOcclusion), METADATA_PARAMS(Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_WallOcclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_WallOcclusion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_AuxSendLevel_MetaData[] = {
		{ "Category", "AkEvent" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09* Send level for sounds that are posted on the room. Valid range: (0.f-1.f). A value of 0 disables the aux send.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AkRoomComponent.h" },
		{ "ToolTip", "Send level for sounds that are posted on the room. Valid range: (0.f-1.f). A value of 0 disables the aux send." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_AuxSendLevel = { "AuxSendLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkRoomComponent, AuxSendLevel), METADATA_PARAMS(Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_AuxSendLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_AuxSendLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_AutoPost_MetaData[] = {
		{ "Category", "AkEvent" },
		{ "Comment", "/** Automatically post the associated AkAudioEvent on BeginPlay */" },
		{ "ModuleRelativePath", "Classes/AkRoomComponent.h" },
		{ "ToolTip", "Automatically post the associated AkAudioEvent on BeginPlay" },
	};
#endif
	void Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_AutoPost_SetBit(void* Obj)
	{
		((UAkRoomComponent*)Obj)->AutoPost = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_AutoPost = { "AutoPost", nullptr, (EPropertyFlags)0x0010020000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkRoomComponent), &Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_AutoPost_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_AutoPost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_AutoPost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_GeometryComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AkRoomComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_GeometryComponent = { "GeometryComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkRoomComponent, GeometryComponent), Z_Construct_UClass_UAkAcousticTextureSetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_GeometryComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_GeometryComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkRoomComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_bEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_bDynamic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_WallOcclusion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_AuxSendLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_AutoPost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_GeometryComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkRoomComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkRoomComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkRoomComponent_Statics::ClassParams = {
		&UAkRoomComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkRoomComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkRoomComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAkRoomComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkRoomComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkRoomComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkRoomComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkRoomComponent, 3796754907);
	template<> AKAUDIO_API UClass* StaticClass<UAkRoomComponent>()
	{
		return UAkRoomComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkRoomComponent(Z_Construct_UClass_UAkRoomComponent, &UAkRoomComponent::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkRoomComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkRoomComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
