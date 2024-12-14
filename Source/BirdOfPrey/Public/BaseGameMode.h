// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Runtime/Engine/Public/TimerManager.h"
#include "WorldCameraActor.h"
#include "BasePowerUp.h"
#include "BaseGameAgent.h"
#include "BasePlayerController.h"
#include "DataTable.generated.h"
#include "BaseGameMode.generated.h"



/**
 * 
 */
UCLASS()
class BIRDOFPREY_API ABaseGameMode : public AGameModeBase
{
	GENERATED_BODY()
	

public:

	ABaseGameMode();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	FVector GetWorldScrolVeleocity();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	AWorldCameraActor* GetWorlCameraActor();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnPlayerDied(ABasePlayerController* BasePlayerController);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnEnemyDied(ABaseGameAgent*Enemy,AController* Killer );

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StartGame();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void EndGame(bool bSuccess);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SpawnEnemyFrom(TArray<ABaseGameAgent*> ClassList);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ResetGame();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void RespawnPlayer();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void TrySpawnPowerUp(FVector Location);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void GetDistanceTravelled(float ReturnValue);

public:
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float WorldScrollSpeed;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	FVector2D MaxRelativePlayerOffset;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	AWorldCameraActor* WorldCameraActor;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	UDataTable* PlayerAgentInfoTable;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float RespawnDelay;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float SpawnOffset;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	FTimerHandle StationarySpawnTimer;

	
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	TArray<ABasePowerUp*> PowerUpList;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float PickUpSpawnPercent;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	bool bIsGameOverScreen;
	
};
