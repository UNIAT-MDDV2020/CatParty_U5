// Fill out your copyright notice in the Description page of Project Settings.


#include "BP_TileMap.h"

// Sets default values
ABP_TileMap::ABP_TileMap()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABP_TileMap::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABP_TileMap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

