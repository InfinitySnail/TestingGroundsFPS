// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FPSTestingGroundsGameMode.h"
#include "FPSTestingGroundsHUD.h"
#include "FPSTestingGroundsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPSTestingGroundsGameMode::AFPSTestingGroundsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Player/Character/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPSTestingGroundsHUD::StaticClass();
}
