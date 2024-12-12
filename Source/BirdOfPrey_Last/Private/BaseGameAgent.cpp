// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGameAgent.h"
#include "BaseWeapon.h"

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

// Called to bind functionality to input
void ABaseGameAgent::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ABaseGameAgent::ChangeWeaponType(TSubclassOf<ABaseWeapon> NewWeaponType)
{
	
}

FTransform ABaseGameAgent::GetWeaponSpawnTransform()
{
	return FTransform();
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

float ABaseGameAgent::TakeDamage(float Damage, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	return 0.0f;
}

bool ABaseGameAgent::IsAlive()
{
	return false;
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

void ABaseGameAgent::PlayerDeathEffects()
{
	
}

void ABaseGameAgent::CheckForOutOfBounds()
{
	
}














