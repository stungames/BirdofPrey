// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGameMode.h"

ABaseGameMode::ABaseGameMode() :
    MaxRelativePlayerOffset(500.0f,700.0f),
    RespawnDelay(3.0f),
    SpawnOffset(600.0f),
    PickUpSpawnPercent(.3f)
{

}

FVector ABaseGameMode::GetWorldScrolVeleocity()
{
    return FVector();
}

AWorldCameraActor* ABaseGameMode::GetWorlCameraActor()
{
    return nullptr;
}

void ABaseGameMode::OnPlayerDied(ABasePlayerController* BasePlayerController)
{
}

void ABaseGameMode::OnEnemyDied(ABaseGameAgent* Enemy, AController* Killer)
{
}

void ABaseGameMode::StartGame()
{
}

void ABaseGameMode::EndGame(bool bSuccess)
{
}

void ABaseGameMode::SpawnEnemyFrom(TArray<ABaseGameAgent*> ClassList)
{
}

void ABaseGameMode::ResetGame()
{
}

void ABaseGameMode::RespawnPlayer()
{
}

void ABaseGameMode::TrySpawnPowerUp(FVector Location)
{
}

void ABaseGameMode::GetDistanceTravelled(float ReturnValue)
{
}

