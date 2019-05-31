// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BodyState/Public/Skeleton/BodyStateArm.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyStateArm() {}
// Cross Module References
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateFinger_NoRegister();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateFinger();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_BodyState();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateBone_NoRegister();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateHand_NoRegister();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateHand();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateHand_IndexFinger();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateHand_MiddleFinger();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateHand_PinkyFinger();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateHand_RingFinger();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateHand_ThumbFinger();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateArm_NoRegister();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateArm();
// End Cross Module References
	void UBodyStateFinger::StaticRegisterNativesUBodyStateFinger()
	{
	}
	UClass* Z_Construct_UClass_UBodyStateFinger_NoRegister()
	{
		return UBodyStateFinger::StaticClass();
	}
	struct Z_Construct_UClass_UBodyStateFinger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsExtended_MetaData[];
#endif
		static void NewProp_bIsExtended_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsExtended;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Distal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intermediate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Intermediate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Proximal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Proximal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Metacarpal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Metacarpal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBodyStateFinger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateFinger_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Skeleton/BodyStateArm.h" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
		{ "ToolTip", "Convenience BodyState wrapper around finger bones" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_bIsExtended_MetaData[] = {
		{ "Category", "BodyState Finger" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
#endif
	void Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_bIsExtended_SetBit(void* Obj)
	{
		((UBodyStateFinger*)Obj)->bIsExtended = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_bIsExtended = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsExtended", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBodyStateFinger), &Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_bIsExtended_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_bIsExtended_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_bIsExtended_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Distal_MetaData[] = {
		{ "Category", "BodyState Finger" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Distal = { UE4CodeGen_Private::EPropertyClass::Object, "Distal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UBodyStateFinger, Distal), Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Distal_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Distal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Intermediate_MetaData[] = {
		{ "Category", "BodyState Finger" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
		{ "ToolTip", "Note thumbs don't have this bone" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Intermediate = { UE4CodeGen_Private::EPropertyClass::Object, "Intermediate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UBodyStateFinger, Intermediate), Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Intermediate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Intermediate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Proximal_MetaData[] = {
		{ "Category", "BodyState Finger" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Proximal = { UE4CodeGen_Private::EPropertyClass::Object, "Proximal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UBodyStateFinger, Proximal), Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Proximal_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Proximal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Metacarpal_MetaData[] = {
		{ "Category", "BodyState Finger" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Metacarpal = { UE4CodeGen_Private::EPropertyClass::Object, "Metacarpal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UBodyStateFinger, Metacarpal), Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Metacarpal_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Metacarpal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBodyStateFinger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_bIsExtended,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Distal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Intermediate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Proximal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateFinger_Statics::NewProp_Metacarpal,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBodyStateFinger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBodyStateFinger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBodyStateFinger_Statics::ClassParams = {
		&UBodyStateFinger::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UBodyStateFinger_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UBodyStateFinger_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBodyStateFinger_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBodyStateFinger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBodyStateFinger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBodyStateFinger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBodyStateFinger, 3052892833);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBodyStateFinger(Z_Construct_UClass_UBodyStateFinger, &UBodyStateFinger::StaticClass, TEXT("/Script/BodyState"), TEXT("UBodyStateFinger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBodyStateFinger);
	void UBodyStateHand::StaticRegisterNativesUBodyStateHand()
	{
		UClass* Class = UBodyStateHand::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IndexFinger", &UBodyStateHand::execIndexFinger },
			{ "MiddleFinger", &UBodyStateHand::execMiddleFinger },
			{ "PinkyFinger", &UBodyStateHand::execPinkyFinger },
			{ "RingFinger", &UBodyStateHand::execRingFinger },
			{ "ThumbFinger", &UBodyStateHand::execThumbFinger },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBodyStateHand_IndexFinger_Statics
	{
		struct BodyStateHand_eventIndexFinger_Parms
		{
			UBodyStateFinger* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateHand_IndexFinger_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BodyStateHand_eventIndexFinger_Parms, ReturnValue), Z_Construct_UClass_UBodyStateFinger_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateHand_IndexFinger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateHand_IndexFinger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateHand_IndexFinger_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Hand" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateHand_IndexFinger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateHand, "IndexFinger", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(BodyStateHand_eventIndexFinger_Parms), Z_Construct_UFunction_UBodyStateHand_IndexFinger_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateHand_IndexFinger_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateHand_IndexFinger_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateHand_IndexFinger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateHand_IndexFinger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateHand_IndexFinger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateHand_MiddleFinger_Statics
	{
		struct BodyStateHand_eventMiddleFinger_Parms
		{
			UBodyStateFinger* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateHand_MiddleFinger_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BodyStateHand_eventMiddleFinger_Parms, ReturnValue), Z_Construct_UClass_UBodyStateFinger_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateHand_MiddleFinger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateHand_MiddleFinger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateHand_MiddleFinger_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Hand" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateHand_MiddleFinger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateHand, "MiddleFinger", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(BodyStateHand_eventMiddleFinger_Parms), Z_Construct_UFunction_UBodyStateHand_MiddleFinger_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateHand_MiddleFinger_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateHand_MiddleFinger_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateHand_MiddleFinger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateHand_MiddleFinger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateHand_MiddleFinger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateHand_PinkyFinger_Statics
	{
		struct BodyStateHand_eventPinkyFinger_Parms
		{
			UBodyStateFinger* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateHand_PinkyFinger_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BodyStateHand_eventPinkyFinger_Parms, ReturnValue), Z_Construct_UClass_UBodyStateFinger_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateHand_PinkyFinger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateHand_PinkyFinger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateHand_PinkyFinger_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Hand" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateHand_PinkyFinger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateHand, "PinkyFinger", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(BodyStateHand_eventPinkyFinger_Parms), Z_Construct_UFunction_UBodyStateHand_PinkyFinger_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateHand_PinkyFinger_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateHand_PinkyFinger_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateHand_PinkyFinger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateHand_PinkyFinger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateHand_PinkyFinger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateHand_RingFinger_Statics
	{
		struct BodyStateHand_eventRingFinger_Parms
		{
			UBodyStateFinger* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateHand_RingFinger_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BodyStateHand_eventRingFinger_Parms, ReturnValue), Z_Construct_UClass_UBodyStateFinger_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateHand_RingFinger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateHand_RingFinger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateHand_RingFinger_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Hand" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateHand_RingFinger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateHand, "RingFinger", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(BodyStateHand_eventRingFinger_Parms), Z_Construct_UFunction_UBodyStateHand_RingFinger_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateHand_RingFinger_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateHand_RingFinger_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateHand_RingFinger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateHand_RingFinger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateHand_RingFinger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateHand_ThumbFinger_Statics
	{
		struct BodyStateHand_eventThumbFinger_Parms
		{
			UBodyStateFinger* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateHand_ThumbFinger_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BodyStateHand_eventThumbFinger_Parms, ReturnValue), Z_Construct_UClass_UBodyStateFinger_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateHand_ThumbFinger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateHand_ThumbFinger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateHand_ThumbFinger_Statics::Function_MetaDataParams[] = {
		{ "Category", "BodyState Hand" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateHand_ThumbFinger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateHand, "ThumbFinger", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(BodyStateHand_eventThumbFinger_Parms), Z_Construct_UFunction_UBodyStateHand_ThumbFinger_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateHand_ThumbFinger_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateHand_ThumbFinger_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateHand_ThumbFinger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateHand_ThumbFinger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateHand_ThumbFinger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBodyStateHand_NoRegister()
	{
		return UBodyStateHand::StaticClass();
	}
	struct Z_Construct_UClass_UBodyStateHand_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Palm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Palm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wrist_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Wrist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fingers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Fingers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Fingers_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBodyStateHand_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBodyStateHand_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBodyStateHand_IndexFinger, "IndexFinger" }, // 481539891
		{ &Z_Construct_UFunction_UBodyStateHand_MiddleFinger, "MiddleFinger" }, // 418618982
		{ &Z_Construct_UFunction_UBodyStateHand_PinkyFinger, "PinkyFinger" }, // 1557066761
		{ &Z_Construct_UFunction_UBodyStateHand_RingFinger, "RingFinger" }, // 417773390
		{ &Z_Construct_UFunction_UBodyStateHand_ThumbFinger, "ThumbFinger" }, // 3256597674
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateHand_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Skeleton/BodyStateArm.h" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
		{ "ToolTip", "Convenience BodyState wrapper around bones relating to the hand" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Palm_MetaData[] = {
		{ "Category", "BodyState Hand" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Palm = { UE4CodeGen_Private::EPropertyClass::Object, "Palm", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UBodyStateHand, Palm), Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Palm_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Palm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Wrist_MetaData[] = {
		{ "Category", "BodyState Hand" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Wrist = { UE4CodeGen_Private::EPropertyClass::Object, "Wrist", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UBodyStateHand, Wrist), Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Wrist_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Wrist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Fingers_MetaData[] = {
		{ "Category", "BodyState Hand" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
		{ "ToolTip", "Order should be: Thumb->Pinky" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Fingers = { UE4CodeGen_Private::EPropertyClass::Array, "Fingers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UBodyStateHand, Fingers), METADATA_PARAMS(Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Fingers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Fingers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Fingers_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Fingers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UBodyStateFinger_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBodyStateHand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Palm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Wrist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Fingers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateHand_Statics::NewProp_Fingers_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBodyStateHand_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBodyStateHand>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBodyStateHand_Statics::ClassParams = {
		&UBodyStateHand::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UBodyStateHand_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UBodyStateHand_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBodyStateHand_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBodyStateHand_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBodyStateHand()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBodyStateHand_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBodyStateHand, 786067431);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBodyStateHand(Z_Construct_UClass_UBodyStateHand, &UBodyStateHand::StaticClass, TEXT("/Script/BodyState"), TEXT("UBodyStateHand"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBodyStateHand);
	void UBodyStateArm::StaticRegisterNativesUBodyStateArm()
	{
	}
	UClass* Z_Construct_UClass_UBodyStateArm_NoRegister()
	{
		return UBodyStateArm::StaticClass();
	}
	struct Z_Construct_UClass_UBodyStateArm_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpperArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowerArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LowerArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBodyStateArm_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateArm_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Skeleton/BodyStateArm.h" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateArm_Statics::NewProp_UpperArm_MetaData[] = {
		{ "Category", "BodyState Arm" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateArm_Statics::NewProp_UpperArm = { UE4CodeGen_Private::EPropertyClass::Object, "UpperArm", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UBodyStateArm, UpperArm), Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBodyStateArm_Statics::NewProp_UpperArm_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodyStateArm_Statics::NewProp_UpperArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateArm_Statics::NewProp_LowerArm_MetaData[] = {
		{ "Category", "BodyState Arm" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateArm_Statics::NewProp_LowerArm = { UE4CodeGen_Private::EPropertyClass::Object, "LowerArm", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UBodyStateArm, LowerArm), Z_Construct_UClass_UBodyStateBone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBodyStateArm_Statics::NewProp_LowerArm_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodyStateArm_Statics::NewProp_LowerArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateArm_Statics::NewProp_Hand_MetaData[] = {
		{ "Category", "BodyState Arm" },
		{ "ModuleRelativePath", "Public/Skeleton/BodyStateArm.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBodyStateArm_Statics::NewProp_Hand = { UE4CodeGen_Private::EPropertyClass::Object, "Hand", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UBodyStateArm, Hand), Z_Construct_UClass_UBodyStateHand_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBodyStateArm_Statics::NewProp_Hand_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBodyStateArm_Statics::NewProp_Hand_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBodyStateArm_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateArm_Statics::NewProp_UpperArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateArm_Statics::NewProp_LowerArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodyStateArm_Statics::NewProp_Hand,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBodyStateArm_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBodyStateArm>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBodyStateArm_Statics::ClassParams = {
		&UBodyStateArm::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UBodyStateArm_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UBodyStateArm_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBodyStateArm_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBodyStateArm_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBodyStateArm()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBodyStateArm_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBodyStateArm, 45593622);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBodyStateArm(Z_Construct_UClass_UBodyStateArm, &UBodyStateArm::StaticClass, TEXT("/Script/BodyState"), TEXT("UBodyStateArm"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBodyStateArm);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
