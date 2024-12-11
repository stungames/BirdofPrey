// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BasePlayerController.h"
#include "BaseGameAgent.h"
#include "BaseAIController.generated.h"

/**
 * 
 */
UCLASS()
class ABaseAIController : public AAIController
{
	GENERATED_BODY()

    ABaseAIController();

    virtual void Tick(float DeltaTime) override;
    virtual void OnPossess(APawn* InPawn) override;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void SelectTarget();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void AimAt(FVector AimTarget);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void CheckFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void UpdateAim();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool ShouldStartFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool ShouldStopFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void StartFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void StopFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool ShouldUpdateAim();

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey|Firing")
    float LastFireTime;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey|Firing")
    bool bIsFiring;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey|Firing")
    float RefireDelay;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey|Firing")
    bool bShouldUpdateAim;

    // References
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    ABasePlayerController* Target;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    ABaseGameAgent* ControlledAgent;
};
