// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "HelperController.h"
#include "Interactable.h"
#include "CustomPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class FUNCTEST_API ACustomPlayerController : public APlayerController
{
	GENERATED_BODY()

private:
	AHelperController* HelperController;

public:

	UFUNCTION(BlueprintCallable, Category = "Control Retrieve")
		void RetrieveControl();

	UFUNCTION(BlueprintCallable, Category = "Control Retrieve")
	AHelperController* RequestAIAssistance();

	UPROPERTY(EditDefaultsOnly, Category = "Setup")
	TSubclassOf<class AHelperController> AIControllerBlueprint;


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	AInteractable* CurrentInteractable;

	UFUNCTION(BlueprintCallable, Category = "Useable system")
	void Interact();




	virtual void BeginPlay() override;
};