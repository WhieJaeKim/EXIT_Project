// Fill out your copyright notice in the Description page of Project Settings.

#include "Boss.h"
#include <Components/BoxComponent.h>
#include <Components/StaticMeshComponent.h>
#include <Kismet/GameplayStatics.h>
#include "BossBullet.h"

// Sets default values
ABoss::ABoss()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider"));
	RootComponent = boxComp;

	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	meshComp->SetupAttachment(boxComp);
	meshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}

// Called when the game starts or when spawned
void ABoss::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ABoss::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	switch (mState)
	{
	case EGameState::Idle:
		Idle();
		break;
	case EGameState::Walk:
		Walk();
		break;
	case EGameState::PatternOne:
		PatternOne();
		break;
	case EGameState::PatternTwo:
		PatternTwo();
		break;
	case EGameState::PatternThree:
		PatternThree();
		break;
	}
}

void ABoss::Idle()
{
	currentTime += GetWorld()->GetDeltaSeconds();
	if (createTime < currentTime)
	{
		mState = EGameState::PatternOne;
		currentTime = 0;
	}
}

void ABoss::Walk()
{
	/*
	// 기능이 시작되면 보스는 플레이어의 위치를 찾고 싶다.
	TArray<AActor*> actors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AExitPlayer::StaticClass(), actors);

	for (AActor* actor : actors)
	{
		target = actor;
	}

	// 플레이어의 위치
	FVector playerP0 = target->GetActorLocation();

	// 플레이어의 위치 - 보스의 위치 = 보스가 가야 할 방향
	FVector dir = playerP0 - GetActorLocation();
	FRotator dirRot = dir.Rotation();
	SetActorRotation(dirRot);

	FVector v = FVector::ForwardVector;
	v *= runningSpeed;

	FVector P0 = GetActorLocation();
	FVector P = P0 + v * GetWorld()->GetDeltaSeconds();
	SetActorLocation(P);
	*/
}

void ABoss::PatternOne()
{
	for (int i = 0; i < 360 / shootAngle; i++)
	{
		FRotator angle = FRotator(0, i * shootAngle, 0);

		FActorSpawnParameters bulletParam;
		bulletParam.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		GetWorld()->SpawnActor<ABossBullet>(bossbullet, GetActorLocation(), angle, bulletParam);
	}
	mState = EGameState::Idle;
}

void ABoss::PatternTwo()
{

}

void ABoss::PatternThree()
{

}