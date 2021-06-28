// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerCPP.generated.h"

UCLASS()
class CPP_EXIT_API APlayerCPP : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerCPP();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
public:
	// 몸체 (충돌 목적)
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Body")
	class UBoxComponent* boxComp;
	// 외관
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Body")
	class UStaticMeshComponent* meshComp;

// 움직임 명령
public:
	// 좌우 입력값 처리 함수 선언
	// Axis 입력을 처리할 함수의 원형 void 함수이름(float)

	// 상하 입력값 처리 함수 선언 (입력을 받았을 때, 해당 방향으로 이동하고 싶다.)
	void MoveForward(float value);
	// 좌우 입력값 처리 함수 선언 (입력을 받았을 때, 해당 방향으로 이동하고 싶다.)
	void MoveRight(float value);

	UPROPERTY()
	float hor = 0;
	UPROPERTY()
	float ver = 0;

	////UE에서 speed 조절 가능하도록 만듦
	UPROPERTY(EditAnywhere, Category = "Stat")
	float moveSpeed = 500;
};

