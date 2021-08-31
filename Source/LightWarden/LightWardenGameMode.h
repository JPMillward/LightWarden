// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Math/Vector.h"
#include "Math/TransformNonVectorized.h"
#include "WardenEnums.h"
#include "GameFramework/GameModeBase.h"
#include "LightWardenGameMode.generated.h"

#define OUT



UCLASS(minimalapi)
class ALightWardenGameMode : public AGameModeBase
{
	GENERATED_BODY()

	AActor* FireHolder;
	AActor* ElectricHolder;
	AActor* PlasmaHolder;

	AActor* SpawnPoint;
	FTransform CheckPointLocation;

	

public:
	ALightWardenGameMode();

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "LightWarden")
	EOrbType PlayerOrb;

	UFUNCTION(BlueprintCallable, Category = "LightWarden")
	EOrbType GetSavedOrb();

	UFUNCTION(BlueprintCallable, Category = "LightWarden")
	void SetSavedOrb(EOrbType NewPlayerOrb);

	UFUNCTION(BlueprintCallable, Category = "LightWarden")
	void OnPlayerReset(AActor* Character);

	UFUNCTION(BlueprintCallable, Category = "LightWarden")
	void SetFireHolder(AActor* NewHolder);

	UFUNCTION(BlueprintCallable, Category = "LightWarden")
	void SetElectricHolder(AActor* NewHolder);

	UFUNCTION(BlueprintCallable, Category = "LightWarden")
	void SetPlasmaHolder(AActor* NewHolder);

	UFUNCTION(BlueprintCallable, Category = "LightWarden")
	void UpdateOrbHolder(EOrbType OrbType, AActor* NewOwner);

	UFUNCTION(BlueprintCallable, Category = "LightWarden")
	void SetCheckPoint(FTransform NewCheck);
	
	UFUNCTION(BlueprintCallable, Category = "LightWarden")
	void RestartFromCheckPoint();

	UFUNCTION(BlueprintCallable, Category = "LightWarden")
	FTransform GetCheckPoint();

};



