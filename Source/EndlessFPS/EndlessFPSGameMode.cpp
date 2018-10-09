// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "EndlessFPSGameMode.h"
#include "EndlessFPSHUD.h"
#include "EndlessFPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEndlessFPSGameMode::AEndlessFPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AEndlessFPSHUD::StaticClass();
}
