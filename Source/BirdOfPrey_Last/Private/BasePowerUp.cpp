// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePowerUp.h"
#include "PlayerShip.h"

// Sets default values
ABasePowerUp::ABasePowerUp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called every frame
void ABasePowerUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABasePowerUp::NotifyActorBeginOverlap(AActor* OtherActor)
{
	
}

void ABasePowerUp::Apply(APlayerShip* PlayerShip)
{
	
}

void ABasePowerUp::PlayEffects()
{
	
}




