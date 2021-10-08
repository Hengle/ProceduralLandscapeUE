// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ShaderWorld_Material.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "ShaderWorld_Material_Collection.generated.h"

class UTexture2DArray;
/**
 * 
 */
UCLASS()
class SHADERWORLD_API UShaderWorld_Material_Collection : public UObject
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Default")
		UTexture2DArray* Albedo_Array;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
		UTexture2DArray* Normal_Array;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
		UTexture2DArray* PackedMaps_Array;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
		TArray<TEnumAsByte<EPhysicalSurface>> SurfaceTypes;

#if WITH_EDITOR

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Default")
	TArray<UShaderWorld_Material*> Materials;

	void UpdateArrays();
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;

#endif

};