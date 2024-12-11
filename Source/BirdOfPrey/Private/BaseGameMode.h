// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Engine/DataTable.h"
#include "GameFramework/WorldSettings.h"
#include "TimerManager.h"
#include "BasePowerUp.h"
#include "Camera/CameraActor.h"
#include "BaseGameMode.generated.h"

/**
 * 
 */
UCLASS()
class ABaseGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    ABaseGameMode();

    virtual void BeginPlay() override;
    virtual void OnRestartPlayer(AController* NewPlayer);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    float GetWorldScrollVelocity();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    ACameraActor* GetWorldCameraActor();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void OnPlayerDied();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void OnEnemyDied();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    FVector GetPowerUpSpawnLocation();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void StartGame();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void EndGame();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void SpawnEnemyFrom();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void ResetGame();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void RespawnPlayer();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void TrySpawnPowerUp();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    float GetDistanceTravelled();

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BirdOfPrey")
    USceneComponent* DefaultSceneRoot;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey|World")
    float WorldScrollSpeed;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey|World")
    FVector2D MaxRelativePlayerOffset;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey|World")
    ACameraActor* WorldCameraActor;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey|Game")
    UDataTable* PlayerAgentInfoTable;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey|Game")
    float RespawnDelay;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey|Game")
    float SpawnOffset;

    UPROPERTY()
    FTimerHandle StationarySpawnTimer;

    UPROPERTY()
    FTimerHandle ShipSpawnTimer;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey|PowerUp")
    TSubclassOf<ABasePowerUp> PowerUpList;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey|PowerUp")
    float PickUpSpawnPercent;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey|State")
    bool bIsGameOver;
};
