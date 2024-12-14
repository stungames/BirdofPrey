// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "BasePlayerState.generated.h"

/**
 * 
 */
UCLASS()
class BIRDOFPREY_API ABasePlayerState : public APlayerState
{

public:
	ABasePlayerState();


	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AddScore(float Amount);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ConsumeLife();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool HasRemainingLives();

public:
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float PlayerScore;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	int RemainingLives;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float TimeOfLastDeath;

	GENERATED_BODY()
	
};
