// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BasePowerUp.generated.h"

class APlayerShip;

UCLASS()
class ABasePowerUp : public AActor
{
	GENERATED_BODY()

	
public:
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	UStaticMeshComponent* Mesh;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	USoundCue* PickUpSoundCue;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	UParticleSystem* PickUpParticleSystem;
	
public:	
	// Sets default values for this actor's properties
	ABasePowerUp();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void Apply(APlayerShip* PlayerShip);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void PlayEffects();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;


};
