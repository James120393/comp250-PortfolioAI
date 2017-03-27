// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "comp250_1_1506530.h"
#include "comp250_1_1506530GameMode.h"
#include "comp250_1_1506530Character.h"

Acomp250_1_1506530GameMode::Acomp250_1_1506530GameMode()
{
	// set default pawn class to our Blueprinted character
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/ThirdPersonCharacter"));
	//if (PlayerPawnBPClass.Class != NULL)
	//{
	//	DefaultPawnClass = PlayerPawnBPClass.Class;
	//}
}
//void Acomp250_1_1506530GameMode::BeginPlay()
//{
//	Super::BeginPlay();
//	// Add the UI to the players screen
//	if (HUDWidgetClass != nullptr)
//	{
//		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), HUDWidgetClass);
//		if (CurrentWidget != nullptr)
//		{
//			CurrentWidget->AddToViewport();
//		}
//	}
//}