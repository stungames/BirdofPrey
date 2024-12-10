// Berkush 2024, it coded for GAD2006

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseProjectile.generated.h"

UCLASS()
class ABaseProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	//Functions
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void InitialiseProjectile(FVector Direction, float Speed) {};

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void DealDamageTo(AActor* Damaging, float Damage) {};
	
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor) {};

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	ECollisionChannel GetInstigatorCollisionChannel() { return ECollisionChannel::ECC_Pawn; };

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CheckForGroundUnitTarget() {};

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool ShouldCheckForGroundTarget() { return false; };

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AdjustToTarget() {};

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool IsEnemyProjectile() { return false; };

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AdjustToDesiredZ() {};

	//Properties
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float ProjectileSpeed = 1000.f;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float Damage = 50.f;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	class UParticleSystem* DetonationEmitter; 

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float GroundUnitCheckDistance = 2000.f;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float GroundUnitCheckAngle = 10.f;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	class ABaseGameAgent* GroundTarget;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float DesiredZ = 0.f;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	USoundBase* ImpactSound;
	
};
