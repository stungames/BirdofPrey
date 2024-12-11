// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundCue.h"
#include "BasePowerUp.generated.h"

UCLASS()
class ABasePowerUp : public AActor
{
    GENERATED_BODY()

public:
    ABasePowerUp();

    virtual void ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void Apply();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void PlayEffects();

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BirdOfPrey")
    UStaticMeshComponent* Mesh;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    USoundCue* PickUpSoundCue;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    UParticleSystem* PickUpParticleSystem;

};
