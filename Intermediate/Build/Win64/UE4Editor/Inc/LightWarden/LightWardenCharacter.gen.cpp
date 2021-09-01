// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LightWarden/LightWardenCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightWardenCharacter() {}
// Cross Module References
	LIGHTWARDEN_API UClass* Z_Construct_UClass_ALightWardenCharacter_NoRegister();
	LIGHTWARDEN_API UClass* Z_Construct_UClass_ALightWardenCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_LightWarden();
	LIGHTWARDEN_API UEnum* Z_Construct_UEnum_LightWarden_EOrbType();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ALightWardenCharacter::execWhenDestroyed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WhenDestroyed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALightWardenCharacter::execDoesHaveOrb)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoesHaveOrb();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALightWardenCharacter::execSetPlayerOrb)
	{
		P_GET_ENUM(EOrbType,Z_Param_SavedOrb);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerOrb(EOrbType(Z_Param_SavedOrb));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALightWardenCharacter::execGetPlayerOrb)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOrbType*)Z_Param__Result=P_THIS->GetPlayerOrb();
		P_NATIVE_END;
	}
	void ALightWardenCharacter::StaticRegisterNativesALightWardenCharacter()
	{
		UClass* Class = ALightWardenCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DoesHaveOrb", &ALightWardenCharacter::execDoesHaveOrb },
			{ "GetPlayerOrb", &ALightWardenCharacter::execGetPlayerOrb },
			{ "SetPlayerOrb", &ALightWardenCharacter::execSetPlayerOrb },
			{ "WhenDestroyed", &ALightWardenCharacter::execWhenDestroyed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALightWardenCharacter_DoesHaveOrb_Statics
	{
		struct LightWardenCharacter_eventDoesHaveOrb_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ALightWardenCharacter_DoesHaveOrb_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LightWardenCharacter_eventDoesHaveOrb_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALightWardenCharacter_DoesHaveOrb_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LightWardenCharacter_eventDoesHaveOrb_Parms), &Z_Construct_UFunction_ALightWardenCharacter_DoesHaveOrb_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALightWardenCharacter_DoesHaveOrb_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightWardenCharacter_DoesHaveOrb_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightWardenCharacter_DoesHaveOrb_Statics::Function_MetaDataParams[] = {
		{ "Category", "LightWarden" },
		{ "ModuleRelativePath", "LightWardenCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightWardenCharacter_DoesHaveOrb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightWardenCharacter, nullptr, "DoesHaveOrb", nullptr, nullptr, sizeof(LightWardenCharacter_eventDoesHaveOrb_Parms), Z_Construct_UFunction_ALightWardenCharacter_DoesHaveOrb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightWardenCharacter_DoesHaveOrb_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightWardenCharacter_DoesHaveOrb_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightWardenCharacter_DoesHaveOrb_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightWardenCharacter_DoesHaveOrb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightWardenCharacter_DoesHaveOrb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALightWardenCharacter_GetPlayerOrb_Statics
	{
		struct LightWardenCharacter_eventGetPlayerOrb_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ALightWardenCharacter_GetPlayerOrb_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ALightWardenCharacter_GetPlayerOrb_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightWardenCharacter_eventGetPlayerOrb_Parms, ReturnValue), Z_Construct_UEnum_LightWarden_EOrbType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALightWardenCharacter_GetPlayerOrb_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightWardenCharacter_GetPlayerOrb_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightWardenCharacter_GetPlayerOrb_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightWardenCharacter_GetPlayerOrb_Statics::Function_MetaDataParams[] = {
		{ "Category", "LightWarden" },
		{ "ModuleRelativePath", "LightWardenCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightWardenCharacter_GetPlayerOrb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightWardenCharacter, nullptr, "GetPlayerOrb", nullptr, nullptr, sizeof(LightWardenCharacter_eventGetPlayerOrb_Parms), Z_Construct_UFunction_ALightWardenCharacter_GetPlayerOrb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightWardenCharacter_GetPlayerOrb_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightWardenCharacter_GetPlayerOrb_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightWardenCharacter_GetPlayerOrb_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightWardenCharacter_GetPlayerOrb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightWardenCharacter_GetPlayerOrb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALightWardenCharacter_SetPlayerOrb_Statics
	{
		struct LightWardenCharacter_eventSetPlayerOrb_Parms
		{
			EOrbType SavedOrb;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SavedOrb_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SavedOrb;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ALightWardenCharacter_SetPlayerOrb_Statics::NewProp_SavedOrb_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ALightWardenCharacter_SetPlayerOrb_Statics::NewProp_SavedOrb = { "SavedOrb", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightWardenCharacter_eventSetPlayerOrb_Parms, SavedOrb), Z_Construct_UEnum_LightWarden_EOrbType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALightWardenCharacter_SetPlayerOrb_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightWardenCharacter_SetPlayerOrb_Statics::NewProp_SavedOrb_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightWardenCharacter_SetPlayerOrb_Statics::NewProp_SavedOrb,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightWardenCharacter_SetPlayerOrb_Statics::Function_MetaDataParams[] = {
		{ "Category", "LightWarden" },
		{ "ModuleRelativePath", "LightWardenCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightWardenCharacter_SetPlayerOrb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightWardenCharacter, nullptr, "SetPlayerOrb", nullptr, nullptr, sizeof(LightWardenCharacter_eventSetPlayerOrb_Parms), Z_Construct_UFunction_ALightWardenCharacter_SetPlayerOrb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightWardenCharacter_SetPlayerOrb_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightWardenCharacter_SetPlayerOrb_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightWardenCharacter_SetPlayerOrb_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightWardenCharacter_SetPlayerOrb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightWardenCharacter_SetPlayerOrb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALightWardenCharacter_WhenDestroyed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightWardenCharacter_WhenDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LightWardenCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightWardenCharacter_WhenDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightWardenCharacter, nullptr, "WhenDestroyed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightWardenCharacter_WhenDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightWardenCharacter_WhenDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightWardenCharacter_WhenDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightWardenCharacter_WhenDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALightWardenCharacter_NoRegister()
	{
		return ALightWardenCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ALightWardenCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayerOrbSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerOrbSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayerOrbSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerReach_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerReach;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALightWardenCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_LightWarden,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALightWardenCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALightWardenCharacter_DoesHaveOrb, "DoesHaveOrb" }, // 4130959812
		{ &Z_Construct_UFunction_ALightWardenCharacter_GetPlayerOrb, "GetPlayerOrb" }, // 3500150638
		{ &Z_Construct_UFunction_ALightWardenCharacter_SetPlayerOrb, "SetPlayerOrb" }, // 2373284119
		{ &Z_Construct_UFunction_ALightWardenCharacter_WhenDestroyed, "WhenDestroyed" }, // 226765772
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightWardenCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "LightWardenCharacter.h" },
		{ "ModuleRelativePath", "LightWardenCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightWardenCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LightWardenCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALightWardenCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALightWardenCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALightWardenCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightWardenCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightWardenCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LightWardenCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALightWardenCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALightWardenCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALightWardenCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightWardenCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightWardenCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "LightWardenCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALightWardenCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALightWardenCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_ALightWardenCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightWardenCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightWardenCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "LightWardenCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALightWardenCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALightWardenCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_ALightWardenCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightWardenCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALightWardenCharacter_Statics::NewProp_PlayerOrbSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightWardenCharacter_Statics::NewProp_PlayerOrbSlot_MetaData[] = {
		{ "Category", "LightWarden" },
		{ "ModuleRelativePath", "LightWardenCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ALightWardenCharacter_Statics::NewProp_PlayerOrbSlot = { "PlayerOrbSlot", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALightWardenCharacter, PlayerOrbSlot), Z_Construct_UEnum_LightWarden_EOrbType, METADATA_PARAMS(Z_Construct_UClass_ALightWardenCharacter_Statics::NewProp_PlayerOrbSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightWardenCharacter_Statics::NewProp_PlayerOrbSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightWardenCharacter_Statics::NewProp_PlayerReach_MetaData[] = {
		{ "Category", "Interact" },
		{ "Comment", "/* float to determine player reach for safety*/" },
		{ "ModuleRelativePath", "LightWardenCharacter.h" },
		{ "ToolTip", "float to determine player reach for safety" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALightWardenCharacter_Statics::NewProp_PlayerReach = { "PlayerReach", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALightWardenCharacter, PlayerReach), METADATA_PARAMS(Z_Construct_UClass_ALightWardenCharacter_Statics::NewProp_PlayerReach_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightWardenCharacter_Statics::NewProp_PlayerReach_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALightWardenCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightWardenCharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightWardenCharacter_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightWardenCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightWardenCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightWardenCharacter_Statics::NewProp_PlayerOrbSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightWardenCharacter_Statics::NewProp_PlayerOrbSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightWardenCharacter_Statics::NewProp_PlayerReach,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALightWardenCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALightWardenCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALightWardenCharacter_Statics::ClassParams = {
		&ALightWardenCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALightWardenCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALightWardenCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALightWardenCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALightWardenCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALightWardenCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALightWardenCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALightWardenCharacter, 3944833602);
	template<> LIGHTWARDEN_API UClass* StaticClass<ALightWardenCharacter>()
	{
		return ALightWardenCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALightWardenCharacter(Z_Construct_UClass_ALightWardenCharacter, &ALightWardenCharacter::StaticClass, TEXT("/Script/LightWarden"), TEXT("ALightWardenCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALightWardenCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
