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
    void AddScore();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void ConsumeLife();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool HasRemainingLives();

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float PlayerScore;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    int32 RemainingLives;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float TimeOfLastDeath;
};
