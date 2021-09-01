// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LightWarden/OrbPedestal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrbPedestal() {}
// Cross Module References
	LIGHTWARDEN_API UClass* Z_Construct_UClass_AOrbPedestal_NoRegister();
	LIGHTWARDEN_API UClass* Z_Construct_UClass_AOrbPedestal();
	LIGHTWARDEN_API UClass* Z_Construct_UClass_AInteractionBase();
	UPackage* Z_Construct_UPackage__Script_LightWarden();
	LIGHTWARDEN_API UEnum* Z_Construct_UEnum_LightWarden_EOrbType();
// End Cross Module References
	DEFINE_FUNCTION(AOrbPedestal::execGetOrbType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOrbType*)Z_Param__Result=P_THIS->GetOrbType();
		P_NATIVE_END;
	}
	void AOrbPedestal::StaticRegisterNativesAOrbPedestal()
	{
		UClass* Class = AOrbPedestal::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOrbType", &AOrbPedestal::execGetOrbType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOrbPedestal_GetOrbType_Statics
	{
		struct OrbPedestal_eventGetOrbType_Parms
		{
			EOrbType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AOrbPedestal_GetOrbType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AOrbPedestal_GetOrbType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OrbPedestal_eventGetOrbType_Parms, ReturnValue), Z_Construct_UEnum_LightWarden_EOrbType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOrbPedestal_GetOrbType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOrbPedestal_GetOrbType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOrbPedestal_GetOrbType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOrbPedestal_GetOrbType_Statics::Function_MetaDataParams[] = {
		{ "Category", "LightWarden" },
		{ "ModuleRelativePath", "OrbPedestal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOrbPedestal_GetOrbType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOrbPedestal, nullptr, "GetOrbType", nullptr, nullptr, sizeof(OrbPedestal_eventGetOrbType_Parms), Z_Construct_UFunction_AOrbPedestal_GetOrbType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOrbPedestal_GetOrbType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOrbPedestal_GetOrbType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOrbPedestal_GetOrbType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOrbPedestal_GetOrbType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOrbPedestal_GetOrbType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOrbPedestal_NoRegister()
	{
		return AOrbPedestal::StaticClass();
	}
	struct Z_Construct_UClass_AOrbPedestal_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PedestalOrb_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PedestalOrb_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PedestalOrb;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOrbPedestal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LightWarden,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOrbPedestal_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOrbPedestal_GetOrbType, "GetOrbType" }, // 3872788986
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrbPedestal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OrbPedestal.h" },
		{ "ModuleRelativePath", "OrbPedestal.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AOrbPedestal_Statics::NewProp_PedestalOrb_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrbPedestal_Statics::NewProp_PedestalOrb_MetaData[] = {
		{ "Category", "OrbPedestal" },
		{ "ModuleRelativePath", "OrbPedestal.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AOrbPedestal_Statics::NewProp_PedestalOrb = { "PedestalOrb", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOrbPedestal, PedestalOrb), Z_Construct_UEnum_LightWarden_EOrbType, METADATA_PARAMS(Z_Construct_UClass_AOrbPedestal_Statics::NewProp_PedestalOrb_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOrbPedestal_Statics::NewProp_PedestalOrb_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOrbPedestal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrbPedestal_Statics::NewProp_PedestalOrb_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrbPedestal_Statics::NewProp_PedestalOrb,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOrbPedestal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOrbPedestal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOrbPedestal_Statics::ClassParams = {
		&AOrbPedestal::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOrbPedestal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AOrbPedestal_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOrbPedestal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOrbPedestal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOrbPedestal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOrbPedestal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOrbPedestal, 203243615);
	template<> LIGHTWARDEN_API UClass* StaticClass<AOrbPedestal>()
	{
		return AOrbPedestal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOrbPedestal(Z_Construct_UClass_AOrbPedestal, &AOrbPedestal::StaticClass, TEXT("/Script/LightWarden"), TEXT("AOrbPedestal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOrbPedestal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
