// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LightWarden/WardenEnums.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWardenEnums() {}
// Cross Module References
	LIGHTWARDEN_API UEnum* Z_Construct_UEnum_LightWarden_EPlatformType();
	UPackage* Z_Construct_UPackage__Script_LightWarden();
	LIGHTWARDEN_API UEnum* Z_Construct_UEnum_LightWarden_EOrbType();
// End Cross Module References
	static UEnum* EPlatformType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LightWarden_EPlatformType, Z_Construct_UPackage__Script_LightWarden(), TEXT("EPlatformType"));
		}
		return Singleton;
	}
	template<> LIGHTWARDEN_API UEnum* StaticEnum<EPlatformType>()
	{
		return EPlatformType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlatformType(EPlatformType_StaticEnum, TEXT("/Script/LightWarden"), TEXT("EPlatformType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LightWarden_EPlatformType_Hash() { return 3533825478U; }
	UEnum* Z_Construct_UEnum_LightWarden_EPlatformType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LightWarden();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlatformType"), 0, Get_Z_Construct_UEnum_LightWarden_EPlatformType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPlatformType::PT_Normal", (int64)EPlatformType::PT_Normal },
				{ "EPlatformType::PT_Fire", (int64)EPlatformType::PT_Fire },
				{ "EPlatformType::PT_Electric", (int64)EPlatformType::PT_Electric },
				{ "EPlatformType::PT_Plasma", (int64)EPlatformType::PT_Plasma },
				{ "EPlatformType::PT_Lock", (int64)EPlatformType::PT_Lock },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "WardenEnums.h" },
				{ "PT_Electric.DisplayName", "Electric Platform" },
				{ "PT_Electric.Name", "EPlatformType::PT_Electric" },
				{ "PT_Fire.DisplayName", "Fire Platform" },
				{ "PT_Fire.Name", "EPlatformType::PT_Fire" },
				{ "PT_Lock.DisplayName", "Locked Platform" },
				{ "PT_Lock.Name", "EPlatformType::PT_Lock" },
				{ "PT_Normal.DisplayName", "Normal Platform" },
				{ "PT_Normal.Name", "EPlatformType::PT_Normal" },
				{ "PT_Plasma.DisplayName", "Plasma Platform" },
				{ "PT_Plasma.Name", "EPlatformType::PT_Plasma" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LightWarden,
				nullptr,
				"EPlatformType",
				"EPlatformType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EOrbType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LightWarden_EOrbType, Z_Construct_UPackage__Script_LightWarden(), TEXT("EOrbType"));
		}
		return Singleton;
	}
	template<> LIGHTWARDEN_API UEnum* StaticEnum<EOrbType>()
	{
		return EOrbType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOrbType(EOrbType_StaticEnum, TEXT("/Script/LightWarden"), TEXT("EOrbType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LightWarden_EOrbType_Hash() { return 598525617U; }
	UEnum* Z_Construct_UEnum_LightWarden_EOrbType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LightWarden();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOrbType"), 0, Get_Z_Construct_UEnum_LightWarden_EOrbType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOrbType::OT_None", (int64)EOrbType::OT_None },
				{ "EOrbType::OT_Fire", (int64)EOrbType::OT_Fire },
				{ "EOrbType::OT_Electric", (int64)EOrbType::OT_Electric },
				{ "EOrbType::OT_Plasma", (int64)EOrbType::OT_Plasma },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n **/" },
				{ "ModuleRelativePath", "WardenEnums.h" },
				{ "OT_Electric.Comment", "/**\n **/" },
				{ "OT_Electric.DisplayName", "Electric" },
				{ "OT_Electric.Name", "EOrbType::OT_Electric" },
				{ "OT_Fire.Comment", "/**\n **/" },
				{ "OT_Fire.DisplayName", "Fire" },
				{ "OT_Fire.Name", "EOrbType::OT_Fire" },
				{ "OT_None.Comment", "/**\n **/" },
				{ "OT_None.DisplayName", "No Orb" },
				{ "OT_None.Name", "EOrbType::OT_None" },
				{ "OT_Plasma.Comment", "/**\n **/" },
				{ "OT_Plasma.DisplayName", "Plasma" },
				{ "OT_Plasma.Name", "EOrbType::OT_Plasma" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LightWarden,
				nullptr,
				"EOrbType",
				"EOrbType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
