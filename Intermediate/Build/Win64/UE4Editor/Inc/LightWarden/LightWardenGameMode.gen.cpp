// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LightWarden/LightWardenGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightWardenGameMode() {}
// Cross Module References
	LIGHTWARDEN_API UClass* Z_Construct_UClass_ALightWardenGameMode_NoRegister();
	LIGHTWARDEN_API UClass* Z_Construct_UClass_ALightWardenGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_LightWarden();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	LIGHTWARDEN_API UEnum* Z_Construct_UEnum_LightWarden_EOrbType();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ALightWardenGameMode::execGetCheckPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetCheckPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALightWardenGameMode::execRestartFromCheckPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RestartFromCheckPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALightWardenGameMode::execSetCheckPoint)
	{
		P_GET_STRUCT(FTransform,Z_Param_NewCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCheckPoint(Z_Param_NewCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALightWardenGameMode::execUpdateOrbHolder)
	{
		P_GET_ENUM(EOrbType,Z_Param_OrbType);
		P_GET_OBJECT(AActor,Z_Param_NewOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateOrbHolder(EOrbType(Z_Param_OrbType),Z_Param_NewOwner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALightWardenGameMode::execSetPlasmaHolder)
	{
		P_GET_OBJECT(AActor,Z_Param_NewHolder);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlasmaHolder(Z_Param_NewHolder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALightWardenGameMode::execSetElectricHolder)
	{
		P_GET_OBJECT(AActor,Z_Param_NewHolder);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetElectricHolder(Z_Param_NewHolder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALightWardenGameMode::execSetFireHolder)
	{
		P_GET_OBJECT(AActor,Z_Param_NewHolder);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFireHolder(Z_Param_NewHolder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALightWardenGameMode::execOnPlayerReset)
	{
		P_GET_OBJECT(AActor,Z_Param_Character);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerReset(Z_Param_Character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALightWardenGameMode::execSetSavedOrb)
	{
		P_GET_ENUM(EOrbType,Z_Param_NewPlayerOrb);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSavedOrb(EOrbType(Z_Param_NewPlayerOrb));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALightWardenGameMode::execGetSavedOrb)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOrbType*)Z_Param__Result=P_THIS->GetSavedOrb();
		P_NATIVE_END;
	}
	void ALightWardenGameMode::StaticRegisterNativesALightWardenGameMode()
	{
		UClass* Class = ALightWardenGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCheckPoint", &ALightWardenGameMode::execGetCheckPoint },
			{ "GetSavedOrb", &ALightWardenGameMode::execGetSavedOrb },
			{ "OnPlayerReset", &ALightWardenGameMode::execOnPlayerReset },
			{ "RestartFromCheckPoint", &ALightWardenGameMode::execRestartFromCheckPoint },
			{ "SetCheckPoint", &ALightWardenGameMode::execSetCheckPoint },
			{ "SetElectricHolder", &ALightWardenGameMode::execSetElectricHolder },
			{ "SetFireHolder", &ALightWardenGameMode::execSetFireHolder },
			{ "SetPlasmaHolder", &ALightWardenGameMode::execSetPlasmaHolder },
			{ "SetSavedOrb", &ALightWardenGameMode::execSetSavedOrb },
			{ "UpdateOrbHolder", &ALightWardenGameMode::execUpdateOrbHolder },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALightWardenGameMode_GetCheckPoint_Statics
	{
		struct LightWardenGameMode_eventGetCheckPoint_Parms
		{
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALightWardenGameMode_GetCheckPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightWardenGameMode_eventGetCheckPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALightWardenGameMode_GetCheckPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightWardenGameMode_GetCheckPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightWardenGameMode_GetCheckPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "LightWarden" },
		{ "ModuleRelativePath", "LightWardenGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightWardenGameMode_GetCheckPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightWardenGameMode, nullptr, "GetCheckPoint", nullptr, nullptr, sizeof(LightWardenGameMode_eventGetCheckPoint_Parms), Z_Construct_UFunction_ALightWardenGameMode_GetCheckPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightWardenGameMode_GetCheckPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightWardenGameMode_GetCheckPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightWardenGameMode_GetCheckPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightWardenGameMode_GetCheckPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightWardenGameMode_GetCheckPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALightWardenGameMode_GetSavedOrb_Statics
	{
		struct LightWardenGameMode_eventGetSavedOrb_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ALightWardenGameMode_GetSavedOrb_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ALightWardenGameMode_GetSavedOrb_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightWardenGameMode_eventGetSavedOrb_Parms, ReturnValue), Z_Construct_UEnum_LightWarden_EOrbType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALightWardenGameMode_GetSavedOrb_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightWardenGameMode_GetSavedOrb_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightWardenGameMode_GetSavedOrb_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightWardenGameMode_GetSavedOrb_Statics::Function_MetaDataParams[] = {
		{ "Category", "LightWarden" },
		{ "ModuleRelativePath", "LightWardenGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightWardenGameMode_GetSavedOrb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightWardenGameMode, nullptr, "GetSavedOrb", nullptr, nullptr, sizeof(LightWardenGameMode_eventGetSavedOrb_Parms), Z_Construct_UFunction_ALightWardenGameMode_GetSavedOrb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightWardenGameMode_GetSavedOrb_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightWardenGameMode_GetSavedOrb_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightWardenGameMode_GetSavedOrb_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightWardenGameMode_GetSavedOrb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightWardenGameMode_GetSavedOrb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALightWardenGameMode_OnPlayerReset_Statics
	{
		struct LightWardenGameMode_eventOnPlayerReset_Parms
		{
			AActor* Character;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALightWardenGameMode_OnPlayerReset_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightWardenGameMode_eventOnPlayerReset_Parms, Character), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALightWardenGameMode_OnPlayerReset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightWardenGameMode_OnPlayerReset_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightWardenGameMode_OnPlayerReset_Statics::Function_MetaDataParams[] = {
		{ "Category", "LightWarden" },
		{ "ModuleRelativePath", "LightWardenGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightWardenGameMode_OnPlayerReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightWardenGameMode, nullptr, "OnPlayerReset", nullptr, nullptr, sizeof(LightWardenGameMode_eventOnPlayerReset_Parms), Z_Construct_UFunction_ALightWardenGameMode_OnPlayerReset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightWardenGameMode_OnPlayerReset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightWardenGameMode_OnPlayerReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightWardenGameMode_OnPlayerReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightWardenGameMode_OnPlayerReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightWardenGameMode_OnPlayerReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALightWardenGameMode_RestartFromCheckPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightWardenGameMode_RestartFromCheckPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "LightWarden" },
		{ "ModuleRelativePath", "LightWardenGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightWardenGameMode_RestartFromCheckPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightWardenGameMode, nullptr, "RestartFromCheckPoint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightWardenGameMode_RestartFromCheckPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightWardenGameMode_RestartFromCheckPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightWardenGameMode_RestartFromCheckPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightWardenGameMode_RestartFromCheckPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALightWardenGameMode_SetCheckPoint_Statics
	{
		struct LightWardenGameMode_eventSetCheckPoint_Parms
		{
			FTransform NewCheck;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewCheck;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALightWardenGameMode_SetCheckPoint_Statics::NewProp_NewCheck = { "NewCheck", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightWardenGameMode_eventSetCheckPoint_Parms, NewCheck), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALightWardenGameMode_SetCheckPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightWardenGameMode_SetCheckPoint_Statics::NewProp_NewCheck,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightWardenGameMode_SetCheckPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "LightWarden" },
		{ "ModuleRelativePath", "LightWardenGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightWardenGameMode_SetCheckPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightWardenGameMode, nullptr, "SetCheckPoint", nullptr, nullptr, sizeof(LightWardenGameMode_eventSetCheckPoint_Parms), Z_Construct_UFunction_ALightWardenGameMode_SetCheckPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightWardenGameMode_SetCheckPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightWardenGameMode_SetCheckPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightWardenGameMode_SetCheckPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightWardenGameMode_SetCheckPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightWardenGameMode_SetCheckPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALightWardenGameMode_SetElectricHolder_Statics
	{
		struct LightWardenGameMode_eventSetElectricHolder_Parms
		{
			AActor* NewHolder;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewHolder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALightWardenGameMode_SetElectricHolder_Statics::NewProp_NewHolder = { "NewHolder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightWardenGameMode_eventSetElectricHolder_Parms, NewHolder), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALightWardenGameMode_SetElectricHolder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightWardenGameMode_SetElectricHolder_Statics::NewProp_NewHolder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightWardenGameMode_SetElectricHolder_Statics::Function_MetaDataParams[] = {
		{ "Category", "LightWarden" },
		{ "ModuleRelativePath", "LightWardenGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightWardenGameMode_SetElectricHolder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightWardenGameMode, nullptr, "SetElectricHolder", nullptr, nullptr, sizeof(LightWardenGameMode_eventSetElectricHolder_Parms), Z_Construct_UFunction_ALightWardenGameMode_SetElectricHolder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightWardenGameMode_SetElectricHolder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightWardenGameMode_SetElectricHolder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightWardenGameMode_SetElectricHolder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightWardenGameMode_SetElectricHolder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightWardenGameMode_SetElectricHolder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALightWardenGameMode_SetFireHolder_Statics
	{
		struct LightWardenGameMode_eventSetFireHolder_Parms
		{
			AActor* NewHolder;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewHolder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALightWardenGameMode_SetFireHolder_Statics::NewProp_NewHolder = { "NewHolder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightWardenGameMode_eventSetFireHolder_Parms, NewHolder), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALightWardenGameMode_SetFireHolder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightWardenGameMode_SetFireHolder_Statics::NewProp_NewHolder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightWardenGameMode_SetFireHolder_Statics::Function_MetaDataParams[] = {
		{ "Category", "LightWarden" },
		{ "ModuleRelativePath", "LightWardenGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightWardenGameMode_SetFireHolder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightWardenGameMode, nullptr, "SetFireHolder", nullptr, nullptr, sizeof(LightWardenGameMode_eventSetFireHolder_Parms), Z_Construct_UFunction_ALightWardenGameMode_SetFireHolder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightWardenGameMode_SetFireHolder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightWardenGameMode_SetFireHolder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightWardenGameMode_SetFireHolder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightWardenGameMode_SetFireHolder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightWardenGameMode_SetFireHolder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALightWardenGameMode_SetPlasmaHolder_Statics
	{
		struct LightWardenGameMode_eventSetPlasmaHolder_Parms
		{
			AActor* NewHolder;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewHolder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALightWardenGameMode_SetPlasmaHolder_Statics::NewProp_NewHolder = { "NewHolder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightWardenGameMode_eventSetPlasmaHolder_Parms, NewHolder), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALightWardenGameMode_SetPlasmaHolder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightWardenGameMode_SetPlasmaHolder_Statics::NewProp_NewHolder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightWardenGameMode_SetPlasmaHolder_Statics::Function_MetaDataParams[] = {
		{ "Category", "LightWarden" },
		{ "ModuleRelativePath", "LightWardenGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightWardenGameMode_SetPlasmaHolder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightWardenGameMode, nullptr, "SetPlasmaHolder", nullptr, nullptr, sizeof(LightWardenGameMode_eventSetPlasmaHolder_Parms), Z_Construct_UFunction_ALightWardenGameMode_SetPlasmaHolder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightWardenGameMode_SetPlasmaHolder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightWardenGameMode_SetPlasmaHolder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightWardenGameMode_SetPlasmaHolder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightWardenGameMode_SetPlasmaHolder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightWardenGameMode_SetPlasmaHolder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALightWardenGameMode_SetSavedOrb_Statics
	{
		struct LightWardenGameMode_eventSetSavedOrb_Parms
		{
			EOrbType NewPlayerOrb;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewPlayerOrb_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewPlayerOrb;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ALightWardenGameMode_SetSavedOrb_Statics::NewProp_NewPlayerOrb_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ALightWardenGameMode_SetSavedOrb_Statics::NewProp_NewPlayerOrb = { "NewPlayerOrb", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightWardenGameMode_eventSetSavedOrb_Parms, NewPlayerOrb), Z_Construct_UEnum_LightWarden_EOrbType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALightWardenGameMode_SetSavedOrb_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightWardenGameMode_SetSavedOrb_Statics::NewProp_NewPlayerOrb_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightWardenGameMode_SetSavedOrb_Statics::NewProp_NewPlayerOrb,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightWardenGameMode_SetSavedOrb_Statics::Function_MetaDataParams[] = {
		{ "Category", "LightWarden" },
		{ "ModuleRelativePath", "LightWardenGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightWardenGameMode_SetSavedOrb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightWardenGameMode, nullptr, "SetSavedOrb", nullptr, nullptr, sizeof(LightWardenGameMode_eventSetSavedOrb_Parms), Z_Construct_UFunction_ALightWardenGameMode_SetSavedOrb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightWardenGameMode_SetSavedOrb_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightWardenGameMode_SetSavedOrb_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightWardenGameMode_SetSavedOrb_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightWardenGameMode_SetSavedOrb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightWardenGameMode_SetSavedOrb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALightWardenGameMode_UpdateOrbHolder_Statics
	{
		struct LightWardenGameMode_eventUpdateOrbHolder_Parms
		{
			EOrbType OrbType;
			AActor* NewOwner;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OrbType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OrbType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ALightWardenGameMode_UpdateOrbHolder_Statics::NewProp_OrbType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ALightWardenGameMode_UpdateOrbHolder_Statics::NewProp_OrbType = { "OrbType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightWardenGameMode_eventUpdateOrbHolder_Parms, OrbType), Z_Construct_UEnum_LightWarden_EOrbType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALightWardenGameMode_UpdateOrbHolder_Statics::NewProp_NewOwner = { "NewOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightWardenGameMode_eventUpdateOrbHolder_Parms, NewOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALightWardenGameMode_UpdateOrbHolder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightWardenGameMode_UpdateOrbHolder_Statics::NewProp_OrbType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightWardenGameMode_UpdateOrbHolder_Statics::NewProp_OrbType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightWardenGameMode_UpdateOrbHolder_Statics::NewProp_NewOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightWardenGameMode_UpdateOrbHolder_Statics::Function_MetaDataParams[] = {
		{ "Category", "LightWarden" },
		{ "ModuleRelativePath", "LightWardenGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightWardenGameMode_UpdateOrbHolder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightWardenGameMode, nullptr, "UpdateOrbHolder", nullptr, nullptr, sizeof(LightWardenGameMode_eventUpdateOrbHolder_Parms), Z_Construct_UFunction_ALightWardenGameMode_UpdateOrbHolder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightWardenGameMode_UpdateOrbHolder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightWardenGameMode_UpdateOrbHolder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightWardenGameMode_UpdateOrbHolder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightWardenGameMode_UpdateOrbHolder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightWardenGameMode_UpdateOrbHolder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALightWardenGameMode_NoRegister()
	{
		return ALightWardenGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ALightWardenGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayerOrb_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerOrb_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayerOrb;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALightWardenGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LightWarden,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALightWardenGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALightWardenGameMode_GetCheckPoint, "GetCheckPoint" }, // 1452473966
		{ &Z_Construct_UFunction_ALightWardenGameMode_GetSavedOrb, "GetSavedOrb" }, // 3975485009
		{ &Z_Construct_UFunction_ALightWardenGameMode_OnPlayerReset, "OnPlayerReset" }, // 1508237079
		{ &Z_Construct_UFunction_ALightWardenGameMode_RestartFromCheckPoint, "RestartFromCheckPoint" }, // 4249953631
		{ &Z_Construct_UFunction_ALightWardenGameMode_SetCheckPoint, "SetCheckPoint" }, // 3412112099
		{ &Z_Construct_UFunction_ALightWardenGameMode_SetElectricHolder, "SetElectricHolder" }, // 112628842
		{ &Z_Construct_UFunction_ALightWardenGameMode_SetFireHolder, "SetFireHolder" }, // 1801548228
		{ &Z_Construct_UFunction_ALightWardenGameMode_SetPlasmaHolder, "SetPlasmaHolder" }, // 43719171
		{ &Z_Construct_UFunction_ALightWardenGameMode_SetSavedOrb, "SetSavedOrb" }, // 2402666400
		{ &Z_Construct_UFunction_ALightWardenGameMode_UpdateOrbHolder, "UpdateOrbHolder" }, // 377977295
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightWardenGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "LightWardenGameMode.h" },
		{ "ModuleRelativePath", "LightWardenGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALightWardenGameMode_Statics::NewProp_PlayerOrb_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightWardenGameMode_Statics::NewProp_PlayerOrb_MetaData[] = {
		{ "Category", "LightWarden" },
		{ "ModuleRelativePath", "LightWardenGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ALightWardenGameMode_Statics::NewProp_PlayerOrb = { "PlayerOrb", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALightWardenGameMode, PlayerOrb), Z_Construct_UEnum_LightWarden_EOrbType, METADATA_PARAMS(Z_Construct_UClass_ALightWardenGameMode_Statics::NewProp_PlayerOrb_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightWardenGameMode_Statics::NewProp_PlayerOrb_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALightWardenGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightWardenGameMode_Statics::NewProp_PlayerOrb_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightWardenGameMode_Statics::NewProp_PlayerOrb,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALightWardenGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALightWardenGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALightWardenGameMode_Statics::ClassParams = {
		&ALightWardenGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALightWardenGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALightWardenGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALightWardenGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALightWardenGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALightWardenGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALightWardenGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALightWardenGameMode, 2541811895);
	template<> LIGHTWARDEN_API UClass* StaticClass<ALightWardenGameMode>()
	{
		return ALightWardenGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALightWardenGameMode(Z_Construct_UClass_ALightWardenGameMode, &ALightWardenGameMode::StaticClass, TEXT("/Script/LightWarden"), TEXT("ALightWardenGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALightWardenGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
