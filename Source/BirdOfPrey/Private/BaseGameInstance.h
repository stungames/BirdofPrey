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
	TSubclassOf<AActor> BaseWeaponType;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	USkeletalMesh* SkeletalMesh;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	UAnimInstance* AnimInstance;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	UTexture2D* Image;    
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
    TArray<FSAgentInfo> PlayerAgentInfo; //After creating other class change this

    //Delegates
    // Function signature
    void OnAgentInfoChange(int32 PlayerControllerID, FSAgentInfo& AgentInfo); //After creating other class change this
	
};
