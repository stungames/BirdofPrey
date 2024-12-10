// Berkush 2024, it coded for GAD2006

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FSAgentInfo.generated.h"

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

/**
 * 
 */
UCLASS()
class UFSAgentInfo : public UObject
{
	GENERATED_BODY()
	
};
