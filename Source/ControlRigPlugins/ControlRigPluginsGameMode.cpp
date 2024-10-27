// Copyright Epic Games, Inc. All Rights Reserved.

#include "ControlRigPluginsGameMode.h"
#include "ControlRigPluginsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AControlRigPluginsGameMode::AControlRigPluginsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
