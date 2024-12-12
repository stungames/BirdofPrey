// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BaseGameMode.generated.h"

class ABasePowerUp;
class ABaseGameAgent;
class ABasePlayerController;

/**
 * 
 */
UCLASS()
class ABaseGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float WorldScrollSpeed;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey", meta = (ToolTip = "Furthest the player can move away from the World Camera Actor on X/Y axes"))
	FVector2D MaxRelativePlayerOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
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
	ABaseGameMode();
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	FVector GetWorldScrollVelocity();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	TSubclassOf<AActor> GetWorldCameraActor();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnPlayerDied(ABasePlayerController* Player);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnEnemyDied(ABaseGameAgent* Enemy, AController* Killer);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StartGame();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void EndGame(bool Success);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SpawnEnemyFrom(TArray<TSubclassOf<ABaseGameAgent>> ClassList);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ResetGame();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void RespawnPlayer();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void TrySpawnPowerUp(FVector Location);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	float GetDistanceTraveled();

protected:
	virtual void BeginPlay() override;
	

private:

	UPROPERTY(BlueprintGetter = GetWorldCameraActor, Category = "BirdOfPrey")
	TSubclassOf<AActor> WorldCameraActor;
};
