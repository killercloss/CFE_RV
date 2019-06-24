// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
enum class ELeapImageType : uint8;
struct FLeapHandData;
struct FLeapFrameData;
#ifdef LEAPMOTION_LeapComponent_generated_h
#error "LeapComponent.generated.h already included, missing '#pragma once' in LeapComponent.h"
#endif
#define LEAPMOTION_LeapComponent_generated_h

#define CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapComponent_h_15_DELEGATE \
struct _Script_LeapMotion_eventLeapImageEventSignature_Parms \
{ \
	UTexture2D* Texture; \
	ELeapImageType ImageType; \
}; \
static inline void FLeapImageEventSignature_DelegateWrapper(const FMulticastScriptDelegate& LeapImageEventSignature, UTexture2D* Texture, ELeapImageType ImageType) \
{ \
	_Script_LeapMotion_eventLeapImageEventSignature_Parms Parms; \
	Parms.Texture=Texture; \
	Parms.ImageType=ImageType; \
	LeapImageEventSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapComponent_h_14_DELEGATE \
struct _Script_LeapMotion_eventLeapPolicySignature_Parms \
{ \
	TArray<TEnumAsByte<ELeapPolicyFlag> > Flags; \
}; \
static inline void FLeapPolicySignature_DelegateWrapper(const FMulticastScriptDelegate& LeapPolicySignature, const TArray<TEnumAsByte<ELeapPolicyFlag> >& Flags) \
{ \
	_Script_LeapMotion_eventLeapPolicySignature_Parms Parms; \
	Parms.Flags=Flags; \
	LeapPolicySignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapComponent_h_13_DELEGATE \
struct _Script_LeapMotion_eventLeapHandSignature_Parms \
{ \
	FLeapHandData Hand; \
}; \
static inline void FLeapHandSignature_DelegateWrapper(const FMulticastScriptDelegate& LeapHandSignature, FLeapHandData const& Hand) \
{ \
	_Script_LeapMotion_eventLeapHandSignature_Parms Parms; \
	Parms.Hand=Hand; \
	LeapHandSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapComponent_h_12_DELEGATE \
struct _Script_LeapMotion_eventLeapFrameSignature_Parms \
{ \
	FLeapFrameData Frame; \
}; \
static inline void FLeapFrameSignature_DelegateWrapper(const FMulticastScriptDelegate& LeapFrameSignature, FLeapFrameData const& Frame) \
{ \
	_Script_LeapMotion_eventLeapFrameSignature_Parms Parms; \
	Parms.Frame=Frame; \
	LeapFrameSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapComponent_h_11_DELEGATE \
struct _Script_LeapMotion_eventLeapVisibilityBoolSignature_Parms \
{ \
	bool bIsVisible; \
}; \
static inline void FLeapVisibilityBoolSignature_DelegateWrapper(const FMulticastScriptDelegate& LeapVisibilityBoolSignature, bool bIsVisible) \
{ \
	_Script_LeapMotion_eventLeapVisibilityBoolSignature_Parms Parms; \
	Parms.bIsVisible=bIsVisible ? true : false; \
	LeapVisibilityBoolSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapComponent_h_10_DELEGATE \
struct _Script_LeapMotion_eventLeapDeviceSignature_Parms \
{ \
	FString DeviceName; \
}; \
static inline void FLeapDeviceSignature_DelegateWrapper(const FMulticastScriptDelegate& LeapDeviceSignature, const FString& DeviceName) \
{ \
	_Script_LeapMotion_eventLeapDeviceSignature_Parms Parms; \
	Parms.DeviceName=DeviceName; \
	LeapDeviceSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapComponent_h_9_DELEGATE \
static inline void FLeapEventSignature_DelegateWrapper(const FMulticastScriptDelegate& LeapEventSignature) \
{ \
	LeapEventSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapComponent_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLatestFrameData) \
	{ \
		P_GET_STRUCT_REF(FLeapFrameData,Z_Param_Out_OutData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetLatestFrameData(Z_Param_Out_OutData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAreHandsVisible) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_LeftIsVisible); \
		P_GET_UBOOL_REF(Z_Param_Out_RightIsVisible); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AreHandsVisible(Z_Param_Out_LeftIsVisible,Z_Param_Out_RightIsVisible); \
		P_NATIVE_END; \
	}


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLatestFrameData) \
	{ \
		P_GET_STRUCT_REF(FLeapFrameData,Z_Param_Out_OutData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetLatestFrameData(Z_Param_Out_OutData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAreHandsVisible) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_LeftIsVisible); \
		P_GET_UBOOL_REF(Z_Param_Out_RightIsVisible); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AreHandsVisible(Z_Param_Out_LeftIsVisible,Z_Param_Out_RightIsVisible); \
		P_NATIVE_END; \
	}


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULeapComponent(); \
	friend struct Z_Construct_UClass_ULeapComponent_Statics; \
public: \
	DECLARE_CLASS(ULeapComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LeapMotion"), NO_API) \
	DECLARE_SERIALIZER(ULeapComponent)


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesULeapComponent(); \
	friend struct Z_Construct_UClass_ULeapComponent_Statics; \
public: \
	DECLARE_CLASS(ULeapComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LeapMotion"), NO_API) \
	DECLARE_SERIALIZER(ULeapComponent)


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeapComponent(ULeapComponent&&); \
	NO_API ULeapComponent(const ULeapComponent&); \
public:


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapComponent_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeapComponent(ULeapComponent&&); \
	NO_API ULeapComponent(const ULeapComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapComponent)


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapComponent_h_21_PRIVATE_PROPERTY_OFFSET
#define CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapComponent_h_17_PROLOG
#define CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapComponent_h_21_RPC_WRAPPERS \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapComponent_h_21_INCLASS \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapComponent_h_21_INCLASS_NO_PURE_DECLS \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapComponent_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LeapComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CFE_LeapMotion2_Plugins_LeapMotion_Source_LeapMotion_Public_LeapComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS