// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "BaseGameAgent.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Texture2D.h"
#include "Materials/MaterialInterface.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "BaseShip.generated.h"

USTRUCT(BlueprintType)
struct FAgentInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString WeaponType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USkeletalMesh* SkeletalMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimInstance* AnimInstance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* Image;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Speed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Health;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MeshScale;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor Colour;
};

/**
 * 
 */
UCLASS()
class ABaseShip : public ABaseGameAgent
{
	GENERATED_BODY()

public:
    ABaseShip();

    virtual void BeginPlay() override;
    virtual void ApplyAgentInfo(FAgentInfo& info);

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BirdOfPrey")
    UFloatingPawnMovement* FloatingPawnMovement;
};
