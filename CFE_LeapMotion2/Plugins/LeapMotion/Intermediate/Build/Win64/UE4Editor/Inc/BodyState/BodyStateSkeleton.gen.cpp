// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BodyState/Public/Skeleton/BodyStateSkeleton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyStateSkeleton() {}
// Cross Module References
	BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FNamedSkeletonData();
	UPackage* Z_Construct_UPackage__Script_BodyState();
	BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FNamedBoneMeta();
	BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FKeyedTransform();
	BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FNamedBoneData();
	BODYSTATE_API UEnum* Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType();
	BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyStateBoneMeta();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyStateBoneData();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateSkeleton_NoRegister();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateSkeleton();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateBone_NoRegister();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateSkeleton_Head();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateSkeleton_LeftArm();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateArm_NoRegister();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateSkeleton_ResetToDefaultSkeleton();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateSkeleton_RightArm();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateSkeleton_RootBone();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone();
// End Cross Module References
class UScriptStruct* FNamedSkeletonData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BODYSTATE_API uint32 Get_Z_Construct_UScriptStruct_FNamedSkeletonData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedSkeletonData, Z_Construct_UPackage__Script_BodyState(), TEXT("NamedSkeletonData"), sizeof(FNamedSkeletonData), Get_Z_Construct_UScriptStruct_FNamedSkeletonData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNamedSkeletonData(FNamedSkeletonData::StaticStruct, TEXT("/Script/BodyState"), TEXT("NamedSkeletonData"), false, nullptr, nullptr);
static struct FScriptStruct_BodyState_StaticRegisterNativesFNamedSkeletonData
{
	FScriptStruct_BodyState_StaticRegisterNativesFNamedSkeletonData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NamedSkeletonData")),new UScriptStruct::TCppStructOps<FNamedSkeletonData>);
	}
} ScriptStruct_BodyState_StaticRegisterNativesFNamedSkeletonData;
	struct Z_Construct_UScriptStruct_FNamedSkeletonData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueMetas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UniqueMetas;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueMetas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackedBasicBones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackedBasicBones;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackedBasicBones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackedAdvancedBones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackedAdvancedBones;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackedAdvancedBones_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Used for replication" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedSkeletonData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_UniqueMetas_MetaData[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_UniqueMetas = { UE4CodeGen_Private::EPropertyClass::Array, "UniqueMetas", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FNamedSkeletonData, UniqueMetas), METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_UniqueMetas_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_UniqueMetas_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_UniqueMetas_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "UniqueMetas", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FNamedBoneMeta, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_TrackedBasicBones_MetaData[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_TrackedBasicBones = { UE4CodeGen_Private::EPropertyClass::Array, "TrackedBasicBones", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FNamedSkeletonData, TrackedBasicBones), METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_TrackedBasicBones_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_TrackedBasicBones_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_TrackedBasicBones_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "TrackedBasicBones", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FKeyedTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_TrackedAdvancedBones_MetaData[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_TrackedAdvancedBones = { UE4CodeGen_Private::EPropertyClass::Array, "TrackedAdvancedBones", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FNamedSkeletonData, TrackedAdvancedBones), METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_TrackedAdvancedBones_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_TrackedAdvancedBones_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_TrackedAdvancedBones_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "TrackedAdvancedBones", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FNamedBoneData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_UniqueMetas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_UniqueMetas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_TrackedBasicBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_TrackedBasicBones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_TrackedAdvancedBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::NewProp_TrackedAdvancedBones_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
		nullptr,
		&NewStructOps,
		"NamedSkeletonData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FNamedSkeletonData),
		alignof(FNamedSkeletonData),
		Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNamedSkeletonData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNamedSkeletonData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_BodyState();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NamedSkeletonData"), sizeof(FNamedSkeletonData), Get_Z_Construct_UScriptStruct_FNamedSkeletonData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNamedSkeletonData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNamedSkeletonData_CRC() { return 3746515568U; }
class UScriptStruct* FNamedBoneMeta::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BODYSTATE_API uint32 Get_Z_Construct_UScriptStruct_FNamedBoneMeta_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedBoneMeta, Z_Construct_UPackage__Script_BodyState(), TEXT("NamedBoneMeta"), sizeof(FNamedBoneMeta), Get_Z_Construct_UScriptStruct_FNamedBoneMeta_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNamedBoneMeta(FNamedBoneMeta::StaticStruct, TEXT("/Script/BodyState"), TEXT("NamedBoneMeta"), false, nullptr, nullptr);
static struct FScriptStruct_BodyState_StaticRegisterNativesFNamedBoneMeta
{
	FScriptStruct_BodyState_StaticRegisterNativesFNamedBoneMeta()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NamedBoneMeta")),new UScriptStruct::TCppStructOps<FNamedBoneMeta>);
	}
} ScriptStruct_BodyState_StaticRegisterNativesFNamedBoneMeta;
	struct Z_Construct_UScriptStruct_FNamedBoneMeta_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Name_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Meta_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Meta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Used for replication" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedBoneMeta>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Enum, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FNamedBoneMeta, Name), Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType, METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::NewProp_Name_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::NewProp_Meta_MetaData[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::NewProp_Meta = { UE4CodeGen_Private::EPropertyClass::Struct, "Meta", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FNamedBoneMeta, Meta), Z_Construct_UScriptStruct_FBodyStateBoneMeta, METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::NewProp_Meta_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::NewProp_Meta_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::NewProp_Name_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::NewProp_Meta,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
		nullptr,
		&NewStructOps,
		"NamedBoneMeta",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FNamedBoneMeta),
		alignof(FNamedBoneMeta),
		Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNamedBoneMeta()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNamedBoneMeta_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_BodyState();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NamedBoneMeta"), sizeof(FNamedBoneMeta), Get_Z_Construct_UScriptStruct_FNamedBoneMeta_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNamedBoneMeta_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNamedBoneMeta_CRC() { return 786255465U; }
class UScriptStruct* FKeyedTransform::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BODYSTATE_API uint32 Get_Z_Construct_UScriptStruct_FKeyedTransform_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyedTransform, Z_Construct_UPackage__Script_BodyState(), TEXT("KeyedTransform"), sizeof(FKeyedTransform), Get_Z_Construct_UScriptStruct_FKeyedTransform_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKeyedTransform(FKeyedTransform::StaticStruct, TEXT("/Script/BodyState"), TEXT("KeyedTransform"), false, nullptr, nullptr);
static struct FScriptStruct_BodyState_StaticRegisterNativesFKeyedTransform
{
	FScriptStruct_BodyState_StaticRegisterNativesFKeyedTransform()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KeyedTransform")),new UScriptStruct::TCppStructOps<FKeyedTransform>);
	}
} ScriptStruct_BodyState_StaticRegisterNativesFKeyedTransform;
	struct Z_Construct_UScriptStruct_FKeyedTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Name_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyedTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Used for replication" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKeyedTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyedTransform>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyedTransform_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FKeyedTransform_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Enum, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FKeyedTransform, Name), Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyedTransform_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyedTransform_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKeyedTransform_Statics::NewProp_Name_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyedTransform_Statics::NewProp_Transform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKeyedTransform_Statics::NewProp_Transform = { UE4CodeGen_Private::EPropertyClass::Struct, "Transform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FKeyedTransform, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyedTransform_Statics::NewProp_Transform_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyedTransform_Statics::NewProp_Transform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKeyedTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyedTransform_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyedTransform_Statics::NewProp_Name_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyedTransform_Statics::NewProp_Transform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeyedTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
		nullptr,
		&NewStructOps,
		"KeyedTransform",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FKeyedTransform),
		alignof(FKeyedTransform),
		Z_Construct_UScriptStruct_FKeyedTransform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyedTransform_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyedTransform_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyedTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKeyedTransform()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKeyedTransform_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_BodyState();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KeyedTransform"), sizeof(FKeyedTransform), Get_Z_Construct_UScriptStruct_FKeyedTransform_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKeyedTransform_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKeyedTransform_CRC() { return 1860122462U; }
class UScriptStruct* FNamedBoneData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BODYSTATE_API uint32 Get_Z_Construct_UScriptStruct_FNamedBoneData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedBoneData, Z_Construct_UPackage__Script_BodyState(), TEXT("NamedBoneData"), sizeof(FNamedBoneData), Get_Z_Construct_UScriptStruct_FNamedBoneData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNamedBoneData(FNamedBoneData::StaticStruct, TEXT("/Script/BodyState"), TEXT("NamedBoneData"), false, nullptr, nullptr);
static struct FScriptStruct_BodyState_StaticRegisterNativesFNamedBoneData
{
	FScriptStruct_BodyState_StaticRegisterNativesFNamedBoneData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NamedBoneData")),new UScriptStruct::TCppStructOps<FNamedBoneData>);
	}
} ScriptStruct_BodyState_StaticRegisterNativesFNamedBoneData;
	struct Z_Construct_UScriptStruct_FNamedBoneData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Name_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedBoneData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Used for replication" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNamedBoneData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedBoneData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedBoneData_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNamedBoneData_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Enum, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FNamedBoneData, Name), Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType, METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedBoneData_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedBoneData_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNamedBoneData_Statics::NewProp_Name_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedBoneData_Statics::NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNamedBoneData_Statics::NewProp_Data = { UE4CodeGen_Private::EPropertyClass::Struct, "Data", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FNamedBoneData, Data), Z_Construct_UScriptStruct_FBodyStateBoneData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedBoneData_Statics::NewProp_Data_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedBoneData_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedBoneData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedBoneData_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedBoneData_Statics::NewProp_Name_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedBoneData_Statics::NewProp_Data,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedBoneData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
		nullptr,
		&NewStructOps,
		"NamedBoneData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FNamedBoneData),
		alignof(FNamedBoneData),
		Z_Construct_UScriptStruct_FNamedBoneData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedBoneData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedBoneData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedBoneData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNamedBoneData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNamedBoneData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_BodyState();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NamedBoneData"), sizeof(FNamedBoneData), Get_Z_Construct_UScriptStruct_FNamedBoneData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNamedBoneData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNamedBoneData_CRC() { return 1632899609U; }
	static FName NAME_UBodyStateSkeleton_Multi_UpdateBodyState = FName(TEXT("Multi_UpdateBodyState"));
	void UBodyStateSkeleton::Multi_UpdateBodyState(const FNamedSkeletonData InBodyStateSkeleton)
	{
		BodyStateSkeleton_eventMulti_UpdateBodyState_Parms Parms;
		Parms.InBodyStateSkeleton=InBodyStateSkeleton;
		ProcessEvent(FindFunctionChecked(NAME_UBodyStateSkeleton_Multi_UpdateBodyState),&Parms);
	}
	static FName NAME_UBodyStateSkeleton_ServerUpdateBodyState = FName(TEXT("ServerUpdateBodyState"));
	void UBodyStateSkeleton::ServerUpdateBodyState(const FNamedSkeletonData InBodyStateSkeleton)
	{
		BodyStateSkeleton_eventServerUpdateBodyState_Parms Parms;
		Parms.InBodyStateSkeleton=InBodyStateSkeleton;
		ProcessEvent(FindFunctionChecked(NAME_UBodyStateSkeleton_ServerUpdateBodyState),&Parms);
	}
	void UBodyStateSkeleton::StaticRegisterNativesUBodyStateSkeleton()
	{
		UClass* Class = UBodyStateSkeleton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BoneForEnum", &UBodyStateSkeleton::execBoneForEnum },
			{ "BoneNamed", &UBodyStateSkeleton::execBoneNamed },
			{ "ChangeBasis", &UBodyStateSkeleton::execChangeBasis },
			{ "GetMinimalNamedSkeletonData", &UBodyStateSkeleton::execGetMinimalNamedSkeletonData },
			{ "Head", &UBodyStateSkeleton::execHead },
			{ "LeftArm", &UBodyStateSkeleton::execLeftArm },
			{ "MergeFromOtherSkeleton", &UBodyStateSkeleton::execMergeFromOtherSkeleton },
			{ "Multi_UpdateBodyState", &UBodyStateSkeleton::execMulti_UpdateBodyState },
			{ "ResetToDefaultSkeleton", &UBodyStateSkeleton::execResetToDefaultSkeleton },
			{ "RightArm", &UBodyStateSkeleton::execRightArm },
			{ "RootBone", &UBodyStateSkeleton::execRootBone },
			{ "ServerUpdateBodyState", &UBodyStateSkeleton::execServerUpdateBodyState },
			{ "SetDataForBone", &UBodyStateSkeleton::execSetDataForBone },
			{ "SetFromNamedSkeletonData", &UBodyStateSkeleton::execSetFromNamedSkeletonData },
			{ "SetFromOtherSkeleton", &UBodyStateSkeleton::execSetFromOtherSkeleton },
			{ "SetMetaForBone", &UBodyStateSkeleton::execSetMetaForBone },
			{ "SetTransformForBone", &UBodyStateSkeleton::execSetTransformForBone },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics
	{
		struct BodyStateSkeleton_eventBoneForEnum_Parms
		{
			EBodyStateBasicBoneType Bone;
			UBodyStateBone* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Bone;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Bone_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BodyStateSkeleton_eventBoneForEnum_Parms, ReturnValue), Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::NewProp_Bone = { UE4CodeGen_Private::EPropertyClass::Enum, "Bone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BodyStateSkeleton_eventBoneForEnum_Parms, Bone), Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::NewProp_Bone_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::NewProp_Bone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::NewProp_Bone_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Get Bone data by enum" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, "BoneForEnum", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(BodyStateSkeleton_eventBoneForEnum_Parms), Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics
	{
		struct BodyStateSkeleton_eventBoneNamed_Parms
		{
			FString InName;
			UBodyStateBone* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BodyStateSkeleton_eventBoneNamed_Parms, ReturnValue), Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::NewProp_InName = { UE4CodeGen_Private::EPropertyClass::Str, "InName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BodyStateSkeleton_eventBoneNamed_Parms, InName), METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::NewProp_InName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::NewProp_InName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::NewProp_InName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Get Bone data by name matching" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, "BoneNamed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(BodyStateSkeleton_eventBoneNamed_Parms), Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics
	{
		struct BodyStateSkeleton_eventChangeBasis_Parms
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
	void Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::NewProp_AdjustVectors_SetBit(void* Obj)
	{
		((BodyStateSkeleton_eventChangeBasis_Parms*)Obj)->AdjustVectors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::NewProp_AdjustVectors = { UE4CodeGen_Private::EPropertyClass::Bool, "AdjustVectors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BodyStateSkeleton_eventChangeBasis_Parms), &Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::NewProp_AdjustVectors_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::NewProp_PostBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::NewProp_PostBase = { UE4CodeGen_Private::EPropertyClass::Struct, "PostBase", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BodyStateSkeleton_eventChangeBasis_Parms, PostBase), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::NewProp_PostBase_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::NewProp_PostBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::NewProp_PreBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::NewProp_PreBase = { UE4CodeGen_Private::EPropertyClass::Struct, "PreBase", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BodyStateSkeleton_eventChangeBasis_Parms, PreBase), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::NewProp_PreBase_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::NewProp_PreBase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::NewProp_AdjustVectors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::NewProp_PostBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::NewProp_PreBase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton Setting" },
		{ "CPP_Default_AdjustVectors", "true" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, "ChangeBasis", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(BodyStateSkeleton_eventChangeBasis_Parms), Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData_Statics
	{
		struct BodyStateSkeleton_eventGetMinimalNamedSkeletonData_Parms
		{
			FNamedSkeletonData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BodyStateSkeleton_eventGetMinimalNamedSkeletonData_Parms, ReturnValue), Z_Construct_UScriptStruct_FNamedSkeletonData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton Setting" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Conversion" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, "GetMinimalNamedSkeletonData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BodyStateSkeleton_eventGetMinimalNamedSkeletonData_Parms), Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateSkeleton_Head_Statics
	{
		struct BodyStateSkeleton_eventHead_Parms
		{
			UBodyStateBone* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_Head_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BodyStateSkeleton_eventHead_Parms, ReturnValue), Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_Head_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_Head_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_Head_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Spine & Head" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_Head_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, "Head", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(BodyStateSkeleton_eventHead_Parms), Z_Construct_UFunction_UBodyStateSkeleton_Head_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_Head_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_Head_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_Head_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateSkeleton_Head()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_Head_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateSkeleton_LeftArm_Statics
	{
		struct BodyStateSkeleton_eventLeftArm_Parms
		{
			UBodyStateArm* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_LeftArm_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BodyStateSkeleton_eventLeftArm_Parms, ReturnValue), Z_Construct_UClass_UBodyStateArm_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_LeftArm_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_LeftArm_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_LeftArm_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Get a structured convenience wrapper around left arm bones" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_LeftArm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, "LeftArm", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(BodyStateSkeleton_eventLeftArm_Parms), Z_Construct_UFunction_UBodyStateSkeleton_LeftArm_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_LeftArm_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_LeftArm_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_LeftArm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateSkeleton_LeftArm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_LeftArm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton_Statics
	{
		struct BodyStateSkeleton_eventMergeFromOtherSkeleton_Parms
		{
			UBodyStateSkeleton* Other;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton_Statics::NewProp_Other = { UE4CodeGen_Private::EPropertyClass::Object, "Other", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BodyStateSkeleton_eventMergeFromOtherSkeleton_Parms, Other), Z_Construct_UClass_UBodyStateSkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton_Statics::NewProp_Other,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton Setting" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Copies only bones that are tracked from the other skeleton" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, "MergeFromOtherSkeleton", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BodyStateSkeleton_eventMergeFromOtherSkeleton_Parms), Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBodyStateSkeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InBodyStateSkeleton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState_Statics::NewProp_InBodyStateSkeleton_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState_Statics::NewProp_InBodyStateSkeleton = { UE4CodeGen_Private::EPropertyClass::Struct, "InBodyStateSkeleton", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(BodyStateSkeleton_eventMulti_UpdateBodyState_Parms, InBodyStateSkeleton), Z_Construct_UScriptStruct_FNamedSkeletonData, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState_Statics::NewProp_InBodyStateSkeleton_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState_Statics::NewProp_InBodyStateSkeleton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState_Statics::NewProp_InBodyStateSkeleton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, "Multi_UpdateBodyState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00024C40, sizeof(BodyStateSkeleton_eventMulti_UpdateBodyState_Parms), Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateSkeleton_ResetToDefaultSkeleton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_ResetToDefaultSkeleton_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton Setting" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Setting Bone Data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_ResetToDefaultSkeleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, "ResetToDefaultSkeleton", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_ResetToDefaultSkeleton_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_ResetToDefaultSkeleton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateSkeleton_ResetToDefaultSkeleton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_ResetToDefaultSkeleton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateSkeleton_RightArm_Statics
	{
		struct BodyStateSkeleton_eventRightArm_Parms
		{
			UBodyStateArm* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_RightArm_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BodyStateSkeleton_eventRightArm_Parms, ReturnValue), Z_Construct_UClass_UBodyStateArm_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_RightArm_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_RightArm_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_RightArm_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Get a structured convenience wrapper around right arm bones" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_RightArm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, "RightArm", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(BodyStateSkeleton_eventRightArm_Parms), Z_Construct_UFunction_UBodyStateSkeleton_RightArm_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_RightArm_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_RightArm_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_RightArm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateSkeleton_RightArm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_RightArm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateSkeleton_RootBone_Statics
	{
		struct BodyStateSkeleton_eventRootBone_Parms
		{
			UBodyStateBone* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_RootBone_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BodyStateSkeleton_eventRootBone_Parms, ReturnValue), Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_RootBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_RootBone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_RootBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Root" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_RootBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, "RootBone", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(BodyStateSkeleton_eventRootBone_Parms), Z_Construct_UFunction_UBodyStateSkeleton_RootBone_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_RootBone_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_RootBone_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_RootBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateSkeleton_RootBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_RootBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBodyStateSkeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InBodyStateSkeleton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState_Statics::NewProp_InBodyStateSkeleton_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState_Statics::NewProp_InBodyStateSkeleton = { UE4CodeGen_Private::EPropertyClass::Struct, "InBodyStateSkeleton", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(BodyStateSkeleton_eventServerUpdateBodyState_Parms, InBodyStateSkeleton), Z_Construct_UScriptStruct_FNamedSkeletonData, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState_Statics::NewProp_InBodyStateSkeleton_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState_Statics::NewProp_InBodyStateSkeleton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState_Statics::NewProp_InBodyStateSkeleton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Replication" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, "ServerUpdateBodyState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220C40, sizeof(BodyStateSkeleton_eventServerUpdateBodyState_Parms), Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics
	{
		struct BodyStateSkeleton_eventSetDataForBone_Parms
		{
			FBodyStateBoneData BoneData;
			EBodyStateBasicBoneType Bone;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Bone;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Bone_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::NewProp_Bone = { UE4CodeGen_Private::EPropertyClass::Enum, "Bone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BodyStateSkeleton_eventSetDataForBone_Parms, Bone), Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::NewProp_Bone_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::NewProp_BoneData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::NewProp_BoneData = { UE4CodeGen_Private::EPropertyClass::Struct, "BoneData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BodyStateSkeleton_eventSetDataForBone_Parms, BoneData), Z_Construct_UScriptStruct_FBodyStateBoneData, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::NewProp_BoneData_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::NewProp_BoneData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::NewProp_Bone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::NewProp_Bone_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::NewProp_BoneData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton Setting" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, "SetDataForBone", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(BodyStateSkeleton_eventSetDataForBone_Parms), Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData_Statics
	{
		struct BodyStateSkeleton_eventSetFromNamedSkeletonData_Parms
		{
			FNamedSkeletonData NamedSkeletonData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NamedSkeletonData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NamedSkeletonData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData_Statics::NewProp_NamedSkeletonData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData_Statics::NewProp_NamedSkeletonData = { UE4CodeGen_Private::EPropertyClass::Struct, "NamedSkeletonData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BodyStateSkeleton_eventSetFromNamedSkeletonData_Parms, NamedSkeletonData), Z_Construct_UScriptStruct_FNamedSkeletonData, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData_Statics::NewProp_NamedSkeletonData_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData_Statics::NewProp_NamedSkeletonData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData_Statics::NewProp_NamedSkeletonData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton Setting" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "key replication getter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, "SetFromNamedSkeletonData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(BodyStateSkeleton_eventSetFromNamedSkeletonData_Parms), Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton_Statics
	{
		struct BodyStateSkeleton_eventSetFromOtherSkeleton_Parms
		{
			UBodyStateSkeleton* Other;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton_Statics::NewProp_Other = { UE4CodeGen_Private::EPropertyClass::Object, "Other", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BodyStateSkeleton_eventSetFromOtherSkeleton_Parms, Other), Z_Construct_UClass_UBodyStateSkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton_Statics::NewProp_Other,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton Setting" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "key replication setter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, "SetFromOtherSkeleton", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BodyStateSkeleton_eventSetFromOtherSkeleton_Parms), Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics
	{
		struct BodyStateSkeleton_eventSetMetaForBone_Parms
		{
			FBodyStateBoneMeta BoneMeta;
			EBodyStateBasicBoneType Bone;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Bone;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Bone_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneMeta_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneMeta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::NewProp_Bone = { UE4CodeGen_Private::EPropertyClass::Enum, "Bone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BodyStateSkeleton_eventSetMetaForBone_Parms, Bone), Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::NewProp_Bone_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::NewProp_BoneMeta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::NewProp_BoneMeta = { UE4CodeGen_Private::EPropertyClass::Struct, "BoneMeta", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BodyStateSkeleton_eventSetMetaForBone_Parms, BoneMeta), Z_Construct_UScriptStruct_FBodyStateBoneMeta, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::NewProp_BoneMeta_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::NewProp_BoneMeta_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::NewProp_Bone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::NewProp_Bone_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::NewProp_BoneMeta,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton Setting" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, "SetMetaForBone", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(BodyStateSkeleton_eventSetMetaForBone_Parms), Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics
	{
		struct BodyStateSkeleton_eventSetTransformForBone_Parms
		{
			FTransform Transform;
			EBodyStateBasicBoneType Bone;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Bone;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Bone_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::NewProp_Bone = { UE4CodeGen_Private::EPropertyClass::Enum, "Bone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BodyStateSkeleton_eventSetTransformForBone_Parms, Bone), Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::NewProp_Bone_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::NewProp_Transform = { UE4CodeGen_Private::EPropertyClass::Struct, "Transform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BodyStateSkeleton_eventSetTransformForBone_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::NewProp_Transform_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::NewProp_Transform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::NewProp_Bone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::NewProp_Bone_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::NewProp_Transform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Skeleton Setting" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateSkeleton, "SetTransformForBone", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(BodyStateSkeleton_eventSetTransformForBone_Parms), Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBodyStateSkeleton_NoRegister()
	{
		return UBodyStateSkeleton::StaticClass();
	}
	struct Z_Construct_UClass_UBodyStateSkeleton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrivateRightArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrivateRightArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrivateLeftArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrivateLeftArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackingTags;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrackingTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bones;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Bones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletonId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SkeletonId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTrackingActive_MetaData[];
#endif
		static void NewProp_bTrackingActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTrackingActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBodyStateSkeleton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBodyStateSkeleton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBodyStateSkeleton_BoneForEnum, "BoneForEnum" }, // 826618776
		{ &Z_Construct_UFunction_UBodyStateSkeleton_BoneNamed, "BoneNamed" }, // 4002982771
		{ &Z_Construct_UFunction_UBodyStateSkeleton_ChangeBasis, "ChangeBasis" }, // 4047344993
		{ &Z_Construct_UFunction_UBodyStateSkeleton_GetMinimalNamedSkeletonData, "GetMinimalNamedSkeletonData" }, // 2400654591
		{ &Z_Construct_UFunction_UBodyStateSkeleton_Head, "Head" }, // 3612038224
		{ &Z_Construct_UFunction_UBodyStateSkeleton_LeftArm, "LeftArm" }, // 1344670124
		{ &Z_Construct_UFunction_UBodyStateSkeleton_MergeFromOtherSkeleton, "MergeFromOtherSkeleton" }, // 3477589560
		{ &Z_Construct_UFunction_UBodyStateSkeleton_Multi_UpdateBodyState, "Multi_UpdateBodyState" }, // 38222422
		{ &Z_Construct_UFunction_UBodyStateSkeleton_ResetToDefaultSkeleton, "ResetToDefaultSkeleton" }, // 1957540088
		{ &Z_Construct_UFunction_UBodyStateSkeleton_RightArm, "RightArm" }, // 2644895101
		{ &Z_Construct_UFunction_UBodyStateSkeleton_RootBone, "RootBone" }, // 2252310849
		{ &Z_Construct_UFunction_UBodyStateSkeleton_ServerUpdateBodyState, "ServerUpdateBodyState" }, // 4097538085
		{ &Z_Construct_UFunction_UBodyStateSkeleton_SetDataForBone, "SetDataForBone" }, // 3061286038
		{ &Z_Construct_UFunction_UBodyStateSkeleton_SetFromNamedSkeletonData, "SetFromNamedSkeletonData" }, // 3065386187
		{ &Z_Construct_UFunction_UBodyStateSkeleton_SetFromOtherSkeleton, "SetFromOtherSkeleton" }, // 2575023074
		{ &Z_Construct_UFunction_UBodyStateSkeleton_SetMetaForBone, "SetMetaForBone" }, // 1839612225
		{ &Z_Construct_UFunction_UBodyStateSkeleton_SetTransformForBone, "SetTransformForBone" }, // 115625443
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateSkeleton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Skeleton/BodyStateSkeleton.h" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Body Skeleton data, all bones are expected in component space" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_PrivateRightArm_MetaData[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_PrivateRightArm = { UE4CodeGen_Private::EPropertyClass::Object, "PrivateRightArm", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UBodyStateSkeleton, PrivateRightArm), Z_Construct_UClass_UBodyStateArm_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_PrivateRightArm_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_PrivateRightArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_PrivateLeftArm_MetaData[] = {
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_PrivateLeftArm = { UE4CodeGen_Private::EPropertyClass::Object, "PrivateLeftArm", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UBodyStateSkeleton, PrivateLeftArm), Z_Construct_UClass_UBodyStateArm_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_PrivateLeftArm_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_PrivateLeftArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_RootOffset_MetaData[] = {
		{ "Category", "BodyState Skeleton" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Used for reference point calibration e.g. hydra base origin" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_RootOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "RootOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UBodyStateSkeleton, RootOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_RootOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_RootOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_TrackingTags_MetaData[] = {
		{ "Category", "BodyState Skeleton" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Tracking Tags that this skeleton has currently inherited." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_TrackingTags = { UE4CodeGen_Private::EPropertyClass::Array, "TrackingTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UBodyStateSkeleton, TrackingTags), METADATA_PARAMS(Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_TrackingTags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_TrackingTags_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_TrackingTags_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "TrackingTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_Bones_MetaData[] = {
		{ "Category", "BodyState Skeleton" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Note: Storage of actual bone data should be here" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_Bones = { UE4CodeGen_Private::EPropertyClass::Array, "Bones", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UBodyStateSkeleton, Bones), METADATA_PARAMS(Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_Bones_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_Bones_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_Bones_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Bones", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_SkeletonId_MetaData[] = {
		{ "Category", "BodyState Skeleton" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Id issued to this skeleton, useful for getting device information" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_SkeletonId = { UE4CodeGen_Private::EPropertyClass::Int, "SkeletonId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UBodyStateSkeleton, SkeletonId), METADATA_PARAMS(Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_SkeletonId_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_SkeletonId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_bTrackingActive_MetaData[] = {
		{ "Category", "BodyState Skeleton" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "If tracking is active or frozen (useful for debugging)" },
	};
#endif
	void Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_bTrackingActive_SetBit(void* Obj)
	{
		((UBodyStateSkeleton*)Obj)->bTrackingActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_bTrackingActive = { UE4CodeGen_Private::EPropertyClass::Bool, "bTrackingActive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBodyStateSkeleton), &Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_bTrackingActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_bTrackingActive_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_bTrackingActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "BodyState Skeleton" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateSkeleton.h" },
		{ "ToolTip", "Human readable name, taken from device config, useful for debug" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UBodyStateSkeleton, Name), METADATA_PARAMS(Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBodyStateSkeleton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_PrivateRightArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_PrivateLeftArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_RootOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_TrackingTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_TrackingTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_Bones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_Bones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_SkeletonId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_bTrackingActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateSkeleton_Statics::NewProp_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBodyStateSkeleton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBodyStateSkeleton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBodyStateSkeleton_Statics::ClassParams = {
		&UBodyStateSkeleton::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UBodyStateSkeleton_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UBodyStateSkeleton_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBodyStateSkeleton_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBodyStateSkeleton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBodyStateSkeleton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBodyStateSkeleton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBodyStateSkeleton, 2155602710);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBodyStateSkeleton(Z_Construct_UClass_UBodyStateSkeleton, &UBodyStateSkeleton::StaticClass, TEXT("/Script/BodyState"), TEXT("UBodyStateSkeleton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBodyStateSkeleton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
