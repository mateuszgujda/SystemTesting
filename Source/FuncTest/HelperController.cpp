// Fill out your copyright notice in the Description page of Project Settings.

#include "HelperController.h"

void AHelperController::SetPawnAtLocation(FVector Location)
{
	if (isInCharge) {
		MoveToLocation(Location);
	}
}

void AHelperController::RotatePawn(FRotator Rotation)
{
	if (isInCharge) {
		GetPawn()->bUseControllerRotationYaw = true;
		SetFocalPoint(Rotation.Vector());

	}
}

APawn * AHelperController::ReturnControl()
{
	APawn* ToReturn = GetPawn();
	ToReturn->bUseControllerRotationYaw = false;

	if (ToReturn != nullptr) {
		UnPossess();
		return ToReturn;
	} 
	else
	{
		return nullptr;
	}
	}

void AHelperController::SetState(bool state)
{
	isInCharge = state;
}
