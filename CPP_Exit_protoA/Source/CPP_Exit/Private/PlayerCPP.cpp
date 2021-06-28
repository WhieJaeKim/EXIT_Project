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

	// ��ü Component �߰�
	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	//RootComponent �� BoxComp
	RootComponent = boxComp;

	//�ܰ� Component �߰�
	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	meshComp->SetupAttachment(boxComp);
	
	// StaticMesh ������ �������� Load�ؼ� �Ҵ��ϱ�
	ConstructorHelpers::FObjectFinder<UStaticMesh> TempMesh(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	
	//Asset�� ���������� Load�ߴٸ� 'TRUE' Return.
	if (TempMesh.Succeeded())
	{
		//�о���� data�� �Ҵ�
		meshComp->SetStaticMesh(TempMesh.Object);
	}
	// Material Load�ϱ�
	ConstructorHelpers::FObjectFinder<UMaterial> TempMat(TEXT("Material'/Engine/BasicShapes/BasicShapeMaterial.BasicShapeMaterial'"));

	//Asset (+Material)�� ���������� Load �ߴٸ� 'TRUE' Return.
	if (TempMat.Succeeded())
	{
		//�о���� data�� �Ҵ�
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
	//�̵� code
	FVector v = FVector(ver, hor, 0);
	v.Normalize();
	v *= moveSpeed; // UE���� ����� ���ǵ带 �޾Ƶ���

	FVector P0 = GetActorLocation();
	FVector P = P0 + v * DeltaTime;
	//2. ��ġ�� �����ϰ� �ʹ�. -> �̵��ϰ� �ʹ�.
	SetActorLocation(P, true);
}

// Called to bind functionality to input
void APlayerCPP::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//������ BindAxis Ŀ�ǵ�
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

