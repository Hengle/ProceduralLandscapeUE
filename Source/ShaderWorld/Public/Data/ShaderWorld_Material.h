// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "ShaderWorld_Material.generated.h"

/**
 * 
 */
UCLASS()
class SHADERWORLD_API UShaderWorld_Material : public UObject
{
	GENERATED_BODY()

	public:

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Default")
		UTexture2D* Albedo=nullptr;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Default")
		UTexture2D* NormalMap=nullptr;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Default")
		UTexture2D* PackedMaps=nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
		TEnumAsByte<EPhysicalSurface> SurfaceType;

		bool IsValidMaterial();

		bool IsCompatibleWith(UShaderWorld_Material* Other);
	
};