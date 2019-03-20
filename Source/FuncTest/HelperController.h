// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "HelperController.generated.h"

/**
 * 
 */
UCLASS()
class FUNCTEST_API AHelperController : public AAIController
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Moving Actor")
	void SetPawnAtLocation(FVector Location);
	
	UFUNCTION(BlueprintCallable, Category = "Moving Actor")
	void RotatePawn(FRotator Rotation);

	UFUNCTION(BlueprintCallable, Category = "Control")
	APawn* ReturnControl();

	void SetState(bool state);

private:
	bool isInCharge = false;

};
