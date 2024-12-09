// Berkush 2024, it coded for GAD2006


#include "BaseGameMode.h"

FVector ABaseGameMode::GetWorldScrollVelocity() const
{
	return FVector::ZeroVector;
}

UObject* ABaseGameMode::GetWorldCameraActor() const
{
	return nullptr;
}

void ABaseGameMode::OnPlayerDied(UObject* BasePlayerController)
{
	
}

void ABaseGameMode::OnEnemyDied(UObject* Enemy, UObject* Killer)
{
	
}

void ABaseGameMode::StartGame()
{
	
}

void ABaseGameMode::EndGame(bool bSuccess)
{
	
}

void ABaseGameMode::SpawnEnemyFrom(TArray<UObject*> ClassList)
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

float ABaseGameMode::GetDistanceTravelled() const
{
	return 0.0f;
}

