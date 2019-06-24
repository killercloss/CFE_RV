// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BodyState/Public/Skeleton/BodyStateBone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyStateBone() {}
// Cross Module References
	BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyStateBoneData();
	UPackage* Z_Construct_UPackage__Script_BodyState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyStateBoneMeta();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateBone_NoRegister();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateBone();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateBone_ChangeBasis();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateBone_Enabled();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateBone_IsTracked();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateBone_Orientation();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateBone_Position();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateBone_Scale();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateBone_SetEnabled();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateBone_SetOrientation();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateBone_SetPosition();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateBone_SetScale();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateBone_ShiftBone();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateBone_Transform();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateBone_UniqueMeta();
// End Cross Module References
class UScriptStruct* FBodyStateBoneData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BODYSTATE_API uint32 Get_Z_Construct_UScriptStruct_FBodyStateBoneData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBodyStateBoneData, Z_Construct_UPackage__Script_BodyState(), TEXT("BodyStateBoneData"), sizeof(FBodyStateBoneData), Get_Z_Construct_UScriptStruct_FBodyStateBoneData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBodyStateBoneData(FBodyStateBoneData::StaticStruct, TEXT("/Script/BodyState"), TEXT("BodyStateBoneData"), false, nullptr, nullptr);
static struct FScriptStruct_BodyState_StaticRegisterNativesFBodyStateBoneData
{
	FScriptStruct_BodyState_StaticRegisterNativesFBodyStateBoneData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BodyStateBoneData")),new UScriptStruct::TCppStructOps<FBodyStateBoneData>);
	}
} ScriptStruct_BodyState_StaticRegisterNativesFBodyStateBoneData;
	struct Z_Construct_UScriptStruct_FBodyStateBoneData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Length;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdvancedBoneType_MetaData[];
#endif
		static void NewProp_AdvancedBoneType_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AdvancedBoneType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBodyStateBoneData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "BodyState Bone Data" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Bone Length" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_Length = { UE4CodeGen_Private::EPropertyClass::Float, "Length", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FBodyStateBoneData, Length), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_Length_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_Length_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "BodyState Bone Data" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Blending Alpha" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_Alpha = { UE4CodeGen_Private::EPropertyClass::Float, "Alpha", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FBodyStateBoneData, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_Alpha_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_AdvancedBoneType_MetaData[] = {
		{ "Category", "BodyState Bone Data" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "If this bone tracks more than just transform" },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_AdvancedBoneType_SetBit(void* Obj)
	{
		((FBodyStateBoneData*)Obj)->AdvancedBoneType = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_AdvancedBoneType = { UE4CodeGen_Private::EPropertyClass::Bool, "AdvancedBoneType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FBodyStateBoneData), &Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_AdvancedBoneType_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_AdvancedBoneType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_AdvancedBoneType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "BodyState Bone Data" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Transform holding main bone values" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_Transform = { UE4CodeGen_Private::EPropertyClass::Struct, "Transform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FBodyStateBoneData, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_Transform_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_Transform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_Length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_AdvancedBoneType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::NewProp_Transform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
		nullptr,
		&NewStructOps,
		"BodyStateBoneData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FBodyStateBoneData),
		alignof(FBodyStateBoneData),
		Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBodyStateBoneData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBodyStateBoneData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_BodyState();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BodyStateBoneData"), sizeof(FBodyStateBoneData), Get_Z_Construct_UScriptStruct_FBodyStateBoneData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBodyStateBoneData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBodyStateBoneData_CRC() { return 304180950U; }
class UScriptStruct* FBodyStateBoneMeta::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BODYSTATE_API uint32 Get_Z_Construct_UScriptStruct_FBodyStateBoneMeta_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBodyStateBoneMeta, Z_Construct_UPackage__Script_BodyState(), TEXT("BodyStateBoneMeta"), sizeof(FBodyStateBoneMeta), Get_Z_Construct_UScriptStruct_FBodyStateBoneMeta_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBodyStateBoneMeta(FBodyStateBoneMeta::StaticStruct, TEXT("/Script/BodyState"), TEXT("BodyStateBoneMeta"), false, nullptr, nullptr);
static struct FScriptStruct_BodyState_StaticRegisterNativesFBodyStateBoneMeta
{
	FScriptStruct_BodyState_StaticRegisterNativesFBodyStateBoneMeta()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BodyStateBoneMeta")),new UScriptStruct::TCppStructOps<FBodyStateBoneMeta>);
	}
} ScriptStruct_BodyState_StaticRegisterNativesFBodyStateBoneMeta;
	struct Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeStamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Confidence_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Confidence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Accuracy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Accuracy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackingTags;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrackingTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrackingType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentDistinctMeta_MetaData[];
#endif
		static void NewProp_ParentDistinctMeta_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ParentDistinctMeta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBodyStateBoneMeta>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TimeStamp_MetaData[] = {
		{ "Category", "BodyState Bone Data" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Time when this value was sampled" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FBodyStateBoneMeta, TimeStamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TimeStamp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TimeStamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_Confidence_MetaData[] = {
		{ "Category", "BodyState Bone Data" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Tracking Confidence" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_Confidence = { UE4CodeGen_Private::EPropertyClass::Float, "Confidence", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FBodyStateBoneMeta, Confidence), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_Confidence_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_Confidence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_Accuracy_MetaData[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Accuracy in cm of tracking data if distinct" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_Accuracy = { UE4CodeGen_Private::EPropertyClass::Float, "Accuracy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBodyStateBoneMeta, Accuracy), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_Accuracy_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_Accuracy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TrackingTags_MetaData[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Additional tags used to distinguish characteristics of tracked data, e.g. tracks fingers, hands, etc" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TrackingTags = { UE4CodeGen_Private::EPropertyClass::Array, "TrackingTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBodyStateBoneMeta, TrackingTags), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TrackingTags_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TrackingTags_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TrackingTags_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "TrackingTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TrackingType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Name of tracking type" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TrackingType = { UE4CodeGen_Private::EPropertyClass::Str, "TrackingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBodyStateBoneMeta, TrackingType), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TrackingType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TrackingType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_ParentDistinctMeta_MetaData[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Is this meta data distinct from parents?" },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_ParentDistinctMeta_SetBit(void* Obj)
	{
		((FBodyStateBoneMeta*)Obj)->ParentDistinctMeta = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_ParentDistinctMeta = { UE4CodeGen_Private::EPropertyClass::Bool, "ParentDistinctMeta", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FBodyStateBoneMeta), &Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_ParentDistinctMeta_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_ParentDistinctMeta_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_ParentDistinctMeta_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TimeStamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_Confidence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_Accuracy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TrackingTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TrackingTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_TrackingType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::NewProp_ParentDistinctMeta,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
		nullptr,
		&NewStructOps,
		"BodyStateBoneMeta",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FBodyStateBoneMeta),
		alignof(FBodyStateBoneMeta),
		Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBodyStateBoneMeta()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBodyStateBoneMeta_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_BodyState();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BodyStateBoneMeta"), sizeof(FBodyStateBoneMeta), Get_Z_Construct_UScriptStruct_FBodyStateBoneMeta_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBodyStateBoneMeta_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBodyStateBoneMeta_CRC() { return 869556104U; }
	void UBodyStateBone::StaticRegisterNativesUBodyStateBone()
	{
		UClass* Class = UBodyStateBone::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeBasis", &UBodyStateBone::execChangeBasis },
			{ "Enabled", &UBodyStateBone::execEnabled },
			{ "IsTracked", &UBodyStateBone::execIsTracked },
			{ "Orientation", &UBodyStateBone::execOrientation },
			{ "Position", &UBodyStateBone::execPosition },
			{ "Scale", &UBodyStateBone::execScale },
			{ "SetEnabled", &UBodyStateBone::execSetEnabled },
			{ "SetOrientation", &UBodyStateBone::execSetOrientation },
			{ "SetPosition", &UBodyStateBone::execSetPosition },
			{ "SetScale", &UBodyStateBone::execSetScale },
			{ "ShiftBone", &UBodyStateBone::execShiftBone },
			{ "Transform", &UBodyStateBone::execTransform },
			{ "UniqueMeta", &UBodyStateBone::execUniqueMeta },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics
	{
		struct BodyStateBone_eventChangeBasis_Parms
		{
			FRotator PreBase;
			FRotator PostBase;
			bool AdjustVectors;
		};
		static void NewProp_AdjustVectors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AdjustVectors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::NewProp_AdjustVectors_SetBit(void* Obj)
	{
		((BodyStateBone_eventChangeBasis_Parms*)Obj)->AdjustVectors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::NewProp_AdjustVectors = { UE4CodeGen_Private::EPropertyClass::Bool, "AdjustVectors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BodyStateBone_eventChangeBasis_Parms), &Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::NewProp_AdjustVectors_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::NewProp_PostBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::NewProp_PostBase = { UE4CodeGen_Private::EPropertyClass::Struct, "PostBase", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BodyStateBone_eventChangeBasis_Parms, PostBase), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::NewProp_PostBase_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::NewProp_PostBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::NewProp_PreBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::NewProp_PreBase = { UE4CodeGen_Private::EPropertyClass::Struct, "PreBase", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BodyStateBone_eventChangeBasis_Parms, PreBase), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::NewProp_PreBase_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::NewProp_PreBase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::NewProp_AdjustVectors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::NewProp_PostBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::NewProp_PreBase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Bone" },
		{ "CPP_Default_AdjustVectors", "true" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBone, "ChangeBasis", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20400, sizeof(BodyStateBone_eventChangeBasis_Parms), Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateBone_ChangeBasis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateBone_ChangeBasis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateBone_Enabled_Statics
	{
		struct BodyStateBone_eventEnabled_Parms
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
	void Z_Construct_UFunction_UBodyStateBone_Enabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BodyStateBone_eventEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBodyStateBone_Enabled_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BodyStateBone_eventEnabled_Parms), &Z_Construct_UFunction_UBodyStateBone_Enabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBone_Enabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_Enabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBone_Enabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Bone" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Convenience Functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBone_Enabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBone, "Enabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(BodyStateBone_eventEnabled_Parms), Z_Construct_UFunction_UBodyStateBone_Enabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_Enabled_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBone_Enabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_Enabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateBone_Enabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateBone_Enabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateBone_IsTracked_Statics
	{
		struct BodyStateBone_eventIsTracked_Parms
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
	void Z_Construct_UFunction_UBodyStateBone_IsTracked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BodyStateBone_eventIsTracked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBodyStateBone_IsTracked_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BodyStateBone_eventIsTracked_Parms), &Z_Construct_UFunction_UBodyStateBone_IsTracked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBone_IsTracked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_IsTracked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBone_IsTracked_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Bone" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBone_IsTracked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBone, "IsTracked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020400, sizeof(BodyStateBone_eventIsTracked_Parms), Z_Construct_UFunction_UBodyStateBone_IsTracked_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_IsTracked_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBone_IsTracked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_IsTracked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateBone_IsTracked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateBone_IsTracked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateBone_Orientation_Statics
	{
		struct BodyStateBone_eventOrientation_Parms
		{
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateBone_Orientation_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BodyStateBone_eventOrientation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBone_Orientation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_Orientation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBone_Orientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Bone" },
		{ "Keywords", "rotation orientation" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Bone Orientation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBone_Orientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBone, "Orientation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14820401, sizeof(BodyStateBone_eventOrientation_Parms), Z_Construct_UFunction_UBodyStateBone_Orientation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_Orientation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBone_Orientation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_Orientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateBone_Orientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateBone_Orientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateBone_Position_Statics
	{
		struct BodyStateBone_eventPosition_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateBone_Position_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BodyStateBone_eventPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBone_Position_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_Position_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBone_Position_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Bone" },
		{ "Keywords", "position location" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Bone Position" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBone_Position_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBone, "Position", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14820401, sizeof(BodyStateBone_eventPosition_Parms), Z_Construct_UFunction_UBodyStateBone_Position_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_Position_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBone_Position_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_Position_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateBone_Position()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateBone_Position_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateBone_Scale_Statics
	{
		struct BodyStateBone_eventScale_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateBone_Scale_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BodyStateBone_eventScale_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBone_Scale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_Scale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBone_Scale_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Bone" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Bone Scale" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBone_Scale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBone, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14820401, sizeof(BodyStateBone_eventScale_Parms), Z_Construct_UFunction_UBodyStateBone_Scale_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_Scale_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBone_Scale_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_Scale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateBone_Scale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateBone_Scale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateBone_SetEnabled_Statics
	{
		struct BodyStateBone_eventSetEnabled_Parms
		{
			bool Enable;
		};
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBodyStateBone_SetEnabled_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((BodyStateBone_eventSetEnabled_Parms*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBodyStateBone_SetEnabled_Statics::NewProp_Enable = { UE4CodeGen_Private::EPropertyClass::Bool, "Enable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BodyStateBone_eventSetEnabled_Parms), &Z_Construct_UFunction_UBodyStateBone_SetEnabled_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBone_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_SetEnabled_Statics::NewProp_Enable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBone_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Bone" },
		{ "CPP_Default_Enable", "true" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBone_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBone, "SetEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(BodyStateBone_eventSetEnabled_Parms), Z_Construct_UFunction_UBodyStateBone_SetEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_SetEnabled_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBone_SetEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateBone_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateBone_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateBone_SetOrientation_Statics
	{
		struct BodyStateBone_eventSetOrientation_Parms
		{
			FRotator InOrientation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InOrientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InOrientation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBone_SetOrientation_Statics::NewProp_InOrientation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateBone_SetOrientation_Statics::NewProp_InOrientation = { UE4CodeGen_Private::EPropertyClass::Struct, "InOrientation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BodyStateBone_eventSetOrientation_Parms, InOrientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBone_SetOrientation_Statics::NewProp_InOrientation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_SetOrientation_Statics::NewProp_InOrientation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBone_SetOrientation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_SetOrientation_Statics::NewProp_InOrientation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBone_SetOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Bone" },
		{ "Keywords", "set rotation orientation" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBone_SetOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBone, "SetOrientation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(BodyStateBone_eventSetOrientation_Parms), Z_Construct_UFunction_UBodyStateBone_SetOrientation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_SetOrientation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBone_SetOrientation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_SetOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateBone_SetOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateBone_SetOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateBone_SetPosition_Statics
	{
		struct BodyStateBone_eventSetPosition_Parms
		{
			FVector InPosition;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBone_SetPosition_Statics::NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateBone_SetPosition_Statics::NewProp_InPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "InPosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BodyStateBone_eventSetPosition_Parms, InPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBone_SetPosition_Statics::NewProp_InPosition_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_SetPosition_Statics::NewProp_InPosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBone_SetPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_SetPosition_Statics::NewProp_InPosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBone_SetPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Bone" },
		{ "Keywords", "set position location" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBone_SetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBone, "SetPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(BodyStateBone_eventSetPosition_Parms), Z_Construct_UFunction_UBodyStateBone_SetPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_SetPosition_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBone_SetPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_SetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateBone_SetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateBone_SetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateBone_SetScale_Statics
	{
		struct BodyStateBone_eventSetScale_Parms
		{
			FVector InScale;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBone_SetScale_Statics::NewProp_InScale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateBone_SetScale_Statics::NewProp_InScale = { UE4CodeGen_Private::EPropertyClass::Struct, "InScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BodyStateBone_eventSetScale_Parms, InScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBone_SetScale_Statics::NewProp_InScale_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_SetScale_Statics::NewProp_InScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBone_SetScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_SetScale_Statics::NewProp_InScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBone_SetScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Bone" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBone_SetScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBone, "SetScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(BodyStateBone_eventSetScale_Parms), Z_Construct_UFunction_UBodyStateBone_SetScale_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_SetScale_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBone_SetScale_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_SetScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateBone_SetScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateBone_SetScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateBone_ShiftBone_Statics
	{
		struct BodyStateBone_eventShiftBone_Parms
		{
			FVector ShiftAmount;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShiftAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateBone_ShiftBone_Statics::NewProp_ShiftAmount = { UE4CodeGen_Private::EPropertyClass::Struct, "ShiftAmount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BodyStateBone_eventShiftBone_Parms, ShiftAmount), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBone_ShiftBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_ShiftBone_Statics::NewProp_ShiftAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBone_ShiftBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Bone" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBone_ShiftBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBone, "ShiftBone", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820400, sizeof(BodyStateBone_eventShiftBone_Parms), Z_Construct_UFunction_UBodyStateBone_ShiftBone_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_ShiftBone_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBone_ShiftBone_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_ShiftBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateBone_ShiftBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateBone_ShiftBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateBone_Transform_Statics
	{
		struct BodyStateBone_eventTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateBone_Transform_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BodyStateBone_eventTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBone_Transform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_Transform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBone_Transform_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Bone" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Convenience Transform getter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBone_Transform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBone, "Transform", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14820401, sizeof(BodyStateBone_eventTransform_Parms), Z_Construct_UFunction_UBodyStateBone_Transform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_Transform_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBone_Transform_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_Transform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateBone_Transform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateBone_Transform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateBone_UniqueMeta_Statics
	{
		struct BodyStateBone_eventUniqueMeta_Parms
		{
			FBodyStateBoneMeta ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateBone_UniqueMeta_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BodyStateBone_eventUniqueMeta_Parms, ReturnValue), Z_Construct_UScriptStruct_FBodyStateBoneMeta, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBone_UniqueMeta_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBone_UniqueMeta_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBone_UniqueMeta_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Bone" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Get Unique Meta from first unique parent" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBone_UniqueMeta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBone, "UniqueMeta", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(BodyStateBone_eventUniqueMeta_Parms), Z_Construct_UFunction_UBodyStateBone_UniqueMeta_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_UniqueMeta_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBone_UniqueMeta_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBone_UniqueMeta_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateBone_UniqueMeta()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateBone_UniqueMeta_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBodyStateBone_NoRegister()
	{
		return UBodyStateBone::StaticClass();
	}
	struct Z_Construct_UClass_UBodyStateBone_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Children;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Children_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Meta_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Meta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBodyStateBone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBodyStateBone_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBodyStateBone_ChangeBasis, "ChangeBasis" }, // 879476133
		{ &Z_Construct_UFunction_UBodyStateBone_Enabled, "Enabled" }, // 1468648486
		{ &Z_Construct_UFunction_UBodyStateBone_IsTracked, "IsTracked" }, // 157508343
		{ &Z_Construct_UFunction_UBodyStateBone_Orientation, "Orientation" }, // 874750769
		{ &Z_Construct_UFunction_UBodyStateBone_Position, "Position" }, // 818834373
		{ &Z_Construct_UFunction_UBodyStateBone_Scale, "Scale" }, // 3268940296
		{ &Z_Construct_UFunction_UBodyStateBone_SetEnabled, "SetEnabled" }, // 738427969
		{ &Z_Construct_UFunction_UBodyStateBone_SetOrientation, "SetOrientation" }, // 888290141
		{ &Z_Construct_UFunction_UBodyStateBone_SetPosition, "SetPosition" }, // 1064225220
		{ &Z_Construct_UFunction_UBodyStateBone_SetScale, "SetScale" }, // 1649280097
		{ &Z_Construct_UFunction_UBodyStateBone_ShiftBone, "ShiftBone" }, // 2182999452
		{ &Z_Construct_UFunction_UBodyStateBone_Transform, "Transform" }, // 3440237531
		{ &Z_Construct_UFunction_UBodyStateBone_UniqueMeta, "UniqueMeta" }, // 3867722644
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateBone_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Skeleton/BodyStateBone.h" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Children_MetaData[] = {
		{ "Category", "BodyState Bone" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Children Bones - If available, weak links" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Children = { UE4CodeGen_Private::EPropertyClass::Array, "Children", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(UBodyStateBone, Children), METADATA_PARAMS(Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Children_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Children_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Children_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Children", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Parent_MetaData[] = {
		{ "Category", "BodyState Bone" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Parent Bone - If available, weak links" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Parent = { UE4CodeGen_Private::EPropertyClass::Object, "Parent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(UBodyStateBone, Parent), Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Parent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Parent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Meta_MetaData[] = {
		{ "Category", "BodyState Bone" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Meta = { UE4CodeGen_Private::EPropertyClass::Struct, "Meta", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(UBodyStateBone, Meta), Z_Construct_UScriptStruct_FBodyStateBoneMeta, METADATA_PARAMS(Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Meta_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Meta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateBone_Statics::NewProp_BoneData_MetaData[] = {
		{ "Category", "BodyState Bone" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBodyStateBone_Statics::NewProp_BoneData = { UE4CodeGen_Private::EPropertyClass::Struct, "BoneData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(UBodyStateBone, BoneData), Z_Construct_UScriptStruct_FBodyStateBoneData, METADATA_PARAMS(Z_Construct_UClass_UBodyStateBone_Statics::NewProp_BoneData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodyStateBone_Statics::NewProp_BoneData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "BodyState Bone" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateBone.h" },
		{ "ToolTip", "Human readable name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(UBodyStateBone, Name), METADATA_PARAMS(Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBodyStateBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Children,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Children_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Parent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Meta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateBone_Statics::NewProp_BoneData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateBone_Statics::NewProp_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBodyStateBone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBodyStateBone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBodyStateBone_Statics::ClassParams = {
		&UBodyStateBone::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UBodyStateBone_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UBodyStateBone_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBodyStateBone_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBodyStateBone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBodyStateBone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBodyStateBone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBodyStateBone, 179281634);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBodyStateBone(Z_Construct_UClass_UBodyStateBone, &UBodyStateBone::StaticClass, TEXT("/Script/BodyState"), TEXT("UBodyStateBone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBodyStateBone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif