// Copyright Epic Games, Inc. All Rights Reserved.

#include "tencentClassJobGameMode.h"
#include "tencentClassJobCharacter.h"
#include "UObject/ConstructorHelpers.h"

AtencentClassJobGameMode::AtencentClassJobGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
