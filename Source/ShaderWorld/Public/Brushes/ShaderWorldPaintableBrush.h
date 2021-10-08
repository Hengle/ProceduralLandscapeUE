//Copyright Maxime Dupart 2021  https://twitter.com/Max_Dupt

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Actor/ShaderWorldBrush.h"
#include "ShaderWorldPaintableBrush.generated.h"


UCLASS(hideCategories(Collision, Input,Actor, Game, LOD, Replication, Cooking))
class SHADERWORLD_API AShaderWorldPaintableBrush : public AShaderWorldBrush
{
	GENERATED_UCLASS_BODY()
	
public:	
	// Sets default values for this actor's properties
	AShaderWorldPaintableBrush();

#if WITH_EDITOR

	bool ShouldTickIfViewportsOnly() const override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;

#endif

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HeightPainter")
		int RenderTargetDimension = 1024;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HeightPainter")
		float WorldDimensionMeters = 50.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "HeightPainter")
		float CentimetersPerTexel = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HeightPainter")
		UMaterialInterface* HeightPainterMaterial = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HeightPainter")
		UMaterialInterface* ForceSplatMaterial = nullptr;

protected:

	UPROPERTY(Transient)
		UTextureRenderTarget2D* RT_A = nullptr;
	UPROPERTY(Transient)
		UTextureRenderTarget2D* RT_B = nullptr;

	UPROPERTY(Transient)
		bool Recreate_RenderTarget = false;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void ApplyBrushAt(UTextureRenderTarget2D* Destination_RT,UTextureRenderTarget2D* Source_RT,float LayerInfluence,float BrushInfluence, FVector RingLocation, float GridScaling, int N,bool CollisionMesh, bool IsLayer) override;
	void ResetB(bool LayerEnabled,bool BrushEnabled, float LayerInfluence,float BrushInfluence) override;
};
