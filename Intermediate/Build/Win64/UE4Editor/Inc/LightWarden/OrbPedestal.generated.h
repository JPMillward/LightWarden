// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EOrbType : uint8;
#ifdef LIGHTWARDEN_OrbPedestal_generated_h
#error "OrbPedestal.generated.h already included, missing '#pragma once' in OrbPedestal.h"
#endif
#define LIGHTWARDEN_OrbPedestal_generated_h

#define LightWarden_Source_LightWarden_OrbPedestal_h_14_SPARSE_DATA
#define LightWarden_Source_LightWarden_OrbPedestal_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOrbType);


#define LightWarden_Source_LightWarden_OrbPedestal_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOrbType);


#define LightWarden_Source_LightWarden_OrbPedestal_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOrbPedestal(); \
	friend struct Z_Construct_UClass_AOrbPedestal_Statics; \
public: \
	DECLARE_CLASS(AOrbPedestal, AInteractionBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LightWarden"), NO_API) \
	DECLARE_SERIALIZER(AOrbPedestal)


#define LightWarden_Source_LightWarden_OrbPedestal_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAOrbPedestal(); \
	friend struct Z_Construct_UClass_AOrbPedestal_Statics; \
public: \
	DECLARE_CLASS(AOrbPedestal, AInteractionBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LightWarden"), NO_API) \
	DECLARE_SERIALIZER(AOrbPedestal)


#define LightWarden_Source_LightWarden_OrbPedestal_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOrbPedestal(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOrbPedestal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOrbPedestal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOrbPedestal); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOrbPedestal(AOrbPedestal&&); \
	NO_API AOrbPedestal(const AOrbPedestal&); \
public:


#define LightWarden_Source_LightWarden_OrbPedestal_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOrbPedestal(AOrbPedestal&&); \
	NO_API AOrbPedestal(const AOrbPedestal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOrbPedestal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOrbPedestal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOrbPedestal)


#define LightWarden_Source_LightWarden_OrbPedestal_h_14_PRIVATE_PROPERTY_OFFSET
#define LightWarden_Source_LightWarden_OrbPedestal_h_11_PROLOG
#define LightWarden_Source_LightWarden_OrbPedestal_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LightWarden_Source_LightWarden_OrbPedestal_h_14_PRIVATE_PROPERTY_OFFSET \
	LightWarden_Source_LightWarden_OrbPedestal_h_14_SPARSE_DATA \
	LightWarden_Source_LightWarden_OrbPedestal_h_14_RPC_WRAPPERS \
	LightWarden_Source_LightWarden_OrbPedestal_h_14_INCLASS \
	LightWarden_Source_LightWarden_OrbPedestal_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LightWarden_Source_LightWarden_OrbPedestal_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LightWarden_Source_LightWarden_OrbPedestal_h_14_PRIVATE_PROPERTY_OFFSET \
	LightWarden_Source_LightWarden_OrbPedestal_h_14_SPARSE_DATA \
	LightWarden_Source_LightWarden_OrbPedestal_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	LightWarden_Source_LightWarden_OrbPedestal_h_14_INCLASS_NO_PURE_DECLS \
	LightWarden_Source_LightWarden_OrbPedestal_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIGHTWARDEN_API UClass* StaticClass<class AOrbPedestal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LightWarden_Source_LightWarden_OrbPedestal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
