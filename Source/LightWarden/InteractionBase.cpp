// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractionBase.h"
#include "InteractionInterface.h"

// Sets default values
AInteractionBase::AInteractionBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AInteractionBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInteractionBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AInteractionBase::OnInteract_Implementation(AActor* InteractCaller)
{
	UE_LOG(LogTemp, Warning, TEXT("%s Has Received OnInteract Call"), *GetOwner()->GetName());
}

void AInteractionBase::StartFocus_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0, FColor::Orange, TEXT("Start Focus"));
}

void AInteractionBase::EndFocus_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0, FColor::Orange, TEXT("End Focus"));
}

