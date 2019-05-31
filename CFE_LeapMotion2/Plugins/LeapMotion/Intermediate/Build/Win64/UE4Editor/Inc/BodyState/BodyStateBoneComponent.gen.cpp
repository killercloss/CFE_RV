// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BodyState/Public/BodyStateBoneComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyStateBoneComponent() {}
// Cross Module References
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateBoneComponent_NoRegister();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateBoneComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_BodyState();
	BODYSTATE_API UEnum* Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType();
// End Cross Module References
	void UBodyStateBoneComponent::StaticRegisterNativesUBodyStateBoneComponent()
	{
	}
	UClass* Z_Construct_UClass_UBodyStateBoneComponent_NoRegister()
	{
		return UBodyStateBoneComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBodyStateBoneComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneToFollow_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BoneToFollow;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneToFollow_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletonId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SkeletonId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBodyStateBoneComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateBoneComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "BodyState" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "BodyStateBoneComponent.h" },
		{ "ModuleRelativePath", "Public/BodyStateBoneComponent.h" },
		{ "ToolTip", "Scene Component which syncs to a desired BodyStateBone" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateBoneComponent_Statics::NewProp_BoneToFollow_MetaData[] = {
		{ "Category", "Body State Bone Component" },
		{ "ModuleRelativePath", "Public/BodyStateBoneComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBodyStateBoneComponent_Statics::NewProp_BoneToFollow = { UE4CodeGen_Private::EPropertyClass::Enum, "BoneToFollow", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBodyStateBoneComponent, BoneToFollow), Z_Construct_UEnum_BodyState_EBodyStateBasicBoneType, METADATA_PARAMS(Z_Construct_UClass_UBodyStateBoneComponent_Statics::NewProp_BoneToFollow_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodyStateBoneComponent_Statics::NewProp_BoneToFollow_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBodyStateBoneComponent_Statics::NewProp_BoneToFollow_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateBoneComponent_Statics::NewProp_SkeletonId_MetaData[] = {
		{ "Category", "Body State Bone Component" },
		{ "ModuleRelativePath", "Public/BodyStateBoneComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBodyStateBoneComponent_Statics::NewProp_SkeletonId = { UE4CodeGen_Private::EPropertyClass::Int, "SkeletonId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBodyStateBoneComponent, SkeletonId), METADATA_PARAMS(Z_Construct_UClass_UBodyStateBoneComponent_Statics::NewProp_SkeletonId_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodyStateBoneComponent_Statics::NewProp_SkeletonId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBodyStateBoneComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateBoneComponent_Statics::NewProp_BoneToFollow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateBoneComponent_Statics::NewProp_BoneToFollow_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateBoneComponent_Statics::NewProp_SkeletonId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBodyStateBoneComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBodyStateBoneComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBodyStateBoneComponent_Statics::ClassParams = {
		&UBodyStateBoneComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		nullptr, 0,
		Z_Construct_UClass_UBodyStateBoneComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UBodyStateBoneComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBodyStateBoneComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBodyStateBoneComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBodyStateBoneComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBodyStateBoneComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBodyStateBoneComponent, 3334921940);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBodyStateBoneComponent(Z_Construct_UClass_UBodyStateBoneComponent, &UBodyStateBoneComponent::StaticClass, TEXT("/Script/BodyState"), TEXT("UBodyStateBoneComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBodyStateBoneComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
