// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkSurfaceReflectorSetComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSurfaceReflectorSetComponent() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSurfaceProperties();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkEdgeInfo();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkPoly();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTexture_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTextureSetComponent();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FAkSurfaceProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkSurfaceProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkSurfaceProperties, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkSurfaceProperties"), sizeof(FAkSurfaceProperties), Get_Z_Construct_UScriptStruct_FAkSurfaceProperties_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkSurfaceProperties>()
{
	return FAkSurfaceProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkSurfaceProperties(FAkSurfaceProperties::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkSurfaceProperties"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkSurfaceProperties
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkSurfaceProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkSurfaceProperties")),new UScriptStruct::TCppStructOps<FAkSurfaceProperties>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkSurfaceProperties;
	struct Z_Construct_UScriptStruct_FAkSurfaceProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSurfaceProperties_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Contains the properties of a face from the ParentBrush of a UAkSurfaceReflectorSetComponent. */" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
		{ "ToolTip", "Contains the properties of a face from the ParentBrush of a UAkSurfaceReflectorSetComponent." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkSurfaceProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkSurfaceProperties>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkSurfaceProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkSurfaceProperties",
		sizeof(FAkSurfaceProperties),
		alignof(FAkSurfaceProperties),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSurfaceProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSurfaceProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkSurfaceProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkSurfaceProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkSurfaceProperties"), sizeof(FAkSurfaceProperties), Get_Z_Construct_UScriptStruct_FAkSurfaceProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkSurfaceProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkSurfaceProperties_Hash() { return 294857434U; }
class UScriptStruct* FAkEdgeInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkEdgeInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkEdgeInfo, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkEdgeInfo"), sizeof(FAkEdgeInfo), Get_Z_Construct_UScriptStruct_FAkEdgeInfo_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkEdgeInfo>()
{
	return FAkEdgeInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkEdgeInfo(FAkEdgeInfo::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkEdgeInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkEdgeInfo
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkEdgeInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkEdgeInfo")),new UScriptStruct::TCppStructOps<FAkEdgeInfo>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkEdgeInfo;
	struct Z_Construct_UScriptStruct_FAkEdgeInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkEdgeInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** An edge between two vertices */" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
		{ "ToolTip", "An edge between two vertices" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkEdgeInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkEdgeInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkEdgeInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkEdgeInfo",
		sizeof(FAkEdgeInfo),
		alignof(FAkEdgeInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkEdgeInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkEdgeInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkEdgeInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkEdgeInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkEdgeInfo"), sizeof(FAkEdgeInfo), Get_Z_Construct_UScriptStruct_FAkEdgeInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkEdgeInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkEdgeInfo_Hash() { return 770670899U; }
class UScriptStruct* FAkPoly::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkPoly_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkPoly, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkPoly"), sizeof(FAkPoly), Get_Z_Construct_UScriptStruct_FAkPoly_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkPoly>()
{
	return FAkPoly::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkPoly(FAkPoly::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkPoly"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkPoly
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkPoly()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkPoly")),new UScriptStruct::TCppStructOps<FAkPoly>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkPoly;
	struct Z_Construct_UScriptStruct_FAkPoly_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Occlusion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Occlusion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableSurface_MetaData[];
#endif
		static void NewProp_EnableSurface_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableSurface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SurfaceArea;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkPoly_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkPoly_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkPoly>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkPoly_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAkPoly_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkPoly, Texture), Z_Construct_UClass_UAkAcousticTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkPoly_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPoly_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkPoly_Statics::NewProp_Occlusion_MetaData[] = {
		{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Transmission Loss" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkPoly_Statics::NewProp_Occlusion = { "Occlusion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkPoly, Occlusion), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkPoly_Statics::NewProp_Occlusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPoly_Statics::NewProp_Occlusion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkPoly_Statics::NewProp_EnableSurface_MetaData[] = {
		{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkPoly_Statics::NewProp_EnableSurface_SetBit(void* Obj)
	{
		((FAkPoly*)Obj)->EnableSurface = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkPoly_Statics::NewProp_EnableSurface = { "EnableSurface", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAkPoly), &Z_Construct_UScriptStruct_FAkPoly_Statics::NewProp_EnableSurface_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkPoly_Statics::NewProp_EnableSurface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPoly_Statics::NewProp_EnableSurface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkPoly_Statics::NewProp_SurfaceArea_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkPoly_Statics::NewProp_SurfaceArea = { "SurfaceArea", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkPoly, SurfaceArea), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkPoly_Statics::NewProp_SurfaceArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPoly_Statics::NewProp_SurfaceArea_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkPoly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkPoly_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkPoly_Statics::NewProp_Occlusion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkPoly_Statics::NewProp_EnableSurface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkPoly_Statics::NewProp_SurfaceArea,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkPoly_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkPoly",
		sizeof(FAkPoly),
		alignof(FAkPoly),
		Z_Construct_UScriptStruct_FAkPoly_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPoly_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkPoly_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPoly_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkPoly()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkPoly_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkPoly"), sizeof(FAkPoly), Get_Z_Construct_UScriptStruct_FAkPoly_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkPoly_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkPoly_Hash() { return 3062013237U; }
	DEFINE_FUNCTION(UAkSurfaceReflectorSetComponent::execUpdateSurfaceReflectorSet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSurfaceReflectorSet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkSurfaceReflectorSetComponent::execRemoveSurfaceReflectorSet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveSurfaceReflectorSet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkSurfaceReflectorSetComponent::execSendSurfaceReflectorSet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendSurfaceReflectorSet();
		P_NATIVE_END;
	}
	void UAkSurfaceReflectorSetComponent::StaticRegisterNativesUAkSurfaceReflectorSetComponent()
	{
		UClass* Class = UAkSurfaceReflectorSetComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemoveSurfaceReflectorSet", &UAkSurfaceReflectorSetComponent::execRemoveSurfaceReflectorSet },
			{ "SendSurfaceReflectorSet", &UAkSurfaceReflectorSetComponent::execSendSurfaceReflectorSet },
			{ "UpdateSurfaceReflectorSet", &UAkSurfaceReflectorSetComponent::execUpdateSurfaceReflectorSet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSurfaceReflectorSetComponent, nullptr, "RemoveSurfaceReflectorSet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSurfaceReflectorSetComponent, nullptr, "SendSurfaceReflectorSet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSurfaceReflectorSetComponent, nullptr, "UpdateSurfaceReflectorSet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent_NoRegister()
	{
		return UAkSurfaceReflectorSetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableSurfaceReflectors_MetaData[];
#endif
		static void NewProp_bEnableSurfaceReflectors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSurfaceReflectors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AcousticPolys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcousticPolys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AcousticPolys;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDiffraction_MetaData[];
#endif
		static void NewProp_bEnableDiffraction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDiffraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDiffractionOnBoundaryEdges_MetaData[];
#endif
		static void NewProp_bEnableDiffractionOnBoundaryEdges_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDiffractionOnBoundaryEdges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssociatedRoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssociatedRoom;
#if WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextVisualizers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextVisualizers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TextVisualizers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgeMap_ValueProp;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_EdgeMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgeMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_EdgeMap;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAcousticTextureSetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet, "RemoveSurfaceReflectorSet" }, // 2877272569
		{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet, "SendSurfaceReflectorSet" }, // 4207309603
		{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet, "UpdateSurfaceReflectorSet" }, // 3318782720
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audiokinetic" },
		{ "HideCategories", "Transform Rendering Mobility LOD Component Activation Tags Trigger PhysicsVolume" },
		{ "IncludePath", "AkSurfaceReflectorSetComponent.h" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableSurfaceReflectors_MetaData[] = {
		{ "Category", "Toggle" },
		{ "Comment", "/** Enable reflection with geometry */" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
		{ "ToolTip", "Enable reflection with geometry" },
	};
#endif
	void Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableSurfaceReflectors_SetBit(void* Obj)
	{
		((UAkSurfaceReflectorSetComponent*)Obj)->bEnableSurfaceReflectors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableSurfaceReflectors = { "bEnableSurfaceReflectors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAkSurfaceReflectorSetComponent), &Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableSurfaceReflectors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableSurfaceReflectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableSurfaceReflectors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AcousticPolys_Inner = { "AcousticPolys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAkPoly, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AcousticPolys_MetaData[] = {
		{ "Category", "Geometry Surfaces" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AcousticPolys = { "AcousticPolys", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSurfaceReflectorSetComponent, AcousticPolys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AcousticPolys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AcousticPolys_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffraction_MetaData[] = {
		{ "Category", "Geometry Settings" },
		{ "Comment", "/** Enable or disable geometric diffraction for this mesh. Check this box to have Wwise Spatial Audio generate diffraction edges on the geometry. The diffraction edges will be visible in the Wwise game object viewer when connected to the game. */" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
		{ "ToolTip", "Enable or disable geometric diffraction for this mesh. Check this box to have Wwise Spatial Audio generate diffraction edges on the geometry. The diffraction edges will be visible in the Wwise game object viewer when connected to the game." },
	};
#endif
	void Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffraction_SetBit(void* Obj)
	{
		((UAkSurfaceReflectorSetComponent*)Obj)->bEnableDiffraction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffraction = { "bEnableDiffraction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAkSurfaceReflectorSetComponent), &Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffraction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_MetaData[] = {
		{ "Category", "Geometry Settings" },
		{ "Comment", "/** Enable or disable geometric diffraction on boundary edges for this Geometry. Boundary edges are edges that are connected to only one triangle. Depending on the specific shape of the geometry, boundary edges may or may not be useful and it is beneficial to reduce the total number of diffraction edges to process.  */" },
		{ "EditCondition", "bEnableDiffraction" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
		{ "ToolTip", "Enable or disable geometric diffraction on boundary edges for this Geometry. Boundary edges are edges that are connected to only one triangle. Depending on the specific shape of the geometry, boundary edges may or may not be useful and it is beneficial to reduce the total number of diffraction edges to process." },
	};
#endif
	void Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_SetBit(void* Obj)
	{
		((UAkSurfaceReflectorSetComponent*)Obj)->bEnableDiffractionOnBoundaryEdges = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges = { "bEnableDiffractionOnBoundaryEdges", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAkSurfaceReflectorSetComponent), &Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AssociatedRoom_MetaData[] = {
		{ "Category", "Geometry Settings" },
		{ "Comment", "/** (Optional) Associate this Surface Reflector Set with a Room.\n\x09""Associating a surface reflector set with a particular room will limit the scope in which the geometry is visible/accessible. Leave it to None and this geometry will have a global scope.\n\x09It is recommended to associate geometry with a room when the geometry is (1) fully contained within the room (ie. not visible to other rooms except by portals), and (2) the room does not share geometry with other rooms. Doing so reduces the search space for ray casting performed by reflection and diffraction calculations.\n\x09Take note that once one or more geometry sets are associated with a room, that room will no longer be able to access geometry that is in the global scope.*/" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
		{ "ToolTip", "(Optional) Associate this Surface Reflector Set with a Room.\n      Associating a surface reflector set with a particular room will limit the scope in which the geometry is visible/accessible. Leave it to None and this geometry will have a global scope.\n      It is recommended to associate geometry with a room when the geometry is (1) fully contained within the room (ie. not visible to other rooms except by portals), and (2) the room does not share geometry with other rooms. Doing so reduces the search space for ray casting performed by reflection and diffraction calculations.\n      Take note that once one or more geometry sets are associated with a room, that room will no longer be able to access geometry that is in the global scope." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AssociatedRoom = { "AssociatedRoom", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSurfaceReflectorSetComponent, AssociatedRoom), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AssociatedRoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AssociatedRoom_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_TextVisualizers_Inner = { "TextVisualizers", nullptr, (EPropertyFlags)0x0000000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_TextVisualizers_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_TextVisualizers = { "TextVisualizers", nullptr, (EPropertyFlags)0x0090008c00000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSurfaceReflectorSetComponent, TextVisualizers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_TextVisualizers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_TextVisualizers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_EdgeMap_ValueProp = { "EdgeMap", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FAkEdgeInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_EdgeMap_Key_KeyProp = { "EdgeMap_Key", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_EdgeMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_EdgeMap = { "EdgeMap", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSurfaceReflectorSetComponent, EdgeMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_EdgeMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_EdgeMap_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableSurfaceReflectors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AcousticPolys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AcousticPolys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AssociatedRoom,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_TextVisualizers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_TextVisualizers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_EdgeMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_EdgeMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_EdgeMap,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkSurfaceReflectorSetComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::ClassParams = {
		&UAkSurfaceReflectorSetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkSurfaceReflectorSetComponent, 4249633889);
	template<> AKAUDIO_API UClass* StaticClass<UAkSurfaceReflectorSetComponent>()
	{
		return UAkSurfaceReflectorSetComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkSurfaceReflectorSetComponent(Z_Construct_UClass_UAkSurfaceReflectorSetComponent, &UAkSurfaceReflectorSetComponent::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkSurfaceReflectorSetComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkSurfaceReflectorSetComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
