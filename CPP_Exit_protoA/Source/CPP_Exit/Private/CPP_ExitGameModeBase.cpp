// Copyright Epic Games, Inc. All Rights Reserved.


#include "CPP_ExitGameModeBase.h"
#include <Blueprint/UserWidget.h>
#include <Kismet/GameplayStatics.h>
#include <EngineUtils.h>
#include "Character_CPP.h"
#include "CPP_Exit.h"

ACPP_ExitGameModeBase::ACPP_ExitGameModeBase()
{
	// Tick �Լ��� ��� ȣ��ǵ��� ����
	PrimaryActorTick.bCanEverTick = true;

	DefaultPawnClass = NULL;
}