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
	// ��ư��� ���� ��� �̵��ϰ� �ʹ�
	FVector vel = dir * speed;

	FVector P0 = GetOwner()->GetActorLocation();
	FVector P = P0 + vel * DeltaTime;
	// ������ �� ��ġ�� �̵��ϰ� �ʹ�.
	GetOwner()->SetActorLocation(P, true);
	
}

void UEnemyMove::FollowDirection()
{
	TArray<AActor*> objs;
	// �¾�� Ÿ���� ã�� ����
	// -> UE4 ���� ����� �ִ� ���� ã��
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACharacter_CPP::StaticClass(), objs);

	// for ���� objs �� �˻�
	for (AActor* actor : objs)
	{
		target = actor;
	}

	dir = FVector::DownVector;
	if (target && IsValid(target))
	{
		// ������ Ÿ��������
		dir = target->GetActorLocation() - GetOwner()->GetActorLocation();
	}
	dir.Normalize();
}