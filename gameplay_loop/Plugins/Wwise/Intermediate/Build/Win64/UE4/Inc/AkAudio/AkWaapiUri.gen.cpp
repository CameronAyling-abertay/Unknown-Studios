// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkWaapiBlueprints/AkWaapiUri.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkWaapiUri() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiUri();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWaapiUriConv_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWaapiUriConv();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
class UScriptStruct* FAkWaapiUri::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkWaapiUri_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkWaapiUri, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkWaapiUri"), sizeof(FAkWaapiUri), Get_Z_Construct_UScriptStruct_FAkWaapiUri_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkWaapiUri>()
{
	return FAkWaapiUri::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkWaapiUri(FAkWaapiUri::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkWaapiUri"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkWaapiUri
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkWaapiUri()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkWaapiUri")),new UScriptStruct::TCppStructOps<FAkWaapiUri>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkWaapiUri;
	struct Z_Construct_UScriptStruct_FAkWaapiUri_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Uri_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Uri;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWaapiUri_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Structure for Uri\n*/" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiUri.h" },
		{ "ToolTip", "Structure for Uri" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkWaapiUri_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkWaapiUri>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWaapiUri_Statics::NewProp_Uri_MetaData[] = {
		{ "Category", "Uri" },
		{ "Comment", "/**\n\x09* The Uri\n\x09*/" },
		{ "DisplayName", "Uri" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiUri.h" },
		{ "ToolTip", "The Uri" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkWaapiUri_Statics::NewProp_Uri = { "Uri", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkWaapiUri, Uri), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkWaapiUri_Statics::NewProp_Uri_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWaapiUri_Statics::NewProp_Uri_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkWaapiUri_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkWaapiUri_Statics::NewProp_Uri,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkWaapiUri_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkWaapiUri",
		sizeof(FAkWaapiUri),
		alignof(FAkWaapiUri),
		Z_Construct_UScriptStruct_FAkWaapiUri_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWaapiUri_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkWaapiUri_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWaapiUri_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiUri()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkWaapiUri_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkWaapiUri"), sizeof(FAkWaapiUri), Get_Z_Construct_UScriptStruct_FAkWaapiUri_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkWaapiUri_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkWaapiUri_Hash() { return 3230960725U; }
	DEFINE_FUNCTION(UAkWaapiUriConv::execConv_FAkWaapiUriToText)
	{
		P_GET_STRUCT_REF(FAkWaapiUri,Z_Param_Out_INAkWaapiUri);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UAkWaapiUriConv::Conv_FAkWaapiUriToText(Z_Param_Out_INAkWaapiUri);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkWaapiUriConv::execConv_FAkWaapiUriToString)
	{
		P_GET_STRUCT_REF(FAkWaapiUri,Z_Param_Out_INAkWaapiUri);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAkWaapiUriConv::Conv_FAkWaapiUriToString(Z_Param_Out_INAkWaapiUri);
		P_NATIVE_END;
	}
	void UAkWaapiUriConv::StaticRegisterNativesUAkWaapiUriConv()
	{
		UClass* Class = UAkWaapiUriConv::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_FAkWaapiUriToString", &UAkWaapiUriConv::execConv_FAkWaapiUriToString },
			{ "Conv_FAkWaapiUriToText", &UAkWaapiUriConv::execConv_FAkWaapiUriToText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString_Statics
	{
		struct AkWaapiUriConv_eventConv_FAkWaapiUriToString_Parms
		{
			FAkWaapiUri INAkWaapiUri;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_INAkWaapiUri_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_INAkWaapiUri;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString_Statics::NewProp_INAkWaapiUri_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString_Statics::NewProp_INAkWaapiUri = { "INAkWaapiUri", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiUriConv_eventConv_FAkWaapiUriToString_Parms, INAkWaapiUri), Z_Construct_UScriptStruct_FAkWaapiUri, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString_Statics::NewProp_INAkWaapiUri_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString_Statics::NewProp_INAkWaapiUri_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiUriConv_eventConv_FAkWaapiUriToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString_Statics::NewProp_INAkWaapiUri,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|String" },
		{ "Comment", "/** Converts an AkWaapiUri value to a string */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToString (FAkWaapiUri)" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiUri.h" },
		{ "ToolTip", "Converts an AkWaapiUri value to a string" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiUriConv, nullptr, "Conv_FAkWaapiUriToString", nullptr, nullptr, sizeof(AkWaapiUriConv_eventConv_FAkWaapiUriToString_Parms), Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText_Statics
	{
		struct AkWaapiUriConv_eventConv_FAkWaapiUriToText_Parms
		{
			FAkWaapiUri INAkWaapiUri;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_INAkWaapiUri_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_INAkWaapiUri;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText_Statics::NewProp_INAkWaapiUri_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText_Statics::NewProp_INAkWaapiUri = { "INAkWaapiUri", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiUriConv_eventConv_FAkWaapiUriToText_Parms, INAkWaapiUri), Z_Construct_UScriptStruct_FAkWaapiUri, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText_Statics::NewProp_INAkWaapiUri_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText_Statics::NewProp_INAkWaapiUri_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWaapiUriConv_eventConv_FAkWaapiUriToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText_Statics::NewProp_INAkWaapiUri,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Text" },
		{ "Comment", "/** Converts an AkWaapiUri value to a localizable text */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToText (FAkWaapiUri)" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiUri.h" },
		{ "ToolTip", "Converts an AkWaapiUri value to a localizable text" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiUriConv, nullptr, "Conv_FAkWaapiUriToText", nullptr, nullptr, sizeof(AkWaapiUriConv_eventConv_FAkWaapiUriToText_Parms), Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkWaapiUriConv_NoRegister()
	{
		return UAkWaapiUriConv::StaticClass();
	}
	struct Z_Construct_UClass_UAkWaapiUriConv_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkWaapiUriConv_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkWaapiUriConv_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString, "Conv_FAkWaapiUriToString" }, // 3514790970
		{ &Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText, "Conv_FAkWaapiUriToText" }, // 3974200139
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkWaapiUriConv_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*------------------------------------------------------------------------------------\nUAkWaapiUriConv\n------------------------------------------------------------------------------------*/" },
		{ "IncludePath", "AkWaapiBlueprints/AkWaapiUri.h" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiUri.h" },
		{ "ToolTip", "UAkWaapiUriConv" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkWaapiUriConv_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkWaapiUriConv>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkWaapiUriConv_Statics::ClassParams = {
		&UAkWaapiUriConv::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkWaapiUriConv_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkWaapiUriConv_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkWaapiUriConv()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkWaapiUriConv_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkWaapiUriConv, 3948182295);
	template<> AKAUDIO_API UClass* StaticClass<UAkWaapiUriConv>()
	{
		return UAkWaapiUriConv::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkWaapiUriConv(Z_Construct_UClass_UAkWaapiUriConv, &UAkWaapiUriConv::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkWaapiUriConv"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkWaapiUriConv);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
