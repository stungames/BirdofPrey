// Berkush 2024, it coded for GAD2006

#pragma once

#include "CoreMinimal.h"
#include "BaseProjectile.h"
#include "BaseWeapon.h"
#include "ProjectileWeapon.generated.h"

/**
 * 
 */
UCLASS()
class AProjectileWeapon : public ABaseWeapon
{
	GENERATED_BODY()

public:
	//Functions  
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	ABaseProjectile* SpawnProjectile(FTransform SpawnTransform) { return nullptr; };

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	FTransform GetProjectileSpawnTransform(int ShotNumber) { return FTransform(); };
	
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool ReadyToFire() { return false; };

	//UFUNCTION(BlueprintCallable, Category = "BirdOfPrey") //Compile error
	//bool IsFiring () const { return bIsFiring; };

	//Properties
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	TSubclassOf<ABaseProjectile> ProjectileType = ABaseProjectile::StaticClass();

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float RefireTime = .5f;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	int32 NumShots = 1;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	bool bIsFiring = false;
	
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float DesiredZ = .0f;
	
};
