// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BasePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class ABasePlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:
    virtual void BeginPlay() override;
    virtual void Reset() override;

    void PauseMenu();

    UFUNCTION(BlueprintCallable)
    void CalcScreenDimensions(float& OutHeight, float& OutWidth);

    UFUNCTION(BlueprintCallable)
    void OnPlayerDeath();

    UPROPERTY(BlueprintReadWrite)
    bool bDiedWhileFiring;
};
