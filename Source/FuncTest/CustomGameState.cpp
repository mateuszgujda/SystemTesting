// Fill out your copyright notice in the Description page of Project Settings.

#include "CustomGameState.h"

ACustomGameState::ACustomGameState() 
{
	static ConstructorHelpers::FObjectFinder<UDataTable> BP_ItemDB(TEXT("DataTable'/Game/Data/ItemDB.ItemDB'"));
	ItemDB = BP_ItemDB.Object;
}

UDataTable * ACustomGameState::GetItemDB() const
{
	return ItemDB;
}


