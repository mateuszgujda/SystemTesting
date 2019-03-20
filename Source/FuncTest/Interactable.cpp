// Fill out your copyright notice in the Description page of Project Settings.

#include "Interactable.h"
#include "Engine/Classes/Components/StaticMeshComponent.h"

// Sets default values
AInteractable::AInteractable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Name = "Interactable";
	Action = "Interact";
	MainBody = CreateDefaultSubobject<UStaticMeshComponent>(FName("Main Body"));

}

UStaticMeshComponent * AInteractable::GetMainBody()
{
	return MainBody;
}

void AInteractable::TurnOnHighlight()
{
	MainBody->bRenderCustomDepth = true;
}

void AInteractable::TurnOffHighlight()
{
	MainBody->bRenderCustomDepth = false;
}


// Called when the game starts or when spawned
void AInteractable::BeginPlay()
{
	Super::BeginPlay();
	
}

void AInteractable::Interact_Implementation(APlayerController* Controller)
{
	return;
}

FString AInteractable::GetInteractText() const
{
	return FString::Printf(TEXT("%s: Press F to %s"), *Name, *Action);
}


// Called every frame
void AInteractable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

