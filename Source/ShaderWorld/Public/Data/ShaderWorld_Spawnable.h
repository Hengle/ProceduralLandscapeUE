// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Actor/GeometryClipMapWorld.h"
#include "ShaderWorld_Spawnable.generated.h"

/**
 * 
 */
UCLASS()
class SHADERWORLD_API UShaderWorld_Spawnable : public UObject
{
	GENERATED_BODY()
	
	public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Default")
	FSpawnableMesh Spawnable;
};