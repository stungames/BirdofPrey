// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseShip.h"
#include "BaseEnemyShip.generated.h"

/**
 *
 */
UCLASS()
class ABaseEnemyShip : public ABaseShip
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void Move();

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	ABaseShip* ShipAIController;

};