// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef LIGHTWARDEN_InteractionInterface_generated_h
#error "InteractionInterface.generated.h already included, missing '#pragma once' in InteractionInterface.h"
#endif
#define LIGHTWARDEN_InteractionInterface_generated_h

#define LightWarden_Source_LightWarden_InteractionInterface_h_13_SPARSE_DATA
#define LightWarden_Source_LightWarden_InteractionInterface_h_13_RPC_WRAPPERS \
	virtual void EndFocus_Implementation() {}; \
	virtual void StartFocus_Implementation() {}; \
	virtual void OnInteract_Implementation(AActor* InteractCaller) {}; \
 \
	DECLARE_FUNCTION(execEndFocus); \
	DECLARE_FUNCTION(execStartFocus); \
	DECLARE_FUNCTION(execOnInteract);


#define LightWarden_Source_LightWarden_InteractionInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void EndFocus_Implementation() {}; \
	virtual void StartFocus_Implementation() {}; \
	virtual void OnInteract_Implementation(AActor* InteractCaller) {}; \
 \
	DECLARE_FUNCTION(execEndFocus); \
	DECLARE_FUNCTION(execStartFocus); \
	DECLARE_FUNCTION(execOnInteract);


#define LightWarden_Source_LightWarden_InteractionInterface_h_13_EVENT_PARMS \
	struct InteractionInterface_eventOnInteract_Parms \
	{ \
		AActor* InteractCaller; \
	};


#define LightWarden_Source_LightWarden_InteractionInterface_h_13_CALLBACK_WRAPPERS
#define LightWarden_Source_LightWarden_InteractionInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LIGHTWARDEN_API UInteractionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIGHTWARDEN_API, UInteractionInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LIGHTWARDEN_API UInteractionInterface(UInteractionInterface&&); \
	LIGHTWARDEN_API UInteractionInterface(const UInteractionInterface&); \
public:


#define LightWarden_Source_LightWarden_InteractionInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LIGHTWARDEN_API UInteractionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LIGHTWARDEN_API UInteractionInterface(UInteractionInterface&&); \
	LIGHTWARDEN_API UInteractionInterface(const UInteractionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIGHTWARDEN_API, UInteractionInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionInterface)


#define LightWarden_Source_LightWarden_InteractionInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractionInterface(); \
	friend struct Z_Construct_UClass_UInteractionInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/LightWarden"), LIGHTWARDEN_API) \
	DECLARE_SERIALIZER(UInteractionInterface)


#define LightWarden_Source_LightWarden_InteractionInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	LightWarden_Source_LightWarden_InteractionInterface_h_13_GENERATED_UINTERFACE_BODY() \
	LightWarden_Source_LightWarden_InteractionInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LightWarden_Source_LightWarden_InteractionInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	LightWarden_Source_LightWarden_InteractionInterface_h_13_GENERATED_UINTERFACE_BODY() \
	LightWarden_Source_LightWarden_InteractionInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LightWarden_Source_LightWarden_InteractionInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractionInterface() {} \
public: \
	typedef UInteractionInterface UClassType; \
	typedef IInteractionInterface ThisClass; \
	static void Execute_EndFocus(UObject* O); \
	static void Execute_OnInteract(UObject* O, AActor* InteractCaller); \
	static void Execute_StartFocus(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define LightWarden_Source_LightWarden_InteractionInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractionInterface() {} \
public: \
	typedef UInteractionInterface UClassType; \
	typedef IInteractionInterface ThisClass; \
	static void Execute_EndFocus(UObject* O); \
	static void Execute_OnInteract(UObject* O, AActor* InteractCaller); \
	static void Execute_StartFocus(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define LightWarden_Source_LightWarden_InteractionInterface_h_10_PROLOG \
	LightWarden_Source_LightWarden_InteractionInterface_h_13_EVENT_PARMS


#define LightWarden_Source_LightWarden_InteractionInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LightWarden_Source_LightWarden_InteractionInterface_h_13_SPARSE_DATA \
	LightWarden_Source_LightWarden_InteractionInterface_h_13_RPC_WRAPPERS \
	LightWarden_Source_LightWarden_InteractionInterface_h_13_CALLBACK_WRAPPERS \
	LightWarden_Source_LightWarden_InteractionInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LightWarden_Source_LightWarden_InteractionInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LightWarden_Source_LightWarden_InteractionInterface_h_13_SPARSE_DATA \
	LightWarden_Source_LightWarden_InteractionInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	LightWarden_Source_LightWarden_InteractionInterface_h_13_CALLBACK_WRAPPERS \
	LightWarden_Source_LightWarden_InteractionInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIGHTWARDEN_API UClass* StaticClass<class UInteractionInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LightWarden_Source_LightWarden_InteractionInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
