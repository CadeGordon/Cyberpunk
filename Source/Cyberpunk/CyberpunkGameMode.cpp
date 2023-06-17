// Copyright Epic Games, Inc. All Rights Reserved.

#include "CyberpunkGameMode.h"
#include "CyberpunkHUD.h"
#include "CyberpunkCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACyberpunkGameMode::ACyberpunkGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ACyberpunkHUD::StaticClass();
}
