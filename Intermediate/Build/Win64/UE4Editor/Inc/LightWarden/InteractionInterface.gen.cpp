// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LightWarden/InteractionInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionInterface() {}
// Cross Module References
	LIGHTWARDEN_API UClass* Z_Construct_UClass_UInteractionInterface_NoRegister();
	LIGHTWARDEN_API UClass* Z_Construct_UClass_UInteractionInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_LightWarden();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IInteractionInterface::execEndFocus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndFocus_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInteractionInterface::execStartFocus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartFocus_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInteractionInterface::execOnInteract)
	{
		P_GET_OBJECT(AActor,Z_Param_InteractCaller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInteract_Implementation(Z_Param_InteractCaller);
		P_NATIVE_END;
	}
	void IInteractionInterface::EndFocus()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_EndFocus instead.");
	}
	void IInteractionInterface::OnInteract(AActor* InteractCaller)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnInteract instead.");
	}
	void IInteractionInterface::StartFocus()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_StartFocus instead.");
	}
	void UInteractionInterface::StaticRegisterNativesUInteractionInterface()
	{
		UClass* Class = UInteractionInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndFocus", &IInteractionInterface::execEndFocus },
			{ "OnInteract", &IInteractionInterface::execOnInteract },
			{ "StartFocus", &IInteractionInterface::execStartFocus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractionInterface_EndFocus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionInterface_EndFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "InteractionInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionInterface_EndFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionInterface, nullptr, "EndFocus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionInterface_EndFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_EndFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionInterface_EndFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionInterface_EndFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionInterface_OnInteract_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractCaller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionInterface_OnInteract_Statics::NewProp_InteractCaller = { "InteractCaller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionInterface_eventOnInteract_Parms, InteractCaller), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionInterface_OnInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionInterface_OnInteract_Statics::NewProp_InteractCaller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionInterface_OnInteract_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "InteractionInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionInterface_OnInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionInterface, nullptr, "OnInteract", nullptr, nullptr, sizeof(InteractionInterface_eventOnInteract_Parms), Z_Construct_UFunction_UInteractionInterface_OnInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_OnInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionInterface_OnInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_OnInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionInterface_OnInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionInterface_OnInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionInterface_StartFocus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionInterface_StartFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "InteractionInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionInterface_StartFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionInterface, nullptr, "StartFocus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionInterface_StartFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_StartFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionInterface_StartFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionInterface_StartFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteractionInterface_NoRegister()
	{
		return UInteractionInterface::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_LightWarden,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractionInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionInterface_EndFocus, "EndFocus" }, // 1668448010
		{ &Z_Construct_UFunction_UInteractionInterface_OnInteract, "OnInteract" }, // 3163717854
		{ &Z_Construct_UFunction_UInteractionInterface_StartFocus, "StartFocus" }, // 2722768716
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "InteractionInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractionInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractionInterface_Statics::ClassParams = {
		&UInteractionInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractionInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractionInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractionInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractionInterface, 1055390923);
	template<> LIGHTWARDEN_API UClass* StaticClass<UInteractionInterface>()
	{
		return UInteractionInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractionInterface(Z_Construct_UClass_UInteractionInterface, &UInteractionInterface::StaticClass, TEXT("/Script/LightWarden"), TEXT("UInteractionInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionInterface);
	static FName NAME_UInteractionInterface_EndFocus = FName(TEXT("EndFocus"));
	void IInteractionInterface::Execute_EndFocus(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractionInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInteractionInterface_EndFocus);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IInteractionInterface*)(O->GetNativeInterfaceAddress(UInteractionInterface::StaticClass())))
		{
			I->EndFocus_Implementation();
		}
	}
	static FName NAME_UInteractionInterface_OnInteract = FName(TEXT("OnInteract"));
	void IInteractionInterface::Execute_OnInteract(UObject* O, AActor* InteractCaller)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractionInterface::StaticClass()));
		InteractionInterface_eventOnInteract_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInteractionInterface_OnInteract);
		if (Func)
		{
			Parms.InteractCaller=InteractCaller;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInteractionInterface*)(O->GetNativeInterfaceAddress(UInteractionInterface::StaticClass())))
		{
			I->OnInteract_Implementation(InteractCaller);
		}
	}
	static FName NAME_UInteractionInterface_StartFocus = FName(TEXT("StartFocus"));
	void IInteractionInterface::Execute_StartFocus(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractionInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInteractionInterface_StartFocus);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IInteractionInterface*)(O->GetNativeInterfaceAddress(UInteractionInterface::StaticClass())))
		{
			I->StartFocus_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
