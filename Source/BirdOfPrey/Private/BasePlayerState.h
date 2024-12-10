// Berkush 2024, it coded for GAD2006

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
	//Functions
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AddScore(float Amount) { };

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ConsumeLife() { };

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool HasRemainingLives() { return false; };

	//Properties
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float PlayerScore = .0f;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	int RemainingLives = 3;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float TimeOfLastDeath = .0f;
};
