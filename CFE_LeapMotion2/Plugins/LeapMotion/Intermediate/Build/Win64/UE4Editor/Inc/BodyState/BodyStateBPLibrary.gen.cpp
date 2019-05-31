// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BodyState/Public/BodyStateBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyStateBPLibrary() {}
// Cross Module References
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateBPLibrary_NoRegister();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_BodyState();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateInputInterface_NoRegister();
	BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyStateDeviceConfig();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateSkeleton_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
// End Cross Module References
	void UBodyStateBPLibrary::StaticRegisterNativesUBodyStateBPLibrary()
	{
		UClass* Class = UBodyStateBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttachDevice", &UBodyStateBPLibrary::execAttachDevice },
			{ "DetachDevice", &UBodyStateBPLibrary::execDetachDevice },
			{ "SkeletonForDevice", &UBodyStateBPLibrary::execSkeletonForDevice },
			{ "TransformForBoneNamedInAnimInstance", &UBodyStateBPLibrary::execTransformForBoneNamedInAnimInstance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics
	{
		struct BodyStateBPLibrary_eventAttachDevice_Parms
		{
			FBodyStateDeviceConfig Configuration;
			TScriptInterface<IBodyStateInputInterface> InputCallbackDelegate;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_InputCallbackDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Configuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Configuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BodyStateBPLibrary_eventAttachDevice_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::NewProp_InputCallbackDelegate = { UE4CodeGen_Private::EPropertyClass::Interface, "InputCallbackDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(BodyStateBPLibrary_eventAttachDevice_Parms, InputCallbackDelegate), Z_Construct_UClass_UBodyStateInputInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::NewProp_Configuration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::NewProp_Configuration = { UE4CodeGen_Private::EPropertyClass::Struct, "Configuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BodyStateBPLibrary_eventAttachDevice_Parms, Configuration), Z_Construct_UScriptStruct_FBodyStateDeviceConfig, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::NewProp_Configuration_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::NewProp_Configuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::NewProp_InputCallbackDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::NewProp_Configuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Body State Input" },
		{ "ModuleRelativePath", "Public/BodyStateBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBPLibrary, "AttachDevice", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BodyStateBPLibrary_eventAttachDevice_Parms), Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics
	{
		struct BodyStateBPLibrary_eventDetachDevice_Parms
		{
			int32 DeviceID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeviceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BodyStateBPLibrary_eventDetachDevice_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BodyStateBPLibrary_eventDetachDevice_Parms), &Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::NewProp_DeviceID = { UE4CodeGen_Private::EPropertyClass::Int, "DeviceID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BodyStateBPLibrary_eventDetachDevice_Parms, DeviceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::NewProp_DeviceID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Body State Input" },
		{ "ModuleRelativePath", "Public/BodyStateBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBPLibrary, "DetachDevice", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(BodyStateBPLibrary_eventDetachDevice_Parms), Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics
	{
		struct BodyStateBPLibrary_eventSkeletonForDevice_Parms
		{
			UObject* WorldContextObject;
			int32 DeviceID;
			UBodyStateSkeleton* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeviceID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BodyStateBPLibrary_eventSkeletonForDevice_Parms, ReturnValue), Z_Construct_UClass_UBodyStateSkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::NewProp_DeviceID = { UE4CodeGen_Private::EPropertyClass::Int, "DeviceID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BodyStateBPLibrary_eventSkeletonForDevice_Parms, DeviceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BodyStateBPLibrary_eventSkeletonForDevice_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::NewProp_DeviceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Body State Input" },
		{ "CPP_Default_DeviceID", "0" },
		{ "ModuleRelativePath", "Public/BodyStateBPLibrary.h" },
		{ "ToolTip", "Obtain the UBodyStateSkeleton attached to device or 0 if you want the merged skeleton" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBPLibrary, "SkeletonForDevice", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(BodyStateBPLibrary_eventSkeletonForDevice_Parms), Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics
	{
		struct BodyStateBPLibrary_eventTransformForBoneNamedInAnimInstance_Parms
		{
			FName Bone;
			UAnimInstance* Instance;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Bone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BodyStateBPLibrary_eventTransformForBoneNamedInAnimInstance_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::NewProp_Instance = { UE4CodeGen_Private::EPropertyClass::Object, "Instance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BodyStateBPLibrary_eventTransformForBoneNamedInAnimInstance_Parms, Instance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::NewProp_Bone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::NewProp_Bone = { UE4CodeGen_Private::EPropertyClass::Name, "Bone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BodyStateBPLibrary_eventTransformForBoneNamedInAnimInstance_Parms, Bone), METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::NewProp_Bone_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::NewProp_Bone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::NewProp_Instance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::NewProp_Bone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Body State Input" },
		{ "ModuleRelativePath", "Public/BodyStateBPLibrary.h" },
		{ "ToolTip", "Convenience function for rigging" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateBPLibrary, "TransformForBoneNamedInAnimInstance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(BodyStateBPLibrary_eventTransformForBoneNamedInAnimInstance_Parms), Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBodyStateBPLibrary_NoRegister()
	{
		return UBodyStateBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UBodyStateBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBodyStateBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBodyStateBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBodyStateBPLibrary_AttachDevice, "AttachDevice" }, // 1009171436
		{ &Z_Construct_UFunction_UBodyStateBPLibrary_DetachDevice, "DetachDevice" }, // 143867543
		{ &Z_Construct_UFunction_UBodyStateBPLibrary_SkeletonForDevice, "SkeletonForDevice" }, // 1735689519
		{ &Z_Construct_UFunction_UBodyStateBPLibrary_TransformForBoneNamedInAnimInstance, "TransformForBoneNamedInAnimInstance" }, // 3003225773
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BodyStateBPLibrary.h" },
		{ "ModuleRelativePath", "Public/BodyStateBPLibrary.h" },
		{ "ToolTip", "* Extra functions useful for animation rigging in BP" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBodyStateBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBodyStateBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBodyStateBPLibrary_Statics::ClassParams = {
		&UBodyStateBPLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBodyStateBPLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBodyStateBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBodyStateBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBodyStateBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBodyStateBPLibrary, 1588027720);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBodyStateBPLibrary(Z_Construct_UClass_UBodyStateBPLibrary, &UBodyStateBPLibrary::StaticClass, TEXT("/Script/BodyState"), TEXT("UBodyStateBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBodyStateBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
