// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "BasePlayerState.generated.h"

/**
 * 
 */
UCLASS()
class ABasePlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	ABasePlayerState();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AddScore(float Amount);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ConsumeLife();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	bool HasRemainingLives();

public:
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float PlayerScore;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey", meta = (ClampMin = "0"))
	int32 RemainingLives;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float TimeOfLastDeath;
};
