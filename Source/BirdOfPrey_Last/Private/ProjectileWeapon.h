// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseWeapon.h"
#include "ProjectileWeapon.generated.h"

class ABaseProjectile;

/**
 * 
 */
UCLASS()
class AProjectileWeapon : public ABaseWeapon
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	TSubclassOf<ABaseProjectile> ProjectileType;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float RefireTime;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float LastFireTime;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	int32 NumShots;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	bool bIsFiring;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float DesiredZ;

public:
	AProjectileWeapon();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	ABaseProjectile* SpawnProjectile(FTransform SpawnTransform);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	FTransform GetProjectileSpawnTransform(int32 ShotNumber);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	bool ReadyToFire();
public:
	virtual void Tick(float DeltaTime) override;
	virtual bool IsFiring() override;
	virtual void StartFire() override;
	virtual void StopFire() override;



};
