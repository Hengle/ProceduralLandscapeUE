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
	//UE_LOG(LogTemp,Warning,TEXT("EndPlay AShaderWorldBrushManager"));

	if(WorkRT && WorkRT->IsRooted())
		WorkRT->RemoveFromRoot();

	if (CollisionWorkRT && CollisionWorkRT->IsRooted())
		CollisionWorkRT->RemoveFromRoot();
		
	if (HeightmapToLocalRT && HeightmapToLocalRT->IsRooted())
		HeightmapToLocalRT->RemoveFromRoot();

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


void AShaderWorldBrushManager::Reset()
{
	if (WorkRT && WorkRT->IsRooted())
		WorkRT->RemoveFromRoot();
	if (CollisionWorkRT && CollisionWorkRT->IsRooted())
		CollisionWorkRT->RemoveFromRoot();

	if (HeightmapToLocalRT && HeightmapToLocalRT->IsRooted())
		HeightmapToLocalRT->RemoveFromRoot();

	WorkRT = nullptr;
	CollisionWorkRT = nullptr;
	HeightmapToLocalRT = nullptr;

	ForceRedraw = false;
	ExogeneReDrawBox.Empty();
	BPUpdateCounter = 0;

	for (FBrushLayer& Layer : BrushLayers)
	{		
		for (FBrushElement& BrushEl : Layer.Brushes)
		{
			if(BrushEl.Brush)
				BrushEl.Brush->Reset();
		}			
	}
}

void AShaderWorldBrushManager::ApplyBrushStackToHeightMap(AGeometryClipMapWorld* SourceWorld,int LOD, UTextureRenderTarget2D* Heightmap_RT, FVector RingLocation, float GridScaling, int N,bool CollisionMesh)
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


		
		if(WorkRT)
		UKismetRenderingLibrary::ClearRenderTarget2D(this, WorkRT, FLinearColor::Black);
		if(CollisionWorkRT)
		UKismetRenderingLibrary::ClearRenderTarget2D(this, CollisionWorkRT, FLinearColor::Black);

		FVector2D Location(RingLocation.X, RingLocation.Y);
		float Size = GridScaling * (N - 1) / 2.0;

		FBox2D FootPrintRT(Location - Size * FVector2D(1.f, 1.f), Location + Size * FVector2D(1.f, 1.f));


		ApplyStackForFootprint(FootPrintRT, Heightmap_RT, RingLocation, GridScaling, N, CollisionMesh);
		
	}
	else
	{
		UE_LOG(LogTemp,Warning,TEXT("AShaderWorldBrushManager Heightmap_RT && HeightmapCopyPostWork FALSE"));
	}
}

void AShaderWorldBrushManager::ApplyStackForFootprint(FBox2D FootPrint , UTextureRenderTarget2D* Heightmap_RT, FVector RingLocation, float GridScaling, int N,bool CollisionMesh)
{
	if(!Heightmap_RT || CollisionMesh && !CollisionWorkRT|| !CollisionMesh && !WorkRT || !HeightmapToLocalRT)
	{
		UE_LOG(LogTemp,Warning,TEXT("ApplyStackForFootprint OUT !Heightmap_RT || CollisionMesh && !CollisionWorkRT|| !CollisionMesh && !WorkRT || !HeightmapToLocalRT"));
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
				if(BrushEl.Enabled && BrushEl.Influence>0.001f && BrushEl.IsValid() && FootPrint.Intersect(BrushEl.Brush->GetBrushFootPrint()))
				{
					if (BrushEl.BrushManagerOwner != this)
						BrushEl.BrushManagerOwner = this;

					UTextureRenderTarget2D* Dest = Altern == 0 ? (CollisionMesh ? CollisionWorkRT : WorkRT) : Heightmap_RT;
					UTextureRenderTarget2D* Src = Altern == 0 ? Heightmap_RT : (CollisionMesh ? CollisionWorkRT : WorkRT);					

					BrushEl.Brush->ApplyBrushAt(Dest, Src,Layer.Influence,BrushEl.Influence, RingLocation, GridScaling, N, CollisionMesh);
					Altern = Altern == 0 ? 1 : 0;				
				}

			}		
		}
	}

	if (Altern == 1)
	{
		HeightmapToLocalRT->SetTextureParameterValue("HeightMap", CollisionMesh ? CollisionWorkRT : WorkRT);
		UKismetRenderingLibrary::ClearRenderTarget2D(this, Heightmap_RT, FLinearColor::Black);
		UKismetRenderingLibrary::DrawMaterialToRenderTarget(this, Heightmap_RT, HeightmapToLocalRT);
	}
}

// Called when the game starts or when spawned
void AShaderWorldBrushManager::BeginPlay()
{
	Super::BeginPlay();
	
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

			bool RequireUpdate = false;
			for (FBrushLayer& Layer : BrushLayers)
			{			
				if (Layer.BrushManagerOwner != this)
					Layer.BrushManagerOwner = this;

				for (FBrushElement& BrushEl : Layer.Brushes)
				{
					if (BrushEl.BrushManagerOwner != this)
						BrushEl.BrushManagerOwner = this;

					if(BrushEl.IsValid() && BrushEl.Brush->NeedRedraw(Layer.Enabled,BrushEl.Enabled,Layer.Influence,BrushEl.Influence,IncludeBlueprintInUpdate))
					{
						RequireUpdate = true;						

						RedrawScope+=BrushEl.Brush->GetBrushFootPrint();
						
					}
				}
			}

			if(RequireUpdate || ExogeneReDrawBox.Num()>0)
			{
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
	if(Brush && Brush->BrushMaterial)
		return true;

	return false;
}

FBrushElement::~FBrushElement()
{
	if (BrushManagerOwner)
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
	if (BrushManagerOwner)
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
