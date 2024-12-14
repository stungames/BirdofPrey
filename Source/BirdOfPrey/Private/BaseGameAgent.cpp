// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGameAgent.h"

// Sets default values
ABaseGameAgent::ABaseGameAgent()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseGameAgent::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseGameAgent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

TSubclassOf<ABaseWeapon> ABaseGameAgent::ChangeWeaponType()
{
	return TSubclassOf<ABaseWeapon>();
}

void ABaseGameAgent::GetWeaponSpawnTransform(FTransform& SpawnTransform)
{
}

void ABaseGameAgent::SpawnDefaultWeapon()
{
}

void ABaseGameAgent::StartFire()
{
}

void ABaseGameAgent::StopFire()
{
}

void ABaseGameAgent::TakeDamage(float Damage, float& ActualDamage)
{
}


void ABaseGameAgent::IsAlive(bool& Alive)
{
}

void ABaseGameAgent::Died(AController* Killer)
{
}

void ABaseGameAgent::PlayHitEffects()
{
}

void ABaseGameAgent::CleanUp()
{
}

void ABaseGameAgent::ApplyAgentInfo(FSAgentInfo NewAgentInfo)
{
}

void ABaseGameAgent::AimAt(FVector AimTarget)
{
}

void ABaseGameAgent::PlayDeathEffects()
{
}

void ABaseGameAgent::CheckForOutOfBounds()
{
}

// Called to bind functionality to input
void ABaseGameAgent::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

