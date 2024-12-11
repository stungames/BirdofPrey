// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseWeapon.h"

ABaseWeapon::ABaseWeapon()
{
}

void ABaseWeapon::BeginPlay()
{
}

void ABaseWeapon::Tick(float DeltaTime)
{
}

void ABaseWeapon::ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
}

void ABaseWeapon::StartFire()
{
}

void ABaseWeapon::StopFire()
{
}

void ABaseWeapon::PlayFireEffects()
{
}

FTransform ABaseWeapon::GetFireEffectSpawnTransform()
{
	return FTransform();
}

bool ABaseWeapon::HasFinishedFiring()
{
	return false;
}

bool ABaseWeapon::IsFiring()
{
	return false;
}