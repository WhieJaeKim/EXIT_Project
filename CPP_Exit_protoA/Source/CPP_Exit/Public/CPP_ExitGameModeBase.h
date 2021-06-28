// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
//#include "Arrow.h"
//#include <Blueprint/UserWidget.h>
#include "CPP_ExitGameModeBase.generated.h"

/**
 * 
 */
// Arrow Object Pool을 위한 속성 선언
// 필요속성 : 탄창크기, 탄창(Object Pool), 화살 공장

// 게임의 상태제어
// -> Ready, Playing, Gameover
// 열거형
//UENUM(BlueprintType)
//enum class EGameState : uint8
//{
//	Ready UMETA(DisplayName = "READY_STATE"),
//	Playing UMETA(DisplayName = "PLAYING_STATE"),
//	Gameover UMETA(DisplayName = "GAMEOVER_STATE")
//};


//class CPP_EXIT_API ACPP_ExitGameModeBase : public AGameModeBase
UCLASS()
class CPP_EXIT_API ACPP_ExitGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	ACPP_ExitGameModeBase();
};