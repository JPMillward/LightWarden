// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
enum class EOrbType : uint8;
class AActor;
#ifdef LIGHTWARDEN_LightWardenGameMode_generated_h
#error "LightWardenGameMode.generated.h already included, missing '#pragma once' in LightWardenGameMode.h"
#endif
#define LIGHTWARDEN_LightWardenGameMode_generated_h

#define LightWarden_Source_LightWarden_LightWardenGameMode_h_19_SPARSE_DATA
#define LightWarden_Source_LightWarden_LightWardenGameMode_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCheckPoint); \
	DECLARE_FUNCTION(execRestartFromCheckPoint); \
	DECLARE_FUNCTION(execSetCheckPoint); \
	DECLARE_FUNCTION(execUpdateOrbHolder); \
	DECLARE_FUNCTION(execSetPlasmaHolder); \
	DECLARE_FUNCTION(execSetElectricHolder); \
	DECLARE_FUNCTION(execSetFireHolder); \
	DECLARE_FUNCTION(execOnPlayerReset); \
	DECLARE_FUNCTION(execSetSavedOrb); \
	DECLARE_FUNCTION(execGetSavedOrb);


#define LightWarden_Source_LightWarden_LightWardenGameMode_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCheckPoint); \
	DECLARE_FUNCTION(execRestartFromCheckPoint); \
	DECLARE_FUNCTION(execSetCheckPoint); \
	DECLARE_FUNCTION(execUpdateOrbHolder); \
	DECLARE_FUNCTION(execSetPlasmaHolder); \
	DECLARE_FUNCTION(execSetElectricHolder); \
	DECLARE_FUNCTION(execSetFireHolder); \
	DECLARE_FUNCTION(execOnPlayerReset); \
	DECLARE_FUNCTION(execSetSavedOrb); \
	DECLARE_FUNCTION(execGetSavedOrb);


#define LightWarden_Source_LightWarden_LightWardenGameMode_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALightWardenGameMode(); \
	friend struct Z_Construct_UClass_ALightWardenGameMode_Statics; \
public: \
	DECLARE_CLASS(ALightWardenGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/LightWarden"), LIGHTWARDEN_API) \
	DECLARE_SERIALIZER(ALightWardenGameMode)


#define LightWarden_Source_LightWarden_LightWardenGameMode_h_19_INCLASS \
private: \
	static void StaticRegisterNativesALightWardenGameMode(); \
	friend struct Z_Construct_UClass_ALightWardenGameMode_Statics; \
public: \
	DECLARE_CLASS(ALightWardenGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/LightWarden"), LIGHTWARDEN_API) \
	DECLARE_SERIALIZER(ALightWardenGameMode)


#define LightWarden_Source_LightWarden_LightWardenGameMode_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LIGHTWARDEN_API ALightWardenGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALightWardenGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIGHTWARDEN_API, ALightWardenGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightWardenGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LIGHTWARDEN_API ALightWardenGameMode(ALightWardenGameMode&&); \
	LIGHTWARDEN_API ALightWardenGameMode(const ALightWardenGameMode&); \
public:


#define LightWarden_Source_LightWarden_LightWardenGameMode_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LIGHTWARDEN_API ALightWardenGameMode(ALightWardenGameMode&&); \
	LIGHTWARDEN_API ALightWardenGameMode(const ALightWardenGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIGHTWARDEN_API, ALightWardenGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightWardenGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALightWardenGameMode)


#define LightWarden_Source_LightWarden_LightWardenGameMode_h_19_PRIVATE_PROPERTY_OFFSET
#define LightWarden_Source_LightWarden_LightWardenGameMode_h_16_PROLOG
#define LightWarden_Source_LightWarden_LightWardenGameMode_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LightWarden_Source_LightWarden_LightWardenGameMode_h_19_PRIVATE_PROPERTY_OFFSET \
	LightWarden_Source_LightWarden_LightWardenGameMode_h_19_SPARSE_DATA \
	LightWarden_Source_LightWarden_LightWardenGameMode_h_19_RPC_WRAPPERS \
	LightWarden_Source_LightWarden_LightWardenGameMode_h_19_INCLASS \
	LightWarden_Source_LightWarden_LightWardenGameMode_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LightWarden_Source_LightWarden_LightWardenGameMode_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LightWarden_Source_LightWarden_LightWardenGameMode_h_19_PRIVATE_PROPERTY_OFFSET \
	LightWarden_Source_LightWarden_LightWardenGameMode_h_19_SPARSE_DATA \
	LightWarden_Source_LightWarden_LightWardenGameMode_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	LightWarden_Source_LightWarden_LightWardenGameMode_h_19_INCLASS_NO_PURE_DECLS \
	LightWarden_Source_LightWarden_LightWardenGameMode_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIGHTWARDEN_API UClass* StaticClass<class ALightWardenGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LightWarden_Source_LightWarden_LightWardenGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
