//Copyright Maxime Dupart 2021  https://twitter.com/Max_Dupt

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShaderWorldBrush.generated.h"

class UBoxComponent;
struct FBox2D;

UCLASS(hideCategories(Collision, Input,Actor, Game, LOD, Replication, Cooking))
class SHADERWORLD_API AShaderWorldBrush : public AActor
{
	GENERATED_UCLASS_BODY()
	
public:	
	// Sets default values for this actor's properties
	AShaderWorldBrush();

	UPROPERTY(EditAnywhere, Category = "Default")
	UBoxComponent* BoxBound;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
		bool RedrawNeed = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
		UMaterialInterface* BrushMaterial = nullptr;
	UPROPERTY(Transient)
		UMaterialInstanceDynamic* BrushMaterialDyn = nullptr;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Layer Write")
		bool DrawToLayer = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Layer Write",meta = (EditCondition = DrawToLayer))
		FString NameOfLayerTarget = "";
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Layer Write",meta = (EditCondition = DrawToLayer))
		UMaterialInterface* LayerBrushMaterial = nullptr;
	UPROPERTY(Transient)
		UMaterialInstanceDynamic* LayerBrushMaterialDyn = nullptr;

#if WITH_EDITOR

	bool ShouldTickIfViewportsOnly() const override;

#endif

	
	UFUNCTION(BlueprintImplementableEvent,CallInEditor, Category = "Events")
		void ResetBrush();

	/**
	* If your brush is using blueprint code, you can implement this method in blueprint to determine if 'RedrawNeed' should be set to true or not
	*/
	UFUNCTION(BlueprintImplementableEvent,CallInEditor, Category = "Events")
		void DoesBrushNeedRedraw();

	/**
	* Can be nullptr
	*/
	UFUNCTION(BlueprintCallable, Category = "WorldData")
		UMaterialInstanceDynamic* GetBrushDynamicMaterial();

	/**
	* Can be nullptr
	*/
	UFUNCTION(BlueprintCallable, Category = "WorldData")
		UMaterialInstanceDynamic* GetLayerBrushDynamicMaterial();

	FBox2D GetBrushFootPrint();



	/**
	* For c++ brushes override those functions
	*/
	virtual bool NeedRedraw(bool LayerEnabled,bool BrushEnabled, float LayerInfluence,float BrushInfluence, bool IncludeBP);
	/**
	* For c++ brushes override those functions
	*/
	virtual void Reset();
	/**
	* For c++ brushes override those functions
	*/
	virtual void ApplyBrushAt(UTextureRenderTarget2D* Destination_RT,UTextureRenderTarget2D* Source_RT,float LayerInfluence,float BrushInfluence, FVector RingLocation, float GridScaling, int N,bool CollisionMesh, bool IsLayer);
	
	virtual bool IsValidBrush();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	bool	EndPlayTriggered=false;

	bool	Layer_Enabled=true;
	bool	Brush_Enabled=true;

	float Influence_Layer_Material=1.f;
	float Influence_Brush_Material=1.f;
	
	FVector BrushLocation_Material = FVector(0.f,0.f,0.f);
	FVector BrushLocation = FVector(0.f,0.f,0.f);
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
