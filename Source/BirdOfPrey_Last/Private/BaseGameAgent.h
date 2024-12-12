// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseGameInstance.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/Actor.h"
#include "BaseGameAgent.generated.h"

class ABaseWeapon;

UCLASS()
class ABaseGameAgent : public APawn
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	USkeletalMeshComponent* SkeletalMesh;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	UCapsuleComponent* Capsule;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	USceneComponent* WeaponSpawnOffset;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	UParticleSystem* DeathParticleEffect;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	USoundCue* DeathSoundCue;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	USoundCue* HitSoundCue;
	
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	UParticleSystem* HitParticleEffect;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float MoveSpeed;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	ABaseWeapon* Weapon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	TSubclassOf<ABaseWeapon> DefaultWeaponType;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	FSAgentInfo AgentInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float Points;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	bool bCheckForOutOfBounds;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float OutOfBoundsCheckTolerance;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	FName WeaponSocketName;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	EAttachmentRule WeaponAttachRule;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	FVector TargetLocation;

public:
	// Sets default values for this pawn's properties
	ABaseGameAgent();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ChangeWeaponType(TSubclassOf<ABaseWeapon> NewWeaponType);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	FTransform GetWeaponSpawnTransform();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SpawnDefaultWeapon();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StartFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StopFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual float TakeDamage(float Damage, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	bool IsAlive();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void Died(AController* Killer);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void PlayHitEffects();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CleanUp();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void ApplyAgentInfo(FSAgentInfo NewAgentInfo);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AimAt(FVector AimTarget);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void PlayerDeathEffects();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CheckForOutOfBounds();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;



};
