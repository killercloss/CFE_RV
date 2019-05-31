// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LeapMotion/Public/LeapBlueprintFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeapBlueprintFunctionLibrary() {}
// Cross Module References
	LEAPMOTION_API UClass* Z_Construct_UClass_ULeapBlueprintFunctionLibrary_NoRegister();
	LEAPMOTION_API UClass* Z_Construct_UClass_ULeapBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_LeapMotion();
	LEAPMOTION_API UFunction* Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions();
	LEAPMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FLeapOptions();
	LEAPMOTION_API UFunction* Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats();
	LEAPMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FLeapStats();
	LEAPMOTION_API UFunction* Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode();
	LEAPMOTION_API UEnum* Z_Construct_UEnum_LeapMotion_ELeapTrackingFidelity();
	LEAPMOTION_API UEnum* Z_Construct_UEnum_LeapMotion_ELeapMode();
	LEAPMOTION_API UFunction* Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions();
	LEAPMOTION_API UFunction* Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy();
	LEAPMOTION_API UEnum* Z_Construct_UEnum_LeapMotion_ELeapPolicyFlag();
// End Cross Module References
	void ULeapBlueprintFunctionLibrary::StaticRegisterNativesULeapBlueprintFunctionLibrary()
	{
		UClass* Class = ULeapBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLeapOptions", &ULeapBlueprintFunctionLibrary::execGetLeapOptions },
			{ "GetLeapStats", &ULeapBlueprintFunctionLibrary::execGetLeapStats },
			{ "SetLeapMode", &ULeapBlueprintFunctionLibrary::execSetLeapMode },
			{ "SetLeapOptions", &ULeapBlueprintFunctionLibrary::execSetLeapOptions },
			{ "SetLeapPolicy", &ULeapBlueprintFunctionLibrary::execSetLeapPolicy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions_Statics
	{
		struct LeapBlueprintFunctionLibrary_eventGetLeapOptions_Parms
		{
			FLeapOptions OutOptions;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutOptions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions_Statics::NewProp_OutOptions = { UE4CodeGen_Private::EPropertyClass::Struct, "OutOptions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventGetLeapOptions_Parms, OutOptions), Z_Construct_UScriptStruct_FLeapOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions_Statics::NewProp_OutOptions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Motion Functions" },
		{ "ModuleRelativePath", "Public/LeapBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Gets currently set global options" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapBlueprintFunctionLibrary, "GetLeapOptions", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(LeapBlueprintFunctionLibrary_eventGetLeapOptions_Parms), Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats_Statics
	{
		struct LeapBlueprintFunctionLibrary_eventGetLeapStats_Parms
		{
			FLeapStats OutStats;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutStats;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats_Statics::NewProp_OutStats = { UE4CodeGen_Private::EPropertyClass::Struct, "OutStats", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventGetLeapStats_Parms, OutStats), Z_Construct_UScriptStruct_FLeapStats, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats_Statics::NewProp_OutStats,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Motion Functions" },
		{ "ModuleRelativePath", "Public/LeapBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Gets Leap read only stats such as api version, frame lookup and device information" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapBlueprintFunctionLibrary, "GetLeapStats", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(LeapBlueprintFunctionLibrary_eventGetLeapStats_Parms), Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics
	{
		struct LeapBlueprintFunctionLibrary_eventSetLeapMode_Parms
		{
			TEnumAsByte<ELeapMode> Mode;
			TEnumAsByte<ELeapTrackingFidelity> Fidelity;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Fidelity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::NewProp_Fidelity = { UE4CodeGen_Private::EPropertyClass::Byte, "Fidelity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventSetLeapMode_Parms, Fidelity), Z_Construct_UEnum_LeapMotion_ELeapTrackingFidelity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::NewProp_Mode = { UE4CodeGen_Private::EPropertyClass::Byte, "Mode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventSetLeapMode_Parms, Mode), Z_Construct_UEnum_LeapMotion_ELeapMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::NewProp_Fidelity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::NewProp_Mode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Motion Functions" },
		{ "CPP_Default_Fidelity", "LEAP_NORMAL" },
		{ "ModuleRelativePath", "Public/LeapBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Set basic global leap tracking options" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapBlueprintFunctionLibrary, "SetLeapMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(LeapBlueprintFunctionLibrary_eventSetLeapMode_Parms), Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics
	{
		struct LeapBlueprintFunctionLibrary_eventSetLeapOptions_Parms
		{
			FLeapOptions Options;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::NewProp_Options = { UE4CodeGen_Private::EPropertyClass::Struct, "Options", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventSetLeapOptions_Parms, Options), Z_Construct_UScriptStruct_FLeapOptions, METADATA_PARAMS(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::NewProp_Options_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::NewProp_Options_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::NewProp_Options,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Motion Functions" },
		{ "ModuleRelativePath", "Public/LeapBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Set global leap options" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapBlueprintFunctionLibrary, "SetLeapOptions", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(LeapBlueprintFunctionLibrary_eventSetLeapOptions_Parms), Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics
	{
		struct LeapBlueprintFunctionLibrary_eventSetLeapPolicy_Parms
		{
			TEnumAsByte<ELeapPolicyFlag> Flag;
			bool Enable;
		};
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((LeapBlueprintFunctionLibrary_eventSetLeapPolicy_Parms*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::NewProp_Enable = { UE4CodeGen_Private::EPropertyClass::Bool, "Enable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LeapBlueprintFunctionLibrary_eventSetLeapPolicy_Parms), &Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::NewProp_Flag = { UE4CodeGen_Private::EPropertyClass::Byte, "Flag", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LeapBlueprintFunctionLibrary_eventSetLeapPolicy_Parms, Flag), Z_Construct_UEnum_LeapMotion_ELeapPolicyFlag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::NewProp_Enable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::NewProp_Flag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Leap Motion Functions" },
		{ "ModuleRelativePath", "Public/LeapBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Change leap policy" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeapBlueprintFunctionLibrary, "SetLeapPolicy", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(LeapBlueprintFunctionLibrary_eventSetLeapPolicy_Parms), Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULeapBlueprintFunctionLibrary_NoRegister()
	{
		return ULeapBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULeapBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULeapBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LeapMotion,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULeapBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapOptions, "GetLeapOptions" }, // 1257861101
		{ &Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_GetLeapStats, "GetLeapStats" }, // 1899801329
		{ &Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapMode, "SetLeapMode" }, // 4272586777
		{ &Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapOptions, "SetLeapOptions" }, // 350377063
		{ &Z_Construct_UFunction_ULeapBlueprintFunctionLibrary_SetLeapPolicy, "SetLeapPolicy" }, // 1202469132
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeapBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LeapBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/LeapBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Useful global blueprint functions for Leap Motion" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULeapBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeapBlueprintFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULeapBlueprintFunctionLibrary_Statics::ClassParams = {
		&ULeapBlueprintFunctionLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ULeapBlueprintFunctionLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULeapBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULeapBlueprintFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULeapBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULeapBlueprintFunctionLibrary, 1542230844);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULeapBlueprintFunctionLibrary(Z_Construct_UClass_ULeapBlueprintFunctionLibrary, &ULeapBlueprintFunctionLibrary::StaticClass, TEXT("/Script/LeapMotion"), TEXT("ULeapBlueprintFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULeapBlueprintFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
