// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 **/

UENUM(BlueprintType)
enum class EOrbType : uint8
{
	OT_None		UMETA(DisplayName = "No Orb"),
	OT_Fire		UMETA(DisplayName = "Fire"),
	OT_Electric	UMETA(DisplayName = "Electric"),
	OT_Plasma	UMETA(DisplayName = "Plasma"),

};

UENUM(BlueprintType)
enum class EPlatformType : uint8
{
	PT_Normal		UMETA(DisplayName = "Normal Platform"),
	PT_Fire			UMETA(DisplayName = "Fire Platform"),
	PT_Electric		UMETA(DisplayName = "Electric Platform"),
	PT_Plasma		UMETA(DisplayName = "Plasma Platform"),
	PT_Lock			UMETA(DisplayName = "Locked Platform"),
};