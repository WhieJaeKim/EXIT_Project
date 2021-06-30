// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnemyMove.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CPP_EXIT_API UEnemyMove : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UEnemyMove();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// �̵��� ���õ� �Ӽ���
	// �̵��ӵ�
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stat")
	float speed = 500;

	// �ʿ�Ӽ� : Ÿ��
	UPROPERTY(VisibleAnywhere, Category = "Target")
	class AActor* target;

	// �����ΰ�?
	UPROPERTY(BlueprintReadOnly, Category = "Stat")
	FVector dir = FVector(0, 0, 0);
public:
	void FollowDirection();
	// �ٸ� ���Ϳ� �ε����� ��... ���� �ϴ� �� ������ ���� cpp���� �˼�����������
	// �𸮾�� �����Ǵ� ����� ���ڴ�
	// �� ����� �������Ʈ�� ���� �ҷ��� ����Ű�, �� ���� �������� �ִ� ����.
	 //BP���� ��� �̸��� OnCollisionEnter�̰�, AActor�� �� ���� �ȴ�. ���� ���� OtherActor�̴�.	
	//UFUNCTION(BlueprintCallable, Category = "Code") 
	//void OnCollisionEnter(AActor* OtherActor);
};
