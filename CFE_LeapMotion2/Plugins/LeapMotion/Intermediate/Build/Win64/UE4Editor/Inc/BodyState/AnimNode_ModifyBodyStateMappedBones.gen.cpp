// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BodyState/Public/AnimNode_ModifyBodyStateMappedBones.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_ModifyBodyStateMappedBones() {}
// Cross Module References
	BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones();
	UPackage* Z_Construct_UPackage__Script_BodyState();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FMappedBoneAnimData();
// End Cross Module References
class UScriptStruct* FAnimNode_ModifyBodyStateMappedBones::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BODYSTATE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones, Z_Construct_UPackage__Script_BodyState(), TEXT("AnimNode_ModifyBodyStateMappedBones"), sizeof(FAnimNode_ModifyBodyStateMappedBones), Get_Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones(FAnimNode_ModifyBodyStateMappedBones::StaticStruct, TEXT("/Script/BodyState"), TEXT("AnimNode_ModifyBodyStateMappedBones"), false, nullptr, nullptr);
static struct FScriptStruct_BodyState_StaticRegisterNativesFAnimNode_ModifyBodyStateMappedBones
{
	FScriptStruct_BodyState_StaticRegisterNativesFAnimNode_ModifyBodyStateMappedBones()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_ModifyBodyStateMappedBones")),new UScriptStruct::TCppStructOps<FAnimNode_ModifyBodyStateMappedBones>);
	}
} ScriptStruct_BodyState_StaticRegisterNativesFAnimNode_ModifyBodyStateMappedBones;
	struct Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MappedBoneAnimData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MappedBoneAnimData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimNode_ModifyBodyStateMappedBones.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ModifyBodyStateMappedBones>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones_Statics::NewProp_MappedBoneAnimData_MetaData[] = {
		{ "Category", "BodyState" },
		{ "ModuleRelativePath", "Public/AnimNode_ModifyBodyStateMappedBones.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "All combined settings required for this node to process mapped bones" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones_Statics::NewProp_MappedBoneAnimData = { UE4CodeGen_Private::EPropertyClass::Struct, "MappedBoneAnimData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_ModifyBodyStateMappedBones, MappedBoneAnimData), Z_Construct_UScriptStruct_FMappedBoneAnimData, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones_Statics::NewProp_MappedBoneAnimData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones_Statics::NewProp_MappedBoneAnimData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones_Statics::NewProp_MappedBoneAnimData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_ModifyBodyStateMappedBones",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FAnimNode_ModifyBodyStateMappedBones),
		alignof(FAnimNode_ModifyBodyStateMappedBones),
		Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_BodyState();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_ModifyBodyStateMappedBones"), sizeof(FAnimNode_ModifyBodyStateMappedBones), Get_Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones_CRC() { return 388352757U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
