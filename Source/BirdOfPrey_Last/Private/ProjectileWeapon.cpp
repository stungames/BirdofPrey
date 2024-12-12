// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileWeapon.h"
#include "BaseProjectile.h"

AProjectileWeapon::AProjectileWeapon()
{
	PrimaryActorTick.bCanEverTick = true;
}

ABaseProjectile* AProjectileWeapon::SpawnProjectile(FTransform SpawnTransform)
{
	return nullptr;
}

FTransform AProjectileWeapon::GetProjectileSpawnTransform(int32 ShotNumber)
{
	return FTransform();
}

bool AProjectileWeapon::ReadyToFire()
{
	return false;
}

bool AProjectileWeapon::IsFiring()
{
	return false;
}

void AProjectileWeapon::StartFire()
{
	
}

void AProjectileWeapon::StopFire()
{
	
}

void AProjectileWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}







