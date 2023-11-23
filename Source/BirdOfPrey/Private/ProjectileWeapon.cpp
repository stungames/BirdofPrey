// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileWeapon.h"

ABaseProjectile* AProjectileWeapon::SpawnProjectile(FTransform SpawnTransform)
{
	return nullptr;
}

FTransform AProjectileWeapon::GetProjectileSpawnTransform(uint8 ShotNumber)
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


