// Copyright Epic Games, Inc. All Rights Reserved.

#include "LightWardenGameMode.h"
#include "LightWardenCharacter.h"
#include "Engine/World.h"
#include "GameFramework/PlayerStart.h"
#include "UObject/ConstructorHelpers.h"

ALightWardenGameMode::ALightWardenGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	PlayerOrb = EOrbType::OT_None;
	SpawnPoint = CreateDefaultSubobject<AActor>(TEXT("SpawnPoint"));
}

void ALightWardenGameMode::BeginPlay()
{
	Super::BeginPlay();
	//SpawnPoint = K2_FindPlayerStart(GetWorld()->GetFirstPlayerController());
	UE_LOG(LogTemp, Warning, TEXT("Player Spawn Location: %s"), *(SpawnPoint->GetActorTransform().ToString()));

}

EOrbType ALightWardenGameMode::GetSavedOrb()
{
	return PlayerOrb;
}

void ALightWardenGameMode::OnPlayerReset(AActor* Character)
{
	ALightWardenCharacter* PlayerCharacter = Cast<ALightWardenCharacter>(Character);
	if (PlayerCharacter)
	{	
		UE_LOG(LogTemp, Warning, TEXT("Player character found OnPlayerReset()"))
		PlayerCharacter->SetPlayerOrb(PlayerOrb);
	}
}

void ALightWardenGameMode::SetSavedOrb(EOrbType NewPlayerOrb)
{
	PlayerOrb = NewPlayerOrb;
}

void ALightWardenGameMode::SetFireHolder(AActor* NewHolder)
{
	FireHolder = NewHolder;
	UE_LOG(LogTemp, Error, TEXT("SetFireHolder() in GameMode.cpp called"));
}

void ALightWardenGameMode::SetElectricHolder(AActor* NewHolder)
{
	ElectricHolder = NewHolder;
	UE_LOG(LogTemp, Error, TEXT("SetElectricHolder() in GameMode.cpp called"));
}

void ALightWardenGameMode::SetPlasmaHolder(AActor* NewHolder)
{
	PlasmaHolder = NewHolder;
	UE_LOG(LogTemp, Error, TEXT("SetPlasmaHolder() in GameMode.cpp called"));
}

void ALightWardenGameMode::UpdateOrbHolder(EOrbType OrbType, AActor* NewOwner)
{
	if ( OrbType == EOrbType::OT_None)
	{ 
		return;
	}
	if ( OrbType == EOrbType::OT_Fire)
	{
		SetFireHolder(NewOwner);
	}
	if ( OrbType == EOrbType::OT_Electric)
	{
		SetElectricHolder(NewOwner);
	}
	if (OrbType == EOrbType::OT_Plasma)
	{
		SetPlasmaHolder(NewOwner);
	}

	UE_LOG(LogTemp, Warning, TEXT("Orb Holder: %s"), *NewOwner->GetName());

}

void ALightWardenGameMode::SetCheckPoint(FTransform NewCheck)
{
	CheckPointLocation = NewCheck;
	UE_LOG(LogTemp, Error, TEXT("New Location Registered: %s"), *CheckPointLocation.ToString());
}

void ALightWardenGameMode::RestartFromCheckPoint()
{
	UE_LOG(LogTemp, Error, TEXT("RestartFromCheckPoint() in GameMode.cpp called"));
	RestartPlayer(GetWorld()->GetFirstPlayerController());
}

FTransform ALightWardenGameMode::GetCheckPoint()
{
	return CheckPointLocation;
}

