// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseWeapon.h"

// Sets default values
ABaseWeapon::ABaseWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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







