// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBodyStateSkeleton;
#ifdef BODYSTATE_BodyStateInputInterface_generated_h
#error "BodyStateInputInterface.generated.h already included, missing '#pragma once' in BodyStateInputInterface.h"
#endif
#define BODYSTATE_BodyStateInputInterface_generated_h

#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateInputInterface_h_22_RPC_WRAPPERS \
	virtual void UpdateInput_Implementation(int32 DeviceID, UBodyStateSkeleton* Skeleton) {}; \
 \
	DECLARE_FUNCTION(execUpdateInput) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_DeviceID); \
		P_GET_OBJECT(UBodyStateSkeleton,Z_Param_Skeleton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateInput_Implementation(Z_Param_DeviceID,Z_Param_Skeleton); \
		P_NATIVE_END; \
	}


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateInputInterface_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UpdateInput_Implementation(int32 DeviceID, UBodyStateSkeleton* Skeleton) {}; \
 \
	DECLARE_FUNCTION(execUpdateInput) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_DeviceID); \
		P_GET_OBJECT(UBodyStateSkeleton,Z_Param_Skeleton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateInput_Implementation(Z_Param_DeviceID,Z_Param_Skeleton); \
		P_NATIVE_END; \
	}


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateInputInterface_h_22_EVENT_PARMS \
	struct BodyStateInputInterface_eventUpdateInput_Parms \
	{ \
		int32 DeviceID; \
		UBodyStateSkeleton* Skeleton; \
	};


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateInputInterface_h_22_CALLBACK_WRAPPERS
#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateInputInterface_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BODYSTATE_API UBodyStateInputInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodyStateInputInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BODYSTATE_API, UBodyStateInputInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodyStateInputInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BODYSTATE_API UBodyStateInputInterface(UBodyStateInputInterface&&); \
	BODYSTATE_API UBodyStateInputInterface(const UBodyStateInputInterface&); \
public:


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateInputInterface_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BODYSTATE_API UBodyStateInputInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BODYSTATE_API UBodyStateInputInterface(UBodyStateInputInterface&&); \
	BODYSTATE_API UBodyStateInputInterface(const UBodyStateInputInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BODYSTATE_API, UBodyStateInputInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodyStateInputInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodyStateInputInterface)


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateInputInterface_h_22_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBodyStateInputInterface(); \
	friend struct Z_Construct_UClass_UBodyStateInputInterface_Statics; \
public: \
	DECLARE_CLASS(UBodyStateInputInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BodyState"), BODYSTATE_API) \
	DECLARE_SERIALIZER(UBodyStateInputInterface)


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateInputInterface_h_22_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateInputInterface_h_22_GENERATED_UINTERFACE_BODY() \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateInputInterface_h_22_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateInputInterface_h_22_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateInputInterface_h_22_GENERATED_UINTERFACE_BODY() \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateInputInterface_h_22_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateInputInterface_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBodyStateInputInterface() {} \
public: \
	typedef UBodyStateInputInterface UClassType; \
	typedef IBodyStateInputInterface ThisClass; \
	static void Execute_UpdateInput(UObject* O, int32 DeviceID, UBodyStateSkeleton* Skeleton); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateInputInterface_h_22_INCLASS_IINTERFACE \
protected: \
	virtual ~IBodyStateInputInterface() {} \
public: \
	typedef UBodyStateInputInterface UClassType; \
	typedef IBodyStateInputInterface ThisClass; \
	static void Execute_UpdateInput(UObject* O, int32 DeviceID, UBodyStateSkeleton* Skeleton); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateInputInterface_h_19_PROLOG \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateInputInterface_h_22_EVENT_PARMS


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateInputInterface_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateInputInterface_h_22_RPC_WRAPPERS \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateInputInterface_h_22_CALLBACK_WRAPPERS \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateInputInterface_h_22_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateInputInterface_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateInputInterface_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateInputInterface_h_22_CALLBACK_WRAPPERS \
	CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateInputInterface_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CFE_LeapMotion2_Plugins_LeapMotion_Source_BodyState_Public_BodyStateInputInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
