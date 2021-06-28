// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstacle.h"
//#include "PlayerCPP.h"
#include "Components/StaticMeshComponent.h"
#include "Character_CPP.h"

// Sets default values
AObstacle::AObstacle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	RootComponent = meshComp;

}

// Called when the game starts or when spawned
void AObstacle::BeginPlay()
{
	Super::BeginPlay();
	
	meshComp->OnComponentHit.AddDynamic(this, &AObstacle::OnCollisionEnter);
}

// Called every frame
void AObstacle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void AObstacle::OnCollisionEnter(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// ¸¸¾à Player ¶ó¸é Ã³¸® ¾ÈÇÑ´Ù.
	ACharacter_CPP* player = Cast<ACharacter_CPP>(OtherActor);
	if (player != nullptr)
	{
		return;
	}
	// ºÎµúÈù ³à¼® Á¦°Å
	//OtherActor->Destroy();
}