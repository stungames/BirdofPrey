// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"

#include "BaseGameInstance.generated.h"

USTRUCT(BlueprintType)
struct FSAgentInfo
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	FText Name;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	TSubclassOf<class ABaseWeapon> BaseWeaponType;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	class USkeletalMesh* SkeletalMesh;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	TSubclassOf<class UAnimInstance> AnimInstance;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	class UTexture2D* Image;
	
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float Speed = 1000.f;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float Health = 250.f;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float MeshScale = 1.f;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	FLinearColor Colour = FLinearColor::White;
	
};

// Delegate signature
DECLARE_MULTICAST_DELEGATE_TwoParams(FOnAgentInfoChangeSignature, int32 /* PlayerControllerID */, FSAgentInfo& /* AgentInfo */); //After creating other class change this

/**
 * 
 */
UCLASS()
class UBaseGameInstance : public UGameInstance
{
    GENERATED_BODY()

public:
    //Functions
    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void SetPlayerAgentInfoFor(int32 PlayerControllerID, FSAgentInfo& PlayerAgentInfo);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    FSAgentInfo& GetPlayerAgentInfoFor(int32 PlayerControllerID, bool& bSuccess);

    //Properties
    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    TArray<FSAgentInfo> PlayerAgentInfo;

    //Delegates
    // Function signature
    void OnAgentInfoChange(int32 PlayerControllerID, FSAgentInfo& AgentInfo);
	
};
