// Copyright Epic Games, Inc. All Rights Reserved.

#include "Anna0718GameMode.h"
#include "Anna0718Character.h"
#include "UObject/ConstructorHelpers.h"

AAnna0718GameMode::AAnna0718GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
