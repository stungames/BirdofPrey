// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseGameInstance.h"
#include "VREditorInteractor.h"
#include "GameFramework/Pawn.h"
#include "BaseGameAgent.generated.h"

UCLASS()
class ABaseGameAgent : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABaseGameAgent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	//Functions
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey") //After creating other class change this
	void ChangeWeaponType(UObject* NewWeaponType) {};

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	FTransform GetWeaponSpawnTransform() { return FTransform(); };
	
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SpawnDefaultWeapon() {};

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StartFire() { };

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StopFire() {};

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	float TakeDamage(float Damage) { return /*Actual Damage*/.0f; };

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool IsAlive() { return false; };

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void Died(EControllerType Killer) { };

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void PlayHitEffects() {};

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CleanUp() {};

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ApplyAgentInfo(FSAgentInfo& NewAgentInfo) {};

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AimAt(FVector AimTarget) {};
	
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void PlayDeathEffects() {};

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CheckForOutOfBounds() {};

	//Add reset interface!!!

	//Add Effects!!!

	//Properties
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float MoveSpeed = 50.f;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	UObject* Weapon; //After creating other class change this

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	UObject* DefaultWeaponType; //After creating other class change this

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float Health = 100.f;
	
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	FSAgentInfo AgentInfo;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float Points = 100.f;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	bool bCheckForOutOfBounds = false;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float OutOfBoundsCheckTolerance = 0.f;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	FName WeaponSocketName = TEXT("EyeLoc");

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	EAttachmentRule WeaponAttachRule = EAttachmentRule::SnapToTarget;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	FVector TargetLocation = FVector(0.f,0.f,0.f);
};
