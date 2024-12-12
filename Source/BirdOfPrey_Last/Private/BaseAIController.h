// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BaseAIController.generated.h"

class ABasePlayerController;
class ABaseGameAgent;

/**
 * 
 */
UCLASS()
class ABaseAIController : public AAIController
{
	GENERATED_BODY()

public:
	ABaseAIController();

	UFUNCTION(BlueprintCallable, Category="BirdOfPrey")
	void SelectTarget();

	UFUNCTION(BlueprintCallable, Category="BirdOfPrey")
	void AimAt(FVector AimTarget);

	UFUNCTION(BlueprintCallable, Category="BirdOfPrey")
	void CheckTarget();

	UFUNCTION(BlueprintCallable, Category="BirdOfPrey")
	void UpdateAim();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="BirdOfPrey")
	bool ShouldStartFire();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="BirdOfPrey")
	bool ShouldStopFire();

	UFUNCTION(BlueprintCallable, Category="BirdOfPrey")
	void StartFire();

	UFUNCTION(BlueprintCallable, Category="BirdOfPrey")
	void StopFire();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="BirdOfPrey")
	bool ShouldUpdateAim();
	
public:
	virtual void Tick(float DeltaSeconds) override;
	virtual void OnPossess(APawn* InPawn) override;


public:
	UPROPERTY(BlueprintReadWrite, Category="BirdOfPrey")
	float LastFireTime;

	UPROPERTY(BlueprintReadWrite, Category="BirdOfPrey")
	bool bIsFiring;

	UPROPERTY(BlueprintReadWrite, Category="BirdOfPrey")
	float RefireDelay;

	UPROPERTY(BlueprintReadWrite, Category="BirdOfPrey")
	bool bShouldUpdateAim;

	UPROPERTY(BlueprintReadWrite, Category="BirdOfPrey")
	ABasePlayerController* Target;

	UPROPERTY(BlueprintReadWrite, Category="BirdOfPrey")
	ABaseGameAgent* ControlledAgent;
};
