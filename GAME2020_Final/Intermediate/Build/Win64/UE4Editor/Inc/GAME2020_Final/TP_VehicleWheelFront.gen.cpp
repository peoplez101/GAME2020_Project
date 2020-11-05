// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAME2020_Final/TP_Vehicle/TP_VehicleWheelFront.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_VehicleWheelFront() {}
// Cross Module References
	GAME2020_FINAL_API UClass* Z_Construct_UClass_UTP_VehicleWheelFront_NoRegister();
	GAME2020_FINAL_API UClass* Z_Construct_UClass_UTP_VehicleWheelFront();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_GAME2020_Final();
// End Cross Module References
	void UTP_VehicleWheelFront::StaticRegisterNativesUTP_VehicleWheelFront()
	{
	}
	UClass* Z_Construct_UClass_UTP_VehicleWheelFront_NoRegister()
	{
		return UTP_VehicleWheelFront::StaticClass();
	}
	struct Z_Construct_UClass_UTP_VehicleWheelFront_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTP_VehicleWheelFront_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_GAME2020_Final,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTP_VehicleWheelFront_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TP_Vehicle/TP_VehicleWheelFront.h" },
		{ "ModuleRelativePath", "TP_Vehicle/TP_VehicleWheelFront.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTP_VehicleWheelFront_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTP_VehicleWheelFront>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTP_VehicleWheelFront_Statics::ClassParams = {
		&UTP_VehicleWheelFront::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTP_VehicleWheelFront_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTP_VehicleWheelFront_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTP_VehicleWheelFront()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTP_VehicleWheelFront_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTP_VehicleWheelFront, 2510792440);
	template<> GAME2020_FINAL_API UClass* StaticClass<UTP_VehicleWheelFront>()
	{
		return UTP_VehicleWheelFront::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTP_VehicleWheelFront(Z_Construct_UClass_UTP_VehicleWheelFront, &UTP_VehicleWheelFront::StaticClass, TEXT("/Script/GAME2020_Final"), TEXT("UTP_VehicleWheelFront"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTP_VehicleWheelFront);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
