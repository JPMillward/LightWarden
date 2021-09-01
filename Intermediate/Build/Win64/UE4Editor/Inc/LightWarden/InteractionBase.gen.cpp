// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LightWarden/InteractionBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionBase() {}
// Cross Module References
	LIGHTWARDEN_API UClass* Z_Construct_UClass_AInteractionBase_NoRegister();
	LIGHTWARDEN_API UClass* Z_Construct_UClass_AInteractionBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LightWarden();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LIGHTWARDEN_API UClass* Z_Construct_UClass_UInteractionInterface_NoRegister();
// End Cross Module References
	static FName NAME_AInteractionBase_EndFocus = FName(TEXT("EndFocus"));
	void AInteractionBase::EndFocus()
	{
		ProcessEvent(FindFunctionChecked(NAME_AInteractionBase_EndFocus),NULL);
	}
	static FName NAME_AInteractionBase_OnInteract = FName(TEXT("OnInteract"));
	void AInteractionBase::OnInteract(AActor* InteractCaller)
	{
		InteractionBase_eventOnInteract_Parms Parms;
		Parms.InteractCaller=InteractCaller;
		ProcessEvent(FindFunctionChecked(NAME_AInteractionBase_OnInteract),&Parms);
	}
	static FName NAME_AInteractionBase_StartFocus = FName(TEXT("StartFocus"));
	void AInteractionBase::StartFocus()
	{
		ProcessEvent(FindFunctionChecked(NAME_AInteractionBase_StartFocus),NULL);
	}
	void AInteractionBase::StaticRegisterNativesAInteractionBase()
	{
	}
	struct Z_Construct_UFunction_AInteractionBase_EndFocus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractionBase_EndFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "InteractionBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractionBase_EndFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractionBase, nullptr, "EndFocus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractionBase_EndFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionBase_EndFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractionBase_EndFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractionBase_EndFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractionBase_OnInteract_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractCaller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractionBase_OnInteract_Statics::NewProp_InteractCaller = { "InteractCaller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionBase_eventOnInteract_Parms, InteractCaller), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractionBase_OnInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractionBase_OnInteract_Statics::NewProp_InteractCaller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractionBase_OnInteract_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "InteractionBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractionBase_OnInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractionBase, nullptr, "OnInteract", nullptr, nullptr, sizeof(InteractionBase_eventOnInteract_Parms), Z_Construct_UFunction_AInteractionBase_OnInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionBase_OnInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractionBase_OnInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionBase_OnInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractionBase_OnInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractionBase_OnInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractionBase_StartFocus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractionBase_StartFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "InteractionBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractionBase_StartFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractionBase, nullptr, "StartFocus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractionBase_StartFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionBase_StartFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractionBase_StartFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractionBase_StartFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AInteractionBase_NoRegister()
	{
		return AInteractionBase::StaticClass();
	}
	struct Z_Construct_UClass_AInteractionBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractionBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LightWarden,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AInteractionBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AInteractionBase_EndFocus, "EndFocus" }, // 3867862355
		{ &Z_Construct_UFunction_AInteractionBase_OnInteract, "OnInteract" }, // 1045496585
		{ &Z_Construct_UFunction_AInteractionBase_StartFocus, "StartFocus" }, // 3785876446
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InteractionBase.h" },
		{ "ModuleRelativePath", "InteractionBase.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AInteractionBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractionInterface_NoRegister, (int32)VTABLE_OFFSET(AInteractionBase, IInteractionInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractionBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractionBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInteractionBase_Statics::ClassParams = {
		&AInteractionBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInteractionBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractionBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInteractionBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInteractionBase, 3957277324);
	template<> LIGHTWARDEN_API UClass* StaticClass<AInteractionBase>()
	{
		return AInteractionBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteractionBase(Z_Construct_UClass_AInteractionBase, &AInteractionBase::StaticClass, TEXT("/Script/LightWarden"), TEXT("AInteractionBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractionBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
