// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseGameAgent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "BaseShip.generated.h"

/**
 * 
 */
UCLASS()
class ABaseShip : public ABaseGameAgent
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	UFloatingPawnMovement* FloatingPawnMovement;

public:
	ABaseShip();

public:
	virtual void ApplyAgentInfo(FSAgentInfo NewAgentInfo) override;

protected:
	virtual void BeginPlay() override;


};
