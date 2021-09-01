// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EOrbType : uint8;
#ifdef LIGHTWARDEN_LightWardenCharacter_generated_h
#error "LightWardenCharacter.generated.h already included, missing '#pragma once' in LightWardenCharacter.h"
#endif
#define LIGHTWARDEN_LightWardenCharacter_generated_h

#define LightWarden_Source_LightWarden_LightWardenCharacter_h_13_SPARSE_DATA
#define LightWarden_Source_LightWarden_LightWardenCharacter_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWhenDestroyed); \
	DECLARE_FUNCTION(execDoesHaveOrb); \
	DECLARE_FUNCTION(execSetPlayerOrb); \
	DECLARE_FUNCTION(execGetPlayerOrb);


#define LightWarden_Source_LightWarden_LightWardenCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWhenDestroyed); \
	DECLARE_FUNCTION(execDoesHaveOrb); \
	DECLARE_FUNCTION(execSetPlayerOrb); \
	DECLARE_FUNCTION(execGetPlayerOrb);


#define LightWarden_Source_LightWarden_LightWardenCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALightWardenCharacter(); \
	friend struct Z_Construct_UClass_ALightWardenCharacter_Statics; \
public: \
	DECLARE_CLASS(ALightWardenCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LightWarden"), NO_API) \
	DECLARE_SERIALIZER(ALightWardenCharacter)


#define LightWarden_Source_LightWarden_LightWardenCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesALightWardenCharacter(); \
	friend struct Z_Construct_UClass_ALightWardenCharacter_Statics; \
public: \
	DECLARE_CLASS(ALightWardenCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LightWarden"), NO_API) \
	DECLARE_SERIALIZER(ALightWardenCharacter)


#define LightWarden_Source_LightWarden_LightWardenCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALightWardenCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALightWardenCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALightWardenCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightWardenCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALightWardenCharacter(ALightWardenCharacter&&); \
	NO_API ALightWardenCharacter(const ALightWardenCharacter&); \
public:


#define LightWarden_Source_LightWarden_LightWardenCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALightWardenCharacter(ALightWardenCharacter&&); \
	NO_API ALightWardenCharacter(const ALightWardenCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALightWardenCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightWardenCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALightWardenCharacter)


#define LightWarden_Source_LightWarden_LightWardenCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ALightWardenCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ALightWardenCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__PlayerReach() { return STRUCT_OFFSET(ALightWardenCharacter, PlayerReach); }


#define LightWarden_Source_LightWarden_LightWardenCharacter_h_10_PROLOG
#define LightWarden_Source_LightWarden_LightWardenCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LightWarden_Source_LightWarden_LightWardenCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	LightWarden_Source_LightWarden_LightWardenCharacter_h_13_SPARSE_DATA \
	LightWarden_Source_LightWarden_LightWardenCharacter_h_13_RPC_WRAPPERS \
	LightWarden_Source_LightWarden_LightWardenCharacter_h_13_INCLASS \
	LightWarden_Source_LightWarden_LightWardenCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LightWarden_Source_LightWarden_LightWardenCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LightWarden_Source_LightWarden_LightWardenCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	LightWarden_Source_LightWarden_LightWardenCharacter_h_13_SPARSE_DATA \
	LightWarden_Source_LightWarden_LightWardenCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	LightWarden_Source_LightWarden_LightWardenCharacter_h_13_INCLASS_NO_PURE_DECLS \
	LightWarden_Source_LightWarden_LightWardenCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIGHTWARDEN_API UClass* StaticClass<class ALightWardenCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LightWarden_Source_LightWarden_LightWardenCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
