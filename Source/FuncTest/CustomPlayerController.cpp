// Fill out your copyright notice in the Description page of Project Settings.

#include "CustomPlayerController.h"
#include "Engine/World.h"



void ACustomPlayerController::Interact()
{
	if (CurrentInteractable) {
		CurrentInteractable->Interact(this);
	}
}

void ACustomPlayerController::BeginPlay() {
	Super::BeginPlay();
	if (AIControllerBlueprint == NULL) {
		UE_LOG(LogTemp, Warning, TEXT("AIHelperBlueprintMissing"))
			return;
	}
	if (HelperController == nullptr) {
		HelperController = GetWorld()->SpawnActor<AHelperController>(AIControllerBlueprint);
		HelperController->AttachToActor(this, FAttachmentTransformRules(EAttachmentRule::SnapToTarget,true));
	}

}

void ACustomPlayerController::RetrieveControl()
{

	if (GetPawn() == nullptr) {
		Possess(HelperController->ReturnControl());
		HelperController->SetState(false);
	}
	else {
		UE_LOG(LogTemp,Warning,TEXT("Controller alreay possesing Pawn"))
	}
}

AHelperController* ACustomPlayerController::RequestAIAssistance()
{
	APawn* ControlledPawn = GetPawn();
	UnPossess();
	HelperController->Possess(ControlledPawn);
	HelperController->SetState(true);
	SetViewTargetWithBlend(ControlledPawn,0.3f);

	return HelperController;
}
