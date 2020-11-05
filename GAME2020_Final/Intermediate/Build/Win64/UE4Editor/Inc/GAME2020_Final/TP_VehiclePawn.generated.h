// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAME2020_FINAL_TP_VehiclePawn_generated_h
#error "TP_VehiclePawn.generated.h already included, missing '#pragma once' in TP_VehiclePawn.h"
#endif
#define GAME2020_FINAL_TP_VehiclePawn_generated_h

#define GAME2020_Final_Source_GAME2020_Final_TP_Vehicle_TP_VehiclePawn_h_17_SPARSE_DATA
#define GAME2020_Final_Source_GAME2020_Final_TP_Vehicle_TP_VehiclePawn_h_17_RPC_WRAPPERS
#define GAME2020_Final_Source_GAME2020_Final_TP_Vehicle_TP_VehiclePawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define GAME2020_Final_Source_GAME2020_Final_TP_Vehicle_TP_VehiclePawn_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATP_VehiclePawn(); \
	friend struct Z_Construct_UClass_ATP_VehiclePawn_Statics; \
public: \
	DECLARE_CLASS(ATP_VehiclePawn, AWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GAME2020_Final"), NO_API) \
	DECLARE_SERIALIZER(ATP_VehiclePawn)


#define GAME2020_Final_Source_GAME2020_Final_TP_Vehicle_TP_VehiclePawn_h_17_INCLASS \
private: \
	static void StaticRegisterNativesATP_VehiclePawn(); \
	friend struct Z_Construct_UClass_ATP_VehiclePawn_Statics; \
public: \
	DECLARE_CLASS(ATP_VehiclePawn, AWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GAME2020_Final"), NO_API) \
	DECLARE_SERIALIZER(ATP_VehiclePawn)


#define GAME2020_Final_Source_GAME2020_Final_TP_Vehicle_TP_VehiclePawn_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATP_VehiclePawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATP_VehiclePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATP_VehiclePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATP_VehiclePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATP_VehiclePawn(ATP_VehiclePawn&&); \
	NO_API ATP_VehiclePawn(const ATP_VehiclePawn&); \
public:


#define GAME2020_Final_Source_GAME2020_Final_TP_Vehicle_TP_VehiclePawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATP_VehiclePawn(ATP_VehiclePawn&&); \
	NO_API ATP_VehiclePawn(const ATP_VehiclePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATP_VehiclePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATP_VehiclePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATP_VehiclePawn)


#define GAME2020_Final_Source_GAME2020_Final_TP_Vehicle_TP_VehiclePawn_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(ATP_VehiclePawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ATP_VehiclePawn, Camera); } \
	FORCEINLINE static uint32 __PPO__InternalCameraBase() { return STRUCT_OFFSET(ATP_VehiclePawn, InternalCameraBase); } \
	FORCEINLINE static uint32 __PPO__InternalCamera() { return STRUCT_OFFSET(ATP_VehiclePawn, InternalCamera); } \
	FORCEINLINE static uint32 __PPO__InCarSpeed() { return STRUCT_OFFSET(ATP_VehiclePawn, InCarSpeed); } \
	FORCEINLINE static uint32 __PPO__InCarGear() { return STRUCT_OFFSET(ATP_VehiclePawn, InCarGear); }


#define GAME2020_Final_Source_GAME2020_Final_TP_Vehicle_TP_VehiclePawn_h_14_PROLOG
#define GAME2020_Final_Source_GAME2020_Final_TP_Vehicle_TP_VehiclePawn_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GAME2020_Final_Source_GAME2020_Final_TP_Vehicle_TP_VehiclePawn_h_17_PRIVATE_PROPERTY_OFFSET \
	GAME2020_Final_Source_GAME2020_Final_TP_Vehicle_TP_VehiclePawn_h_17_SPARSE_DATA \
	GAME2020_Final_Source_GAME2020_Final_TP_Vehicle_TP_VehiclePawn_h_17_RPC_WRAPPERS \
	GAME2020_Final_Source_GAME2020_Final_TP_Vehicle_TP_VehiclePawn_h_17_INCLASS \
	GAME2020_Final_Source_GAME2020_Final_TP_Vehicle_TP_VehiclePawn_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GAME2020_Final_Source_GAME2020_Final_TP_Vehicle_TP_VehiclePawn_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GAME2020_Final_Source_GAME2020_Final_TP_Vehicle_TP_VehiclePawn_h_17_PRIVATE_PROPERTY_OFFSET \
	GAME2020_Final_Source_GAME2020_Final_TP_Vehicle_TP_VehiclePawn_h_17_SPARSE_DATA \
	GAME2020_Final_Source_GAME2020_Final_TP_Vehicle_TP_VehiclePawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	GAME2020_Final_Source_GAME2020_Final_TP_Vehicle_TP_VehiclePawn_h_17_INCLASS_NO_PURE_DECLS \
	GAME2020_Final_Source_GAME2020_Final_TP_Vehicle_TP_VehiclePawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAME2020_FINAL_API UClass* StaticClass<class ATP_VehiclePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GAME2020_Final_Source_GAME2020_Final_TP_Vehicle_TP_VehiclePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
