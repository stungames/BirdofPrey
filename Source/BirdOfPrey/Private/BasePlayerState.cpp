// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePlayerState.h"

ABasePlayerState::ABasePlayerState():
	RemainingLives(3)
{
}

void ABasePlayerState::AddScore(float Amount)
{
}

void ABasePlayerState::ConsumeLife()
{
}

bool ABasePlayerState::HasRemainingLives()
{
	return false;
}

