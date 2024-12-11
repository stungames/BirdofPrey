// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Particles/ParticleSystem.h"
#include "GameFramework/Pawn.h"
#include "Sound/SoundBase.h"
#include "BaseGameAgent.h"
#include "BaseProjectile.generated.h"

UCLASS()
class ABaseProjectile : public AActor
{
    GENERATED_BODY()

public:
    ABaseProjectile();

    virtual void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent,
        AActor* OtherActor,
        UPrimitiveComponent* OtherComp,
        int32 OtherBodyIndex, 
        bool bFromSweep, 
        const FHitResult& SweepResult);

    virtual void BeginPlay() override;

    virtual void Reset();

    virtual void Tick(float DeltaTime) override;

    virtual void CleanUpAndDestroy();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void InitialiseProjectile();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void DealDamageTo();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void OnHit();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    UPrimitiveComponent* GetInstigatorCollisionChannel();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void CheckForGroundUnitTarget();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool ShouldCheckForGroundTarget();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void AdjustToTarget();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool IsEnemyProjectile();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void AdjustToDesiredZ();

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float ProjectileSpeed;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float Damage;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    UParticleSystem* DetonationEmitter;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float GroundUnitCheckDistance;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float GroundUnitCheckAngle;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    ABaseGameAgent* GroundTarget;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    float DesiredZ;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    USoundBase* ImpactSound;
};
