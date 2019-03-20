// Fill out your copyright notice in the Description page of Project Settings.

#include "UsableActors.h"


// Sets default values
AUsableActors::AUsableActors()
{
 	
	UsableComponent = CreateDefaultSubobject<UUsableComponent>(FName("Useable Component"));
	MainBody = CreateDefaultSubobject<UStaticMeshComponent>(FName("Main Body"));

	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


}

// Called when the game starts or when spawned
void AUsableActors::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AUsableActors::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

UStaticMeshComponent * AUsableActors::GetMainBody()
{
	return MainBody;
}

