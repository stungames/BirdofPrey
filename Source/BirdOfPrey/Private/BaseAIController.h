// Berkush 2024, it coded for GAD2006

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BaseAIController.generated.h"

/**
 * 
 */
UCLASS()
class ABaseAIController : public AAIController
{
	GENERATED_BODY()

public:
	//Functions
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SelectTarget() { };

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AimAt(FVector AimTarget) { };

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CheckFire() { };

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void UpdateAim() { };

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool ShouldStartFire() const { return false; };

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool ShouldStopFire() const { return false; };

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StartFire() { };

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StopFire() { };

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool ShouldUpdateAim() const { return false; };

	//Properties
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey") //Firing subcat.
	float LastFireTime = .0f;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey") //Firing subcat.
	bool bIsFiring = false;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey") //Firing subcat.
	float RefireDelay = 1.f;
	
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey") //Firing subcat.
	bool bShouldUpdateAim = false;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey") //Firing subcat.
	class ABasePlayerController* Target;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey") //Firing subcat.
	class ABaseGameAgent* ControlledAgent;
};
