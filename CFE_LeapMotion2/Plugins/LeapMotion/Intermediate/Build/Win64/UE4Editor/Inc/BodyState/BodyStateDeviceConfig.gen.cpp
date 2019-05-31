// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BodyState/Public/BodyStateDeviceConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyStateDeviceConfig() {}
// Cross Module References
	BODYSTATE_API UEnum* Z_Construct_UEnum_BodyState_EBodyStateDeviceInputType();
	UPackage* Z_Construct_UPackage__Script_BodyState();
	BODYSTATE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyStateDeviceConfig();
// End Cross Module References
	static UEnum* EBodyStateDeviceInputType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BodyState_EBodyStateDeviceInputType, Z_Construct_UPackage__Script_BodyState(), TEXT("EBodyStateDeviceInputType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBodyStateDeviceInputType(EBodyStateDeviceInputType_StaticEnum, TEXT("/Script/BodyState"), TEXT("EBodyStateDeviceInputType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BodyState_EBodyStateDeviceInputType_CRC() { return 2976417985U; }
	UEnum* Z_Construct_UEnum_BodyState_EBodyStateDeviceInputType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BodyState();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBodyStateDeviceInputType"), 0, Get_Z_Construct_UEnum_BodyState_EBodyStateDeviceInputType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "INERTIAL_INPUT_TYPE", (int64)INERTIAL_INPUT_TYPE },
				{ "HMD_MOUNTED_INPUT_TYPE", (int64)HMD_MOUNTED_INPUT_TYPE },
				{ "EXTERNAL_REFERENCE_INPUT_TYPE", (int64)EXTERNAL_REFERENCE_INPUT_TYPE },
				{ "MIXED_INPUT_TYPE", (int64)MIXED_INPUT_TYPE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EXTERNAL_REFERENCE_INPUT_TYPE.ToolTip", "e.g. leap motion" },
				{ "HMD_MOUNTED_INPUT_TYPE.ToolTip", "e.g. IMU with direct no external references like a Myo" },
				{ "MIXED_INPUT_TYPE.ToolTip", "e.g. lighthouse" },
				{ "ModuleRelativePath", "Public/BodyStateDeviceConfig.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BodyState,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBodyStateDeviceInputType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EBodyStateDeviceInputType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FBodyStateDeviceConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BODYSTATE_API uint32 Get_Z_Construct_UScriptStruct_FBodyStateDeviceConfig_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBodyStateDeviceConfig, Z_Construct_UPackage__Script_BodyState(), TEXT("BodyStateDeviceConfig"), sizeof(FBodyStateDeviceConfig), Get_Z_Construct_UScriptStruct_FBodyStateDeviceConfig_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBodyStateDeviceConfig(FBodyStateDeviceConfig::StaticStruct, TEXT("/Script/BodyState"), TEXT("BodyStateDeviceConfig"), false, nullptr, nullptr);
static struct FScriptStruct_BodyState_StaticRegisterNativesFBodyStateDeviceConfig
{
	FScriptStruct_BodyState_StaticRegisterNativesFBodyStateDeviceConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BodyStateDeviceConfig")),new UScriptStruct::TCppStructOps<FBodyStateDeviceConfig>);
	}
} ScriptStruct_BodyState_StaticRegisterNativesFBodyStateDeviceConfig;
	struct Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackingTags;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrackingTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BodyStateDeviceConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBodyStateDeviceConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_TrackingTags_MetaData[] = {
		{ "ModuleRelativePath", "Public/BodyStateDeviceConfig.h" },
		{ "ToolTip", "Any specific tracking tags you may wish to expose to various systems, e.g. Finger Hand Tracking, Full Body Tracking" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_TrackingTags = { UE4CodeGen_Private::EPropertyClass::Array, "TrackingTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBodyStateDeviceConfig, TrackingTags), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_TrackingTags_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_TrackingTags_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_TrackingTags_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "TrackingTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_InputType_MetaData[] = {
		{ "ModuleRelativePath", "Public/BodyStateDeviceConfig.h" },
		{ "ToolTip", "Input type this device uses" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_InputType = { UE4CodeGen_Private::EPropertyClass::Byte, "InputType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBodyStateDeviceConfig, InputType), Z_Construct_UEnum_BodyState_EBodyStateDeviceInputType, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_InputType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_InputType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_DeviceName_MetaData[] = {
		{ "ModuleRelativePath", "Public/BodyStateDeviceConfig.h" },
		{ "ToolTip", "Name of the device generating this input" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_DeviceName = { UE4CodeGen_Private::EPropertyClass::Str, "DeviceName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBodyStateDeviceConfig, DeviceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_DeviceName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_DeviceName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_TrackingTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_TrackingTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_InputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::NewProp_DeviceName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
		nullptr,
		&NewStructOps,
		"BodyStateDeviceConfig",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FBodyStateDeviceConfig),
		alignof(FBodyStateDeviceConfig),
		Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBodyStateDeviceConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBodyStateDeviceConfig_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_BodyState();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BodyStateDeviceConfig"), sizeof(FBodyStateDeviceConfig), Get_Z_Construct_UScriptStruct_FBodyStateDeviceConfig_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBodyStateDeviceConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBodyStateDeviceConfig_CRC() { return 3545563112U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
