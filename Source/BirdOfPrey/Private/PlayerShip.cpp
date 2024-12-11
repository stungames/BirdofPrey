// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerShip.h"

APlayerShip::APlayerShip():
	InvulnerabilityTime(2.0f)
{
}

void APlayerShip::GetShipConstantVelocity(FVector& Direction, float& Speed)
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

void APlayerShip::GetPlayerAgentInfo(ABasePlayerController* Player)
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
