// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BodyState/Public/BodyStateAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyStateAnimInstance() {}
// Cross Module References
	BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FSearchStrings();
	UPackage* Z_Construct_UPackage__Script_BodyState();
	BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FMappedBoneAnimData();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateSkeleton_NoRegister();
	BODYSTATE_API UEnum* Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType();
	BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FBPBoneReference();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyStateIndexedBone();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateAnimInstance_NoRegister();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache();
	BODYSTATE_API UEnum* Z_Construct_UEnum_BodyState_EBodyStateAutoRigType();
// End Cross Module References
class UScriptStruct* FSearchStrings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BODYSTATE_API uint32 Get_Z_Construct_UScriptStruct_FSearchStrings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSearchStrings, Z_Construct_UPackage__Script_BodyState(), TEXT("SearchStrings"), sizeof(FSearchStrings), Get_Z_Construct_UScriptStruct_FSearchStrings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSearchStrings(FSearchStrings::StaticStruct, TEXT("/Script/BodyState"), TEXT("SearchStrings"), false, nullptr, nullptr);
static struct FScriptStruct_BodyState_StaticRegisterNativesFSearchStrings
{
	FScriptStruct_BodyState_StaticRegisterNativesFSearchStrings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SearchStrings")),new UScriptStruct::TCppStructOps<FSearchStrings>);
	}
} ScriptStruct_BodyState_StaticRegisterNativesFSearchStrings;
	struct Z_Construct_UScriptStruct_FSearchStrings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WristSearchString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WristSearchString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightSearchStringAlt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RightSearchStringAlt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightSearchString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RightSearchString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftSearchStringAlt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeftSearchStringAlt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftSearchString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeftSearchString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchStrings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSearchStrings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSearchStrings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchStrings_Statics::NewProp_WristSearchString_MetaData[] = {
		{ "Category", "Search Strings" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSearchStrings_Statics::NewProp_WristSearchString = { UE4CodeGen_Private::EPropertyClass::Str, "WristSearchString", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSearchStrings, WristSearchString), METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchStrings_Statics::NewProp_WristSearchString_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchStrings_Statics::NewProp_WristSearchString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchStrings_Statics::NewProp_RightSearchStringAlt_MetaData[] = {
		{ "Category", "Search Strings" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSearchStrings_Statics::NewProp_RightSearchStringAlt = { UE4CodeGen_Private::EPropertyClass::Str, "RightSearchStringAlt", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSearchStrings, RightSearchStringAlt), METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchStrings_Statics::NewProp_RightSearchStringAlt_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchStrings_Statics::NewProp_RightSearchStringAlt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchStrings_Statics::NewProp_RightSearchString_MetaData[] = {
		{ "Category", "Search Strings" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSearchStrings_Statics::NewProp_RightSearchString = { UE4CodeGen_Private::EPropertyClass::Str, "RightSearchString", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSearchStrings, RightSearchString), METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchStrings_Statics::NewProp_RightSearchString_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchStrings_Statics::NewProp_RightSearchString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchStrings_Statics::NewProp_LeftSearchStringAlt_MetaData[] = {
		{ "Category", "Search Strings" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSearchStrings_Statics::NewProp_LeftSearchStringAlt = { UE4CodeGen_Private::EPropertyClass::Str, "LeftSearchStringAlt", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSearchStrings, LeftSearchStringAlt), METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchStrings_Statics::NewProp_LeftSearchStringAlt_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchStrings_Statics::NewProp_LeftSearchStringAlt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchStrings_Statics::NewProp_LeftSearchString_MetaData[] = {
		{ "Category", "Search Strings" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSearchStrings_Statics::NewProp_LeftSearchString = { UE4CodeGen_Private::EPropertyClass::Str, "LeftSearchString", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSearchStrings, LeftSearchString), METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchStrings_Statics::NewProp_LeftSearchString_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchStrings_Statics::NewProp_LeftSearchString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSearchStrings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchStrings_Statics::NewProp_WristSearchString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchStrings_Statics::NewProp_RightSearchStringAlt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchStrings_Statics::NewProp_RightSearchString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchStrings_Statics::NewProp_LeftSearchStringAlt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchStrings_Statics::NewProp_LeftSearchString,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSearchStrings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
		nullptr,
		&NewStructOps,
		"SearchStrings",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FSearchStrings),
		alignof(FSearchStrings),
		Z_Construct_UScriptStruct_FSearchStrings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchStrings_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchStrings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchStrings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSearchStrings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSearchStrings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_BodyState();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SearchStrings"), sizeof(FSearchStrings), Get_Z_Construct_UScriptStruct_FSearchStrings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSearchStrings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSearchStrings_CRC() { return 847789804U; }
class UScriptStruct* FMappedBoneAnimData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BODYSTATE_API uint32 Get_Z_Construct_UScriptStruct_FMappedBoneAnimData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMappedBoneAnimData, Z_Construct_UPackage__Script_BodyState(), TEXT("MappedBoneAnimData"), sizeof(FMappedBoneAnimData), Get_Z_Construct_UScriptStruct_FMappedBoneAnimData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMappedBoneAnimData(FMappedBoneAnimData::StaticStruct, TEXT("/Script/BodyState"), TEXT("MappedBoneAnimData"), false, nullptr, nullptr);
static struct FScriptStruct_BodyState_StaticRegisterNativesFMappedBoneAnimData
{
	FScriptStruct_BodyState_StaticRegisterNativesFMappedBoneAnimData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MappedBoneAnimData")),new UScriptStruct::TCppStructOps<FMappedBoneAnimData>);
	}
} ScriptStruct_BodyState_StaticRegisterNativesFMappedBoneAnimData;
	struct Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyStateSkeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodyStateSkeleton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_BoneMap;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BoneMap_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneMap_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OffsetTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreBaseRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreBaseRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingTagLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackingTagLimit;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrackingTagLimit_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldDeformMesh_MetaData[];
#endif
		static void NewProp_bShouldDeformMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldDeformMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMappedBoneAnimData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BodyStateSkeleton_MetaData[] = {
		{ "Category", "Bone Anim Struct" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Skeleton driving mapped data" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BodyStateSkeleton = { UE4CodeGen_Private::EPropertyClass::Object, "BodyStateSkeleton", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FMappedBoneAnimData, BodyStateSkeleton), Z_Construct_UClass_UBodyStateSkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BodyStateSkeleton_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BodyStateSkeleton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BoneMap_MetaData[] = {
		{ "Category", "Bone Anim Struct" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Matching list of body state bone keys mapped to local mesh bone names" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BoneMap = { UE4CodeGen_Private::EPropertyClass::Map, "BoneMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMappedBoneAnimData, BoneMap), METADATA_PARAMS(Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BoneMap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BoneMap_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BoneMap_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Enum, "BoneMap_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 0, Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BoneMap_Key_KeyProp_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BoneMap_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "BoneMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 1, Z_Construct_UScriptStruct_FBPBoneReference, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_OffsetTransform_MetaData[] = {
		{ "Category", "BS Anim Instance" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Transform applied after rotation changes to all bones in map. Consider this an offset" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_OffsetTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "OffsetTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMappedBoneAnimData, OffsetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_OffsetTransform_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_OffsetTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_PreBaseRotation_MetaData[] = {
		{ "Category", "BS Anim Instance" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Offset rotation base applied before given rotation (will rotate input)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_PreBaseRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "PreBaseRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMappedBoneAnimData, PreBaseRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_PreBaseRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_PreBaseRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_TrackingTagLimit_MetaData[] = {
		{ "Category", "Bone Anim Struct" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "List of tags required by the tracking solution for this animation to use that data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_TrackingTagLimit = { UE4CodeGen_Private::EPropertyClass::Array, "TrackingTagLimit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMappedBoneAnimData, TrackingTagLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_TrackingTagLimit_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_TrackingTagLimit_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_TrackingTagLimit_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "TrackingTagLimit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_bShouldDeformMesh_MetaData[] = {
		{ "Category", "Bone Anim Struct" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Whether the mesh should deform to match the tracked data" },
	};
#endif
	void Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_bShouldDeformMesh_SetBit(void* Obj)
	{
		((FMappedBoneAnimData*)Obj)->bShouldDeformMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_bShouldDeformMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldDeformMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMappedBoneAnimData), &Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_bShouldDeformMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_bShouldDeformMesh_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_bShouldDeformMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BodyStateSkeleton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BoneMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BoneMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BoneMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_BoneMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_OffsetTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_PreBaseRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_TrackingTagLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_TrackingTagLimit_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::NewProp_bShouldDeformMesh,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
		nullptr,
		&NewStructOps,
		"MappedBoneAnimData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FMappedBoneAnimData),
		alignof(FMappedBoneAnimData),
		Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMappedBoneAnimData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMappedBoneAnimData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_BodyState();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MappedBoneAnimData"), sizeof(FMappedBoneAnimData), Get_Z_Construct_UScriptStruct_FMappedBoneAnimData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMappedBoneAnimData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMappedBoneAnimData_CRC() { return 4190759343U; }
class UScriptStruct* FBPBoneReference::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BODYSTATE_API uint32 Get_Z_Construct_UScriptStruct_FBPBoneReference_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPBoneReference, Z_Construct_UPackage__Script_BodyState(), TEXT("BPBoneReference"), sizeof(FBPBoneReference), Get_Z_Construct_UScriptStruct_FBPBoneReference_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPBoneReference(FBPBoneReference::StaticStruct, TEXT("/Script/BodyState"), TEXT("BPBoneReference"), false, nullptr, nullptr);
static struct FScriptStruct_BodyState_StaticRegisterNativesFBPBoneReference
{
	FScriptStruct_BodyState_StaticRegisterNativesFBPBoneReference()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPBoneReference")),new UScriptStruct::TCppStructOps<FBPBoneReference>);
	}
} ScriptStruct_BodyState_StaticRegisterNativesFBPBoneReference;
	struct Z_Construct_UScriptStruct_FBPBoneReference_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshBone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPBoneReference_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Required struct since 4.17 to expose hotlinked mesh bone references" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPBoneReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPBoneReference>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPBoneReference_Statics::NewProp_MeshBone_MetaData[] = {
		{ "Category", "BoneName" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPBoneReference_Statics::NewProp_MeshBone = { UE4CodeGen_Private::EPropertyClass::Struct, "MeshBone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBPBoneReference, MeshBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPBoneReference_Statics::NewProp_MeshBone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPBoneReference_Statics::NewProp_MeshBone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPBoneReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPBoneReference_Statics::NewProp_MeshBone,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPBoneReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
		nullptr,
		&NewStructOps,
		"BPBoneReference",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FBPBoneReference),
		alignof(FBPBoneReference),
		Z_Construct_UScriptStruct_FBPBoneReference_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPBoneReference_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPBoneReference_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBPBoneReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPBoneReference()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPBoneReference_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_BodyState();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPBoneReference"), sizeof(FBPBoneReference), Get_Z_Construct_UScriptStruct_FBPBoneReference_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPBoneReference_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPBoneReference_CRC() { return 940869840U; }
class UScriptStruct* FBodyStateIndexedBone::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BODYSTATE_API uint32 Get_Z_Construct_UScriptStruct_FBodyStateIndexedBone_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBodyStateIndexedBone, Z_Construct_UPackage__Script_BodyState(), TEXT("BodyStateIndexedBone"), sizeof(FBodyStateIndexedBone), Get_Z_Construct_UScriptStruct_FBodyStateIndexedBone_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBodyStateIndexedBone(FBodyStateIndexedBone::StaticStruct, TEXT("/Script/BodyState"), TEXT("BodyStateIndexedBone"), false, nullptr, nullptr);
static struct FScriptStruct_BodyState_StaticRegisterNativesFBodyStateIndexedBone
{
	FScriptStruct_BodyState_StaticRegisterNativesFBodyStateIndexedBone()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BodyStateIndexedBone")),new UScriptStruct::TCppStructOps<FBodyStateIndexedBone>);
	}
} ScriptStruct_BodyState_StaticRegisterNativesFBodyStateIndexedBone;
	struct Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Children;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Children_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ParentIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBodyStateIndexedBone>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_Children_MetaData[] = {
		{ "Category", "Indexed Bone" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_Children = { UE4CodeGen_Private::EPropertyClass::Array, "Children", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FBodyStateIndexedBone, Children), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_Children_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_Children_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_Children_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Children", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "Indexed Bone" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FBodyStateIndexedBone, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_Index_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_ParentIndex_MetaData[] = {
		{ "Category", "Indexed Bone" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_ParentIndex = { UE4CodeGen_Private::EPropertyClass::Int, "ParentIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FBodyStateIndexedBone, ParentIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_ParentIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_ParentIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Indexed Bone" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_BoneName = { UE4CodeGen_Private::EPropertyClass::Name, "BoneName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FBodyStateIndexedBone, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_BoneName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_BoneName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_Children,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_Children_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_ParentIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::NewProp_BoneName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
		nullptr,
		&NewStructOps,
		"BodyStateIndexedBone",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FBodyStateIndexedBone),
		alignof(FBodyStateIndexedBone),
		Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBodyStateIndexedBone()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBodyStateIndexedBone_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_BodyState();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BodyStateIndexedBone"), sizeof(FBodyStateIndexedBone), Get_Z_Construct_UScriptStruct_FBodyStateIndexedBone_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBodyStateIndexedBone_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBodyStateIndexedBone_CRC() { return 3670646813U; }
	void UBodyStateAnimInstance::StaticRegisterNativesUBodyStateAnimInstance()
	{
		UClass* Class = UBodyStateAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddBSBoneToMeshBoneLink", &UBodyStateAnimInstance::execAddBSBoneToMeshBoneLink },
			{ "AdjustPositionByMapBasis", &UBodyStateAnimInstance::execAdjustPositionByMapBasis },
			{ "AdjustRotationByMapBasis", &UBodyStateAnimInstance::execAdjustRotationByMapBasis },
			{ "BoneMapSummary", &UBodyStateAnimInstance::execBoneMapSummary },
			{ "RemoveBSBoneLink", &UBodyStateAnimInstance::execRemoveBSBoneLink },
			{ "SetAnimSkeleton", &UBodyStateAnimInstance::execSetAnimSkeleton },
			{ "SyncMappedBoneDataCache", &UBodyStateAnimInstance::execSyncMappedBoneDataCache },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics
	{
		struct BodyStateAnimInstance_eventAddBSBoneToMeshBoneLink_Parms
		{
			FMappedBoneAnimData InMappedBoneData;
			EBodyStateBasicBoneType BSBone;
			FName MeshBone;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MeshBone;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BSBone;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BSBone_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InMappedBoneData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::NewProp_MeshBone = { UE4CodeGen_Private::EPropertyClass::Name, "MeshBone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BodyStateAnimInstance_eventAddBSBoneToMeshBoneLink_Parms, MeshBone), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::NewProp_BSBone = { UE4CodeGen_Private::EPropertyClass::Enum, "BSBone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BodyStateAnimInstance_eventAddBSBoneToMeshBoneLink_Parms, BSBone), Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::NewProp_BSBone_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::NewProp_InMappedBoneData = { UE4CodeGen_Private::EPropertyClass::Struct, "InMappedBoneData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000180, 1, nullptr, STRUCT_OFFSET(BodyStateAnimInstance_eventAddBSBoneToMeshBoneLink_Parms, InMappedBoneData), Z_Construct_UScriptStruct_FMappedBoneAnimData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::NewProp_MeshBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::NewProp_BSBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::NewProp_BSBone_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::NewProp_InMappedBoneData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::Function_MetaDataParams[] = {
		{ "Category", "BS Anim Instance" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Link given mesh bone with body state bone enum." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateAnimInstance, "AddBSBoneToMeshBoneLink", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(BodyStateAnimInstance_eventAddBSBoneToMeshBoneLink_Parms), Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics
	{
		struct BodyStateAnimInstance_eventAdjustPositionByMapBasis_Parms
		{
			FVector InPosition;
			FMappedBoneAnimData ForMap;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForMap;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BodyStateAnimInstance_eventAdjustPositionByMapBasis_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::NewProp_ForMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::NewProp_ForMap = { UE4CodeGen_Private::EPropertyClass::Struct, "ForMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BodyStateAnimInstance_eventAdjustPositionByMapBasis_Parms, ForMap), Z_Construct_UScriptStruct_FMappedBoneAnimData, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::NewProp_ForMap_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::NewProp_ForMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::NewProp_InPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "InPosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BodyStateAnimInstance_eventAdjustPositionByMapBasis_Parms, InPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::NewProp_InPosition_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::NewProp_InPosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::NewProp_ForMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::NewProp_InPosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::Function_MetaDataParams[] = {
		{ "Category", "BS Anim Instance" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateAnimInstance, "AdjustPositionByMapBasis", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C20401, sizeof(BodyStateAnimInstance_eventAdjustPositionByMapBasis_Parms), Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics
	{
		struct BodyStateAnimInstance_eventAdjustRotationByMapBasis_Parms
		{
			FRotator InRotator;
			FMappedBoneAnimData ForMap;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRotator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InRotator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BodyStateAnimInstance_eventAdjustRotationByMapBasis_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::NewProp_ForMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::NewProp_ForMap = { UE4CodeGen_Private::EPropertyClass::Struct, "ForMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BodyStateAnimInstance_eventAdjustRotationByMapBasis_Parms, ForMap), Z_Construct_UScriptStruct_FMappedBoneAnimData, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::NewProp_ForMap_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::NewProp_ForMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::NewProp_InRotator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::NewProp_InRotator = { UE4CodeGen_Private::EPropertyClass::Struct, "InRotator", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BodyStateAnimInstance_eventAdjustRotationByMapBasis_Parms, InRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::NewProp_InRotator_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::NewProp_InRotator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::NewProp_ForMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::NewProp_InRotator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::Function_MetaDataParams[] = {
		{ "Category", "BS Anim Instance" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Adjust rotation by currently defines offset base rotators" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateAnimInstance, "AdjustRotationByMapBasis", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C20401, sizeof(BodyStateAnimInstance_eventAdjustRotationByMapBasis_Parms), Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary_Statics
	{
		struct BodyStateAnimInstance_eventBoneMapSummary_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BodyStateAnimInstance_eventBoneMapSummary_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary_Statics::Function_MetaDataParams[] = {
		{ "Category", "BS Anim Instance" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateAnimInstance, "BoneMapSummary", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(BodyStateAnimInstance_eventBoneMapSummary_Parms), Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics
	{
		struct BodyStateAnimInstance_eventRemoveBSBoneLink_Parms
		{
			FMappedBoneAnimData InMappedBoneData;
			EBodyStateBasicBoneType BSBone;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BSBone;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BSBone_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InMappedBoneData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::NewProp_BSBone = { UE4CodeGen_Private::EPropertyClass::Enum, "BSBone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BodyStateAnimInstance_eventRemoveBSBoneLink_Parms, BSBone), Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::NewProp_BSBone_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::NewProp_InMappedBoneData = { UE4CodeGen_Private::EPropertyClass::Struct, "InMappedBoneData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000180, 1, nullptr, STRUCT_OFFSET(BodyStateAnimInstance_eventRemoveBSBoneLink_Parms, InMappedBoneData), Z_Construct_UScriptStruct_FMappedBoneAnimData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::NewProp_BSBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::NewProp_BSBone_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::NewProp_InMappedBoneData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::Function_MetaDataParams[] = {
		{ "Category", "BS Anim Instance" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Remove a link. Useful when e.g. autorigging gets 80% there but you need to remove a bone." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateAnimInstance, "RemoveBSBoneLink", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(BodyStateAnimInstance_eventRemoveBSBoneLink_Parms), Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton_Statics
	{
		struct BodyStateAnimInstance_eventSetAnimSkeleton_Parms
		{
			UBodyStateSkeleton* InSkeleton;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSkeleton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton_Statics::NewProp_InSkeleton = { UE4CodeGen_Private::EPropertyClass::Object, "InSkeleton", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BodyStateAnimInstance_eventSetAnimSkeleton_Parms, InSkeleton), Z_Construct_UClass_UBodyStateSkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton_Statics::NewProp_InSkeleton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton_Statics::Function_MetaDataParams[] = {
		{ "Category", "BS Anim Instance" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateAnimInstance, "SetAnimSkeleton", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BodyStateAnimInstance_eventSetAnimSkeleton_Parms), Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache_Statics
	{
		struct BodyStateAnimInstance_eventSyncMappedBoneDataCache_Parms
		{
			FMappedBoneAnimData InMappedBoneData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InMappedBoneData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache_Statics::NewProp_InMappedBoneData = { UE4CodeGen_Private::EPropertyClass::Struct, "InMappedBoneData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000180, 1, nullptr, STRUCT_OFFSET(BodyStateAnimInstance_eventSyncMappedBoneDataCache_Parms, InMappedBoneData), Z_Construct_UScriptStruct_FMappedBoneAnimData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache_Statics::NewProp_InMappedBoneData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "BS Anim Instance" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Manual sync" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateAnimInstance, "SyncMappedBoneDataCache", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(BodyStateAnimInstance_eventSyncMappedBoneDataCache_Parms), Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBodyStateAnimInstance_NoRegister()
	{
		return UBodyStateAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UBodyStateAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MappedBoneList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MappedBoneList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MappedBoneList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyStateSkeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodyStateSkeleton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBodyStateIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultBodyStateIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingLimitTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackingLimitTags;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrackingLimitTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchStrings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SearchStrings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BonesPerFinger_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BonesPerFinger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoMapTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AutoMapTarget;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AutoMapTarget_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoDetectBoneMapAtInit_MetaData[];
#endif
		static void NewProp_bAutoDetectBoneMapAtInit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDetectBoneMapAtInit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFreezeTracking_MetaData[];
#endif
		static void NewProp_bFreezeTracking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFreezeTracking;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBodyStateAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBodyStateAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBodyStateAnimInstance_AddBSBoneToMeshBoneLink, "AddBSBoneToMeshBoneLink" }, // 3041901318
		{ &Z_Construct_UFunction_UBodyStateAnimInstance_AdjustPositionByMapBasis, "AdjustPositionByMapBasis" }, // 4153977896
		{ &Z_Construct_UFunction_UBodyStateAnimInstance_AdjustRotationByMapBasis, "AdjustRotationByMapBasis" }, // 2098075488
		{ &Z_Construct_UFunction_UBodyStateAnimInstance_BoneMapSummary, "BoneMapSummary" }, // 2086152838
		{ &Z_Construct_UFunction_UBodyStateAnimInstance_RemoveBSBoneLink, "RemoveBSBoneLink" }, // 4180562599
		{ &Z_Construct_UFunction_UBodyStateAnimInstance_SetAnimSkeleton, "SetAnimSkeleton" }, // 2260745329
		{ &Z_Construct_UFunction_UBodyStateAnimInstance_SyncMappedBoneDataCache, "SyncMappedBoneDataCache" }, // 1880764680
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance AnimInstance" },
		{ "IncludePath", "BodyStateAnimInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_MappedBoneList_MetaData[] = {
		{ "Category", "BS Anim Instance" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Struct containing all variables needed at anim node time" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_MappedBoneList = { UE4CodeGen_Private::EPropertyClass::Array, "MappedBoneList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBodyStateAnimInstance, MappedBoneList), METADATA_PARAMS(Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_MappedBoneList_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_MappedBoneList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_MappedBoneList_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "MappedBoneList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMappedBoneAnimData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_BodyStateSkeleton_MetaData[] = {
		{ "Category", "Bone Anim Struct" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Skeleton driving our data" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_BodyStateSkeleton = { UE4CodeGen_Private::EPropertyClass::Object, "BodyStateSkeleton", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(UBodyStateAnimInstance, BodyStateSkeleton), Z_Construct_UClass_UBodyStateSkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_BodyStateSkeleton_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_BodyStateSkeleton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_DefaultBodyStateIndex_MetaData[] = {
		{ "Category", "BS Anim Instance" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_DefaultBodyStateIndex = { UE4CodeGen_Private::EPropertyClass::Int, "DefaultBodyStateIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBodyStateAnimInstance, DefaultBodyStateIndex), METADATA_PARAMS(Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_DefaultBodyStateIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_DefaultBodyStateIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_TrackingLimitTags_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Map" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_TrackingLimitTags = { UE4CodeGen_Private::EPropertyClass::Array, "TrackingLimitTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBodyStateAnimInstance, TrackingLimitTags), METADATA_PARAMS(Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_TrackingLimitTags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_TrackingLimitTags_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_TrackingLimitTags_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "TrackingLimitTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_SearchStrings_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Map" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Strings used to identify left or right hand in your rig. Customize if autorig is failing" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_SearchStrings = { UE4CodeGen_Private::EPropertyClass::Struct, "SearchStrings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBodyStateAnimInstance, SearchStrings), Z_Construct_UScriptStruct_FSearchStrings, METADATA_PARAMS(Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_SearchStrings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_SearchStrings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_BonesPerFinger_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Map" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "This will be automatically determined based on your palm->index traverse distance if value is -1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_BonesPerFinger = { UE4CodeGen_Private::EPropertyClass::Int, "BonesPerFinger", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBodyStateAnimInstance, BonesPerFinger), METADATA_PARAMS(Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_BonesPerFinger_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_BonesPerFinger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_AutoMapTarget_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Map" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_AutoMapTarget = { UE4CodeGen_Private::EPropertyClass::Enum, "AutoMapTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBodyStateAnimInstance, AutoMapTarget), Z_Construct_UEnum_BodyState_EBodyStateAutoRigType, METADATA_PARAMS(Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_AutoMapTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_AutoMapTarget_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_AutoMapTarget_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bAutoDetectBoneMapAtInit_MetaData[] = {
		{ "Category", "BS Anim Instance - Auto Map" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Whether the anim instance should autodetect and fill the bonemap on anim init" },
	};
#endif
	void Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bAutoDetectBoneMapAtInit_SetBit(void* Obj)
	{
		((UBodyStateAnimInstance*)Obj)->bAutoDetectBoneMapAtInit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bAutoDetectBoneMapAtInit = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoDetectBoneMapAtInit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBodyStateAnimInstance), &Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bAutoDetectBoneMapAtInit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bAutoDetectBoneMapAtInit_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bAutoDetectBoneMapAtInit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bFreezeTracking_MetaData[] = {
		{ "Category", "BS Anim Instance - Debug" },
		{ "ModuleRelativePath", "Public/BodyStateAnimInstance.h" },
		{ "ToolTip", "Toggle to freeze the tracking at current state. Useful for debugging your anim instance" },
	};
#endif
	void Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bFreezeTracking_SetBit(void* Obj)
	{
		((UBodyStateAnimInstance*)Obj)->bFreezeTracking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bFreezeTracking = { UE4CodeGen_Private::EPropertyClass::Bool, "bFreezeTracking", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBodyStateAnimInstance), &Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bFreezeTracking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bFreezeTracking_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bFreezeTracking_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBodyStateAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_MappedBoneList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_MappedBoneList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_BodyStateSkeleton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_DefaultBodyStateIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_TrackingLimitTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_TrackingLimitTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_SearchStrings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_BonesPerFinger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_AutoMapTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_AutoMapTarget_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bAutoDetectBoneMapAtInit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateAnimInstance_Statics::NewProp_bFreezeTracking,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBodyStateAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBodyStateAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBodyStateAnimInstance_Statics::ClassParams = {
		&UBodyStateAnimInstance::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008000A8u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UBodyStateAnimInstance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UBodyStateAnimInstance_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBodyStateAnimInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBodyStateAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBodyStateAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBodyStateAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBodyStateAnimInstance, 2493336194);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBodyStateAnimInstance(Z_Construct_UClass_UBodyStateAnimInstance, &UBodyStateAnimInstance::StaticClass, TEXT("/Script/BodyState"), TEXT("UBodyStateAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBodyStateAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
