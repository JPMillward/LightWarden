// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef LIGHTWARDEN_InteractionBase_generated_h
#error "InteractionBase.generated.h already included, missing '#pragma once' in InteractionBase.h"
#endif
#define LIGHTWARDEN_InteractionBase_generated_h

#define LightWarden_Source_LightWarden_InteractionBase_h_15_SPARSE_DATA
#define LightWarden_Source_LightWarden_InteractionBase_h_15_RPC_WRAPPERS
#define LightWarden_Source_LightWarden_InteractionBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define LightWarden_Source_LightWarden_InteractionBase_h_15_EVENT_PARMS \
	struct InteractionBase_eventOnInteract_Parms \
	{ \
		AActor* InteractCaller; \
	};


#define LightWarden_Source_LightWarden_InteractionBase_h_15_CALLBACK_WRAPPERS
#define LightWarden_Source_LightWarden_InteractionBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractionBase(); \
	friend struct Z_Construct_UClass_AInteractionBase_Statics; \
public: \
	DECLARE_CLASS(AInteractionBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LightWarden"), NO_API) \
	DECLARE_SERIALIZER(AInteractionBase) \
	virtual UObject* _getUObject() const override { return const_cast<AInteractionBase*>(this); }


#define LightWarden_Source_LightWarden_InteractionBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAInteractionBase(); \
	friend struct Z_Construct_UClass_AInteractionBase_Statics; \
public: \
	DECLARE_CLASS(AInteractionBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LightWarden"), NO_API) \
	DECLARE_SERIALIZER(AInteractionBase) \
	virtual UObject* _getUObject() const override { return const_cast<AInteractionBase*>(this); }


#define LightWarden_Source_LightWarden_InteractionBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractionBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractionBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractionBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractionBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractionBase(AInteractionBase&&); \
	NO_API AInteractionBase(const AInteractionBase&); \
public:


#define LightWarden_Source_LightWarden_InteractionBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractionBase(AInteractionBase&&); \
	NO_API AInteractionBase(const AInteractionBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractionBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractionBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractionBase)


#define LightWarden_Source_LightWarden_InteractionBase_h_15_PRIVATE_PROPERTY_OFFSET
#define LightWarden_Source_LightWarden_InteractionBase_h_11_PROLOG \
	LightWarden_Source_LightWarden_InteractionBase_h_15_EVENT_PARMS


#define LightWarden_Source_LightWarden_InteractionBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LightWarden_Source_LightWarden_InteractionBase_h_15_PRIVATE_PROPERTY_OFFSET \
	LightWarden_Source_LightWarden_InteractionBase_h_15_SPARSE_DATA \
	LightWarden_Source_LightWarden_InteractionBase_h_15_RPC_WRAPPERS \
	LightWarden_Source_LightWarden_InteractionBase_h_15_CALLBACK_WRAPPERS \
	LightWarden_Source_LightWarden_InteractionBase_h_15_INCLASS \
	LightWarden_Source_LightWarden_InteractionBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LightWarden_Source_LightWarden_InteractionBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LightWarden_Source_LightWarden_InteractionBase_h_15_PRIVATE_PROPERTY_OFFSET \
	LightWarden_Source_LightWarden_InteractionBase_h_15_SPARSE_DATA \
	LightWarden_Source_LightWarden_InteractionBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	LightWarden_Source_LightWarden_InteractionBase_h_15_CALLBACK_WRAPPERS \
	LightWarden_Source_LightWarden_InteractionBase_h_15_INCLASS_NO_PURE_DECLS \
	LightWarden_Source_LightWarden_InteractionBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIGHTWARDEN_API UClass* StaticClass<class AInteractionBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LightWarden_Source_LightWarden_InteractionBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
