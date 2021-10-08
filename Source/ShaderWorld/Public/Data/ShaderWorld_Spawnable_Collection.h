// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ShaderWorld_Spawnable.h"
#include "ShaderWorld_Spawnable_Collection.generated.h"

/**
 * 
 */
UCLASS()
class SHADERWORLD_API UShaderWorld_Spawnable_Collection : public UObject
{
	GENERATED_BODY()

	public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Default")
	TArray<UShaderWorld_Spawnable*> Spawnables;
	
};