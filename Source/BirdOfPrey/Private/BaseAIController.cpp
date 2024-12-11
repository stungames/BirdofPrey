// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseAIController.h"

ABaseAIController::ABaseAIController()
{
}

void ABaseAIController::Tick(float DeltaTime)
{
}

void ABaseAIController::OnPossess(APawn* InPawn)
{
}

void ABaseAIController::SelectTarget()
{
}

void ABaseAIController::AimAt(FVector AimTarget)
{
}

void ABaseAIController::CheckFire()
{
}

void ABaseAIController::UpdateAim()
{
}

bool ABaseAIController::ShouldStartFire()
{
	return false;
}

bool ABaseAIController::ShouldStopFire()
{
	return false;
}

void ABaseAIController::StartFire()
{
}

void ABaseAIController::StopFire()
{
}

bool ABaseAIController::ShouldUpdateAim()
{
	return false;
}