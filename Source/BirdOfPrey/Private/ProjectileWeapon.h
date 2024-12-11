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
class AProjectileWeapon : public ABaseWeapon
{
    GENERATED_BODY()

public:
    AProjectileWeapon();

    virtual void Tick(float DeltaTime) override;
    virtual void StartFire() override;
    virtual void StopFire() override;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void FireProjectile();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void SpawnProjectile();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    FTransform GetProjectileSpawnTransform();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool ReadyToFire();

    bool IsFiring();

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey|Projectile")
    TSubclassOf<ABaseProjectile> ProjectileType;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey|Firing")
    float RefireTime;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey|Firing")
    float LastFireTime;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey|Firing")
    int32 NumShots;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey|Firing")
    bool bIsFiring;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey|Firing")
    float DesiredZ;
};
