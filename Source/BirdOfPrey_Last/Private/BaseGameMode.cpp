// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGameMode.h"
#include "BasePowerUp.h"
#include "BaseGameAgent.h"
#include "BasePlayerController.h"

ABaseGameMode::ABaseGameMode()
{
	
}

void ABaseGameMode::BeginPlay()
{
	
}



FVector ABaseGameMode::GetWorldScrollVelocity()
{
	return FVector::ZeroVector;
}

TSubclassOf<AActor> ABaseGameMode::GetWorldCameraActor()
{
	return nullptr;
}

void ABaseGameMode::OnPlayerDied(ABasePlayerController* Player)
{
	
}

void ABaseGameMode::OnEnemyDied(ABaseGameAgent* Enemy, AController* Killer)
{
	
}

void ABaseGameMode::StartGame()
{
	
}

void ABaseGameMode::EndGame(bool Success)
{
	
}

void ABaseGameMode::SpawnEnemyFrom(TArray<TSubclassOf<ABaseGameAgent>> ClassList)
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

float ABaseGameMode::GetDistanceTraveled()
{
	return 0.0f;
}












