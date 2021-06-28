// Fill out your copyright notice in the Description page of Project Settings.


#include "WallZone.h"
#include "Components/StaticMeshComponent.h"
//#include "PlayerCPP.h"
#include "Character_CPP.h"

// Sets default values
AWallZone::AWallZone()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//wall component 추가
	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	RootComponent = meshComp;
}

// Called when the game starts or when spawned
void AWallZone::BeginPlay()
{
	Super::BeginPlay();
	meshComp->OnComponentHit.AddDynamic(this, &AWallZone::OnCollisionEnter);
	
}

// Called every frame
void AWallZone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void AWallZone::OnCollisionEnter(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// 만약 Player 라면 처리 안한다.
	ACharacter_CPP* player = Cast<ACharacter_CPP>(OtherActor);
	if (player != nullptr)
	{
		return;
	}
	// 부딪힌 녀석 제거
	//OtherActor->Destroy();
}
