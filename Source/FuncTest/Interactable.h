// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interactable.generated.h"

UCLASS()
class FUNCTEST_API AInteractable : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractable();

	UFUNCTION(BlueprintNativeEvent)
	void Interact(APlayerController* Controller);
	virtual void Interact_Implementation(APlayerController* Controller);

	UPROPERTY(EditDefaultsOnly)
		FString Name;

	UPROPERTY(EditDefaultsOnly)
		FString Action;

	UFUNCTION(BlueprintCallable, Category = "Pickup")
		FString GetInteractText() const;
	
	UPROPERTY(EditAnywhere, Category = "Highliht System")
		UStaticMeshComponent* MainBody;

	UFUNCTION(BlueprintCallable, category = "Highlight system")
		UStaticMeshComponent* GetMainBody();

	UFUNCTION(BlueprintCallable, category = "Highlight system")
		void TurnOnHighlight();

	UFUNCTION(BlueprintCallable, category = "Highlight system")
		void TurnOffHighlight();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
