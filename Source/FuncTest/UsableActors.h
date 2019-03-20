// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UsableComponent.h"
#include "UsableActors.generated.h"


UCLASS()
class FUNCTEST_API AUsableActors : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AUsableActors();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category = "Useable system")
	UUsableComponent* UsableComponent;

	UPROPERTY(EditAnywhere, Category = "Highliht System")
	UStaticMeshComponent* MainBody;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, category = "Highlight system")
	UStaticMeshComponent* GetMainBody();



};
