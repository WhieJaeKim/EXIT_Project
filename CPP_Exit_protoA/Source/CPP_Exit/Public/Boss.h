// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Boss.generated.h"
UENUM(BlueprintType)
enum class EGameState :uint8
{
	Idle UMETA(DisplayName = "IDLE_STATE"),
	Walk UMETA(DisplayName = "WALK_STATE"),
	PatternOne UMETA(DisplayName = "PATTERNONE_STATE"),
	PatternTwo UMETA(DisplayName = "PATTERNTWO_STATE"),
	PatternThree UMETA(DisplayName = "PATTERNTHREE_STATE")
};

UCLASS()
class CPP_EXIT_API ABoss : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABoss();
	UPROPERTY(EditAnywhere, Category = "Component")
	class UBoxComponent* boxComp;
	UPROPERTY(EditAnywhere, Category = "Component")
	class UStaticMeshComponent* meshComp;
	UPROPERTY(EditDefaultsOnly, Category = "BossBullet")
	TSubclassOf<class ABossBullet> bossbullet;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(EditAnywhere, Category = "Stat")
	float createTime = 5;
	UPROPERTY()
	float currentTime = 0;
	UPROPERTY(EditAnywhere, Category = "Stat")
	float shootAngle = 36;

	void Idle();

	void Walk();

	void PatternOne();

	void PatternTwo();

	void PatternThree();

	UPROPERTY(VisibleAnywhere, Category = "Target")
	class AActor* target;

	UPROPERTY(EditAnywhere, Category = "Stat")
	float runningSpeed = 10;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State", meta = (AllowPrivateAccess = true))
		EGameState mState = EGameState::Idle;

};

