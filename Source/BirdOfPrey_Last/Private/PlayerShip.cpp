// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerShip.h"

APlayerShip::APlayerShip()
{
	
}

void APlayerShip::GetShipConstantVelocity(FVector& Direction, float& Speed)
{
	
}

void APlayerShip::ClampToCameraBounds()
{
	
}

void APlayerShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

float APlayerShip::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser)
{
	Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	return 0.0f;
}

float APlayerShip::GetShipAxisAdjustment(float Dist, float Max)
{
	return 0.0f;
}

FVector APlayerShip::CalcOutofBoundsAdjustment()
{
	return FVector::ZeroVector;
}

void APlayerShip::GetPlayerAgentInfo(APlayerController* Player)
{
	
}

void APlayerShip::ShouldSpawnAIController()
{
	
}

void APlayerShip::UpdateHoverPitch()
{
	
}

bool APlayerShip::HasDiedRecently()
{
	return false;
}

void APlayerShip::Died(AController* Killer)
{
	
}









