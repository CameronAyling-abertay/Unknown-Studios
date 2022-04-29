// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
enum class AkAcousticPortalState : uint8;
#ifdef AKAUDIO_AkAcousticPortal_generated_h
#error "AkAcousticPortal.generated.h already included, missing '#pragma once' in AkAcousticPortal.h"
#endif
#define AKAUDIO_AkAcousticPortal_generated_h

#define gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_30_SPARSE_DATA
#define gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPortalPlacementValid); \
	DECLARE_FUNCTION(execGetPrimitiveParent); \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execClosePortal); \
	DECLARE_FUNCTION(execOpenPortal);


#define gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPortalPlacementValid); \
	DECLARE_FUNCTION(execGetPrimitiveParent); \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execClosePortal); \
	DECLARE_FUNCTION(execOpenPortal);


#define gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkPortalComponent(); \
	friend struct Z_Construct_UClass_UAkPortalComponent_Statics; \
public: \
	DECLARE_CLASS(UAkPortalComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkPortalComponent)


#define gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUAkPortalComponent(); \
	friend struct Z_Construct_UClass_UAkPortalComponent_Statics; \
public: \
	DECLARE_CLASS(UAkPortalComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkPortalComponent)


#define gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkPortalComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkPortalComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkPortalComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkPortalComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkPortalComponent(UAkPortalComponent&&); \
	NO_API UAkPortalComponent(const UAkPortalComponent&); \
public:


#define gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkPortalComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkPortalComponent(UAkPortalComponent&&); \
	NO_API UAkPortalComponent(const UAkPortalComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkPortalComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkPortalComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkPortalComponent)


#define gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_30_PRIVATE_PROPERTY_OFFSET
#define gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_27_PROLOG
#define gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_30_PRIVATE_PROPERTY_OFFSET \
	gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_30_SPARSE_DATA \
	gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_30_RPC_WRAPPERS \
	gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_30_INCLASS \
	gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_30_PRIVATE_PROPERTY_OFFSET \
	gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_30_SPARSE_DATA \
	gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_30_INCLASS_NO_PURE_DECLS \
	gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkPortalComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkPortalComponent>();

#define gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_138_SPARSE_DATA
#define gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_138_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execClosePortal); \
	DECLARE_FUNCTION(execOpenPortal);


#define gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_138_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execClosePortal); \
	DECLARE_FUNCTION(execOpenPortal);


#define gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_138_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AAkAcousticPortal, NO_API)


#define gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_138_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAkAcousticPortal(); \
	friend struct Z_Construct_UClass_AAkAcousticPortal_Statics; \
public: \
	DECLARE_CLASS(AAkAcousticPortal, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(AAkAcousticPortal) \
	gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_138_ARCHIVESERIALIZER


#define gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_138_INCLASS \
private: \
	static void StaticRegisterNativesAAkAcousticPortal(); \
	friend struct Z_Construct_UClass_AAkAcousticPortal_Statics; \
public: \
	DECLARE_CLASS(AAkAcousticPortal, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(AAkAcousticPortal) \
	gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_138_ARCHIVESERIALIZER


#define gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_138_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAkAcousticPortal(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAkAcousticPortal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAkAcousticPortal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAkAcousticPortal); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAkAcousticPortal(AAkAcousticPortal&&); \
	NO_API AAkAcousticPortal(const AAkAcousticPortal&); \
public:


#define gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_138_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAkAcousticPortal(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAkAcousticPortal(AAkAcousticPortal&&); \
	NO_API AAkAcousticPortal(const AAkAcousticPortal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAkAcousticPortal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAkAcousticPortal); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAkAcousticPortal)


#define gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_138_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InitialState() { return STRUCT_OFFSET(AAkAcousticPortal, InitialState); } \
	FORCEINLINE static uint32 __PPO__bRequiresStateMigration() { return STRUCT_OFFSET(AAkAcousticPortal, bRequiresStateMigration); }


#define gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_135_PROLOG
#define gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_138_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_138_PRIVATE_PROPERTY_OFFSET \
	gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_138_SPARSE_DATA \
	gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_138_RPC_WRAPPERS \
	gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_138_INCLASS \
	gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_138_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_138_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_138_PRIVATE_PROPERTY_OFFSET \
	gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_138_SPARSE_DATA \
	gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_138_RPC_WRAPPERS_NO_PURE_DECLS \
	gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_138_INCLASS_NO_PURE_DECLS \
	gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_138_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkAcousticPortal."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class AAkAcousticPortal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID gameplay_loop_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
