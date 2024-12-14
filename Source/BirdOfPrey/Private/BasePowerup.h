// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlayerShip.h"
#include "Sound/SoundCue.h"
#include "BasePowerUp.generated.h"

UCLASS()
class ABasePowerUp : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABasePowerUp();

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey|Effects")
	USoundCue* PickUpSounCue;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey|Effects")
	UParticleSystem* PickUpParticleSystem;


	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void Apply(APlayerShip* PlayerShip);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void PlayEffects();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


};