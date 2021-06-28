// Fill out your copyright notice in the Description page of Project Settings.


#include "Character_CPP.h"
#include "Arrow.h"
#include "HeadMountedDisplayFunctionLibrary.h"
//#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Components/ArrowComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "Runtime/Engine/Public/TimerManager.h"


// Sets default values
ACharacter_CPP::ACharacter_CPP()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;
	//capsule 초기 설정 값
	GetCapsuleComponent()->InitCapsuleSize(36.f, 70.0f);
	//meshComp를 capsule에 붙이기
	//Body = GetCapsuleComponent();
	//Body->SetupAttachment(meshComp);

	//외관 Component 추가
	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	meshComp->SetupAttachment(GetCapsuleComponent());

	GetCharacterMovement()->SetUpdatedComponent(GetCapsuleComponent());
	//fire Arrow Position (meshComp 아래로 붙임)
	firePosition = CreateDefaultSubobject<UArrowComponent>(TEXT("FirePosition"));
	firePosition->SetupAttachment(meshComp);
	firePosition->SetHiddenInGame(false); // show firePosition in default
	//FRotator ArrowRot = GetArrowComponent()->GetComponentRotation();
	firePosition->SetRelativeLocation(FVector(0, 0, 0)); // 위치 값
	//playerFire 컴포넌트 추가
	
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;
	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f; // jump height
	GetCharacterMovement()->AirControl = 0.1f; // When falling, amount of lateral movement control available to the character.
	GetCharacterMovement()->GravityScale = 1*3/2.f; // gravity 1.5 , higher the lower jump
	
	//dash Setting
	CanDash = true;
	DashDistance = 2000.0f;
	DashCooldown = 0.f;
}

// Called when the game starts or when spawned
void ACharacter_CPP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACharacter_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACharacter_CPP::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	//action mapping bind
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAction("Dash", IE_Pressed, this, &ACharacter_CPP::Dash);

	PlayerInputComponent->BindAxis("MoveForward", this, &ACharacter_CPP::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACharacter_CPP::MoveRight);
	
	// Fire 버튼 입력 바인딩처리
	PlayerInputComponent->BindAction(TEXT("Fire"), IE_Pressed, this, &ACharacter_CPP::arrowFire);


	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	
	/*PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &ACPP_TPS_TestCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ACPP_TPS_TestCharacter::LookUpAtRate);*/
}

void ACharacter_CPP::MoveForward(float Value)
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

void ACharacter_CPP::MoveRight(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
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

void ACharacter_CPP::arrowFire()
{
	FActorSpawnParameters Param;
	Param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	GetWorld()->SpawnActor<AArrow>(arrowFactory, firePosition->GetComponentLocation(),
		firePosition->GetComponentRotation(), Param);
}

//Dash Codes
void ACharacter_CPP::Dash()
{
	if (CanDash)
	{
		// turn off friction, so character does not slow down.
		GetCharacterMovement()->BrakingFrictionFactor = 1.f; 
		LaunchCharacter(FVector(GetActorForwardVector().X, GetActorForwardVector().Y,0).GetSafeNormal() * DashDistance, true, true);
		CanDash = true; // Make character Dash several times.
		GetWorldTimerManager().SetTimer(UnusedHandle, this, &ACharacter_CPP::stopDashing, DashStop, false);
	}
}

void ACharacter_CPP::stopDashing()
{
	GetCharacterMovement()->StopMovementImmediately();
	GetCharacterMovement()->BrakingFrictionFactor = 2.f;
	GetWorldTimerManager().SetTimer(UnusedHandle, this, &ACharacter_CPP::ResetDash, DashCooldown, false);
}

void ACharacter_CPP::ResetDash()
{
	CanDash = true;
}


