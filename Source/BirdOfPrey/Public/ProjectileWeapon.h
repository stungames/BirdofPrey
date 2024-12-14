// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseWeapon.h"
#include "BaseProjectile.h"
#include "ProjectileWeapon.generated.h"

/**
 * 
 */
UCLASS()
class BIRDOFPREY_API AProjectileWeapon : public ABaseWeapon
{
	GENERATED_BODY()
public:

	AProjectileWeapon();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	ABaseProjectile* SpawnProjectile(FTransform SpawnTransform);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	FTransform GetProjectileSpawnTransform(int ShotNumber);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool ReadyToFire();

public:
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	ABaseProjectile* ProjectileType;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float RefireTime;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float LastFireTime;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	int NumShots;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	bool bIsFiring;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float DesiredZ;
	
};
