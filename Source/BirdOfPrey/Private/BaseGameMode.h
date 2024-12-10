// Berkush 2024, it coded for GAD2006

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BaseGameMode.generated.h"

/**
 * 
 */
UCLASS()
class ABaseGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	//Functions
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	FVector GetWorldScrollVelocity() const;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	UObject* GetWorldCameraActor() const; //I don't have WorldCameraActor

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnPlayerDied(class ABasePlayerController* BasePlayerController);
	
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnEnemyDied(class ABaseGameAgent* Enemy, AController* Killer);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StartGame();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void EndGame(bool bSuccess);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SpawnEnemyFrom(TArray<TSubclassOf<ABaseGameAgent>> ClassList);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ResetGame();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void RespawnPlayer();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void TrySpawnPowerUp(FVector Location);
	
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	float GetDistanceTravelled() const;

	//Properties
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float WorldScrollSpeed = .0f;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	FVector2f MaxRelativePlayerOffset = FVector2f(500.f, 700.f);

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	class UObject* WorldCameraActor; //I don't have WorldCameraActor

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	UDataTable* PlayerAgentInfoTable;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float RespawnDelay = 3.f;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float SpawnOffset = 600.f;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	FTimerHandle StationarySpawnTimer;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	FTimerHandle ShipSpawnTimer;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	TArray<class ABasePowerUp*> PowerUpList;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float PickUpSpawnPercent = .3f;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	bool bIsGameOverScreen = false;
};
