// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAME2020_Final/TP_Vehicle/TP_VehicleWheelRear.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_VehicleWheelRear() {}
// Cross Module References
	GAME2020_FINAL_API UClass* Z_Construct_UClass_UTP_VehicleWheelRear_NoRegister();
	GAME2020_FINAL_API UClass* Z_Construct_UClass_UTP_VehicleWheelRear();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_GAME2020_Final();
// End Cross Module References
	void UTP_VehicleWheelRear::StaticRegisterNativesUTP_VehicleWheelRear()
	{
	}
	UClass* Z_Construct_UClass_UTP_VehicleWheelRear_NoRegister()
	{
		return UTP_VehicleWheelRear::StaticClass();
	}
	struct Z_Construct_UClass_UTP_VehicleWheelRear_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTP_VehicleWheelRear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_GAME2020_Final,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTP_VehicleWheelRear_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TP_Vehicle/TP_VehicleWheelRear.h" },
		{ "ModuleRelativePath", "TP_Vehicle/TP_VehicleWheelRear.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTP_VehicleWheelRear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTP_VehicleWheelRear>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTP_VehicleWheelRear_Statics::ClassParams = {
		&UTP_VehicleWheelRear::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTP_VehicleWheelRear_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTP_VehicleWheelRear_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTP_VehicleWheelRear()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTP_VehicleWheelRear_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTP_VehicleWheelRear, 1128723499);
	template<> GAME2020_FINAL_API UClass* StaticClass<UTP_VehicleWheelRear>()
	{
		return UTP_VehicleWheelRear::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTP_VehicleWheelRear(Z_Construct_UClass_UTP_VehicleWheelRear, &UTP_VehicleWheelRear::StaticClass, TEXT("/Script/GAME2020_Final"), TEXT("UTP_VehicleWheelRear"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTP_VehicleWheelRear);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
