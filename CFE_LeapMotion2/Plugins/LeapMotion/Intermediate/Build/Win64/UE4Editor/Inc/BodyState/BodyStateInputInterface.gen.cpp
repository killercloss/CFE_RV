// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BodyState/Public/BodyStateInputInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyStateInputInterface() {}
// Cross Module References
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateInputInterface_NoRegister();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateInputInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_BodyState();
	BODYSTATE_API UFunction* Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput();
	BODYSTATE_API UClass* Z_Construct_UClass_UBodyStateSkeleton_NoRegister();
// End Cross Module References
	void IBodyStateInputInterface::UpdateInput(int32 DeviceID, UBodyStateSkeleton* Skeleton)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateInput instead.");
	}
	void UBodyStateInputInterface::StaticRegisterNativesUBodyStateInputInterface()
	{
		UClass* Class = UBodyStateInputInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateInput", &IBodyStateInputInterface::execUpdateInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeviceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput_Statics::NewProp_Skeleton = { UE4CodeGen_Private::EPropertyClass::Object, "Skeleton", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BodyStateInputInterface_eventUpdateInput_Parms, Skeleton), Z_Construct_UClass_UBodyStateSkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput_Statics::NewProp_DeviceID = { UE4CodeGen_Private::EPropertyClass::Int, "DeviceID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BodyStateInputInterface_eventUpdateInput_Parms, DeviceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput_Statics::NewProp_Skeleton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput_Statics::NewProp_DeviceID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Body State Poll Interface" },
		{ "ModuleRelativePath", "Public/BodyStateInputInterface.h" },
		{ "ToolTip", "Requests your device to update the skeleton. You can use this BS polling method or push updates to your skeleton" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodyStateInputInterface, "UpdateInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(BodyStateInputInterface_eventUpdateInput_Parms), Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBodyStateInputInterface_NoRegister()
	{
		return UBodyStateInputInterface::StaticClass();
	}
	struct Z_Construct_UClass_UBodyStateInputInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBodyStateInputInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_BodyState,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBodyStateInputInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBodyStateInputInterface_UpdateInput, "UpdateInput" }, // 403619236
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodyStateInputInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BodyStateInputInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBodyStateInputInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBodyStateInputInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBodyStateInputInterface_Statics::ClassParams = {
		&UBodyStateInputInterface::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000840A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBodyStateInputInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBodyStateInputInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBodyStateInputInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBodyStateInputInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBodyStateInputInterface, 3705187042);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBodyStateInputInterface(Z_Construct_UClass_UBodyStateInputInterface, &UBodyStateInputInterface::StaticClass, TEXT("/Script/BodyState"), TEXT("UBodyStateInputInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBodyStateInputInterface);
	static FName NAME_UBodyStateInputInterface_UpdateInput = FName(TEXT("UpdateInput"));
	void IBodyStateInputInterface::Execute_UpdateInput(UObject* O, int32 DeviceID, UBodyStateSkeleton* Skeleton)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBodyStateInputInterface::StaticClass()));
		BodyStateInputInterface_eventUpdateInput_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UBodyStateInputInterface_UpdateInput);
		if (Func)
		{
			Parms.DeviceID=DeviceID;
			Parms.Skeleton=Skeleton;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IBodyStateInputInterface*)(O->GetNativeInterfaceAddress(UBodyStateInputInterface::StaticClass())))
		{
			I->UpdateInput_Implementation(DeviceID,Skeleton);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
