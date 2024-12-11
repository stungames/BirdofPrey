// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseShip.h"
#include "BaseEnemyShip.generated.h"

//class ABaseShipAIController;

/**
 * 
 */
UCLASS()
class ABaseEnemyShip : public ABaseShip
{
    GENERATED_BODY()

public:
    ABaseEnemyShip();

    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;
    virtual void ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    virtual void Died(AController* Killer);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void Move();

protected:
    //THIS IS NOT NECESSARY FOR ASSIGNMENT
    //UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
    //ABaseShipAIController* ShipAIController;
};
