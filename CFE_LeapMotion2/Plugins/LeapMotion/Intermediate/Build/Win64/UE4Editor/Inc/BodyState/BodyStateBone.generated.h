// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRotator;
struct FVector;
struct FBodyStateBoneMeta;
struct FTransform;
#ifdef BODYSTATE_BodyStateBone_generated_h
#error "BodyStateBone.generated.h already included, missing '#pragma once' in BodyStateBone.h"
#endif
#define BODYSTATE_BodyStateBone_generated_h

#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateBone_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBodyStateBoneData_Statics; \
	static class UScriptStruct* StaticStruct();


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateBone_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics; \
	static class UScriptStruct* StaticStruct();


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateBone_h_93_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsTracked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsTracked(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeBasis) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_PreBase); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_PostBase); \
		P_GET_UBOOL(Z_Param_AdjustVectors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeBasis(Z_Param_Out_PreBase,Z_Param_Out_PostBase,Z_Param_AdjustVectors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShiftBone) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_ShiftAmount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShiftBone(Z_Param_ShiftAmount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_Enable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEnabled(Z_Param_Enable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Enabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUniqueMeta) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBodyStateBoneMeta*)Z_Param__Result=P_THIS->UniqueMeta(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetScale) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetScale(Z_Param_Out_InScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->Transform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->Scale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOrientation) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_InOrientation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOrientation(Z_Param_Out_InOrientation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOrientation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->Orientation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPosition) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPosition(Z_Param_Out_InPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->Position(); \
		P_NATIVE_END; \
	}


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateBone_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsTracked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsTracked(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeBasis) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_PreBase); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_PostBase); \
		P_GET_UBOOL(Z_Param_AdjustVectors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeBasis(Z_Param_Out_PreBase,Z_Param_Out_PostBase,Z_Param_AdjustVectors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShiftBone) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_ShiftAmount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShiftBone(Z_Param_ShiftAmount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_Enable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEnabled(Z_Param_Enable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Enabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUniqueMeta) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBodyStateBoneMeta*)Z_Param__Result=P_THIS->UniqueMeta(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetScale) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetScale(Z_Param_Out_InScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->Transform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->Scale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOrientation) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_InOrientation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOrientation(Z_Param_Out_InOrientation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOrientation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->Orientation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPosition) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPosition(Z_Param_Out_InPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->Position(); \
		P_NATIVE_END; \
	}


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateBone_h_93_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBodyStateBone(); \
	friend struct Z_Construct_UClass_UBodyStateBone_Statics; \
public: \
	DECLARE_CLASS(UBodyStateBone, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BodyState"), NO_API) \
	DECLARE_SERIALIZER(UBodyStateBone)


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateBone_h_93_INCLASS \
private: \
	static void StaticRegisterNativesUBodyStateBone(); \
	friend struct Z_Construct_UClass_UBodyStateBone_Statics; \
public: \
	DECLARE_CLASS(UBodyStateBone, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BodyState"), NO_API) \
	DECLARE_SERIALIZER(UBodyStateBone)


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateBone_h_93_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBodyStateBone(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodyStateBone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBodyStateBone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodyStateBone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBodyStateBone(UBodyStateBone&&); \
	NO_API UBodyStateBone(const UBodyStateBone&); \
public:


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateBone_h_93_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBodyStateBone(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBodyStateBone(UBodyStateBone&&); \
	NO_API UBodyStateBone(const UBodyStateBone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBodyStateBone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodyStateBone); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodyStateBone)


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateBone_h_93_PRIVATE_PROPERTY_OFFSET
#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateBone_h_90_PROLOG
#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateBone_h_93_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateBone_h_93_PRIVATE_PROPERTY_OFFSET \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateBone_h_93_RPC_WRAPPERS \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateBone_h_93_INCLASS \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateBone_h_93_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateBone_h_93_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateBone_h_93_PRIVATE_PROPERTY_OFFSET \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateBone_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateBone_h_93_INCLASS_NO_PURE_DECLS \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateBone_h_93_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BodyStateBone."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateBone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
