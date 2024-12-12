// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseAIController.h"
#include "BaseShip.h"
#include "BaseEnemyShip.generated.h"

/**
 * 
 */
UCLASS()
class ABaseEnemyShip : public ABaseShip
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	TSubclassOf<ABaseAIController> ShipAIController;

public:
	ABaseEnemyShip();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void Move();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	virtual void Died(AController* Killer) override;


};
