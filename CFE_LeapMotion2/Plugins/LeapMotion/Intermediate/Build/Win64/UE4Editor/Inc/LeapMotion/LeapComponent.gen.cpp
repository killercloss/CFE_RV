// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LeapMotion/Public/LeapComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeapComponent() {}
// Cross Module References
	LEAPMOTION_API UFunction* Z_Construct_UDelegateFunction_LeapMotion_LeapImageEventSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_LeapMotion();
	LEAPMOTION_API UEnum* Z_Construct_UEnum_LeapMotion_ELeapImageType();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	LEAPMOTION_API UFunction* Z_Construct_UDelegateFunction_LeapMotion_LeapPolicySignature__DelegateSignature();
	LEAPMOTION_API UEnum* Z_Construct_UEnum_LeapMotion_ELeapPolicyFlag();
	LEAPMOTION_API UFunction* Z_Construct_UDelegateFunction_LeapMotion_LeapHandSignature__DelegateSignature();
	LEAPMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FLeapHandData();
	LEAPMOTION_API UFunction* Z_Construct_UDelegateFunction_LeapMotion_LeapFrameSignature__DelegateSignature();
	LEAPMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FLeapFrameData();
	LEAPMOTION_API UFunction* Z_Construct_UDelegateFunction_LeapMotion_LeapVisibilityBoolSignature__DelegateSignature();
	LEAPMOTION_API UFunction* Z_Construct_UDelegateFunction_LeapMotion_LeapDeviceSignature__DelegateSignature();
	LEAPMOTION_API UFunction* Z_Construct_UDelegateFunction_LeapMotion_LeapEventSignature__DelegateSignature();
	LEAPMOTION_API UClass* Z_Construct_UClass_ULeapComponent_NoRegister();
	LEAPMOTION_API UClass* Z_Construct_UClass_ULeapComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	LEAPMOTION_API UFunction* Z_Construct_UFunction_ULeapComponent_AreHandsVisible();
	LEAPMOTION_API UFunction* Z_Construct_UFunction_ULeapComponent_GetLatestFrameData();
	LEAPMOTION_API UEnum* Z_Construct_UEnum_LeapMotion_ELeapMode();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_LeapMotion_LeapImageEventSignature__DelegateSignature_Statics
	{
		struct _Script_LeapMotion_eventLeapImageEventSignature_Parms
		{
			UTexture2D* Texture;
			ELeapImageType ImageType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ImageType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ImageType_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_LeapMotion_LeapImageEventSignature__DelegateSignature_Statics::NewProp_ImageType = { UE4CodeGen_Private::EPropertyClass::Enum, "ImageType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_LeapMotion_eventLeapImageEventSignature_Parms, ImageType), Z_Construct_UEnum_LeapMotion_ELeapImageType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_LeapMotion_LeapImageEventSignature__DelegateSignature_Statics::NewProp_ImageType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_LeapMotion_LeapImageEventSignature__DelegateSignature_Statics::NewProp_Texture = { UE4CodeGen_Private::EPropertyClass::Object, "Texture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_LeapMotion_eventLeapImageEventSignature_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LeapMotion_LeapImageEventSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LeapMotion_LeapImageEventSignature__DelegateSignature_Statics::NewProp_ImageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LeapMotion_LeapImageEventSignature__DelegateSignature_Statics::NewProp_ImageType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LeapMotion_LeapImageEventSignature__DelegateSignature_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LeapMotion_LeapImageEventSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LeapMotion_LeapImageEventSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LeapMotion, "LeapImageEventSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_LeapMotion_eventLeapImageEventSignature_Parms), Z_Construct_UDelegateFunction_LeapMotion_LeapImageEventSignature__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_LeapMotion_LeapImageEventSignature__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LeapMotion_LeapImageEventSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_LeapMotion_LeapImageEventSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LeapMotion_LeapImageEventSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_LeapMotion_LeapImageEventSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_LeapMotion_LeapPolicySignature__DelegateSignature_Statics
	{
		struct _Script_LeapMotion_eventLeapPolicySignature_Parms
		{
			TArray<TEnumAsByte<ELeapPolicyFlag> > Flags;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Flags;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flags_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_LeapMotion_LeapPolicySignature__DelegateSignature_Statics::NewProp_Flags = { UE4CodeGen_Private::EPropertyClass::Array, "Flags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_LeapMotion_eventLeapPolicySignature_Parms, Flags), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_LeapMotion_LeapPolicySignature__DelegateSignature_Statics::NewProp_Flags_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "Flags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_LeapMotion_ELeapPolicyFlag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LeapMotion_LeapPolicySignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LeapMotion_LeapPolicySignature__DelegateSignature_Statics::NewProp_Flags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LeapMotion_LeapPolicySignature__DelegateSignature_Statics::NewProp_Flags_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LeapMotion_LeapPolicySignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LeapMotion_LeapPolicySignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LeapMotion, "LeapPolicySignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_LeapMotion_eventLeapPolicySignature_Parms), Z_Construct_UDelegateFunction_LeapMotion_LeapPolicySignature__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_LeapMotion_LeapPolicySignature__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LeapMotion_LeapPolicySignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_LeapMotion_LeapPolicySignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LeapMotion_LeapPolicySignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_LeapMotion_LeapPolicySignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_LeapMotion_LeapHandSignature__DelegateSignature_Statics
	{
		struct _Script_LeapMotion_eventLeapHandSignature_Parms
		{
			FLeapHandData Hand;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LeapMotion_LeapHandSignature__DelegateSignature_Statics::NewProp_Hand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LeapMotion_LeapHandSignature__DelegateSignature_Statics::NewProp_Hand = { UE4CodeGen_Private::EPropertyClass::Struct, "Hand", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(_Script_LeapMotion_eventLeapHandSignature_Parms, Hand), Z_Construct_UScriptStruct_FLeapHandData, METADATA_PARAMS(Z_Construct_UDelegateFunction_LeapMotion_LeapHandSignature__DelegateSignature_Statics::NewProp_Hand_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_LeapMotion_LeapHandSignature__DelegateSignature_Statics::NewProp_Hand_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LeapMotion_LeapHandSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LeapMotion_LeapHandSignature__DelegateSignature_Statics::NewProp_Hand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LeapMotion_LeapHandSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LeapMotion_LeapHandSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LeapMotion, "LeapHandSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_LeapMotion_eventLeapHandSignature_Parms), Z_Construct_UDelegateFunction_LeapMotion_LeapHandSignature__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_LeapMotion_LeapHandSignature__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LeapMotion_LeapHandSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_LeapMotion_LeapHandSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LeapMotion_LeapHandSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_LeapMotion_LeapHandSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_LeapMotion_LeapFrameSignature__DelegateSignature_Statics
	{
		struct _Script_LeapMotion_eventLeapFrameSignature_Parms
		{
			FLeapFrameData Frame;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frame_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Frame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LeapMotion_LeapFrameSignature__DelegateSignature_Statics::NewProp_Frame_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LeapMotion_LeapFrameSignature__DelegateSignature_Statics::NewProp_Frame = { UE4CodeGen_Private::EPropertyClass::Struct, "Frame", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(_Script_LeapMotion_eventLeapFrameSignature_Parms, Frame), Z_Construct_UScriptStruct_FLeapFrameData, METADATA_PARAMS(Z_Construct_UDelegateFunction_LeapMotion_LeapFrameSignature__DelegateSignature_Statics::NewProp_Frame_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_LeapMotion_LeapFrameSignature__DelegateSignature_Statics::NewProp_Frame_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LeapMotion_LeapFrameSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LeapMotion_LeapFrameSignature__DelegateSignature_Statics::NewProp_Frame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LeapMotion_LeapFrameSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LeapMotion_LeapFrameSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LeapMotion, "LeapFrameSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_LeapMotion_eventLeapFrameSignature_Parms), Z_Construct_UDelegateFunction_LeapMotion_LeapFrameSignature__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_LeapMotion_LeapFrameSignature__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LeapMotion_LeapFrameSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_LeapMotion_LeapFrameSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LeapMotion_LeapFrameSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_LeapMotion_LeapFrameSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_LeapMotion_LeapVisibilityBoolSignature__DelegateSignature_Statics
	{
		struct _Script_LeapMotion_eventLeapVisibilityBoolSignature_Parms
		{
			bool bIsVisible;
		};
		static void NewProp_bIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_LeapMotion_LeapVisibilityBoolSignature__DelegateSignature_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((_Script_LeapMotion_eventLeapVisibilityBoolSignature_Parms*)Obj)->bIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_LeapMotion_LeapVisibilityBoolSignature__DelegateSignature_Statics::NewProp_bIsVisible = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsVisible", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(_Script_LeapMotion_eventLeapVisibilityBoolSignature_Parms), &Z_Construct_UDelegateFunction_LeapMotion_LeapVisibilityBoolSignature__DelegateSignature_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LeapMotion_LeapVisibilityBoolSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LeapMotion_LeapVisibilityBoolSignature__DelegateSignature_Statics::NewProp_bIsVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LeapMotion_LeapVisibilityBoolSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LeapMotion_LeapVisibilityBoolSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LeapMotion, "LeapVisibilityBoolSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_LeapMotion_eventLeapVisibilityBoolSignature_Parms), Z_Construct_UDelegateFunction_LeapMotion_LeapVisibilityBoolSignature__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_LeapMotion_LeapVisibilityBoolSignature__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LeapMotion_LeapVisibilityBoolSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_LeapMotion_LeapVisibilityBoolSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LeapMotion_LeapVisibilityBoolSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_LeapMotion_LeapVisibilityBoolSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_LeapMotion_LeapDeviceSignature__DelegateSignature_Statics
	{
		struct _Script_LeapMotion_eventLeapDeviceSignature_Parms
		{
			FString DeviceName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_LeapMotion_LeapDeviceSignature__DelegateSignature_Statics::NewProp_DeviceName = { UE4CodeGen_Private::EPropertyClass::Str, "DeviceName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_LeapMotion_eventLeapDeviceSignature_Parms, DeviceName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LeapMotion_LeapDeviceSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LeapMotion_LeapDeviceSignature__DelegateSignature_Statics::NewProp_DeviceName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LeapMotion_LeapDeviceSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LeapMotion_LeapDeviceSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LeapMotion, "LeapDeviceSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_LeapMotion_eventLeapDeviceSignature_Parms), Z_Construct_UDelegateFunction_LeapMotion_LeapDeviceSignature__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_LeapMotion_LeapDeviceSignature__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LeapMotion_LeapDeviceSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_LeapMotion_LeapDeviceSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LeapMotion_LeapDeviceSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_LeapMotion_LeapDeviceSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_LeapMotion_LeapEventSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LeapMotion_LeapEventSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LeapMotion_LeapEventSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LeapMotion, "LeapEventSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LeapMotion_LeapEventSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_LeapMotion_LeapEventSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LeapMotion_LeapEventSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_LeapMotion_LeapEventSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void ULeapComponent::StaticRegisterNativesULeapComponent()
	{
		UClass* Class = ULeapComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AreHandsVisible", &ULeapComponent::execAreHandsVisible },
			{ "GetLatestFrameData", &ULeapComponent::execGetLatestFrameData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULeapComponent_AreHandsVisible_Statics
	{
		struct LeapComponent_eventAreHandsVisible_Parms
		{
			bool LeftIsVisible;
			bool RightIsVisible;
		};
		static void NewProp_RightIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RightIsVisible;
		static void NewProp_LeftIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LeftIsVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULeapComponent_AreHandsVisible_Statics::NewProp_RightIsVisible_SetBit(void* Obj)
	{
		((LeapComponent_eventAreHandsVisible_Parms*)Obj)->RightIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULeapComponent_AreHandsVisible_Statics::NewProp_RightIsVisible = { UE4CodeGen_Private::EPropertyClass::Bool, "RightIsVisible", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LeapComponent_eventAreHandsVisible_Parms), &Z_Construct_UFunction_ULeapComponent_AreHandsVisible_Statics::NewProp_RightIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULeapComponent_AreHandsVisible_Statics::NewProp_LeftIsVisible_SetBit(void* Obj)
	{
		((LeapComponent_eventAreHandsVisible_Parms*)Obj)->LeftIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULeapComponent_AreHandsVisible_Statics::NewProp_LeftIsVisible = { UE4CodeGen_Private::EPropertyClass::Bool, "LeftIsVisible", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LeapComponent_eventAreHandsVisible_Parms), &Z_Construct_UFunction_ULeapComponent_AreHandsVisible_Statics::NewProp_LeftIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapComponent_AreHandsVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_AreHandsVisible_Statics::NewProp_RightIsVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_AreHandsVisible_Statics::NewProp_LeftIsVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapComponent_AreHandsVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Functions" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Utility function to check if a hand is visible and tracked at this moment" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapComponent_AreHandsVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapComponent, "AreHandsVisible", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(LeapComponent_eventAreHandsVisible_Parms), Z_Construct_UFunction_ULeapComponent_AreHandsVisible_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_AreHandsVisible_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapComponent_AreHandsVisible_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_AreHandsVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapComponent_AreHandsVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapComponent_AreHandsVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapComponent_GetLatestFrameData_Statics
	{
		struct LeapComponent_eventGetLatestFrameData_Parms
		{
			FLeapFrameData OutData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapComponent_GetLatestFrameData_Statics::NewProp_OutData = { UE4CodeGen_Private::EPropertyClass::Struct, "OutData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(LeapComponent_eventGetLatestFrameData_Parms, OutData), Z_Construct_UScriptStruct_FLeapFrameData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapComponent_GetLatestFrameData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapComponent_GetLatestFrameData_Statics::NewProp_OutData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapComponent_GetLatestFrameData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Functions" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Polling function to get latest data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapComponent_GetLatestFrameData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapComponent, "GetLatestFrameData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(LeapComponent_eventGetLatestFrameData_Parms), Z_Construct_UFunction_ULeapComponent_GetLatestFrameData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_GetLatestFrameData_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapComponent_GetLatestFrameData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULeapComponent_GetLatestFrameData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapComponent_GetLatestFrameData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapComponent_GetLatestFrameData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULeapComponent_NoRegister()
	{
		return ULeapComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULeapComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TrackingMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLeapServiceDisconnected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeapServiceDisconnected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLeapServiceConnected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeapServiceConnected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnImageEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnImageEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLeapPoliciesUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeapPoliciesUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRightHandVisibilityChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRightHandVisibilityChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLeftHandVisibilityChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeftHandVisibilityChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHandEndTracking_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHandEndTracking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHandBeginTracking_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHandBeginTracking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHandUnpinched_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHandUnpinched;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHandPinched_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHandPinched;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHandReleased_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHandReleased;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHandGrabbed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHandGrabbed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLeapTrackingData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeapTrackingData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLeapDeviceDetatched_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeapDeviceDetatched;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLeapDeviceAttached_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeapDeviceAttached;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULeapComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LeapMotion,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULeapComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULeapComponent_AreHandsVisible, "AreHandsVisible" }, // 3423601775
		{ &Z_Construct_UFunction_ULeapComponent_GetLatestFrameData, "GetLatestFrameData" }, // 2635036027
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Input Controller" },
		{ "IncludePath", "LeapComponent.h" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapComponent_Statics::NewProp_TrackingMode_MetaData[] = {
		{ "Category", "Leap Properties" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Tracking mode optimization" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_TrackingMode = { UE4CodeGen_Private::EPropertyClass::Byte, "TrackingMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ULeapComponent, TrackingMode), Z_Construct_UEnum_LeapMotion_ELeapMode, METADATA_PARAMS(Z_Construct_UClass_ULeapComponent_Statics::NewProp_TrackingMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULeapComponent_Statics::NewProp_TrackingMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapServiceDisconnected_MetaData[] = {
		{ "Category", "Leap Events" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Event called if leap service connection gets lost. Track won't work if this event gets called." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapServiceDisconnected = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnLeapServiceDisconnected", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(ULeapComponent, OnLeapServiceDisconnected), Z_Construct_UDelegateFunction_LeapMotion_LeapEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapServiceDisconnected_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapServiceDisconnected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapServiceConnected_MetaData[] = {
		{ "Category", "Leap Events" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Event called when the leap service connects. Will likely be called before game begin play so some component won't receive this call." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapServiceConnected = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnLeapServiceConnected", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(ULeapComponent, OnLeapServiceConnected), Z_Construct_UDelegateFunction_LeapMotion_LeapEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapServiceConnected_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapServiceConnected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnImageEvent_MetaData[] = {
		{ "Category", "Leap Events" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Event called when a device image is ready. Requires setting image policy first" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnImageEvent = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnImageEvent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(ULeapComponent, OnImageEvent), Z_Construct_UDelegateFunction_LeapMotion_LeapImageEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnImageEvent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnImageEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapPoliciesUpdated_MetaData[] = {
		{ "Category", "Leap Events" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Event called when leap policies have changed" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapPoliciesUpdated = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnLeapPoliciesUpdated", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(ULeapComponent, OnLeapPoliciesUpdated), Z_Construct_UDelegateFunction_LeapMotion_LeapPolicySignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapPoliciesUpdated_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapPoliciesUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnRightHandVisibilityChanged_MetaData[] = {
		{ "Category", "Leap Events" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Event called when the right hand begins tracking" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnRightHandVisibilityChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnRightHandVisibilityChanged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(ULeapComponent, OnRightHandVisibilityChanged), Z_Construct_UDelegateFunction_LeapMotion_LeapVisibilityBoolSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnRightHandVisibilityChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnRightHandVisibilityChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeftHandVisibilityChanged_MetaData[] = {
		{ "Category", "Leap Events" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Event called when the left hand tracking changes" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeftHandVisibilityChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnLeftHandVisibilityChanged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(ULeapComponent, OnLeftHandVisibilityChanged), Z_Construct_UDelegateFunction_LeapMotion_LeapVisibilityBoolSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeftHandVisibilityChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeftHandVisibilityChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandEndTracking_MetaData[] = {
		{ "Category", "Leap Events" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Event called when a leap hand exits the field of view and stops tracking" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandEndTracking = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnHandEndTracking", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(ULeapComponent, OnHandEndTracking), Z_Construct_UDelegateFunction_LeapMotion_LeapHandSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandEndTracking_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandEndTracking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandBeginTracking_MetaData[] = {
		{ "Category", "Leap Events" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Event called when a leap hand enters the field of view and begins tracking" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandBeginTracking = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnHandBeginTracking", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(ULeapComponent, OnHandBeginTracking), Z_Construct_UDelegateFunction_LeapMotion_LeapHandSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandBeginTracking_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandBeginTracking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandUnpinched_MetaData[] = {
		{ "Category", "Leap Events" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Event called when a leap hand unpinch gesture is detected" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandUnpinched = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnHandUnpinched", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(ULeapComponent, OnHandUnpinched), Z_Construct_UDelegateFunction_LeapMotion_LeapHandSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandUnpinched_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandUnpinched_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandPinched_MetaData[] = {
		{ "Category", "Leap Events" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Event called when a leap hand pinch gesture is detected" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandPinched = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnHandPinched", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(ULeapComponent, OnHandPinched), Z_Construct_UDelegateFunction_LeapMotion_LeapHandSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandPinched_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandPinched_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandReleased_MetaData[] = {
		{ "Category", "Leap Events" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Event called when a leap hand release gesture is detected" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandReleased = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnHandReleased", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(ULeapComponent, OnHandReleased), Z_Construct_UDelegateFunction_LeapMotion_LeapHandSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandReleased_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandReleased_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandGrabbed_MetaData[] = {
		{ "Category", "Leap Events" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Event called when a leap hand grab gesture is detected" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandGrabbed = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnHandGrabbed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(ULeapComponent, OnHandGrabbed), Z_Construct_UDelegateFunction_LeapMotion_LeapHandSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandGrabbed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandGrabbed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapTrackingData_MetaData[] = {
		{ "Category", "Leap Events" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Event called when new tracking data is available, typically every game tick." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapTrackingData = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnLeapTrackingData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(ULeapComponent, OnLeapTrackingData), Z_Construct_UDelegateFunction_LeapMotion_LeapFrameSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapTrackingData_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapTrackingData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapDeviceDetatched_MetaData[] = {
		{ "Category", "Leap Events" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Called when a device disconnects from the leap service" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapDeviceDetatched = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnLeapDeviceDetatched", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(ULeapComponent, OnLeapDeviceDetatched), Z_Construct_UDelegateFunction_LeapMotion_LeapDeviceSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapDeviceDetatched_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapDeviceDetatched_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapDeviceAttached_MetaData[] = {
		{ "Category", "Leap Events" },
		{ "ModuleRelativePath", "Public/LeapComponent.h" },
		{ "ToolTip", "Called when a device connects to the leap service, this may happen before the game starts and you may not get the call" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapDeviceAttached = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnLeapDeviceAttached", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(ULeapComponent, OnLeapDeviceAttached), Z_Construct_UDelegateFunction_LeapMotion_LeapDeviceSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapDeviceAttached_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapDeviceAttached_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULeapComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_TrackingMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapServiceDisconnected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapServiceConnected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnImageEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapPoliciesUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnRightHandVisibilityChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeftHandVisibilityChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandEndTracking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandBeginTracking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandUnpinched,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandPinched,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandReleased,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnHandGrabbed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapTrackingData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapDeviceDetatched,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeapComponent_Statics::NewProp_OnLeapDeviceAttached,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULeapComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeapComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULeapComponent_Statics::ClassParams = {
		&ULeapComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ULeapComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ULeapComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ULeapComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULeapComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULeapComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULeapComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULeapComponent, 1017022882);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULeapComponent(Z_Construct_UClass_ULeapComponent, &ULeapComponent::StaticClass, TEXT("/Script/LeapMotion"), TEXT("ULeapComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULeapComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
