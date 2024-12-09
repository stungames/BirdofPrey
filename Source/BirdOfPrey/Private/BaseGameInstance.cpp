// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseGameInstance.h"

void UBaseGameInstance::SetPlayerAgentInfoFor(int32 PlayerControllerID, FSAgentInfo& PlayerAgentInfo)
{

}

FSAgentInfo& UBaseGameInstance::GetPlayerAgentInfoFor(int32 PlayerControllerID, bool& bSuccess)
{
	bSuccess = false;
	return PlayerAgentInfo[PlayerControllerID];
}

void UBaseGameInstance::OnAgentInfoChange(int32 PlayerControllerID, FSAgentInfo& AgentInfo)
{
	
}

