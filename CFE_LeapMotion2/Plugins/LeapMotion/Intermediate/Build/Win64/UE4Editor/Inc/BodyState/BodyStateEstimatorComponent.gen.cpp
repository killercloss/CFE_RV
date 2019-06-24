// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BodyState/Public/BodyStateEstimatorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyStateEstimatorComponent() {}
// Cross Module References
	BODYSTATE_API UFunction* Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_BodyState();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateSkeleton_NoRegister();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateEstimatorComponent_NoRegister();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateEstimatorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature_Statics
	{
		struct _Script_BodyState_eventBodyStateSkeletonSignature_Parms
		{
			UBodyStateSkeleton* Skeleton;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature_Statics::NewProp_Skeleton = { UE4CodeGen_Private::EPropertyClass::Object, "Skeleton", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_BodyState_eventBodyStateSkeletonSignature_Parms, Skeleton), Z_Construct_UClass_UBodyStateSkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature_Statics::NewProp_Skeleton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BodyStateEstimatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BodyState, "BodyStateSkeletonSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_BodyState_eventBodyStateSkeletonSignature_Parms), Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UBodyStateEstimatorComponent::StaticRegisterNativesUBodyStateEstimatorComponent()
	{
	}
	UClass* Z_Construct_UClass_UBodyStateEstimatorComponent_NoRegister()
	{
		return UBodyStateEstimatorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBodyStateEstimatorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUpdateSkeletonEstimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpdateSkeletonEstimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "BodyState" },
		{ "IncludePath", "BodyStateEstimatorComponent.h" },
		{ "ModuleRelativePath", "Public/BodyStateEstimatorComponent.h" },
		{ "ToolTip", "Offers an estimation event with a skeleton which will be applied to the merged bodystate.\nA good place to experiment with derived bodystate bones" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::NewProp_OnUpdateSkeletonEstimation_MetaData[] = {
		{ "Category", "BodyState Estimation Events" },
		{ "ModuleRelativePath", "Public/BodyStateEstimatorComponent.h" },
		{ "ToolTip", "Called when the skeleton should be updated before it propagates to all listeners" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::NewProp_OnUpdateSkeletonEstimation = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnUpdateSkeletonEstimation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UBodyStateEstimatorComponent, OnUpdateSkeletonEstimation), Z_Construct_UDelegateFunction_BodyState_BodyStateSkeletonSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::NewProp_OnUpdateSkeletonEstimation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::NewProp_OnUpdateSkeletonEstimation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::NewProp_OnUpdateSkeletonEstimation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBodyStateEstimatorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::ClassParams = {
		&UBodyStateEstimatorComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		nullptr, 0,
		Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBodyStateEstimatorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBodyStateEstimatorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBodyStateEstimatorComponent, 3877476416);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBodyStateEstimatorComponent(Z_Construct_UClass_UBodyStateEstimatorComponent, &UBodyStateEstimatorComponent::StaticClass, TEXT("/Script/BodyState"), TEXT("UBodyStateEstimatorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBodyStateEstimatorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif