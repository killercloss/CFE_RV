// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LeapMotionEditor/Public/AnimGraphNode_ModifyBodyStateMappedBones.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_ModifyBodyStateMappedBones() {}
// Cross Module References
	LEAPMOTIONEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_NoRegister();
	LEAPMOTIONEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	UPackage* Z_Construct_UPackage__Script_LeapMotionEditor();
	BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones();
// End Cross Module References
	void UAnimGraphNode_ModifyBodyStateMappedBones::StaticRegisterNativesUAnimGraphNode_ModifyBodyStateMappedBones()
	{
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_NoRegister()
	{
		return UAnimGraphNode_ModifyBodyStateMappedBones::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LeapMotionEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_ModifyBodyStateMappedBones.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_ModifyBodyStateMappedBones.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_ModifyBodyStateMappedBones.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::NewProp_Node = { UE4CodeGen_Private::EPropertyClass::Struct, "Node", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimGraphNode_ModifyBodyStateMappedBones, Node), Z_Construct_UScriptStruct_FAnimNode_ModifyBodyStateMappedBones, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::NewProp_Node_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::NewProp_Node_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_ModifyBodyStateMappedBones>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::ClassParams = {
		&UAnimGraphNode_ModifyBodyStateMappedBones::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000800A0u,
		nullptr, 0,
		Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimGraphNode_ModifyBodyStateMappedBones, 2050831471);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_ModifyBodyStateMappedBones(Z_Construct_UClass_UAnimGraphNode_ModifyBodyStateMappedBones, &UAnimGraphNode_ModifyBodyStateMappedBones::StaticClass, TEXT("/Script/LeapMotionEditor"), TEXT("UAnimGraphNode_ModifyBodyStateMappedBones"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_ModifyBodyStateMappedBones);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif