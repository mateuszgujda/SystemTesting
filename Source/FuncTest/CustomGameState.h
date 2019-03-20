// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "Engine.h"
#include "CustomGameState.generated.h"

/**
 * 
 */
UCLASS()
class FUNCTEST_API ACustomGameState : public AGameState
{
	GENERATED_BODY()
	
public:
	ACustomGameState();

	UDataTable* GetItemDB() const;

protected:
	UPROPERTY(EditDefaultsOnly)
	UDataTable* ItemDB;

};
