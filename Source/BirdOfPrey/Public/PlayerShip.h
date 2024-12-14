// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseShip.h"
#include "BasePlayerController.h"
#include "PlayerShip.generated.h"

/**
 * 
 */
UCLASS()
class BIRDOFPREY_API APlayerShip : public ABaseShip
{

	GENERATED_BODY()
public:

	APlayerShip();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void GetShipConstantVelocity(FVector& Direction, float& Speed);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ClampToCameraBounds();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	float GetShipAxisAdjustment(float Dist, float Max);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	FVector CalcOutofBoundsAdjustment();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void GetPlayerAgentInfo(ABasePlayerController*Player);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ShouldSpawnAIController();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void UpdateHoverPitch();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool HasDiedRecently();

public:
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	ABasePlayerController* BasePlayerController;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float InvulnerabilityTime;
	
};
