//Copyright Maxime Dupart 2021  https://twitter.com/Max_Dupt

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HeightMapImporter.generated.h"

UCLASS(hideCategories(Transform,Collision,Rendering, Input,Actor, Game, LOD, Replication, Cooking))
class SHADERWORLD_API AHeightMapImporter : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHeightMapImporter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

#if WITH_EDITOR

	bool ShouldTickIfViewportsOnly() const override;
	
	
	UFUNCTION(BlueprintCallable, CallInEditor, Category = "1) Locate")
		void LocateHeightmapFile();
	UFUNCTION(BlueprintCallable, CallInEditor, Category = "3) Import")
		void Import();

		void ImportHeightmap();
#endif

	UPROPERTY(Transient)
		bool bTriggerHeightmapImport=false;
	UPROPERTY(Transient)
		bool bDisableDuringGame = false;

	UPROPERTY(Transient,BlueprintReadWrite, EditAnywhere, Category = "2) Import Settings")
		FString HeightMapToImport;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "2) Import Settings")
		FIntPoint HeightMapDimensionIfRaw;

	UPROPERTY(EditAnywhere, Category = "2) Import Settings")
		FString HeightmapFolder;
	UPROPERTY(EditAnywhere, Category = "2) Import Settings")
		FString HeightmapName;

	TMap<FIntPoint, uint16> SelectedData;

	

	void Import(int32 VertsX, int32 VertsY, uint16* HeightData);

	void SampleData(int32 SizeX, int32 SizeY);

	static uint16 convertFrom8To16(uint8 dataFirst, uint8 dataSecond);
	static uint8* convertFrom16To8(uint16 dataAll);


};
