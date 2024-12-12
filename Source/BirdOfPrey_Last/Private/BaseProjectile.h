// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "BaseProjectile.generated.h"

class ABaseGameAgent;

UCLASS()
class ABaseProjectile : public AActor
{
	GENERATED_BODY()

	
public:
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	UStaticMeshComponent* Mesh;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	UProjectileMovementComponent* ProjectileMovement;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	UCapsuleComponent* Capsule;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float ProjectileSpeed;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	UParticleSystem* DetonationEmitter;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float GroundUnitCheckDistance;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float GroundUnitCheckAngle;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	ABaseGameAgent* GroundTarget;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float DesiredZ;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	USoundBase* ImpactSound;
	
public:	
	// Sets default values for this actor's properties
	ABaseProjectile();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void InitialiseProjectile(FVector Direction, float Speed);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void DealDamageTo(AActor* Damaging, float Damage);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	ECollisionChannel GetInstigatorCollisionChannel();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CheckForGroundUnitTarget();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	bool ShouldCheckForGroundTarget();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AdjustToTarget();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	bool IsEnemyAProjectile();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AdjustToDesiredZ();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey") // Set this with AddDynamic and we will have On Component Begin Overlap (Capsule)
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	// The name was giving compiler error
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float Damage;



};
