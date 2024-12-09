// Berkush 2024, it coded for GAD2006

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

public:
	//Functions
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CalcScreenDimensions();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnPlayerDeath(UObject* Killer); //After creating other class change this

	//Properties
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	bool bDiedWhileFiring = false;

	//Also needed Interface named Reset!!!
	
};
