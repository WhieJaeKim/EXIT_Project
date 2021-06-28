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
	// ��ü (�浹 ����)
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Body")
	class UBoxComponent* boxComp;
	// �ܰ�
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Body")
	class UStaticMeshComponent* meshComp;

// ������ ���
public:
	// �¿� �Է°� ó�� �Լ� ����
	// Axis �Է��� ó���� �Լ��� ���� void �Լ��̸�(float)

	// ���� �Է°� ó�� �Լ� ���� (�Է��� �޾��� ��, �ش� �������� �̵��ϰ� �ʹ�.)
	void MoveForward(float value);
	// �¿� �Է°� ó�� �Լ� ���� (�Է��� �޾��� ��, �ش� �������� �̵��ϰ� �ʹ�.)
	void MoveRight(float value);

	UPROPERTY()
	float hor = 0;
	UPROPERTY()
	float ver = 0;

	////UE���� speed ���� �����ϵ��� ����
	UPROPERTY(EditAnywhere, Category = "Stat")
	float moveSpeed = 500;
};

