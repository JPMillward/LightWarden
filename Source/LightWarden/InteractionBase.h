// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractionInterface.h"
#include "WardenEnums.h"
#include "InteractionBase.generated.h"

UCLASS()
class LIGHTWARDEN_API AInteractionBase : public AActor, public IInteractionInterface

{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractionBase();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Interaction")
	void OnInteract(AActor* InteractCaller);
	virtual void OnInteract_Implementation(AActor* InteractCaller);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Interaction")
	void StartFocus();
	virtual void StartFocus_Implementation();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Interaction")
	void EndFocus();
	virtual void EndFocus_Implementation();
};
