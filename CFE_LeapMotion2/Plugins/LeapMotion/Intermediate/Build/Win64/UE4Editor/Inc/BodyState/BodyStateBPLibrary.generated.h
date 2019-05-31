// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimInstance;
struct FTransform;
class UObject;
class UBodyStateSkeleton;
struct FBodyStateDeviceConfig;
class IBodyStateInputInterface;
#ifdef BODYSTATE_BodyStateBPLibrary_generated_h
#error "BodyStateBPLibrary.generated.h already included, missing '#pragma once' in BodyStateBPLibrary.h"
#endif
#define BODYSTATE_BodyStateBPLibrary_generated_h

#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateBPLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTransformForBoneNamedInAnimInstance) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_Bone); \
		P_GET_OBJECT(UAnimInstance,Z_Param_Instance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UBodyStateBPLibrary::TransformForBoneNamedInAnimInstance(Z_Param_Out_Bone,Z_Param_Instance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSkeletonForDevice) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_DeviceID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UBodyStateSkeleton**)Z_Param__Result=UBodyStateBPLibrary::SkeletonForDevice(Z_Param_WorldContextObject,Z_Param_DeviceID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDetachDevice) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_DeviceID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBodyStateBPLibrary::DetachDevice(Z_Param_DeviceID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttachDevice) \
	{ \
		P_GET_STRUCT_REF(FBodyStateDeviceConfig,Z_Param_Out_Configuration); \
		P_GET_TINTERFACE(IBodyStateInputInterface,Z_Param_InputCallbackDelegate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UBodyStateBPLibrary::AttachDevice(Z_Param_Out_Configuration,Z_Param_InputCallbackDelegate); \
		P_NATIVE_END; \
	}


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateBPLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTransformForBoneNamedInAnimInstance) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_Bone); \
		P_GET_OBJECT(UAnimInstance,Z_Param_Instance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UBodyStateBPLibrary::TransformForBoneNamedInAnimInstance(Z_Param_Out_Bone,Z_Param_Instance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSkeletonForDevice) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UIntProperty,Z_Param_DeviceID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UBodyStateSkeleton**)Z_Param__Result=UBodyStateBPLibrary::SkeletonForDevice(Z_Param_WorldContextObject,Z_Param_DeviceID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDetachDevice) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_DeviceID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBodyStateBPLibrary::DetachDevice(Z_Param_DeviceID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttachDevice) \
	{ \
		P_GET_STRUCT_REF(FBodyStateDeviceConfig,Z_Param_Out_Configuration); \
		P_GET_TINTERFACE(IBodyStateInputInterface,Z_Param_InputCallbackDelegate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UBodyStateBPLibrary::AttachDevice(Z_Param_Out_Configuration,Z_Param_InputCallbackDelegate); \
		P_NATIVE_END; \
	}


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateBPLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBodyStateBPLibrary(); \
	friend struct Z_Construct_UClass_UBodyStateBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UBodyStateBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BodyState"), NO_API) \
	DECLARE_SERIALIZER(UBodyStateBPLibrary)


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateBPLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUBodyStateBPLibrary(); \
	friend struct Z_Construct_UClass_UBodyStateBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UBodyStateBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BodyState"), NO_API) \
	DECLARE_SERIALIZER(UBodyStateBPLibrary)


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateBPLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBodyStateBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodyStateBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBodyStateBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodyStateBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBodyStateBPLibrary(UBodyStateBPLibrary&&); \
	NO_API UBodyStateBPLibrary(const UBodyStateBPLibrary&); \
public:


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateBPLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBodyStateBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBodyStateBPLibrary(UBodyStateBPLibrary&&); \
	NO_API UBodyStateBPLibrary(const UBodyStateBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBodyStateBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodyStateBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodyStateBPLibrary)


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateBPLibrary_h_17_PRIVATE_PROPERTY_OFFSET
#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateBPLibrary_h_14_PROLOG
#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateBPLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateBPLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateBPLibrary_h_17_RPC_WRAPPERS \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateBPLibrary_h_17_INCLASS \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateBPLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateBPLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateBPLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateBPLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateBPLibrary_h_17_INCLASS_NO_PURE_DECLS \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateBPLibrary_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BodyStateBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
