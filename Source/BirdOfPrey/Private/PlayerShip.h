// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseShip.h"
#include "PlayerShip.generated.h"

/**
 * 
 */
UCLASS()
class APlayerShip : public ABaseShip
{
	GENERATED_BODY()

public:
	APlayerShip();

	virtual void Tick(float DeltaTime) override;
	void MoveUp(float Value);
	void MoveRight(float Value);
	void FireWeapon(bool IsPressed);
	void Died(AController* Killer);
	void Possessed(AController* NewController);
};
