// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseGameInstance.h"
#include "BaseWeapon.h"

UBaseGameInstance::UBaseGameInstance()
{
	
}

void UBaseGameInstance::SetPlayerAgentInfoFor(int PlayerControllerID, FSAgentInfo& info)
{

}

FSAgentInfo& UBaseGameInstance::GetPlayerAgentInfoFor(int PlayerControllerID, bool& Result)
{
	Result = false;
	return PlayerAgentInfo[PlayerControllerID];
}