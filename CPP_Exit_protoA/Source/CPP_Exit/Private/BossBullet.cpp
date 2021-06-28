// Fill out your copyright notice in the Description page of Project Settings.


#include "BossBullet.h"
#include <Components/SphereComponent.h>
#include <Components/StaticMeshComponent.h>


// Sets default values
ABossBullet::ABossBullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	sphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollider"));
	RootComponent = sphereComp;

	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	meshComp->SetupAttachment(sphereComp);
	meshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}

// Called when the game starts or when spawned
void ABossBullet::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABossBullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// P = P0 + vt
	FVector vel = GetActorRotation().Vector();
	// FVector vel = GetActorUpVector();
	vel *= bulletSpeed;
	FVector P0 = GetActorLocation();
	FVector P = P0 + vel * DeltaTime;
	SetActorLocation(P);

}

