// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "WorldCameraActor.h"
#include "BasePowerUp.h"
#include "BasePlayerController.h"
#include "BaseGameAgent.h"
#include "GameFramework/Controller.h"
#include "BaseGameMode.generated.h"

/**
 *
 */
UCLASS()
class ABaseGameMode : public AGameMode
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float WorldScrollSpeed;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	FVector2D MaxRelativePlayerOffset;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	AWorldCameraActor* WorldCameraActor;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	UDataTable* PlayerAgentInfoTable;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float RespawnDelay;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float SpawnOffset;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	FTimerHandle StationarySpawnTimer;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	FTimerHandle ShipSpawnTimer;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	TArray<TSubclassOf<ABasePowerUp>> PowerUpList;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float PickUpSpawnPercent;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	bool IsGameOverScreen;

public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	FVector GetWorldScrollVelocity();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	AWorldCameraActor* GetWorldCameraActor();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnPlayerDied(ABasePlayerController* Player);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnEnemyDied(ABaseGameAgent* Enemy, AController* Killer);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StartGame();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void EndGame(bool Success);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SpawnEnemyFrom(TArray<TSubclassOf<ABasePowerUp>> ClassList);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ResetGame();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void RespawnPlayer();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void TrySpawnPowerUp(FVector Location);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	float GetDistanceTravelled();
};
