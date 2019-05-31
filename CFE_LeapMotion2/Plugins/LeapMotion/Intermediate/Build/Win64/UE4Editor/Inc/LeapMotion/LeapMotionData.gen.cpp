// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LeapMotion/Public/LeapMotionData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeapMotionData() {}
// Cross Module References
	LEAPMOTION_API UEnum* Z_Construct_UEnum_LeapMotion_ELeapServiceLogLevel();
	UPackage* Z_Construct_UPackage__Script_LeapMotion();
	LEAPMOTION_API UEnum* Z_Construct_UEnum_LeapMotion_ELeapPolicyFlag();
	LEAPMOTION_API UEnum* Z_Construct_UEnum_LeapMotion_ELeapTrackingFidelity();
	LEAPMOTION_API UEnum* Z_Construct_UEnum_LeapMotion_ELeapImageType();
	LEAPMOTION_API UEnum* Z_Construct_UEnum_LeapMotion_ELeapMode();
	LEAPMOTION_API UEnum* Z_Construct_UEnum_LeapMotion_EHandType();
	LEAPMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FLeapFrameData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	LEAPMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FLeapHandData();
	LEAPMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FLeapDigitData();
	LEAPMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FLeapPalmData();
	LEAPMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FLeapBoneData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	LEAPMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FLeapOptions();
	LEAPMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FLeapStats();
	LEAPMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FLeapDevice();
// End Cross Module References
	static UEnum* ELeapServiceLogLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LeapMotion_ELeapServiceLogLevel, Z_Construct_UPackage__Script_LeapMotion(), TEXT("ELeapServiceLogLevel"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELeapServiceLogLevel(ELeapServiceLogLevel_StaticEnum, TEXT("/Script/LeapMotion"), TEXT("ELeapServiceLogLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LeapMotion_ELeapServiceLogLevel_CRC() { return 3802042915U; }
	UEnum* Z_Construct_UEnum_LeapMotion_ELeapServiceLogLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LeapMotion();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELeapServiceLogLevel"), 0, Get_Z_Construct_UEnum_LeapMotion_ELeapServiceLogLevel_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "LEAP_LOG_NONE", (int64)LEAP_LOG_NONE },
				{ "LEAP_LOG_ERROR", (int64)LEAP_LOG_ERROR },
				{ "LEAP_LOG_WARNING", (int64)LEAP_LOG_WARNING },
				{ "LEAP_LOG_INFO", (int64)LEAP_LOG_INFO },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/LeapMotionData.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LeapMotion,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ELeapServiceLogLevel",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ELeapServiceLogLevel",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELeapPolicyFlag_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LeapMotion_ELeapPolicyFlag, Z_Construct_UPackage__Script_LeapMotion(), TEXT("ELeapPolicyFlag"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELeapPolicyFlag(ELeapPolicyFlag_StaticEnum, TEXT("/Script/LeapMotion"), TEXT("ELeapPolicyFlag"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LeapMotion_ELeapPolicyFlag_CRC() { return 644503479U; }
	UEnum* Z_Construct_UEnum_LeapMotion_ELeapPolicyFlag()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LeapMotion();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELeapPolicyFlag"), 0, Get_Z_Construct_UEnum_LeapMotion_ELeapPolicyFlag_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "LEAP_POLICY_BACKGROUND_FRAMES", (int64)LEAP_POLICY_BACKGROUND_FRAMES },
				{ "LEAP_POLICY_IMAGES", (int64)LEAP_POLICY_IMAGES },
				{ "LEAP_POLICY_OPTIMIZE_HMD", (int64)LEAP_POLICY_OPTIMIZE_HMD },
				{ "LEAP_POLICY_ALLOW_PAUSE_RESUME", (int64)LEAP_POLICY_ALLOW_PAUSE_RESUME },
				{ "LEAP_POLICY_MAP_POINTS", (int64)LEAP_POLICY_MAP_POINTS },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "LEAP_POLICY_ALLOW_PAUSE_RESUME.ToolTip", "The policy specifying whether to optimize tracking for head-mounted device." },
				{ "LEAP_POLICY_IMAGES.ToolTip", "The policy allowing an application to receive frames in the background." },
				{ "LEAP_POLICY_MAP_POINTS.ToolTip", "The policy allowing an application to pause or resume service tracking" },
				{ "LEAP_POLICY_OPTIMIZE_HMD.ToolTip", "The policy specifying whether to automatically stream images from the device." },
				{ "ModuleRelativePath", "Public/LeapMotionData.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LeapMotion,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ELeapPolicyFlag",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ELeapPolicyFlag",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELeapTrackingFidelity_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LeapMotion_ELeapTrackingFidelity, Z_Construct_UPackage__Script_LeapMotion(), TEXT("ELeapTrackingFidelity"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELeapTrackingFidelity(ELeapTrackingFidelity_StaticEnum, TEXT("/Script/LeapMotion"), TEXT("ELeapTrackingFidelity"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LeapMotion_ELeapTrackingFidelity_CRC() { return 3054337170U; }
	UEnum* Z_Construct_UEnum_LeapMotion_ELeapTrackingFidelity()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LeapMotion();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELeapTrackingFidelity"), 0, Get_Z_Construct_UEnum_LeapMotion_ELeapTrackingFidelity_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "LEAP_CUSTOM", (int64)LEAP_CUSTOM },
				{ "LEAP_LOW_LATENCY", (int64)LEAP_LOW_LATENCY },
				{ "LEAP_NORMAL", (int64)LEAP_NORMAL },
				{ "LEAP_SMOOTH", (int64)LEAP_SMOOTH },
				{ "LEAP_WIRELESS", (int64)LEAP_WIRELESS },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/LeapMotionData.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LeapMotion,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ELeapTrackingFidelity",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ELeapTrackingFidelity",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELeapImageType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LeapMotion_ELeapImageType, Z_Construct_UPackage__Script_LeapMotion(), TEXT("ELeapImageType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELeapImageType(ELeapImageType_StaticEnum, TEXT("/Script/LeapMotion"), TEXT("ELeapImageType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LeapMotion_ELeapImageType_CRC() { return 4245087671U; }
	UEnum* Z_Construct_UEnum_LeapMotion_ELeapImageType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LeapMotion();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELeapImageType"), 0, Get_Z_Construct_UEnum_LeapMotion_ELeapImageType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELeapImageType::LEAP_IMAGE_LEFT", (int64)ELeapImageType::LEAP_IMAGE_LEFT },
				{ "ELeapImageType::LEAP_IMAGE_RIGHT", (int64)ELeapImageType::LEAP_IMAGE_RIGHT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/LeapMotionData.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LeapMotion,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ELeapImageType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ELeapImageType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELeapMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LeapMotion_ELeapMode, Z_Construct_UPackage__Script_LeapMotion(), TEXT("ELeapMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELeapMode(ELeapMode_StaticEnum, TEXT("/Script/LeapMotion"), TEXT("ELeapMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LeapMotion_ELeapMode_CRC() { return 931831363U; }
	UEnum* Z_Construct_UEnum_LeapMotion_ELeapMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LeapMotion();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELeapMode"), 0, Get_Z_Construct_UEnum_LeapMotion_ELeapMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "LEAP_MODE_VR", (int64)LEAP_MODE_VR },
				{ "LEAP_MODE_DESKTOP", (int64)LEAP_MODE_DESKTOP },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/LeapMotionData.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LeapMotion,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ELeapMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ELeapMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EHandType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LeapMotion_EHandType, Z_Construct_UPackage__Script_LeapMotion(), TEXT("EHandType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHandType(EHandType_StaticEnum, TEXT("/Script/LeapMotion"), TEXT("EHandType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LeapMotion_EHandType_CRC() { return 1052564331U; }
	UEnum* Z_Construct_UEnum_LeapMotion_EHandType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LeapMotion();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHandType"), 0, Get_Z_Construct_UEnum_LeapMotion_EHandType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "LEAP_HAND_LEFT", (int64)LEAP_HAND_LEFT },
				{ "LEAP_HAND_RIGHT", (int64)LEAP_HAND_RIGHT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/LeapMotionData.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LeapMotion,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EHandType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EHandType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FLeapFrameData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEAPMOTION_API uint32 Get_Z_Construct_UScriptStruct_FLeapFrameData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeapFrameData, Z_Construct_UPackage__Script_LeapMotion(), TEXT("LeapFrameData"), sizeof(FLeapFrameData), Get_Z_Construct_UScriptStruct_FLeapFrameData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLeapFrameData(FLeapFrameData::StaticStruct, TEXT("/Script/LeapMotion"), TEXT("LeapFrameData"), false, nullptr, nullptr);
static struct FScriptStruct_LeapMotion_StaticRegisterNativesFLeapFrameData
{
	FScriptStruct_LeapMotion_StaticRegisterNativesFLeapFrameData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LeapFrameData")),new UScriptStruct::TCppStructOps<FLeapFrameData>);
	}
} ScriptStruct_LeapMotion_StaticRegisterNativesFLeapFrameData;
	struct Z_Construct_UScriptStruct_FLeapFrameData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinalRotationAdjustment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FinalRotationAdjustment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeStamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_TimeStamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandVisible_MetaData[];
#endif
		static void NewProp_RightHandVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RightHandVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandVisible_MetaData[];
#endif
		static void NewProp_LeftHandVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LeftHandVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FrameId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hands_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Hands;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hands_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FrameRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfHandsVisible_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfHandsVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapFrameData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeapFrameData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_FinalRotationAdjustment_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_FinalRotationAdjustment = { UE4CodeGen_Private::EPropertyClass::Struct, "FinalRotationAdjustment", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLeapFrameData, FinalRotationAdjustment), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_FinalRotationAdjustment_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_FinalRotationAdjustment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_TimeStamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
		{ "ToolTip", "int64 not supported by blueprint, so this will only be accessible inside c++" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_TimeStamp = { UE4CodeGen_Private::EPropertyClass::Int64, "TimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLeapFrameData, TimeStamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_TimeStamp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_TimeStamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_RightHandVisible_MetaData[] = {
		{ "Category", "Leap Motion Data" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_RightHandVisible_SetBit(void* Obj)
	{
		((FLeapFrameData*)Obj)->RightHandVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_RightHandVisible = { UE4CodeGen_Private::EPropertyClass::Bool, "RightHandVisible", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FLeapFrameData), &Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_RightHandVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_RightHandVisible_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_RightHandVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_LeftHandVisible_MetaData[] = {
		{ "Category", "Leap Motion Data" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_LeftHandVisible_SetBit(void* Obj)
	{
		((FLeapFrameData*)Obj)->LeftHandVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_LeftHandVisible = { UE4CodeGen_Private::EPropertyClass::Bool, "LeftHandVisible", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FLeapFrameData), &Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_LeftHandVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_LeftHandVisible_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_LeftHandVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_FrameId_MetaData[] = {
		{ "Category", "Leap Motion Data" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_FrameId = { UE4CodeGen_Private::EPropertyClass::Int, "FrameId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FLeapFrameData, FrameId), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_FrameId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_FrameId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_Hands_MetaData[] = {
		{ "Category", "Leap Motion Data" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_Hands = { UE4CodeGen_Private::EPropertyClass::Array, "Hands", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FLeapFrameData, Hands), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_Hands_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_Hands_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_Hands_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Hands", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FLeapHandData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Category", "Leap Motion Data" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_FrameRate = { UE4CodeGen_Private::EPropertyClass::Int, "FrameRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FLeapFrameData, FrameRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_FrameRate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_FrameRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_NumberOfHandsVisible_MetaData[] = {
		{ "Category", "Leap Motion Data" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_NumberOfHandsVisible = { UE4CodeGen_Private::EPropertyClass::Int, "NumberOfHandsVisible", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FLeapFrameData, NumberOfHandsVisible), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_NumberOfHandsVisible_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_NumberOfHandsVisible_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeapFrameData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_FinalRotationAdjustment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_TimeStamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_RightHandVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_LeftHandVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_FrameId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_Hands,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_Hands_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_FrameRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapFrameData_Statics::NewProp_NumberOfHandsVisible,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeapFrameData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LeapMotion,
		nullptr,
		&NewStructOps,
		"LeapFrameData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FLeapFrameData),
		alignof(FLeapFrameData),
		Z_Construct_UScriptStruct_FLeapFrameData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapFrameData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapFrameData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapFrameData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLeapFrameData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLeapFrameData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LeapMotion();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LeapFrameData"), sizeof(FLeapFrameData), Get_Z_Construct_UScriptStruct_FLeapFrameData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLeapFrameData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLeapFrameData_CRC() { return 2985237859U; }
class UScriptStruct* FLeapHandData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEAPMOTION_API uint32 Get_Z_Construct_UScriptStruct_FLeapHandData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeapHandData, Z_Construct_UPackage__Script_LeapMotion(), TEXT("LeapHandData"), sizeof(FLeapHandData), Get_Z_Construct_UScriptStruct_FLeapHandData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLeapHandData(FLeapHandData::StaticStruct, TEXT("/Script/LeapMotion"), TEXT("LeapHandData"), false, nullptr, nullptr);
static struct FScriptStruct_LeapMotion_StaticRegisterNativesFLeapHandData
{
	FScriptStruct_LeapMotion_StaticRegisterNativesFLeapHandData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LeapHandData")),new UScriptStruct::TCppStructOps<FLeapHandData>);
	}
} ScriptStruct_LeapMotion_StaticRegisterNativesFLeapHandData;
	struct Z_Construct_UScriptStruct_FLeapHandData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VisibleTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thumb_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Thumb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ring_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Ring;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pinky_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pinky;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinchStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PinchStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinchDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PinchDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Palm_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Palm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Middle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Middle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HandType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrabStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GrabStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrabAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GrabAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Flags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Digits_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Digits;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Digits_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Confidence_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Confidence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Arm_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Arm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapHandData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLeapHandData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeapHandData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_VisibleTime_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_VisibleTime = { UE4CodeGen_Private::EPropertyClass::Float, "VisibleTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FLeapHandData, VisibleTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_VisibleTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_VisibleTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Id = { UE4CodeGen_Private::EPropertyClass::Int, "Id", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FLeapHandData, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Id_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Thumb_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Thumb = { UE4CodeGen_Private::EPropertyClass::Struct, "Thumb", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FLeapHandData, Thumb), Z_Construct_UScriptStruct_FLeapDigitData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Thumb_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Thumb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Ring_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Ring = { UE4CodeGen_Private::EPropertyClass::Struct, "Ring", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FLeapHandData, Ring), Z_Construct_UScriptStruct_FLeapDigitData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Ring_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Ring_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Pinky_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Pinky = { UE4CodeGen_Private::EPropertyClass::Struct, "Pinky", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FLeapHandData, Pinky), Z_Construct_UScriptStruct_FLeapDigitData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Pinky_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Pinky_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_PinchStrength_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_PinchStrength = { UE4CodeGen_Private::EPropertyClass::Float, "PinchStrength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FLeapHandData, PinchStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_PinchStrength_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_PinchStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_PinchDistance_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_PinchDistance = { UE4CodeGen_Private::EPropertyClass::Float, "PinchDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FLeapHandData, PinchDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_PinchDistance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_PinchDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Palm_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Palm = { UE4CodeGen_Private::EPropertyClass::Struct, "Palm", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FLeapHandData, Palm), Z_Construct_UScriptStruct_FLeapPalmData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Palm_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Palm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Middle_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Middle = { UE4CodeGen_Private::EPropertyClass::Struct, "Middle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FLeapHandData, Middle), Z_Construct_UScriptStruct_FLeapDigitData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Middle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Middle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Struct, "Index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FLeapHandData, Index), Z_Construct_UScriptStruct_FLeapDigitData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Index_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_HandType_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_HandType = { UE4CodeGen_Private::EPropertyClass::Byte, "HandType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FLeapHandData, HandType), Z_Construct_UEnum_LeapMotion_EHandType, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_HandType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_HandType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_GrabStrength_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_GrabStrength = { UE4CodeGen_Private::EPropertyClass::Float, "GrabStrength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FLeapHandData, GrabStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_GrabStrength_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_GrabStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_GrabAngle_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_GrabAngle = { UE4CodeGen_Private::EPropertyClass::Float, "GrabAngle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FLeapHandData, GrabAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_GrabAngle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_GrabAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Flags_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Flags = { UE4CodeGen_Private::EPropertyClass::Int, "Flags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FLeapHandData, Flags), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Flags_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Flags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Digits_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Digits = { UE4CodeGen_Private::EPropertyClass::Array, "Digits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FLeapHandData, Digits), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Digits_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Digits_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Digits_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Digits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FLeapDigitData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Confidence_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Confidence = { UE4CodeGen_Private::EPropertyClass::Float, "Confidence", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FLeapHandData, Confidence), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Confidence_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Confidence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Arm_MetaData[] = {
		{ "Category", "Leap Hand Data" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Arm = { UE4CodeGen_Private::EPropertyClass::Struct, "Arm", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FLeapHandData, Arm), Z_Construct_UScriptStruct_FLeapBoneData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Arm_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Arm_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeapHandData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_VisibleTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Thumb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Ring,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Pinky,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_PinchStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_PinchDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Palm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Middle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_HandType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_GrabStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_GrabAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Flags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Digits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Digits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Confidence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapHandData_Statics::NewProp_Arm,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeapHandData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LeapMotion,
		nullptr,
		&NewStructOps,
		"LeapHandData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FLeapHandData),
		alignof(FLeapHandData),
		Z_Construct_UScriptStruct_FLeapHandData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapHandData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapHandData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapHandData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLeapHandData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLeapHandData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LeapMotion();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LeapHandData"), sizeof(FLeapHandData), Get_Z_Construct_UScriptStruct_FLeapHandData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLeapHandData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLeapHandData_CRC() { return 1443229340U; }
class UScriptStruct* FLeapDigitData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEAPMOTION_API uint32 Get_Z_Construct_UScriptStruct_FLeapDigitData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeapDigitData, Z_Construct_UPackage__Script_LeapMotion(), TEXT("LeapDigitData"), sizeof(FLeapDigitData), Get_Z_Construct_UScriptStruct_FLeapDigitData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLeapDigitData(FLeapDigitData::StaticStruct, TEXT("/Script/LeapMotion"), TEXT("LeapDigitData"), false, nullptr, nullptr);
static struct FScriptStruct_LeapMotion_StaticRegisterNativesFLeapDigitData
{
	FScriptStruct_LeapMotion_StaticRegisterNativesFLeapDigitData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LeapDigitData")),new UScriptStruct::TCppStructOps<FLeapDigitData>);
	}
} ScriptStruct_LeapMotion_StaticRegisterNativesFLeapDigitData;
	struct Z_Construct_UScriptStruct_FLeapDigitData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Proximal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Proximal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Metacarpal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Metacarpal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsExtended_MetaData[];
#endif
		static void NewProp_IsExtended_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsExtended;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intermediate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Intermediate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FingerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FingerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Distal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bones;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bones_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapDigitData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeapDigitData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Proximal_MetaData[] = {
		{ "Category", "Leap Digit Data" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Proximal = { UE4CodeGen_Private::EPropertyClass::Struct, "Proximal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FLeapDigitData, Proximal), Z_Construct_UScriptStruct_FLeapBoneData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Proximal_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Proximal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Metacarpal_MetaData[] = {
		{ "Category", "Leap Digit Data" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Metacarpal = { UE4CodeGen_Private::EPropertyClass::Struct, "Metacarpal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FLeapDigitData, Metacarpal), Z_Construct_UScriptStruct_FLeapBoneData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Metacarpal_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Metacarpal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_IsExtended_MetaData[] = {
		{ "Category", "Leap Digit Data" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_IsExtended_SetBit(void* Obj)
	{
		((FLeapDigitData*)Obj)->IsExtended = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_IsExtended = { UE4CodeGen_Private::EPropertyClass::Bool, "IsExtended", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FLeapDigitData), &Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_IsExtended_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_IsExtended_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_IsExtended_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Intermediate_MetaData[] = {
		{ "Category", "Leap Digit Data" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Intermediate = { UE4CodeGen_Private::EPropertyClass::Struct, "Intermediate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FLeapDigitData, Intermediate), Z_Construct_UScriptStruct_FLeapBoneData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Intermediate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Intermediate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_FingerId_MetaData[] = {
		{ "Category", "Leap Digit Data" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_FingerId = { UE4CodeGen_Private::EPropertyClass::Int, "FingerId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FLeapDigitData, FingerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_FingerId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_FingerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Distal_MetaData[] = {
		{ "Category", "Leap Digit Data" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Distal = { UE4CodeGen_Private::EPropertyClass::Struct, "Distal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FLeapDigitData, Distal), Z_Construct_UScriptStruct_FLeapBoneData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Distal_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Distal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Bones_MetaData[] = {
		{ "Category", "Leap Digit Data" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Bones = { UE4CodeGen_Private::EPropertyClass::Array, "Bones", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FLeapDigitData, Bones), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Bones_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Bones_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Bones_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Bones", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FLeapBoneData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeapDigitData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Proximal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Metacarpal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_IsExtended,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Intermediate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_FingerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Distal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Bones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDigitData_Statics::NewProp_Bones_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeapDigitData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LeapMotion,
		nullptr,
		&NewStructOps,
		"LeapDigitData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FLeapDigitData),
		alignof(FLeapDigitData),
		Z_Construct_UScriptStruct_FLeapDigitData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapDigitData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapDigitData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapDigitData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLeapDigitData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLeapDigitData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LeapMotion();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LeapDigitData"), sizeof(FLeapDigitData), Get_Z_Construct_UScriptStruct_FLeapDigitData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLeapDigitData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLeapDigitData_CRC() { return 144032265U; }
class UScriptStruct* FLeapPalmData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEAPMOTION_API uint32 Get_Z_Construct_UScriptStruct_FLeapPalmData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeapPalmData, Z_Construct_UPackage__Script_LeapMotion(), TEXT("LeapPalmData"), sizeof(FLeapPalmData), Get_Z_Construct_UScriptStruct_FLeapPalmData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLeapPalmData(FLeapPalmData::StaticStruct, TEXT("/Script/LeapMotion"), TEXT("LeapPalmData"), false, nullptr, nullptr);
static struct FScriptStruct_LeapMotion_StaticRegisterNativesFLeapPalmData
{
	FScriptStruct_LeapMotion_StaticRegisterNativesFLeapPalmData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LeapPalmData")),new UScriptStruct::TCppStructOps<FLeapPalmData>);
	}
} ScriptStruct_LeapMotion_StaticRegisterNativesFLeapPalmData;
	struct Z_Construct_UScriptStruct_FLeapPalmData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StabilizedPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StabilizedPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapPalmData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeapPalmData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "Leap Palm Data" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Width = { UE4CodeGen_Private::EPropertyClass::Float, "Width", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FLeapPalmData, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Width_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "Leap Palm Data" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Velocity = { UE4CodeGen_Private::EPropertyClass::Struct, "Velocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FLeapPalmData, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Velocity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_StabilizedPosition_MetaData[] = {
		{ "Category", "Leap Palm Data" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_StabilizedPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "StabilizedPosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FLeapPalmData, StabilizedPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_StabilizedPosition_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_StabilizedPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Leap Palm Data" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Position = { UE4CodeGen_Private::EPropertyClass::Struct, "Position", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FLeapPalmData, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Position_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Orientation_MetaData[] = {
		{ "Category", "Leap Palm Data" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Orientation = { UE4CodeGen_Private::EPropertyClass::Struct, "Orientation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FLeapPalmData, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Orientation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Orientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "Leap Palm Data" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Normal = { UE4CodeGen_Private::EPropertyClass::Struct, "Normal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FLeapPalmData, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Normal_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Leap Palm Data" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Direction = { UE4CodeGen_Private::EPropertyClass::Struct, "Direction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FLeapPalmData, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Direction_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Direction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeapPalmData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_StabilizedPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Orientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapPalmData_Statics::NewProp_Direction,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeapPalmData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LeapMotion,
		nullptr,
		&NewStructOps,
		"LeapPalmData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FLeapPalmData),
		alignof(FLeapPalmData),
		Z_Construct_UScriptStruct_FLeapPalmData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapPalmData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapPalmData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapPalmData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLeapPalmData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLeapPalmData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LeapMotion();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LeapPalmData"), sizeof(FLeapPalmData), Get_Z_Construct_UScriptStruct_FLeapPalmData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLeapPalmData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLeapPalmData_CRC() { return 1338221856U; }
class UScriptStruct* FLeapBoneData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEAPMOTION_API uint32 Get_Z_Construct_UScriptStruct_FLeapBoneData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeapBoneData, Z_Construct_UPackage__Script_LeapMotion(), TEXT("LeapBoneData"), sizeof(FLeapBoneData), Get_Z_Construct_UScriptStruct_FLeapBoneData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLeapBoneData(FLeapBoneData::StaticStruct, TEXT("/Script/LeapMotion"), TEXT("LeapBoneData"), false, nullptr, nullptr);
static struct FScriptStruct_LeapMotion_StaticRegisterNativesFLeapBoneData
{
	FScriptStruct_LeapMotion_StaticRegisterNativesFLeapBoneData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LeapBoneData")),new UScriptStruct::TCppStructOps<FLeapBoneData>);
	}
} ScriptStruct_LeapMotion_StaticRegisterNativesFLeapBoneData;
	struct Z_Construct_UScriptStruct_FLeapBoneData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextJoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NextJoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrevJoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrevJoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapBoneData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeapBoneData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "Leap Bone Data" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_Width = { UE4CodeGen_Private::EPropertyClass::Float, "Width", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FLeapBoneData, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_Width_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Leap Bone Data" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FLeapBoneData, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_Rotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_NextJoint_MetaData[] = {
		{ "Category", "Leap Bone Data" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_NextJoint = { UE4CodeGen_Private::EPropertyClass::Struct, "NextJoint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FLeapBoneData, NextJoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_NextJoint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_NextJoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_PrevJoint_MetaData[] = {
		{ "Category", "Leap Bone Data" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_PrevJoint = { UE4CodeGen_Private::EPropertyClass::Struct, "PrevJoint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FLeapBoneData, PrevJoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_PrevJoint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_PrevJoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeapBoneData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_NextJoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapBoneData_Statics::NewProp_PrevJoint,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeapBoneData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LeapMotion,
		nullptr,
		&NewStructOps,
		"LeapBoneData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FLeapBoneData),
		alignof(FLeapBoneData),
		Z_Construct_UScriptStruct_FLeapBoneData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapBoneData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapBoneData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapBoneData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLeapBoneData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLeapBoneData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LeapMotion();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LeapBoneData"), sizeof(FLeapBoneData), Get_Z_Construct_UScriptStruct_FLeapBoneData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLeapBoneData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLeapBoneData_CRC() { return 1346951538U; }
class UScriptStruct* FLeapOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEAPMOTION_API uint32 Get_Z_Construct_UScriptStruct_FLeapOptions_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeapOptions, Z_Construct_UPackage__Script_LeapMotion(), TEXT("LeapOptions"), sizeof(FLeapOptions), Get_Z_Construct_UScriptStruct_FLeapOptions_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLeapOptions(FLeapOptions::StaticStruct, TEXT("/Script/LeapMotion"), TEXT("LeapOptions"), false, nullptr, nullptr);
static struct FScriptStruct_LeapMotion_StaticRegisterNativesFLeapOptions
{
	FScriptStruct_LeapMotion_StaticRegisterNativesFLeapOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LeapOptions")),new UScriptStruct::TCppStructOps<FLeapOptions>);
	}
} ScriptStruct_LeapMotion_StaticRegisterNativesFLeapOptions;
	struct Z_Construct_UScriptStruct_FLeapOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HMDRotationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HMDRotationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HMDPositionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HMDPositionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FingerInterpFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FingerInterpFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandInterpFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HandInterpFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimewarpFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimewarpFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimewarpOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimewarpOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTransformOriginToHMD_MetaData[];
#endif
		static void NewProp_bTransformOriginToHMD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTransformOriginToHMD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseInterpolation_MetaData[];
#endif
		static void NewProp_bUseInterpolation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseInterpolation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseTimeWarp_MetaData[];
#endif
		static void NewProp_bUseTimeWarp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseTimeWarp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeapServiceLogLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LeapServiceLogLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingFidelity_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TrackingFidelity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLeapOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeapOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_HMDRotationOffset_MetaData[] = {
		{ "Category", "Leap Options" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
		{ "ToolTip", "Fixed offset in leap space for all tracking data. Useful for setting Leap->HMD real world offset" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_HMDRotationOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "HMDRotationOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FLeapOptions, HMDRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_HMDRotationOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_HMDRotationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_HMDPositionOffset_MetaData[] = {
		{ "Category", "Leap Options" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
		{ "ToolTip", "Fixed offset in leap space for all tracking data. Useful for setting Leap->HMD real world offset" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_HMDPositionOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "HMDPositionOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FLeapOptions, HMDPositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_HMDPositionOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_HMDPositionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_FingerInterpFactor_MetaData[] = {
		{ "Category", "Leap Options" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
		{ "ToolTip", "Number of frames we should predict forward (positive) or back (negative) from right now for fingers" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_FingerInterpFactor = { UE4CodeGen_Private::EPropertyClass::Float, "FingerInterpFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FLeapOptions, FingerInterpFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_FingerInterpFactor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_FingerInterpFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_HandInterpFactor_MetaData[] = {
		{ "Category", "Leap Options" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
		{ "ToolTip", "Number of frames we should predict forward (positive) or back (negative) from right now for hands" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_HandInterpFactor = { UE4CodeGen_Private::EPropertyClass::Float, "HandInterpFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FLeapOptions, HandInterpFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_HandInterpFactor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_HandInterpFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_TimewarpFactor_MetaData[] = {
		{ "Category", "Leap Options" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
		{ "ToolTip", "Linear factor, useful for inverting timewarp effects for certain platforms (e.g. Oculus)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_TimewarpFactor = { UE4CodeGen_Private::EPropertyClass::Float, "TimewarpFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FLeapOptions, TimewarpFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_TimewarpFactor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_TimewarpFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_TimewarpOffset_MetaData[] = {
		{ "Category", "Leap Options" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
		{ "ToolTip", "Timewarp offset sampling in microseconds. The higher, the further back in time." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_TimewarpOffset = { UE4CodeGen_Private::EPropertyClass::Float, "TimewarpOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FLeapOptions, TimewarpOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_TimewarpOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_TimewarpOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bTransformOriginToHMD_MetaData[] = {
		{ "Category", "Leap Options" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
		{ "ToolTip", "Should all leap data be transported to HMD space?" },
	};
#endif
	void Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bTransformOriginToHMD_SetBit(void* Obj)
	{
		((FLeapOptions*)Obj)->bTransformOriginToHMD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bTransformOriginToHMD = { UE4CodeGen_Private::EPropertyClass::Bool, "bTransformOriginToHMD", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FLeapOptions), &Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bTransformOriginToHMD_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bTransformOriginToHMD_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bTransformOriginToHMD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseInterpolation_MetaData[] = {
		{ "Category", "Leap Options" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
		{ "ToolTip", "Whether leap should use frame interpolation for smooth tracking" },
	};
#endif
	void Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseInterpolation_SetBit(void* Obj)
	{
		((FLeapOptions*)Obj)->bUseInterpolation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseInterpolation = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseInterpolation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FLeapOptions), &Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseInterpolation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseInterpolation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseInterpolation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseTimeWarp_MetaData[] = {
		{ "Category", "Leap Options" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
		{ "ToolTip", "Should leap use Temporal warping to align HMD rotation with leap samples" },
	};
#endif
	void Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseTimeWarp_SetBit(void* Obj)
	{
		((FLeapOptions*)Obj)->bUseTimeWarp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseTimeWarp = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseTimeWarp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FLeapOptions), &Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseTimeWarp_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseTimeWarp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseTimeWarp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_LeapServiceLogLevel_MetaData[] = {
		{ "Category", "Leap Options" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
		{ "ToolTip", "Verbosity of additional log updates from the leap service" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_LeapServiceLogLevel = { UE4CodeGen_Private::EPropertyClass::Byte, "LeapServiceLogLevel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FLeapOptions, LeapServiceLogLevel), Z_Construct_UEnum_LeapMotion_ELeapServiceLogLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_LeapServiceLogLevel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_LeapServiceLogLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_TrackingFidelity_MetaData[] = {
		{ "Category", "Leap Options" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
		{ "ToolTip", "Set your tracking fidelity from low latency to smooth. If not set to custom, some of the low level settings may be overwritten" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_TrackingFidelity = { UE4CodeGen_Private::EPropertyClass::Byte, "TrackingFidelity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FLeapOptions, TrackingFidelity), Z_Construct_UEnum_LeapMotion_ELeapTrackingFidelity, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_TrackingFidelity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_TrackingFidelity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Leap Options" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
		{ "ToolTip", "Optimize for desktop facing upward or VR facing outward?" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_Mode = { UE4CodeGen_Private::EPropertyClass::Byte, "Mode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FLeapOptions, Mode), Z_Construct_UEnum_LeapMotion_ELeapMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_Mode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_Mode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeapOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_HMDRotationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_HMDPositionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_FingerInterpFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_HandInterpFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_TimewarpFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_TimewarpOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bTransformOriginToHMD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseInterpolation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_bUseTimeWarp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_LeapServiceLogLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_TrackingFidelity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapOptions_Statics::NewProp_Mode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeapOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LeapMotion,
		nullptr,
		&NewStructOps,
		"LeapOptions",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FLeapOptions),
		alignof(FLeapOptions),
		Z_Construct_UScriptStruct_FLeapOptions_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapOptions_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapOptions_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLeapOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLeapOptions_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LeapMotion();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LeapOptions"), sizeof(FLeapOptions), Get_Z_Construct_UScriptStruct_FLeapOptions_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLeapOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLeapOptions_CRC() { return 2145707015U; }
class UScriptStruct* FLeapStats::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEAPMOTION_API uint32 Get_Z_Construct_UScriptStruct_FLeapStats_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeapStats, Z_Construct_UPackage__Script_LeapMotion(), TEXT("LeapStats"), sizeof(FLeapStats), Get_Z_Construct_UScriptStruct_FLeapStats_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLeapStats(FLeapStats::StaticStruct, TEXT("/Script/LeapMotion"), TEXT("LeapStats"), false, nullptr, nullptr);
static struct FScriptStruct_LeapMotion_StaticRegisterNativesFLeapStats
{
	FScriptStruct_LeapMotion_StaticRegisterNativesFLeapStats()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LeapStats")),new UScriptStruct::TCppStructOps<FLeapStats>);
	}
} ScriptStruct_LeapMotion_StaticRegisterNativesFLeapStats;
	struct Z_Construct_UScriptStruct_FLeapStats_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameExtrapolationInMS_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrameExtrapolationInMS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeviceInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeapAPIVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeapAPIVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapStats_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
		{ "ToolTip", "Read only stats from the plugin such as version and prediction interval." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLeapStats_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeapStats>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapStats_Statics::NewProp_FrameExtrapolationInMS_MetaData[] = {
		{ "Category", "Leap Stats" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapStats_Statics::NewProp_FrameExtrapolationInMS = { UE4CodeGen_Private::EPropertyClass::Float, "FrameExtrapolationInMS", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FLeapStats, FrameExtrapolationInMS), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapStats_Statics::NewProp_FrameExtrapolationInMS_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapStats_Statics::NewProp_FrameExtrapolationInMS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapStats_Statics::NewProp_DeviceInfo_MetaData[] = {
		{ "Category", "Leap Stats" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeapStats_Statics::NewProp_DeviceInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "DeviceInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FLeapStats, DeviceInfo), Z_Construct_UScriptStruct_FLeapDevice, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapStats_Statics::NewProp_DeviceInfo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapStats_Statics::NewProp_DeviceInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapStats_Statics::NewProp_LeapAPIVersion_MetaData[] = {
		{ "Category", "Leap Stats" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLeapStats_Statics::NewProp_LeapAPIVersion = { UE4CodeGen_Private::EPropertyClass::Str, "LeapAPIVersion", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FLeapStats, LeapAPIVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapStats_Statics::NewProp_LeapAPIVersion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapStats_Statics::NewProp_LeapAPIVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeapStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapStats_Statics::NewProp_FrameExtrapolationInMS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapStats_Statics::NewProp_DeviceInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapStats_Statics::NewProp_LeapAPIVersion,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeapStats_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LeapMotion,
		nullptr,
		&NewStructOps,
		"LeapStats",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FLeapStats),
		alignof(FLeapStats),
		Z_Construct_UScriptStruct_FLeapStats_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapStats_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapStats_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapStats_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLeapStats()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLeapStats_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LeapMotion();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LeapStats"), sizeof(FLeapStats), Get_Z_Construct_UScriptStruct_FLeapStats_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLeapStats_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLeapStats_CRC() { return 3228598389U; }
class UScriptStruct* FLeapDevice::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEAPMOTION_API uint32 Get_Z_Construct_UScriptStruct_FLeapDevice_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeapDevice, Z_Construct_UPackage__Script_LeapMotion(), TEXT("LeapDevice"), sizeof(FLeapDevice), Get_Z_Construct_UScriptStruct_FLeapDevice_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLeapDevice(FLeapDevice::StaticStruct, TEXT("/Script/LeapMotion"), TEXT("LeapDevice"), false, nullptr, nullptr);
static struct FScriptStruct_LeapMotion_StaticRegisterNativesFLeapDevice
{
	FScriptStruct_LeapMotion_StaticRegisterNativesFLeapDevice()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LeapDevice")),new UScriptStruct::TCppStructOps<FLeapDevice>);
	}
} ScriptStruct_LeapMotion_StaticRegisterNativesFLeapDevice;
	struct Z_Construct_UScriptStruct_FLeapDevice_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Range;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalFOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VerticalFOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalFOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HorizontalFOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Serial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Serial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Baseline_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Baseline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapDevice_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLeapDevice_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeapDevice>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_Range_MetaData[] = {
		{ "Category", "Leap Stats" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
		{ "ToolTip", "The maximum range for this device, in micrometers." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_Range = { UE4CodeGen_Private::EPropertyClass::Int, "Range", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FLeapDevice, Range), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_Range_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_Range_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_VerticalFOV_MetaData[] = {
		{ "Category", "Leap Stats" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
		{ "ToolTip", "The vertical field of view of this device in radians." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_VerticalFOV = { UE4CodeGen_Private::EPropertyClass::Float, "VerticalFOV", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FLeapDevice, VerticalFOV), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_VerticalFOV_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_VerticalFOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_HorizontalFOV_MetaData[] = {
		{ "Category", "Leap Stats" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
		{ "ToolTip", "The horizontal field of view of this device in radians." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_HorizontalFOV = { UE4CodeGen_Private::EPropertyClass::Float, "HorizontalFOV", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FLeapDevice, HorizontalFOV), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_HorizontalFOV_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_HorizontalFOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_Serial_MetaData[] = {
		{ "Category", "Leap Device" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
		{ "ToolTip", "Serial number string" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_Serial = { UE4CodeGen_Private::EPropertyClass::Str, "Serial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FLeapDevice, Serial), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_Serial_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_Serial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_Baseline_MetaData[] = {
		{ "Category", "Leap Device" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
		{ "ToolTip", "The device baseline, in micrometers.\n\nThe baseline is defined as the distance between the center axis of each lens in a stereo camera\nsystem.  For other camera systems, this value is set to zero." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_Baseline = { UE4CodeGen_Private::EPropertyClass::Int, "Baseline", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FLeapDevice, Baseline), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_Baseline_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_Baseline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_PID_MetaData[] = {
		{ "Category", "Leap Device" },
		{ "ModuleRelativePath", "Public/LeapMotionData.h" },
		{ "ToolTip", "One of the eLeapDevicePID members as a string." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_PID = { UE4CodeGen_Private::EPropertyClass::Str, "PID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FLeapDevice, PID), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_PID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_PID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeapDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_Range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_VerticalFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_HorizontalFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_Serial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_Baseline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeapDevice_Statics::NewProp_PID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeapDevice_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LeapMotion,
		nullptr,
		&NewStructOps,
		"LeapDevice",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FLeapDevice),
		alignof(FLeapDevice),
		Z_Construct_UScriptStruct_FLeapDevice_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapDevice_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLeapDevice_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeapDevice_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLeapDevice()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLeapDevice_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LeapMotion();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LeapDevice"), sizeof(FLeapDevice), Get_Z_Construct_UScriptStruct_FLeapDevice_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLeapDevice_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLeapDevice_CRC() { return 1311640186U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
