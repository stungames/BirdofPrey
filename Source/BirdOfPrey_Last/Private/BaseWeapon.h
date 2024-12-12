// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseWeapon.generated.h"

UCLASS()
class ABaseWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseWeapon();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void StartFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void StopFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void PlayFireEffects();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	FTransform GetFireEffectSpawnTransform();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	bool HasFinishedFiring();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	virtual bool IsFiring();

public:

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	UParticleSystem* FireParticleEffect;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	USoundCue* FireSoundCue;
	
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	bool bRequiresAimForAI;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	bool bIsAutomatic;

};
