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
// Arrow Object Pool�� ���� �Ӽ� ����
// �ʿ�Ӽ� : źâũ��, źâ(Object Pool), ȭ�� ����

// ������ ��������
// -> Ready, Playing, Gameover
// ������
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