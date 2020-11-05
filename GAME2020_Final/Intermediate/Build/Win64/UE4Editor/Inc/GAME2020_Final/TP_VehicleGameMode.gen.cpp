// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAME2020_Final/TP_Vehicle/TP_VehicleGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_VehicleGameMode() {}
// Cross Module References
	GAME2020_FINAL_API UClass* Z_Construct_UClass_ATP_VehicleGameMode_NoRegister();
	GAME2020_FINAL_API UClass* Z_Construct_UClass_ATP_VehicleGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GAME2020_Final();
// End Cross Module References
	void ATP_VehicleGameMode::StaticRegisterNativesATP_VehicleGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATP_VehicleGameMode_NoRegister()
	{
		return ATP_VehicleGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATP_VehicleGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATP_VehicleGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GAME2020_Final,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VehicleGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TP_Vehicle/TP_VehicleGameMode.h" },
		{ "ModuleRelativePath", "TP_Vehicle/TP_VehicleGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATP_VehicleGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP_VehicleGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATP_VehicleGameMode_Statics::ClassParams = {
		&ATP_VehicleGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATP_VehicleGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_VehicleGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATP_VehicleGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATP_VehicleGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATP_VehicleGameMode, 456051950);
	template<> GAME2020_FINAL_API UClass* StaticClass<ATP_VehicleGameMode>()
	{
		return ATP_VehicleGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATP_VehicleGameMode(Z_Construct_UClass_ATP_VehicleGameMode, &ATP_VehicleGameMode::StaticClass, TEXT("/Script/GAME2020_Final"), TEXT("ATP_VehicleGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATP_VehicleGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
