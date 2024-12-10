// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "FSAgentInfo.h"

#include "BaseGameInstance.generated.h"



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
    void SetPlayerAgentInfoFor(int32 PlayerControllerID, FSAgentInfo& PlayerAgentInfo) { };

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    FSAgentInfo& GetPlayerAgentInfoFor(int32 PlayerControllerID, bool& bSuccess);

    //Properties
    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    TArray<FSAgentInfo> PlayerAgentInfo;

    //Delegates
    // Function signature
    void OnAgentInfoChange(int32 PlayerControllerID, FSAgentInfo& AgentInfo);
	
};
