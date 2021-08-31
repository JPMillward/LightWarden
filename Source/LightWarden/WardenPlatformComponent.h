// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WardenEnums.h"
#include "Math/TransformNonVectorized.h"
#include "Components/ActorComponent.h"
#include "WardenPlatformComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LIGHTWARDEN_API UWardenPlatformComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	
	UPROPERTY();
	bool bIsVisible;

	UPROPERTY();
	bool bCanCollide;

	UPROPERTY();
	float FadeTime;
	

public:	
	// Sets default values for this component's properties
	UWardenPlatformComponent();
	

	UPROPERTY(BlueprintReadOnly)
	FTransform PlatformTransform;

	UPROPERTY(BlueprintReadOnly)
	FVector PlatformLocation;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	EPlatformType PlatformType;
	
	UPROPERTY(BlueprintReadOnly)
	EOrbType PlatformOrb;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool IsPlatformActive;
	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void ToggleVisible();

	void ToggleCollision();

	void FlipFlop();

	void MapOrbType();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
		
};
