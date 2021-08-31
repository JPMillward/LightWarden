// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WardenEnums.h"
#include "OrbLight.generated.h"

UCLASS()
class LIGHTWARDEN_API AOrbLight : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AOrbLight();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LightWarden")
	EOrbType OrbColor;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
