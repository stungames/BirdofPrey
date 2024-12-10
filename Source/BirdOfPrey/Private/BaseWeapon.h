// Berkush 2024, it coded for GAD2006

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseWeapon.generated.h"

UCLASS()
class ABaseWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	//Functions
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey") //After creating other class change this
	void StartFire() {};

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StopFire() { };
	
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void PlayFireEffects() {};

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	FTransform GetFireEffectSpawnTransform() { return FTransform(); };

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool HasFinishedFiring() { return false; };

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool IsFiring() { return false; };

	//Add Effects!!!
	
	//Properties
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	bool bRequiresAimForAI = true;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	bool bIsAutomatic = true;

};
