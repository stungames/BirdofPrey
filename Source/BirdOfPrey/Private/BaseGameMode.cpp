// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGameMode.h"


ABaseGameMode::ABaseGameMode()
{
}

void ABaseGameMode::BeginPlay()
{
}

void ABaseGameMode::OnRestartPlayer(AController* NewPlayer)
{
}

float ABaseGameMode::GetWorldScrollVelocity()
{
	return 0.0f;
}

ACameraActor* ABaseGameMode::GetWorldCameraActor()
{
	return nullptr;
}

void ABaseGameMode::OnPlayerDied()
{
}

void ABaseGameMode::OnEnemyDied()
{
}

FVector ABaseGameMode::GetPowerUpSpawnLocation()
{
	return FVector();
}

void ABaseGameMode::StartGame()
{
}

void ABaseGameMode::EndGame()
{
}

void ABaseGameMode::SpawnEnemyFrom()
{
}

void ABaseGameMode::ResetGame()
{
}

void ABaseGameMode::RespawnPlayer()
{
}

void ABaseGameMode::TrySpawnPowerUp()
{
}

float ABaseGameMode::GetDistanceTravelled()
{
	return 0.0f;
}