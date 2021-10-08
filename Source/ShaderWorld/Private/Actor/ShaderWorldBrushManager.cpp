//Copyright Maxime Dupart 2021  https://twitter.com/Max_Dupt


#include "Actor/ShaderWorldBrushManager.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "Actor/GeometryClipMapWorld.h"

// Sets default values
AShaderWorldBrushManager::AShaderWorldBrushManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AShaderWorldBrushManager::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	EndPlayCalled = true;

	if(WorkRT && WorkRT->IsRooted())
		WorkRT->RemoveFromRoot();
	if (CollisionWorkRT && CollisionWorkRT->IsRooted())
		CollisionWorkRT->RemoveFromRoot();
	if (LayerRT && LayerRT->IsRooted())
		LayerRT->RemoveFromRoot();
		
		
	if (HeightmapToLocalRT && HeightmapToLocalRT->IsRooted())
		HeightmapToLocalRT->RemoveFromRoot();

	RuntimeDynamicBrushLayers.Empty();

	Super::EndPlay(EndPlayReason);
}

#if WITH_EDITOR
bool AShaderWorldBrushManager::ShouldTickIfViewportsOnly() const
{
	return true;
}

void AShaderWorldBrushManager::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	FProperty* Property = PropertyChangedEvent.MemberProperty;

	if (Property && PropertyChangedEvent.ChangeType != EPropertyChangeType::Interactive)
	{
		FString PropName = PropertyChangedEvent.Property->GetName();

		if (PropName == TEXT("BrushLayers"))
		{
			//ForceRedraw = true;
		}		
	}

	Super::PostEditChangeProperty(PropertyChangedEvent);
}

#endif


void AShaderWorldBrushManager::ResetB()
{
	if (WorkRT && WorkRT->IsRooted())
		WorkRT->RemoveFromRoot();
	if (CollisionWorkRT && CollisionWorkRT->IsRooted())
		CollisionWorkRT->RemoveFromRoot();
	if (LayerRT && LayerRT->IsRooted())
		LayerRT->RemoveFromRoot();

	if (HeightmapToLocalRT && HeightmapToLocalRT->IsRooted())
		HeightmapToLocalRT->RemoveFromRoot();

	WorkRT = nullptr;
	CollisionWorkRT = nullptr;
	LayerRT = nullptr;
	HeightmapToLocalRT = nullptr;

	ForceRedraw = false;
	ExogeneReDrawBox.Empty();
	BPUpdateCounter = 0;

	for (FBrushLayer& Layer : BrushLayers)
	{		
		for (FBrushElement& BrushEl : Layer.Brushes)
		{
			if(BrushEl.Brush)
				BrushEl.Brush->ResetB(Layer.Enabled,BrushEl.Enabled, Layer.Influence,BrushEl.Influence);
		}			
	}
}

void AShaderWorldBrushManager::ApplyBrushStackToHeightMap(AGeometryClipMapWorld* SourceWorld,int LOD, UTextureRenderTarget2D* Heightmap_RT, FVector& RingLocation, float GridScaling, int& N,bool CollisionMesh)
{
	if(!SourceWorld || !Heightmap_RT || !HeightmapCopyPostWork)
	{
		
		return;	
	}

	if(!ShaderWorldOwner || ShaderWorldOwner!=SourceWorld)
	{
		ShaderWorldOwner=SourceWorld;	
	}

	if(Heightmap_RT && HeightmapCopyPostWork)
	{
		UWorld* World = GetWorld();
		
		if(!HeightmapToLocalRT)
		{
			HeightmapToLocalRT = UMaterialInstanceDynamic::Create(HeightmapCopyPostWork, this);
#if !WITH_EDITOR
			HeightmapToLocalRT->AddToRoot();
#endif
			if (World->WorldType == EWorldType::PIE)
				HeightmapToLocalRT->AddToRoot();
		}
	
		if(!CollisionMesh && !WorkRT)
		{
			if (ShaderWorldDebug != 0)
			{
				UE_LOG(LogTemp, Warning, TEXT("AShaderWorldBrushManager Create WorkRT"));
			}

			WorkRT = UKismetRenderingLibrary::CreateRenderTarget2D(GetWorld(), Heightmap_RT->SizeX, Heightmap_RT->SizeY, RTF_RGBA8, FLinearColor(0, 0, 0, 1), false);
#if !WITH_EDITOR
			WorkRT->AddToRoot();
#endif
			if (World->WorldType == EWorldType::PIE)
				WorkRT->AddToRoot();
			WorkRT->Filter = TF_Nearest;
			WorkRT->AddressX = TA_Clamp;
			WorkRT->AddressY = TA_Clamp;
			WorkRT->UpdateResourceImmediate();		
		}
		if (CollisionMesh && !CollisionWorkRT)
		{
			if (ShaderWorldDebug != 0)
			{
				UE_LOG(LogTemp, Warning, TEXT("AShaderWorldBrushManager Create CollisionWorkRT"));
			}

			CollisionWorkRT = UKismetRenderingLibrary::CreateRenderTarget2D(GetWorld(), Heightmap_RT->SizeX, Heightmap_RT->SizeY, RTF_RGBA8, FLinearColor(0, 0, 0, 1), false);
#if !WITH_EDITOR
			CollisionWorkRT->AddToRoot();
#endif
			if (World->WorldType == EWorldType::PIE)
				CollisionWorkRT->AddToRoot();
			CollisionWorkRT->Filter = TF_Nearest;
			CollisionWorkRT->AddressX = TA_Clamp;
			CollisionWorkRT->AddressY = TA_Clamp;
			CollisionWorkRT->UpdateResourceImmediate();
		}


		FVector2D Location(RingLocation.X, RingLocation.Y);
		float Size = GridScaling * (N - 1) / 2.0;

		FBox2D FootPrintRT(Location - Size * FVector2D(1.f, 1.f), Location + Size * FVector2D(1.f, 1.f));

		FString NoName = "";
		ApplyStackForFootprint(FootPrintRT, Heightmap_RT, RingLocation, GridScaling, N, CollisionMesh,false,NoName);
		
	}
	else
	{
		UE_LOG(LogTemp,Warning,TEXT("AShaderWorldBrushManager Heightmap_RT && HeightmapCopyPostWork FALSE"));
	}
}

void AShaderWorldBrushManager::ApplyBrushStackToLayer(AGeometryClipMapWorld* SourceWorld, int LOD, UTextureRenderTarget2D* Layer_RT, FVector& RingLocation, float& GridScaling, int& N, FString& LayerName)
{
	if (!SourceWorld || !Layer_RT)
	{
		return;
	}

	if(HeightmapCopyPostWork)
	{
		UWorld* World = GetWorld();
		if (!LayerRT)
		{
			
			if (ShaderWorldDebug != 0)
			{
				UE_LOG(LogTemp,Warning,TEXT("AShaderWorldBrushManager Create LayerRT"));
			}

			LayerRT = UKismetRenderingLibrary::CreateRenderTarget2D(GetWorld(), Layer_RT->SizeX, Layer_RT->SizeY, RTF_RGBA8, FLinearColor(0, 0, 0, 1), false);
#if !WITH_EDITOR
			LayerRT->AddToRoot();
#endif
			if (World->WorldType == EWorldType::PIE)
				LayerRT->AddToRoot();
			LayerRT->Filter = TF_Nearest;
			LayerRT->AddressX = TA_Clamp;
			LayerRT->AddressY = TA_Clamp;
			LayerRT->UpdateResourceImmediate();
		}
		/*
		if (LayerRT)
			UKismetRenderingLibrary::ClearRenderTarget2D(this, LayerRT, FLinearColor::Black);
			*/

		FVector2D Location(RingLocation.X, RingLocation.Y);
		float Size = GridScaling * (N - 1) / 2.0;

		FBox2D FootPrintRT(Location - Size * FVector2D(1.f, 1.f), Location + Size * FVector2D(1.f, 1.f));

		ApplyStackForFootprint(FootPrintRT, Layer_RT, RingLocation, GridScaling, N, false,true,LayerName);

	}
}

void AShaderWorldBrushManager::ApplyStackForFootprint(FBox2D FootPrint , UTextureRenderTarget2D* Heightmap_RT, FVector RingLocation, float GridScaling, int N,bool CollisionMesh, bool IsLayer, FString& LayerName)
{
	if(!Heightmap_RT || CollisionMesh && !CollisionWorkRT|| !CollisionMesh && !WorkRT || !HeightmapToLocalRT || IsLayer && !LayerRT)
	{
		UE_LOG(LogTemp,Warning,TEXT("ERROR ApplyStackForFootprint OUT !Heightmap_RT || CollisionMesh && !CollisionWorkRT|| !CollisionMesh && !WorkRT || !HeightmapToLocalRT|| Layer && !LayerRT"));
		return;
	}
	

	uint8 Altern = 0;

	for(FBrushLayer& Layer : BrushLayers)
	{
		if(Layer.Enabled && Layer.Influence>0.001f)
		{
			if(Layer.BrushManagerOwner!=this)
				Layer.BrushManagerOwner=this;

			for (FBrushElement& BrushEl : Layer.Brushes)
			{
				if(BrushEl.Brush)
					BrushEl.Brush->RedrawNeed=false;

				if(BrushEl.Enabled && BrushEl.Influence>0.001f && BrushEl.IsValid() && FootPrint.Intersect(BrushEl.Brush->GetBrushFootPrint()) && (!IsLayer || IsLayer && BrushEl.Brush->DrawToLayer && BrushEl.Brush->NameOfLayerTarget == LayerName))
				{
					if (BrushEl.BrushManagerOwner != this)
						BrushEl.BrushManagerOwner = this;

					UTextureRenderTarget2D* Dest = Altern == 0 ? (IsLayer?LayerRT:(CollisionMesh ? CollisionWorkRT : WorkRT)) : Heightmap_RT;
					UTextureRenderTarget2D* Src = Altern == 0 ? Heightmap_RT : (IsLayer?LayerRT:(CollisionMesh ? CollisionWorkRT : WorkRT));					

					BrushEl.Brush->ApplyBrushAt(Dest, Src,Layer.Influence,BrushEl.Influence, RingLocation, GridScaling, N, CollisionMesh,IsLayer);
					Altern = Altern == 0 ? 1 : 0;				
				}

			}		
		}
	}

	for (FBrushLayer& Layer : RuntimeDynamicBrushLayers)
	{
		if (Layer.Enabled && Layer.Influence > 0.001f)
		{
			if (Layer.BrushManagerOwner != this)
				Layer.BrushManagerOwner = this;

			for (FBrushElement& BrushEl : Layer.Brushes)
			{
				if (BrushEl.Enabled && BrushEl.Influence > 0.001f && BrushEl.IsValid() && FootPrint.Intersect(BrushEl.Brush->GetBrushFootPrint()) && (!IsLayer || IsLayer && BrushEl.Brush->DrawToLayer && BrushEl.Brush->NameOfLayerTarget == LayerName))
				{
					if (BrushEl.BrushManagerOwner != this)
						BrushEl.BrushManagerOwner = this;

					UTextureRenderTarget2D* Dest = Altern == 0 ? (IsLayer ? LayerRT : (CollisionMesh ? CollisionWorkRT : WorkRT)) : Heightmap_RT;
					UTextureRenderTarget2D* Src = Altern == 0 ? Heightmap_RT : (IsLayer ? LayerRT : (CollisionMesh ? CollisionWorkRT : WorkRT));

					BrushEl.Brush->ApplyBrushAt(Dest, Src, Layer.Influence, BrushEl.Influence, RingLocation, GridScaling, N, CollisionMesh, IsLayer);
					Altern = Altern == 0 ? 1 : 0;
				}
				else
				{
					
				}

			}
		}
	}

	if (Altern == 1)
	{
		HeightmapToLocalRT->SetTextureParameterValue("HeightMap", IsLayer?LayerRT:(CollisionMesh ? CollisionWorkRT : WorkRT));
		UKismetRenderingLibrary::ClearRenderTarget2D(this, Heightmap_RT, FLinearColor::Black);
		UKismetRenderingLibrary::DrawMaterialToRenderTarget(this, Heightmap_RT, HeightmapToLocalRT);
	}
}

// Called when the game starts or when spawned
void AShaderWorldBrushManager::BeginPlay()
{
	Super::BeginPlay();
	
	RuntimeDynamicBrushLayers.Empty();
	
}

// Called every frame
void AShaderWorldBrushManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TimeAcu+=DeltaTime;

	if(TimeAcu>1.0f/(RedrawCheckPerSecond<1.f?1.f:RedrawCheckPerSecond))
	{
		bool IncludeBlueprintInUpdate = false;
		BPUpdateCounter++;
		if(BPUpdateCounter>=IncludeBlueprintUpdateEvery)
		{
			IncludeBlueprintInUpdate=true;
			BPUpdateCounter=0;
		}
		
	
		//Lets check if any of the brush require the owner to update the terrain, and warn it if this is the case
		if(ShaderWorldOwner && !ShaderWorldOwner->BrushManagerAskRedraw)
		{
			FBox2D RedrawScope(ForceInit);

			FBox2D WorldFootprint = ShaderWorldOwner->GetHighestLOD_FootPrint();
			bool WorldVisible = ShaderWorldOwner->HighestLOD_Visible();
			
			if(!WorldFootprint.bIsValid || !WorldVisible)
				return;

			bool RequireUpdate = false;
			for (FBrushLayer& Layer : BrushLayers)
			{			
				if (Layer.BrushManagerOwner != this)
					Layer.BrushManagerOwner = this;

				for (FBrushElement& BrushEl : Layer.Brushes)
				{
					if (BrushEl.BrushManagerOwner != this)
						BrushEl.BrushManagerOwner = this;

					if(BrushEl.IsValid())
					{
						//i need to check that the brush is within highest LOD boundaries otherwise it wont be processed and we re wasting time
						if (WorldFootprint.Intersect(BrushEl.Brush->GetBrushFootPrint()))
						{

							if (BrushEl.Brush->NeedRedraw(Layer.Enabled, BrushEl.Enabled, Layer.Influence, BrushEl.Influence, IncludeBlueprintInUpdate))
							{
								RequireUpdate = true;

								RedrawScope += BrushEl.Brush->GetBrushFootPrint();

							}
							BrushEl.Brush->RedrawNeed=false;
						}
						
					}

				}				
			}
			for (FBrushLayer& Layer : RuntimeDynamicBrushLayers)
			{
				if (Layer.BrushManagerOwner != this)
					Layer.BrushManagerOwner = this;

				for (FBrushElement& BrushEl : Layer.Brushes)
				{

					if (BrushEl.BrushManagerOwner != this)
						BrushEl.BrushManagerOwner = this;

					if (BrushEl.IsValid())
					{
						//i need to check that the brush is within highest LOD boundaries otherwise it wont be processed and we re wasting time
						if (WorldFootprint.Intersect(BrushEl.Brush->GetBrushFootPrint()))
						{
							if (BrushEl.Brush->NeedRedraw(Layer.Enabled, BrushEl.Enabled, Layer.Influence, BrushEl.Influence, IncludeBlueprintInUpdate))
							{
								RequireUpdate = true;

								RedrawScope += BrushEl.Brush->GetBrushFootPrint();

							}
							BrushEl.Brush->RedrawNeed=false;
						}
						
					}
					

				}
			}
			

			if(RequireUpdate || ExogeneReDrawBox.Num()>0)
			{
				if (ShaderWorldDebug != 0)
				{
					if (RequireUpdate)
					{
						UE_LOG(LogTemp, Warning, TEXT("RequireUpdate BrushManagerAskRedraw = true"));
					}
					if (ExogeneReDrawBox.Num()>0)
					{
						UE_LOG(LogTemp, Warning, TEXT("ExogeneReDrawBox.Num()>0 BrushManagerAskRedraw = true"));
					}
				}
				
				ShaderWorldOwner->BrushManagerAskRedraw=true;

				for(FBox2D& Box:ExogeneReDrawBox)
					RedrawScope+=Box;

				ShaderWorldOwner->BrushManagerRedrawScope=RedrawScope;

				ExogeneReDrawBox.Empty();
			}
						
		}
	}

}

bool FBrushElement::IsValid()
{
	if(Brush && Brush->IsValidBrush())
		return true;

	return false;
}

FBrushElement::~FBrushElement()
{
	if (BrushManagerOwner && !BrushManagerOwner->EndPlayCalled && BrushManagerOwner->GetWorld())
	{
	FBox2D RedrawScope(ForceInit);
	if (Brush)
	{
		FBox2D Footprint = Brush->GetBrushFootPrint();
		if(Footprint.bIsValid)
			RedrawScope += Footprint;
	}

		if (RedrawScope.bIsValid)
			BrushManagerOwner->AddExogeneReDrawBox(RedrawScope);
	}
}

FBrushLayer::~FBrushLayer()
{
	if (BrushManagerOwner && !BrushManagerOwner->EndPlayCalled && BrushManagerOwner->GetWorld())
	{
	FBox2D RedrawScope(ForceInit);

	for (FBrushElement& BrushEl : Brushes)
	{
		if (BrushEl.IsValid())
		{
			RedrawScope += BrushEl.Brush->GetBrushFootPrint();
		}
	}

		if(RedrawScope.bIsValid)
			BrushManagerOwner->AddExogeneReDrawBox(RedrawScope);
	}
		
}
