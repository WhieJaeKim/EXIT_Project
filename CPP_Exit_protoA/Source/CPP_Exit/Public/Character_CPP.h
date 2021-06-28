// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Character_CPP.generated.h"

UCLASS()
class CPP_EXIT_API ACharacter_CPP : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACharacter_CPP();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	// 个眉 (面倒 格利)
	/*UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Body")
	class UBoxComponent* boxComp;*/
	//CapsuleComponent
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Collision")
	class UCapsuleComponent* Body;
	
	// 寇包 MeshComp
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Body")
	class UStaticMeshComponent* meshComp;
	
	// 醚备 困摹
	UPROPERTY(EditAnywhere, Category = "Component")
	class UArrowComponent* firePosition;

	UPROPERTY(EditDefaultsOnly, Category = "ArrowClass")
	TSubclassOf<class AArrow>arrowFactory;

public:
	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);
	
	void arrowFire();

public:
	// Dash 备泅何
	UFUNCTION()
	void Dash();

	UPROPERTY(EditAnywhere)
	float DashDistance;
	
	UPROPERTY(EditAnywhere)
	float DashCooldown;

	UPROPERTY()
	bool CanDash;
	
	UPROPERTY(EditAnywhere)
	float DashStop;
	UPROPERTY(EditAnywhere)
	FTimerHandle UnusedHandle;
	UFUNCTION()
	void stopDashing();
	UFUNCTION()
	void ResetDash();

	//Dash

};
