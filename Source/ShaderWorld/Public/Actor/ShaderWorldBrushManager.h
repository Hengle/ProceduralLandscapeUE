//Copyright Maxime Dupart 2021  https://twitter.com/Max_Dupt

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Actor/ShaderWorldBrush.h"
#include "ShaderWorldBrushManager.generated.h"

struct FBox2D;
class AGeometryClipMapWorld;

USTRUCT(BlueprintType)
struct FBrushElement
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
		bool Enabled=true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (UIMin = 0.f, UIMax = 1.f, ClampMin = 0.f, ClampMax = 1.f))
		float Influence = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
		AShaderWorldBrush* Brush = nullptr;

		bool IsValid();

		UPROPERTY(Transient)
			AShaderWorldBrushManager* BrushManagerOwner = nullptr;

		~FBrushElement();
};

USTRUCT(BlueprintType)
struct FBrushLayer
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
		bool Enabled=true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (UIMin = 0.f, UIMax = 1.f, ClampMin = 0.f, ClampMax = 1.f))
		float Influence = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
		TArray<FBrushElement> Brushes;

	UPROPERTY(Transient)
		AShaderWorldBrushManager* BrushManagerOwner=nullptr;

	~FBrushLayer();

};

USTRUCT()
struct FHeightMapSourceElement
{
	GENERATED_BODY()

	public:
	UPROPERTY(Transient)
		bool CollisionRT=false;

	UPROPERTY(Transient)
		UMaterialInstanceDynamic* HeightmapToLocalRT= nullptr;

};

UCLASS(hideCategories(Collision, Input,Actor, Game, LOD, Replication, Cooking))
class SHADERWORLD_API AShaderWorldBrushManager : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AShaderWorldBrushManager();

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LayerStack")
		TArray<FBrushLayer> BrushLayers;

#if WITH_EDITOR

	bool ShouldTickIfViewportsOnly() const override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;

#endif

	UPROPERTY(Transient)
		UTextureRenderTarget2D* WorkRT = nullptr;
	UPROPERTY(Transient)
		UTextureRenderTarget2D* CollisionWorkRT = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Required", meta = (UIMin = 1.f, UIMax = 60.f, ClampMin = 1.f, ClampMax = 60.f))
		float RedrawCheckPerSecond = 20.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Required", meta = (UIMin = 1, UIMax = 12, ClampMin = 1, ClampMax = 12))
		uint8 IncludeBlueprintUpdateEvery = 2;
	UPROPERTY(Transient)
		float TimeAcu = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Required")
		UMaterialInterface* HeightmapCopyPostWork = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Required")
		AGeometryClipMapWorld* ShaderWorldOwner = nullptr;

	UPROPERTY(Transient)
		UMaterialInstanceDynamic* HeightmapToLocalRT = nullptr;

	void Reset();

	void ApplyBrushStackToHeightMap(AGeometryClipMapWorld* SourceWorld,int LOD, UTextureRenderTarget2D* Heightmap_RT, FVector RingLocation, float GridScaling, int N, bool CollisionMesh);

	void ApplyStackForFootprint(FBox2D FootPrint, UTextureRenderTarget2D* Heightmap_RT, FVector RingLocation, float GridScaling, int N, bool CollisionMesh);

	void AddExogeneReDrawBox(FBox2D Box){ExogeneReDrawBox.Add(Box);};

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	bool ForceRedraw=false;
	TArray<FBox2D> ExogeneReDrawBox;
	uint8 BPUpdateCounter = 0;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
