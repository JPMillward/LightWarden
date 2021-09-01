// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIGHTWARDEN_WardenEnums_generated_h
#error "WardenEnums.generated.h already included, missing '#pragma once' in WardenEnums.h"
#endif
#define LIGHTWARDEN_WardenEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LightWarden_Source_LightWarden_WardenEnums_h


#define FOREACH_ENUM_EPLATFORMTYPE(op) \
	op(EPlatformType::PT_Normal) \
	op(EPlatformType::PT_Fire) \
	op(EPlatformType::PT_Electric) \
	op(EPlatformType::PT_Plasma) \
	op(EPlatformType::PT_Lock) 

enum class EPlatformType : uint8;
template<> LIGHTWARDEN_API UEnum* StaticEnum<EPlatformType>();

#define FOREACH_ENUM_EORBTYPE(op) \
	op(EOrbType::OT_None) \
	op(EOrbType::OT_Fire) \
	op(EOrbType::OT_Electric) \
	op(EOrbType::OT_Plasma) 

enum class EOrbType : uint8;
template<> LIGHTWARDEN_API UEnum* StaticEnum<EOrbType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
