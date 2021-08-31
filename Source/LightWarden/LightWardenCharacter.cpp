// Copyright Epic Games, Inc. All Rights Reserved.

#include "LightWardenCharacter.h"
#include "DrawDebugHelpers.h"
#include "WardenPlatformComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "InteractionInterface.h"
#include "LightWardenGameMode.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"

//////////////////////////////////////////////////////////////////////////
// ALightWardenCharacter

ALightWardenCharacter::ALightWardenCharacter()
{

	PrimaryActorTick.bCanEverTick = true;
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 54.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 900.f;
	GetCharacterMovement()->AirControl = .7f;
	GetCharacterMovement()->GravityScale = 1.f;
	
	/*
	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera please unfuck my life
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm
	*/
	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)
}

//////////////////////////////////////////////////////////////////////////
// Input

void ALightWardenCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &ALightWardenCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ALightWardenCharacter::MoveRight);

	//Interact
	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &ALightWardenCharacter::Interact);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &ALightWardenCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ALightWardenCharacter::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &ALightWardenCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &ALightWardenCharacter::TouchStopped);

	// VR headset functionality
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &ALightWardenCharacter::OnResetVR);
}

void ALightWardenCharacter::Tick(float DeltaTime)
{
	TraceFromPlayer();
}

void ALightWardenCharacter::WhenDestroyed()
{
	ALightWardenGameMode* GameMode = Cast<ALightWardenGameMode>(GetWorld()->GetAuthGameMode());
	if (GameMode)
	{
		GameMode->RestartFromCheckPoint();
	}
}


void ALightWardenCharacter::OnResetVR()
{
	// If LightWarden is added to a project via 'Add Feature' in the Unreal Editor the dependency on HeadMountedDisplay in LightWarden.Build.cs is not automatically propagated
	// and a linker error will result.
	// You will need to either:
	//		Add "HeadMountedDisplay" to [YourProject].Build.cs PublicDependencyModuleNames in order to build successfully (appropriate if supporting VR).
	// or:
	//		Comment or delete the call to ResetOrientationAndPosition below (appropriate if not supporting VR)
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void ALightWardenCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
		Jump();
}

void ALightWardenCharacter::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
		StopJumping();
}

void ALightWardenCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void ALightWardenCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void ALightWardenCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void ALightWardenCharacter::MoveRight(float Value)
{
	if ( (Controller != nullptr) && (Value != 0.0f) )
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}

void ALightWardenCharacter::TraceFromPlayer()
{
	//UE_LOG(LogTemp, Warning, TEXT("Beginning Trace From Player"));
	FVector Location;
	FRotator Rotation;
	FHitResult HitResult;
	
	GetController()->GetPlayerViewPoint(OUT Location, OUT Rotation);

	FVector LineTrace = Location + (Rotation.Vector() * PlayerReach);

	FCollisionQueryParams TraceQuery;
	TraceQuery.AddIgnoredActor(this);
	bool bHit = GetWorld()->LineTraceSingleByChannel(OUT HitResult, Location, LineTrace, ECC_Visibility, TraceQuery);

	//DrawDebugLine(GetWorld(), Location, LineTrace, FColor::Blue, false, 2.0f);

	if (bHit)
	{
		AActor* HitActor = HitResult.GetActor();
		if (HitActor)
		{
			if (HitActor != FocusedActor)
			{
				if (FocusedActor)
				{
					IInteractionInterface* Interface = Cast<IInteractionInterface>(FocusedActor);

					if (Interface)
						Interface->Execute_EndFocus(FocusedActor);

				}

				IInteractionInterface* Interface = Cast<IInteractionInterface>(HitActor);
				if (Interface)
				{
					Interface->Execute_StartFocus(HitActor);
				}
				FocusedActor = HitActor;
			}
		}
	}
	else
	{
		if (FocusedActor)
		{
			IInteractionInterface* Interface = Cast<IInteractionInterface>(FocusedActor);
			if (Interface)
			{
				Interface->Execute_EndFocus(FocusedActor);
			}
		}
		FocusedActor = nullptr;
	}

}

EOrbType ALightWardenCharacter::GetPlayerOrb()
{
	return PlayerOrbSlot;
}

void ALightWardenCharacter::SetPlayerOrb(EOrbType SavedOrb)
{
	PlayerOrbSlot = SavedOrb;
}

bool ALightWardenCharacter::DoesHaveOrb()
{
	if (PlayerOrbSlot == EOrbType::OT_Fire || PlayerOrbSlot == EOrbType::OT_Electric || PlayerOrbSlot == EOrbType::OT_Plasma)
	{
		return true;
	}
	return false;
}

void ALightWardenCharacter::Interact()
{

	//TraceFromPlayer();
	if (FocusedActor)
	{
		IInteractionInterface* Interface = Cast<IInteractionInterface>(FocusedActor);

		if (Interface)
		{
			Interface->Execute_OnInteract(FocusedActor, this);
		}
	}
	UE_LOG(LogTemp, Warning, TEXT("Interact Key Pressed!"));
}
