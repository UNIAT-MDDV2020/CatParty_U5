// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BP_TileMap.generated.h"

UCLASS()
class CATPARTY_U5_API ABP_TileMap : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABP_TileMap();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UFUNCTION(BluprintCallable, BlueprintPure)
		int CoorToIndex(int CoordX, int CoodY) const;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
