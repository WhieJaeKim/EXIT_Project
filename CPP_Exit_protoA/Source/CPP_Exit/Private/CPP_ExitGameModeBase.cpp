// Copyright Epic Games, Inc. All Rights Reserved.


#include "CPP_ExitGameModeBase.h"
#include <Blueprint/UserWidget.h>
#include <Kismet/GameplayStatics.h>
#include <EngineUtils.h>
#include "Character_CPP.h"
#include "CPP_Exit.h"

ACPP_ExitGameModeBase::ACPP_ExitGameModeBase()
{
	// Tick 함수가 계속 호출되도록 설정
	PrimaryActorTick.bCanEverTick = true;

	DefaultPawnClass = NULL;
}