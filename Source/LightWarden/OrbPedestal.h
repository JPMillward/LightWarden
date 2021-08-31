// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractionBase.h"
#include "WardenEnums.h"
#include "OrbPedestal.generated.h"


UCLASS()
class LIGHTWARDEN_API AOrbPedestal : public AInteractionBase
{
	GENERATED_BODY()

public:

	AOrbPedestal();
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EOrbType PedestalOrb = EOrbType::OT_None;

	UFUNCTION(BlueprintCallable, Category = "LightWarden")
	EOrbType GetOrbType();
};
