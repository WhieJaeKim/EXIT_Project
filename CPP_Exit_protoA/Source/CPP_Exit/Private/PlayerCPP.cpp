// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCPP.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Components/BoxComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"

// Sets default values
APlayerCPP::APlayerCPP()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;

	// 몸체 Component 추가
	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	//RootComponent 가 BoxComp
	RootComponent = boxComp;

	//외관 Component 추가
	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	meshComp->SetupAttachment(boxComp);
	
	// StaticMesh 데이터 동적으로 Load해서 할당하기
	ConstructorHelpers::FObjectFinder<UStaticMesh> TempMesh(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	
	//Asset을 성곡적으로 Load했다면 'TRUE' Return.
	if (TempMesh.Succeeded())
	{
		//읽어들인 data를 할당
		meshComp->SetStaticMesh(TempMesh.Object);
	}
	// Material Load하기
	ConstructorHelpers::FObjectFinder<UMaterial> TempMat(TEXT("Material'/Engine/BasicShapes/BasicShapeMaterial.BasicShapeMaterial'"));

	//Asset (+Material)을 성곡적으로 Load 했다면 'TRUE' Return.
	if (TempMat.Succeeded())
	{
		//읽어들인 data를 할당
		meshComp->SetMaterial(0, TempMat.Object);
	}
	
	// Configure character movement
	//GetMovementComponent()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	//GetMovementComponent()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	//GetMovementComponent()->JumpZVelocity = 600.f; // jump height
	//GetMovementComponent()->AirControl = 0.2f;
}

// Called when the game starts or when spawned
void APlayerCPP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerCPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//이동 code
	FVector v = FVector(ver, hor, 0);
	v.Normalize();
	v *= moveSpeed; // UE에서 변경된 스피드를 받아들임

	FVector P0 = GetActorLocation();
	FVector P = P0 + v * DeltaTime;
	//2. 위치를 지정하고 싶다. -> 이동하고 싶다.
	SetActorLocation(P, true);
}

// Called to bind functionality to input
void APlayerCPP::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//움직임 BindAxis 커맨드
	PlayerInputComponent->BindAxis("MoveForward", this, &APlayerCPP::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlayerCPP::MoveRight);
}
void APlayerCPP::MoveForward(float value)
{
	ver = value;
	//if ((Controller != nullptr) && (value != 0.0f))
	//{
		//// find out which way is forward
		//const FRotator Rotation = Controller->GetControlRotation();
		//const FRotator YawRotation(0, Rotation.Yaw, 0);

		//// get forward vector
		//const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		//AddMovementInput(Direction, value);
	//}
}

void APlayerCPP::MoveRight(float value)
{
	hor = value;
	//if ((Controller != nullptr) && (value != 0.0f))
	//{
		//// find out which way is right
		//const FRotator Rotation = Controller->GetControlRotation();
		//const FRotator YawRotation(0, Rotation.Yaw, 0);

		//// get right vector 
		//const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		//// add movement in that direction
		//AddMovementInput(Direction, value);
	//}
}

