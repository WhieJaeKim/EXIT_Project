// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyMove.h"
#include "Character_CPP.h"
#include "Enemy.h"
#include <Kismet/GameplayStatics.h>
#include <Components/BoxComponent.h>

// Sets default values for this component's properties
UEnemyMove::UEnemyMove()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UEnemyMove::BeginPlay()
{
	Super::BeginPlay();
	

}


// Called every frame
void UEnemyMove::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	// continuously follow player
	FollowDirection();
	// Get Direction
	// 살아가는 동안 계속 이동하고 싶다
	FVector vel = dir * speed;

	FVector P0 = GetOwner()->GetActorLocation();
	FVector P = P0 + vel * DeltaTime;
	// 지정해 준 위치로 이동하고 싶다.
	GetOwner()->SetActorLocation(P, true);
	
}

void UEnemyMove::FollowDirection()
{
	TArray<AActor*> objs;
	// 태어날때 타겟을 찾아 놓자
	// -> UE4 에서 월드상에 있는 액터 찾기
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACharacter_CPP::StaticClass(), objs);

	// for 문을 objs 를 검색
	for (AActor* actor : objs)
	{
		target = actor;
	}

	dir = FVector::DownVector;
	if (target && IsValid(target))
	{
		// 방향을 타겟쪽으로
		dir = target->GetActorLocation() - GetOwner()->GetActorLocation();
	}
	dir.Normalize();
}