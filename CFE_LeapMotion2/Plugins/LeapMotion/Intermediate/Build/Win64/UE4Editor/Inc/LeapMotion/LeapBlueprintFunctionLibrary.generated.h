// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLeapStats;
struct FLeapOptions;
#ifdef LEAPMOTION_LeapBlueprintFunctionLibrary_generated_h
#error "LeapBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in LeapBlueprintFunctionLibrary.h"
#endif
#define LEAPMOTION_LeapBlueprintFunctionLibrary_generated_h

#define CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapBlueprintFunctionLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetLeapPolicy) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Flag); \
		P_GET_UBOOL(Z_Param_Enable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULeapBlueprintFunctionLibrary::SetLeapPolicy(ELeapPolicyFlag(Z_Param_Flag),Z_Param_Enable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLeapStats) \
	{ \
		P_GET_STRUCT_REF(FLeapStats,Z_Param_Out_OutStats); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULeapBlueprintFunctionLibrary::GetLeapStats(Z_Param_Out_OutStats); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLeapOptions) \
	{ \
		P_GET_STRUCT_REF(FLeapOptions,Z_Param_Out_OutOptions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULeapBlueprintFunctionLibrary::GetLeapOptions(Z_Param_Out_OutOptions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLeapOptions) \
	{ \
		P_GET_STRUCT_REF(FLeapOptions,Z_Param_Out_Options); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULeapBlueprintFunctionLibrary::SetLeapOptions(Z_Param_Out_Options); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLeapMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Mode); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Fidelity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULeapBlueprintFunctionLibrary::SetLeapMode(ELeapMode(Z_Param_Mode),ELeapTrackingFidelity(Z_Param_Fidelity)); \
		P_NATIVE_END; \
	}


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapBlueprintFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetLeapPolicy) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Flag); \
		P_GET_UBOOL(Z_Param_Enable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULeapBlueprintFunctionLibrary::SetLeapPolicy(ELeapPolicyFlag(Z_Param_Flag),Z_Param_Enable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLeapStats) \
	{ \
		P_GET_STRUCT_REF(FLeapStats,Z_Param_Out_OutStats); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULeapBlueprintFunctionLibrary::GetLeapStats(Z_Param_Out_OutStats); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLeapOptions) \
	{ \
		P_GET_STRUCT_REF(FLeapOptions,Z_Param_Out_OutOptions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULeapBlueprintFunctionLibrary::GetLeapOptions(Z_Param_Out_OutOptions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLeapOptions) \
	{ \
		P_GET_STRUCT_REF(FLeapOptions,Z_Param_Out_Options); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULeapBlueprintFunctionLibrary::SetLeapOptions(Z_Param_Out_Options); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLeapMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Mode); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Fidelity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULeapBlueprintFunctionLibrary::SetLeapMode(ELeapMode(Z_Param_Mode),ELeapTrackingFidelity(Z_Param_Fidelity)); \
		P_NATIVE_END; \
	}


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapBlueprintFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULeapBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_ULeapBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(ULeapBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LeapMotion"), NO_API) \
	DECLARE_SERIALIZER(ULeapBlueprintFunctionLibrary)


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapBlueprintFunctionLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesULeapBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_ULeapBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(ULeapBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LeapMotion"), NO_API) \
	DECLARE_SERIALIZER(ULeapBlueprintFunctionLibrary)


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapBlueprintFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapBlueprintFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapBlueprintFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeapBlueprintFunctionLibrary(ULeapBlueprintFunctionLibrary&&); \
	NO_API ULeapBlueprintFunctionLibrary(const ULeapBlueprintFunctionLibrary&); \
public:


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapBlueprintFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeapBlueprintFunctionLibrary(ULeapBlueprintFunctionLibrary&&); \
	NO_API ULeapBlueprintFunctionLibrary(const ULeapBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapBlueprintFunctionLibrary)


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapBlueprintFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapBlueprintFunctionLibrary_h_12_PROLOG
#define CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapBlueprintFunctionLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapBlueprintFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapBlueprintFunctionLibrary_h_15_RPC_WRAPPERS \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapBlueprintFunctionLibrary_h_15_INCLASS \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapBlueprintFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapBlueprintFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapBlueprintFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapBlueprintFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapBlueprintFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapBlueprintFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LeapBlueprintFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapBlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
