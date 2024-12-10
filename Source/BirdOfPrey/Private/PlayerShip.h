// Berkush 2024, it coded for GAD2006

#pragma once

#include "CoreMinimal.h"
#include "BaseShip.h"
#include "PlayerShip.generated.h"

/**
 * 
 */
UCLASS()
class APlayerShip : public ABaseShip
{
	GENERATED_BODY()
	
public:
	//Functions
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey") 
	void GetShipConstantVelocity(FVector& Direction, float& Speed) {}; //Out Params

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ClampToCameraBounds() { };
	
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	float GetShipAxisAdjustment(float Dist, float Max) { return .0f; };

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	FVector CalcOutofBoundsAdjustment() { return FVector::ZeroVector; };

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey") //After creating other class change this, Actually I didn't found any Player Controller Type Var.
	void GetPlayerAgentInfo(UObject* Player) {};

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey") 
	void ShouldSpawnAIController() { };

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void UpdateHoverPitch() { };

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey") //compiler error
	bool HasDiedRecently() { return false;};

	//UFUNCTION(BlueprintCallable, Category = "BirdOfPrey") //i didn't override yet
	//void TakeDamage(float Damage) { };

	//Add reset interface!!!

	//Properties
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	class ABasePlayerController* BasePlayerController;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float InvulnerabilityTime = 2.f;
	
};
