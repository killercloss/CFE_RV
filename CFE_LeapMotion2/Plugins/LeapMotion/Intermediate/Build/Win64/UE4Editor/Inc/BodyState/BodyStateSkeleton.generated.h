// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FNamedSkeletonData;
class UBodyStateSkeleton;
struct FRotator;
struct FBodyStateBoneMeta;
enum class EBodyStateBasicBoneType : uint8;
struct FTransform;
struct FBodyStateBoneData;
class UBodyStateBone;
class UBodyStateArm;
#ifdef BODYSTATE_BodyStateSkeleton_generated_h
#error "BodyStateSkeleton.generated.h already included, missing '#pragma once' in BodyStateSkeleton.h"
#endif
#define BODYSTATE_BodyStateSkeleton_generated_h

#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNamedSkeletonData_Statics; \
	static class UScriptStruct* StaticStruct();


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNamedBoneMeta_Statics; \
	static class UScriptStruct* StaticStruct();


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKeyedTransform_Statics; \
	static class UScriptStruct* StaticStruct();


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNamedBoneData_Statics; \
	static class UScriptStruct* StaticStruct();


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_RPC_WRAPPERS \
	virtual void Multi_UpdateBodyState_Implementation(const FNamedSkeletonData InBodyStateSkeleton); \
	virtual bool ServerUpdateBodyState_Validate(const FNamedSkeletonData ); \
	virtual void ServerUpdateBodyState_Implementation(const FNamedSkeletonData InBodyStateSkeleton); \
 \
	DECLARE_FUNCTION(execMulti_UpdateBodyState) \
	{ \
		P_GET_STRUCT(FNamedSkeletonData,Z_Param_InBodyStateSkeleton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Multi_UpdateBodyState_Implementation(Z_Param_InBodyStateSkeleton); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerUpdateBodyState) \
	{ \
		P_GET_STRUCT(FNamedSkeletonData,Z_Param_InBodyStateSkeleton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerUpdateBodyState_Validate(Z_Param_InBodyStateSkeleton)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerUpdateBodyState_Validate")); \
			return; \
		} \
		P_THIS->ServerUpdateBodyState_Implementation(Z_Param_InBodyStateSkeleton); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMergeFromOtherSkeleton) \
	{ \
		P_GET_OBJECT(UBodyStateSkeleton,Z_Param_Other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MergeFromOtherSkeleton(Z_Param_Other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFromOtherSkeleton) \
	{ \
		P_GET_OBJECT(UBodyStateSkeleton,Z_Param_Other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFromOtherSkeleton(Z_Param_Other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFromNamedSkeletonData) \
	{ \
		P_GET_STRUCT_REF(FNamedSkeletonData,Z_Param_Out_NamedSkeletonData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFromNamedSkeletonData(Z_Param_Out_NamedSkeletonData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinimalNamedSkeletonData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FNamedSkeletonData*)Z_Param__Result=P_THIS->GetMinimalNamedSkeletonData(); \
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
	DECLARE_FUNCTION(execSetMetaForBone) \
	{ \
		P_GET_STRUCT_REF(FBodyStateBoneMeta,Z_Param_Out_BoneMeta); \
		P_GET_ENUM(EBodyStateBasicBoneType,Z_Param_Bone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMetaForBone(Z_Param_Out_BoneMeta,EBodyStateBasicBoneType(Z_Param_Bone)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTransformForBone) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform); \
		P_GET_ENUM(EBodyStateBasicBoneType,Z_Param_Bone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTransformForBone(Z_Param_Out_Transform,EBodyStateBasicBoneType(Z_Param_Bone)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDataForBone) \
	{ \
		P_GET_STRUCT_REF(FBodyStateBoneData,Z_Param_Out_BoneData); \
		P_GET_ENUM(EBodyStateBasicBoneType,Z_Param_Bone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDataForBone(Z_Param_Out_BoneData,EBodyStateBasicBoneType(Z_Param_Bone)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetToDefaultSkeleton) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetToDefaultSkeleton(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBoneNamed) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UBodyStateBone**)Z_Param__Result=P_THIS->BoneNamed(Z_Param_InName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBoneForEnum) \
	{ \
		P_GET_ENUM(EBodyStateBasicBoneType,Z_Param_Bone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UBodyStateBone**)Z_Param__Result=P_THIS->BoneForEnum(EBodyStateBasicBoneType(Z_Param_Bone)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHead) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UBodyStateBone**)Z_Param__Result=P_THIS->Head(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRightArm) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UBodyStateArm**)Z_Param__Result=P_THIS->RightArm(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLeftArm) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UBodyStateArm**)Z_Param__Result=P_THIS->LeftArm(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRootBone) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UBodyStateBone**)Z_Param__Result=P_THIS->RootBone(); \
		P_NATIVE_END; \
	}


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multi_UpdateBodyState_Implementation(const FNamedSkeletonData InBodyStateSkeleton); \
	virtual bool ServerUpdateBodyState_Validate(const FNamedSkeletonData ); \
	virtual void ServerUpdateBodyState_Implementation(const FNamedSkeletonData InBodyStateSkeleton); \
 \
	DECLARE_FUNCTION(execMulti_UpdateBodyState) \
	{ \
		P_GET_STRUCT(FNamedSkeletonData,Z_Param_InBodyStateSkeleton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Multi_UpdateBodyState_Implementation(Z_Param_InBodyStateSkeleton); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerUpdateBodyState) \
	{ \
		P_GET_STRUCT(FNamedSkeletonData,Z_Param_InBodyStateSkeleton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerUpdateBodyState_Validate(Z_Param_InBodyStateSkeleton)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerUpdateBodyState_Validate")); \
			return; \
		} \
		P_THIS->ServerUpdateBodyState_Implementation(Z_Param_InBodyStateSkeleton); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMergeFromOtherSkeleton) \
	{ \
		P_GET_OBJECT(UBodyStateSkeleton,Z_Param_Other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MergeFromOtherSkeleton(Z_Param_Other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFromOtherSkeleton) \
	{ \
		P_GET_OBJECT(UBodyStateSkeleton,Z_Param_Other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFromOtherSkeleton(Z_Param_Other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFromNamedSkeletonData) \
	{ \
		P_GET_STRUCT_REF(FNamedSkeletonData,Z_Param_Out_NamedSkeletonData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFromNamedSkeletonData(Z_Param_Out_NamedSkeletonData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinimalNamedSkeletonData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FNamedSkeletonData*)Z_Param__Result=P_THIS->GetMinimalNamedSkeletonData(); \
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
	DECLARE_FUNCTION(execSetMetaForBone) \
	{ \
		P_GET_STRUCT_REF(FBodyStateBoneMeta,Z_Param_Out_BoneMeta); \
		P_GET_ENUM(EBodyStateBasicBoneType,Z_Param_Bone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMetaForBone(Z_Param_Out_BoneMeta,EBodyStateBasicBoneType(Z_Param_Bone)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTransformForBone) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform); \
		P_GET_ENUM(EBodyStateBasicBoneType,Z_Param_Bone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTransformForBone(Z_Param_Out_Transform,EBodyStateBasicBoneType(Z_Param_Bone)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDataForBone) \
	{ \
		P_GET_STRUCT_REF(FBodyStateBoneData,Z_Param_Out_BoneData); \
		P_GET_ENUM(EBodyStateBasicBoneType,Z_Param_Bone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDataForBone(Z_Param_Out_BoneData,EBodyStateBasicBoneType(Z_Param_Bone)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetToDefaultSkeleton) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetToDefaultSkeleton(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBoneNamed) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UBodyStateBone**)Z_Param__Result=P_THIS->BoneNamed(Z_Param_InName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBoneForEnum) \
	{ \
		P_GET_ENUM(EBodyStateBasicBoneType,Z_Param_Bone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UBodyStateBone**)Z_Param__Result=P_THIS->BoneForEnum(EBodyStateBasicBoneType(Z_Param_Bone)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHead) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UBodyStateBone**)Z_Param__Result=P_THIS->Head(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRightArm) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UBodyStateArm**)Z_Param__Result=P_THIS->RightArm(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLeftArm) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UBodyStateArm**)Z_Param__Result=P_THIS->LeftArm(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRootBone) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UBodyStateBone**)Z_Param__Result=P_THIS->RootBone(); \
		P_NATIVE_END; \
	}


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_EVENT_PARMS \
	struct BodyStateSkeleton_eventMulti_UpdateBodyState_Parms \
	{ \
		FNamedSkeletonData InBodyStateSkeleton; \
	}; \
	struct BodyStateSkeleton_eventServerUpdateBodyState_Parms \
	{ \
		FNamedSkeletonData InBodyStateSkeleton; \
	};


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_CALLBACK_WRAPPERS
#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBodyStateSkeleton(); \
	friend struct Z_Construct_UClass_UBodyStateSkeleton_Statics; \
public: \
	DECLARE_CLASS(UBodyStateSkeleton, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BodyState"), NO_API) \
	DECLARE_SERIALIZER(UBodyStateSkeleton)


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_INCLASS \
private: \
	static void StaticRegisterNativesUBodyStateSkeleton(); \
	friend struct Z_Construct_UClass_UBodyStateSkeleton_Statics; \
public: \
	DECLARE_CLASS(UBodyStateSkeleton, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BodyState"), NO_API) \
	DECLARE_SERIALIZER(UBodyStateSkeleton)


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBodyStateSkeleton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodyStateSkeleton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBodyStateSkeleton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodyStateSkeleton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBodyStateSkeleton(UBodyStateSkeleton&&); \
	NO_API UBodyStateSkeleton(const UBodyStateSkeleton&); \
public:


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBodyStateSkeleton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBodyStateSkeleton(UBodyStateSkeleton&&); \
	NO_API UBodyStateSkeleton(const UBodyStateSkeleton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBodyStateSkeleton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodyStateSkeleton); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodyStateSkeleton)


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PrivateLeftArm() { return STRUCT_OFFSET(UBodyStateSkeleton, PrivateLeftArm); } \
	FORCEINLINE static uint32 __PPO__PrivateRightArm() { return STRUCT_OFFSET(UBodyStateSkeleton, PrivateRightArm); }


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_67_PROLOG \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_EVENT_PARMS


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_PRIVATE_PROPERTY_OFFSET \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_RPC_WRAPPERS \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_CALLBACK_WRAPPERS \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_INCLASS \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_PRIVATE_PROPERTY_OFFSET \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_CALLBACK_WRAPPERS \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_INCLASS_NO_PURE_DECLS \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h_70_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BodyStateSkeleton."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_Skeleton_BodyStateSkeleton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
