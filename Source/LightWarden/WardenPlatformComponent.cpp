// Fill out your copyright notice in the Description page of Project Settings.


#include "GameFramework/Actor.h"

#include "WardenPlatformComponent.h"

// Sets default values for this component's properties
UWardenPlatformComponent::UWardenPlatformComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	// ...

}


// Called when the game starts
void UWardenPlatformComponent::BeginPlay()
{
	Super::BeginPlay();
	
	if (GetOwner())
	{
		PlatformTransform = GetOwner()->GetActorTransform();
		PlatformLocation = PlatformTransform.GetLocation();
		UE_LOG(LogTemp, Warning, TEXT("%s Location: %s"), *GetOwner()->GetName(), *PlatformLocation.ToString());
	}
	
	MapOrbType();
	
	UE_LOG(LogTemp, Warning, TEXT("Owner Is: %s"), *GetOwner()->GetName());
	//bIsVisible = true;
	//bCanCollide = true;
	//UE_LOG(LogTemp, Warning, TEXT("Attempting to Get Values: %d"), bIsVisible);

	//FlipFlop();

}


// Called every frame
void UWardenPlatformComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


void UWardenPlatformComponent::ToggleVisible()
{
	if (bIsVisible)
	{
		GetOwner()->SetActorHiddenInGame(true);
		bIsVisible = false;

		UE_LOG(LogTemp, Warning, TEXT("Attempting to Get Values Attempt 2: %d"), bIsVisible);
		return;
	}

	GetOwner()->SetActorHiddenInGame(false);
	bIsVisible = true;

	UE_LOG(LogTemp, Warning, TEXT("Attempting to Get Values Attempt 2: %d"), bIsVisible);
	return;
}

void UWardenPlatformComponent::ToggleCollision()
{

	if (bCanCollide)
	{
		GetOwner()->SetActorEnableCollision(false);
		bCanCollide = false;

		UE_LOG(LogTemp, Warning, TEXT("Attempting to Get Values Attempt 2: %d"), bCanCollide);
		return;
	}

	GetOwner()->SetActorEnableCollision(true);
	bCanCollide = true;

	UE_LOG(LogTemp, Warning, TEXT("Attempting to Get Values Attempt 2: %d"), bCanCollide);
	return;
}


void UWardenPlatformComponent::FlipFlop()
{
	ToggleCollision();
	ToggleVisible();
}

void UWardenPlatformComponent::MapOrbType()
{
	if (PlatformType == EPlatformType::PT_Fire)
	{
		PlatformOrb = EOrbType::OT_Fire;
	}
	if (PlatformType == EPlatformType::PT_Electric)
	{
		PlatformOrb = EOrbType::OT_Electric;
	}
	if (PlatformType == EPlatformType::PT_Plasma)
	{
		PlatformOrb = EOrbType::OT_Plasma;
	}
}
