// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BossBullet.generated.h"

UCLASS()
class CPP_EXIT_API ABossBullet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABossBullet();
	UPROPERTY(EditAnywhere, Category = "Component")
	class USphereComponent* sphereComp;
	UPROPERTY(EditAnywhere, Category = "Component")
	class UStaticMeshComponent* meshComp;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnyWhere, Category = "Speed")
	float bulletSpeed = 800;

};
