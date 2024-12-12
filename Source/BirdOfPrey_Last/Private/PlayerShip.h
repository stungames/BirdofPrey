// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseShip.h"
#include "Components/PointLightComponent.h"
#include "PlayerShip.generated.h"

class ABasePlayerController;

/**
 * 
 */
UCLASS()
class APlayerShip : public ABaseShip
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	UPointLightComponent* PointLight;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	UAudioComponent* HoverAudio;
	
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	ABasePlayerController* BasePlayerController;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float InvulnerabilityTime;
	
public:
	APlayerShip();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	void GetShipConstantVelocity(FVector& Direction, float& Speed);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ClampToCameraBounds();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	float GetShipAxisAdjustment(float Dist, float Max);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	FVector CalcOutofBoundsAdjustment();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void GetPlayerAgentInfo(APlayerController* Player);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey") // Couldn't make it blueprintpure because it is void and no output it has.
	void ShouldSpawnAIController();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void UpdateHoverPitch();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	bool HasDiedRecently();


public:
	virtual void Tick(float DeltaTime) override;
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;
	virtual void Died(AController* Killer) override;
	



};
