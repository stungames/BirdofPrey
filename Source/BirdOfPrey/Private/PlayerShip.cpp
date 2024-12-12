// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerShip.h"

void APlayerShip::GetShipConstantVelocity(float& Speed, FVector& Direction)
{
}

void APlayerShip::ClampToCameraBounds()
{
}

float APlayerShip::GetShipAxisAdjustment(float Dist, float Max)
{
	return 0.0f;
}

FVector APlayerShip::CalcOutofBoundsAdjustment()
{
	return FVector();
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
