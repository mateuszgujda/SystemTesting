// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Delegate.h"
#include "UsableComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUseEvent);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FUNCTEST_API UUsableComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UUsableComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(BlueprintAssignable, category = "Use Events")
	FUseEvent OnUseRequest;
		
	UFUNCTION(BlueprintCallable, category = "Use Events")
	void DoUseLogic();

};
