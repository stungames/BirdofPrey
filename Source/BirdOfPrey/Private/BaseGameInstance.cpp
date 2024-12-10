// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseGameInstance.h"


FSAgentInfo& UBaseGameInstance::GetPlayerAgentInfoFor(int32 PlayerControllerID, bool& bSuccess)
{
	return PlayerAgentInfo[PlayerControllerID];
}
