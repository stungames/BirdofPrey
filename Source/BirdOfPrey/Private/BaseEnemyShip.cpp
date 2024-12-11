// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseEnemyShip.h"

ABaseEnemyShip::ABaseEnemyShip()
{
}

void ABaseEnemyShip::BeginPlay()
{
    Super::BeginPlay();
}

void ABaseEnemyShip::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ABaseEnemyShip::ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
}

void ABaseEnemyShip::Died(AController* Killer)
{
}

void ABaseEnemyShip::Move()
{
}