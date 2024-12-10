// Berkush 2024, it coded for GAD2006

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BasePowerUp.generated.h"

UCLASS()
class ABasePowerUp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABasePowerUp();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
public:
	//Functions  
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void Apply(class APlayerShip* PlayerShip) { };

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void PlayEffects() { };

	//Add Reset Interface
	
	//Properties
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	USoundCue* PickUpSoundCue;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	UParticleSystem* PickUpParticleSystem;
};
