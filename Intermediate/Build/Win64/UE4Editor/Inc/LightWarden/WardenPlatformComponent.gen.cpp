// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LightWarden/WardenPlatformComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWardenPlatformComponent() {}
// Cross Module References
	LIGHTWARDEN_API UClass* Z_Construct_UClass_UWardenPlatformComponent_NoRegister();
	LIGHTWARDEN_API UClass* Z_Construct_UClass_UWardenPlatformComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_LightWarden();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	LIGHTWARDEN_API UEnum* Z_Construct_UEnum_LightWarden_EPlatformType();
	LIGHTWARDEN_API UEnum* Z_Construct_UEnum_LightWarden_EOrbType();
// End Cross Module References
	void UWardenPlatformComponent::StaticRegisterNativesUWardenPlatformComponent()
	{
	}
	UClass* Z_Construct_UClass_UWardenPlatformComponent_NoRegister()
	{
		return UWardenPlatformComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWardenPlatformComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[];
#endif
		static void NewProp_bIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanCollide_MetaData[];
#endif
		static void NewProp_bCanCollide_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanCollide;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlatformTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlatformLocation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlatformType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlatformType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlatformOrb_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformOrb_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlatformOrb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPlatformActive_MetaData[];
#endif
		static void NewProp_IsPlatformActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPlatformActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWardenPlatformComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LightWarden,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWardenPlatformComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "WardenPlatformComponent.h" },
		{ "ModuleRelativePath", "WardenPlatformComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_bIsVisible_MetaData[] = {
		{ "ModuleRelativePath", "WardenPlatformComponent.h" },
	};
#endif
	void Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((UWardenPlatformComponent*)Obj)->bIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWardenPlatformComponent), &Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_bIsVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_bIsVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_bCanCollide_MetaData[] = {
		{ "ModuleRelativePath", "WardenPlatformComponent.h" },
	};
#endif
	void Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_bCanCollide_SetBit(void* Obj)
	{
		((UWardenPlatformComponent*)Obj)->bCanCollide = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_bCanCollide = { "bCanCollide", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWardenPlatformComponent), &Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_bCanCollide_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_bCanCollide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_bCanCollide_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_FadeTime_MetaData[] = {
		{ "ModuleRelativePath", "WardenPlatformComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_FadeTime = { "FadeTime", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWardenPlatformComponent, FadeTime), METADATA_PARAMS(Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_FadeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_FadeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_PlatformTransform_MetaData[] = {
		{ "Category", "WardenPlatformComponent" },
		{ "ModuleRelativePath", "WardenPlatformComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_PlatformTransform = { "PlatformTransform", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWardenPlatformComponent, PlatformTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_PlatformTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_PlatformTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_PlatformLocation_MetaData[] = {
		{ "Category", "WardenPlatformComponent" },
		{ "ModuleRelativePath", "WardenPlatformComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_PlatformLocation = { "PlatformLocation", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWardenPlatformComponent, PlatformLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_PlatformLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_PlatformLocation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_PlatformType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_PlatformType_MetaData[] = {
		{ "Category", "WardenPlatformComponent" },
		{ "ModuleRelativePath", "WardenPlatformComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_PlatformType = { "PlatformType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWardenPlatformComponent, PlatformType), Z_Construct_UEnum_LightWarden_EPlatformType, METADATA_PARAMS(Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_PlatformType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_PlatformType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_PlatformOrb_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_PlatformOrb_MetaData[] = {
		{ "Category", "WardenPlatformComponent" },
		{ "ModuleRelativePath", "WardenPlatformComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_PlatformOrb = { "PlatformOrb", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWardenPlatformComponent, PlatformOrb), Z_Construct_UEnum_LightWarden_EOrbType, METADATA_PARAMS(Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_PlatformOrb_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_PlatformOrb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_IsPlatformActive_MetaData[] = {
		{ "Category", "WardenPlatformComponent" },
		{ "ModuleRelativePath", "WardenPlatformComponent.h" },
	};
#endif
	void Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_IsPlatformActive_SetBit(void* Obj)
	{
		((UWardenPlatformComponent*)Obj)->IsPlatformActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_IsPlatformActive = { "IsPlatformActive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWardenPlatformComponent), &Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_IsPlatformActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_IsPlatformActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_IsPlatformActive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWardenPlatformComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_bIsVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_bCanCollide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_FadeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_PlatformTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_PlatformLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_PlatformType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_PlatformType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_PlatformOrb_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_PlatformOrb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWardenPlatformComponent_Statics::NewProp_IsPlatformActive,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWardenPlatformComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWardenPlatformComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWardenPlatformComponent_Statics::ClassParams = {
		&UWardenPlatformComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWardenPlatformComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWardenPlatformComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWardenPlatformComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWardenPlatformComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWardenPlatformComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWardenPlatformComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWardenPlatformComponent, 136136354);
	template<> LIGHTWARDEN_API UClass* StaticClass<UWardenPlatformComponent>()
	{
		return UWardenPlatformComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWardenPlatformComponent(Z_Construct_UClass_UWardenPlatformComponent, &UWardenPlatformComponent::StaticClass, TEXT("/Script/LightWarden"), TEXT("UWardenPlatformComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWardenPlatformComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
