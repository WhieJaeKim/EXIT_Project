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

	// 이동과 관련된 속성들
	// 이동속도
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stat")
	float speed = 500;

	// 필요속성 : 타겟
	UPROPERTY(VisibleAnywhere, Category = "Target")
	class AActor* target;

	// 방향인가?
	UPROPERTY(BlueprintReadOnly, Category = "Stat")
	FVector dir = FVector(0, 0, 0);
public:
	void FollowDirection();
	// 다른 액터와 부딪혔을 때... 뭔가 하는 것 같은데 뭘까 cpp보면 알수있지않을까
	// 언리얼과 연동되는 기능을 쓰겠다
	// 위 기능을 블루프린트의 노드로 불러서 만들거고, 그 노드는 실행핀이 있는 노드다.
	 //BP에서 노드 이름은 OnCollisionEnter이고, AActor가 값 핀이 된다. 받은 값은 OtherActor이다.	
	//UFUNCTION(BlueprintCallable, Category = "Code") 
	//void OnCollisionEnter(AActor* OtherActor);
};
