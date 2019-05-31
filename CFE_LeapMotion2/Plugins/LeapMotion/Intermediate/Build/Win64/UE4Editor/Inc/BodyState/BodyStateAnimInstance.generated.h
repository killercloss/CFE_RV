// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMappedBoneAnimData;
class UBodyStateSkeleton;
enum class EBodyStateBasicBoneType : uint8;
struct FVector;
struct FRotator;
#ifdef BODYSTATE_BodyStateAnimInstance_generated_h
#error "BodyStateAnimInstance.generated.h already included, missing '#pragma once' in BodyStateAnimInstance.h"
#endif
#define BODYSTATE_BodyStateAnimInstance_generated_h

#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateAnimInstance_h_117_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSearchStrings_Statics; \
	BODYSTATE_API static class UScriptStruct* StaticStruct();


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateAnimInstance_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics; \
	BODYSTATE_API static class UScriptStruct* StaticStruct();


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateAnimInstance_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPBoneReference_Statics; \
	BODYSTATE_API static class UScriptStruct* StaticStruct();


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateAnimInstance_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics; \
	static class UScriptStruct* StaticStruct();


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateAnimInstance_h_149_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSyncMappedBoneDataCache) \
	{ \
		P_GET_STRUCT_REF(FMappedBoneAnimData,Z_Param_Out_InMappedBoneData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SyncMappedBoneDataCache(Z_Param_Out_InMappedBoneData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBoneMapSummary) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->BoneMapSummary(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimSkeleton) \
	{ \
		P_GET_OBJECT(UBodyStateSkeleton,Z_Param_InSkeleton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAnimSkeleton(Z_Param_InSkeleton); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveBSBoneLink) \
	{ \
		P_GET_STRUCT_REF(FMappedBoneAnimData,Z_Param_Out_InMappedBoneData); \
		P_GET_ENUM(EBodyStateBasicBoneType,Z_Param_BSBone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveBSBoneLink(Z_Param_Out_InMappedBoneData,EBodyStateBasicBoneType(Z_Param_BSBone)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddBSBoneToMeshBoneLink) \
	{ \
		P_GET_STRUCT_REF(FMappedBoneAnimData,Z_Param_Out_InMappedBoneData); \
		P_GET_ENUM(EBodyStateBasicBoneType,Z_Param_BSBone); \
		P_GET_PROPERTY(UNameProperty,Z_Param_MeshBone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddBSBoneToMeshBoneLink(Z_Param_Out_InMappedBoneData,EBodyStateBasicBoneType(Z_Param_BSBone),Z_Param_MeshBone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdjustPositionByMapBasis) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InPosition); \
		P_GET_STRUCT_REF(FMappedBoneAnimData,Z_Param_Out_ForMap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->AdjustPositionByMapBasis(Z_Param_Out_InPosition,Z_Param_Out_ForMap); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdjustRotationByMapBasis) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_InRotator); \
		P_GET_STRUCT_REF(FMappedBoneAnimData,Z_Param_Out_ForMap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->AdjustRotationByMapBasis(Z_Param_Out_InRotator,Z_Param_Out_ForMap); \
		P_NATIVE_END; \
	}


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateAnimInstance_h_149_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSyncMappedBoneDataCache) \
	{ \
		P_GET_STRUCT_REF(FMappedBoneAnimData,Z_Param_Out_InMappedBoneData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SyncMappedBoneDataCache(Z_Param_Out_InMappedBoneData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBoneMapSummary) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->BoneMapSummary(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimSkeleton) \
	{ \
		P_GET_OBJECT(UBodyStateSkeleton,Z_Param_InSkeleton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAnimSkeleton(Z_Param_InSkeleton); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveBSBoneLink) \
	{ \
		P_GET_STRUCT_REF(FMappedBoneAnimData,Z_Param_Out_InMappedBoneData); \
		P_GET_ENUM(EBodyStateBasicBoneType,Z_Param_BSBone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveBSBoneLink(Z_Param_Out_InMappedBoneData,EBodyStateBasicBoneType(Z_Param_BSBone)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddBSBoneToMeshBoneLink) \
	{ \
		P_GET_STRUCT_REF(FMappedBoneAnimData,Z_Param_Out_InMappedBoneData); \
		P_GET_ENUM(EBodyStateBasicBoneType,Z_Param_BSBone); \
		P_GET_PROPERTY(UNameProperty,Z_Param_MeshBone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddBSBoneToMeshBoneLink(Z_Param_Out_InMappedBoneData,EBodyStateBasicBoneType(Z_Param_BSBone),Z_Param_MeshBone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdjustPositionByMapBasis) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InPosition); \
		P_GET_STRUCT_REF(FMappedBoneAnimData,Z_Param_Out_ForMap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->AdjustPositionByMapBasis(Z_Param_Out_InPosition,Z_Param_Out_ForMap); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdjustRotationByMapBasis) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_InRotator); \
		P_GET_STRUCT_REF(FMappedBoneAnimData,Z_Param_Out_ForMap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->AdjustRotationByMapBasis(Z_Param_Out_InRotator,Z_Param_Out_ForMap); \
		P_NATIVE_END; \
	}


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateAnimInstance_h_149_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBodyStateAnimInstance(); \
	friend struct Z_Construct_UClass_UBodyStateAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UBodyStateAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BodyState"), NO_API) \
	DECLARE_SERIALIZER(UBodyStateAnimInstance)


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateAnimInstance_h_149_INCLASS \
private: \
	static void StaticRegisterNativesUBodyStateAnimInstance(); \
	friend struct Z_Construct_UClass_UBodyStateAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UBodyStateAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BodyState"), NO_API) \
	DECLARE_SERIALIZER(UBodyStateAnimInstance)


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateAnimInstance_h_149_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBodyStateAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodyStateAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBodyStateAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodyStateAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBodyStateAnimInstance(UBodyStateAnimInstance&&); \
	NO_API UBodyStateAnimInstance(const UBodyStateAnimInstance&); \
public:


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateAnimInstance_h_149_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBodyStateAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBodyStateAnimInstance(UBodyStateAnimInstance&&); \
	NO_API UBodyStateAnimInstance(const UBodyStateAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBodyStateAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodyStateAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodyStateAnimInstance)


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateAnimInstance_h_149_PRIVATE_PROPERTY_OFFSET
#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateAnimInstance_h_145_PROLOG
#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateAnimInstance_h_149_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateAnimInstance_h_149_PRIVATE_PROPERTY_OFFSET \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateAnimInstance_h_149_RPC_WRAPPERS \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateAnimInstance_h_149_INCLASS \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateAnimInstance_h_149_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateAnimInstance_h_149_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateAnimInstance_h_149_PRIVATE_PROPERTY_OFFSET \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateAnimInstance_h_149_RPC_WRAPPERS_NO_PURE_DECLS \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateAnimInstance_h_149_INCLASS_NO_PURE_DECLS \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateAnimInstance_h_149_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BodyStateAnimInstance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
