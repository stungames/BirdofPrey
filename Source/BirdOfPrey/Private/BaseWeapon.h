// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundCue.h"
#include "BaseWeapon.generated.h"

UCLASS()
class ABaseWeapon : public AActor
{
    GENERATED_BODY()

public:
    ABaseWeapon();

    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;
    virtual void ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    virtual void StartFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    virtual void StopFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void PlayFireEffects();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    FTransform GetFireEffectSpawnTransform();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool HasFinishedFiring();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool IsFiring();

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BirdOfPrey")
    USceneComponent* DefaultSceneRoot;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey|Effects")
    UParticleSystem* FireParticleEffect;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey|Effects")
    USoundCue* FireSoundCue;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey|Properties")
    bool bRequiresAimForAI;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey|Properties")
    bool bIsAutomatic;
};
