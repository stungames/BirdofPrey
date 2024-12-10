// Berkush 2024, it coded for GAD2006

#pragma once

#include "CoreMinimal.h"
#include "BaseShip.h"
#include "BaseEnemyShip.generated.h"

/**
 * 
 */
UCLASS()
class ABaseEnemyShip : public ABaseShip
{
	GENERATED_BODY()

public:
	//Functions
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void Move() {};

	//Add reset interface!!!
	
	//Properties
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey") //After creating other class change this to ShipAIController
	UObject* ShipAIController;
	
};
