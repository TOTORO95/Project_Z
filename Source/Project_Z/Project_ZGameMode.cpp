// Copyright Epic Games, Inc. All Rights Reserved.

#include "Project_ZGameMode.h"
#include "Project_ZCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProject_ZGameMode::AProject_ZGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
