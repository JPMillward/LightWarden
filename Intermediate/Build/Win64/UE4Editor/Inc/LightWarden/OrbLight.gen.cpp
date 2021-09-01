// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LightWarden/OrbLight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrbLight() {}
// Cross Module References
	LIGHTWARDEN_API UClass* Z_Construct_UClass_AOrbLight_NoRegister();
	LIGHTWARDEN_API UClass* Z_Construct_UClass_AOrbLight();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LightWarden();
	LIGHTWARDEN_API UEnum* Z_Construct_UEnum_LightWarden_EOrbType();
// End Cross Module References
	void AOrbLight::StaticRegisterNativesAOrbLight()
	{
	}
	UClass* Z_Construct_UClass_AOrbLight_NoRegister()
	{
		return AOrbLight::StaticClass();
	}
	struct Z_Construct_UClass_AOrbLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OrbColor_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrbColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OrbColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOrbLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LightWarden,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrbLight_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OrbLight.h" },
		{ "ModuleRelativePath", "OrbLight.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AOrbLight_Statics::NewProp_OrbColor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrbLight_Statics::NewProp_OrbColor_MetaData[] = {
		{ "Category", "LightWarden" },
		{ "ModuleRelativePath", "OrbLight.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AOrbLight_Statics::NewProp_OrbColor = { "OrbColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOrbLight, OrbColor), Z_Construct_UEnum_LightWarden_EOrbType, METADATA_PARAMS(Z_Construct_UClass_AOrbLight_Statics::NewProp_OrbColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOrbLight_Statics::NewProp_OrbColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOrbLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrbLight_Statics::NewProp_OrbColor_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrbLight_Statics::NewProp_OrbColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOrbLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOrbLight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOrbLight_Statics::ClassParams = {
		&AOrbLight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOrbLight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AOrbLight_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOrbLight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOrbLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOrbLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOrbLight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOrbLight, 1008768715);
	template<> LIGHTWARDEN_API UClass* StaticClass<AOrbLight>()
	{
		return AOrbLight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOrbLight(Z_Construct_UClass_AOrbLight, &AOrbLight::StaticClass, TEXT("/Script/LightWarden"), TEXT("AOrbLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOrbLight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
