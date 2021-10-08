//Copyright Maxime Dupart 2021  https://twitter.com/Max_Dupt


#include "Actor/ShaderWorldBrush.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "Components/BoxComponent.h"
#include "Actor/GeometryClipMapWorld.h"

#if WITH_EDITOR
#include "Editor.h"
#endif

// Sets default values
AShaderWorldBrush::AShaderWorldBrush(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	BoxBound = ObjectInitializer.CreateDefaultSubobject<UBoxComponent>(this, TEXT("RootBox"));
	BoxBound->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	
	RootComponent=BoxBound;	

}

void AShaderWorldBrush::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	EndPlayTriggered = true;

	if (BrushMaterialDyn && BrushMaterialDyn->IsRooted())
		BrushMaterialDyn->RemoveFromRoot();
	if (LayerBrushMaterialDyn && LayerBrushMaterialDyn->IsRooted())
		LayerBrushMaterialDyn->RemoveFromRoot();

	Super::EndPlay(EndPlayReason);
	

}

#if WITH_EDITOR
bool AShaderWorldBrush::ShouldTickIfViewportsOnly() const
{
	return true;
}

#endif


void AShaderWorldBrush::SetBrushParameter(EBrushParameterType BrushType,FString ParameterName,FVector4 vector_value /*= FVector4(0.f,0.f,0.f,0.f)*/, float float_value /*= 0.f*/,  UTexture2D* texture_value /*= nullptr*/, UVolumeTexture* Volume_Texture_value /*= nullptr*/)
{
	ParameterName.RemoveSpacesInline();
	if(ParameterName!="")
	{
		switch (BrushType)
		{
		case(EBrushParameterType::Float):
		{
			if (BrushScalarParameters.Contains(ParameterName))
			{
				FScalarBrushParameter& Brush = *BrushScalarParameters.Find(ParameterName);

				if (Brush.Name_past != ParameterName || abs(Brush.float_value - float_value) > 0.01f)
				{
					Brush.float_value = float_value;
					Brush.Name_past = ParameterName;
					Brush.SentToMaterial = true;

					if (BrushMaterialDyn)
						BrushMaterialDyn->SetScalarParameterValue(FName(*ParameterName), Brush.float_value);

					if (LayerBrushMaterialDyn)
						LayerBrushMaterialDyn->SetScalarParameterValue(FName(*ParameterName), Brush.float_value);
					
					if (ShaderWorldDebug != 0)
					{
						UE_LOG(LogTemp,Warning,TEXT("RedrawNeed = true BrushScalarParameters update SetBrushParameter"));
					}
					
					RedrawNeed = true;
				}

			}
			break;
		}
		case(EBrushParameterType::Vector):
		{
			if (BrushVectorParameters.Contains(ParameterName))
			{
				FVectorBrushParameter& Brush = *BrushVectorParameters.Find(ParameterName);

				if (Brush.Name_past != ParameterName || (Brush.Vector_value - vector_value).SizeSquared() > 0.00005f )
				{
					Brush.Vector_value = vector_value;
					Brush.Name_past = ParameterName;
					Brush.SentToMaterial = true;

					if (BrushMaterialDyn)
						BrushMaterialDyn->SetVectorParameterValue(FName(*ParameterName), FLinearColor(Brush.Vector_value));

					if (LayerBrushMaterialDyn)
						LayerBrushMaterialDyn->SetVectorParameterValue(FName(*ParameterName), FLinearColor(Brush.Vector_value));
				

					if (ShaderWorldDebug != 0)
					{
						UE_LOG(LogTemp,Warning,TEXT("RedrawNeed = true BrushVectorParameters update SetBrushParameter"));
					}
					RedrawNeed = true;
				}
			}
			break;
		}
		case(EBrushParameterType::Texture2D):
		{
			if (BrushTextureParameters.Contains(ParameterName))
			{
				FTextureBrushParameter& Brush = *BrushTextureParameters.Find(ParameterName);

				if (Brush.Name_past != ParameterName || (Brush.Texture2D_value != texture_value))
				{
					Brush.Texture2D_value = texture_value;
					Brush.Name_past = ParameterName;
					Brush.SentToMaterial = true;

					if (BrushMaterialDyn && Brush.Texture2D_value)
						BrushMaterialDyn->SetTextureParameterValue(FName(*ParameterName), Brush.Texture2D_value);

					if (LayerBrushMaterialDyn && Brush.Texture2D_value)
						LayerBrushMaterialDyn->SetTextureParameterValue(FName(*ParameterName), Brush.Texture2D_value);

					if (ShaderWorldDebug != 0)
					{
						UE_LOG(LogTemp,Warning,TEXT("RedrawNeed = true BrushTextureParameters update SetBrushParameter"));
					}
					

					RedrawNeed = true;
				}
			}
			break;
		}
		case(EBrushParameterType::Texture3D):
		{
			if (BrushVolumeTextureParameters.Contains(ParameterName))
			{
				FVolumeTextureBrushParameter& Brush = *BrushVolumeTextureParameters.Find(ParameterName);

				if (Brush.Name_past != ParameterName || (Brush.Texture3D_value != Volume_Texture_value))
				{
					Brush.Texture3D_value = Volume_Texture_value;
					Brush.Name_past = ParameterName;
					Brush.SentToMaterial = true;

					if (BrushMaterialDyn && Brush.Texture3D_value)
						BrushMaterialDyn->SetTextureParameterValue(FName(*ParameterName), Brush.Texture3D_value);

					if (LayerBrushMaterialDyn && Brush.Texture3D_value)
						LayerBrushMaterialDyn->SetTextureParameterValue(FName(*ParameterName), Brush.Texture3D_value);

						
					if (ShaderWorldDebug != 0)
					{
						UE_LOG(LogTemp, Warning, TEXT("RedrawNeed = true BrushVolumeTextureParameters update SetBrushParameter"));
					}

					RedrawNeed = true;
				}
			}
			break;
		}
		}

		
	}
}

UMaterialInstanceDynamic* AShaderWorldBrush::GetBrushDynamicMaterial()
{
	return BrushMaterialDyn;
}

UMaterialInstanceDynamic* AShaderWorldBrush::GetLayerBrushDynamicMaterial()
{
	return LayerBrushMaterialDyn;
}

FBox2D AShaderWorldBrush::GetBrushFootPrint()
{
	FBox2D BrushFootPrint = FBox2D(ForceInit);

	if (!EndPlayTriggered && GetWorld())
	{
		if (BoxBound)
		{
			FRotator YawOfBox = BoxBound->GetComponentRotation();
			YawOfBox.Roll=0.f;
			YawOfBox.Pitch=0.f;
			

			FVector Loc = BoxBound->GetComponentLocation();
			FVector Extent_Box = BoxBound->GetScaledBoxExtent();
			FVector Extent_Box_rotated = YawOfBox.RotateVector(Extent_Box);
			Extent_Box_rotated.X = abs(Extent_Box_rotated.X);
			Extent_Box_rotated.Y = abs(Extent_Box_rotated.Y);
			Extent_Box_rotated.X = FMath::Max(Extent_Box_rotated.X,Extent_Box_rotated.Y);
			Extent_Box_rotated.Y = Extent_Box_rotated.X;

			BrushFootPrint += FVector2D(Loc.X + FMath::Max(Extent_Box.X,Extent_Box_rotated.X), Loc.Y + FMath::Max(Extent_Box.Y,Extent_Box_rotated.Y));
			BrushFootPrint += FVector2D(Loc.X - FMath::Max(Extent_Box.X,Extent_Box_rotated.X), Loc.Y - FMath::Max(Extent_Box.Y,Extent_Box_rotated.Y));
		}
	}
	return BrushFootPrint;
}
//Layer.Enabled,BrushEl.Enabled,Layer.Invert,BrushEl.Invert ,Layer.Influence,BrushEl.Influence
bool AShaderWorldBrush::NeedRedraw(bool LayerEnabled,bool BrushEnabled, float LayerInfluence,float BrushInfluence, bool IncludeBP)
{
	bool redraw = false;

	bool WillBrushBeActuallyDrawn = LayerEnabled && BrushEnabled && (LayerInfluence>0.001f) && (BrushInfluence>0.001f) && IsValidBrush();
	
	if(IncludeBP)
	DoesBrushNeedRedraw();

	if(LayerEnabled!=Layer_Enabled || BrushEnabled!=Brush_Enabled)
	{
		Layer_Enabled=LayerEnabled;
		Brush_Enabled=BrushEnabled;
		redraw=true;
	}
	
	if (RedrawNeed)
	{
		if(!WillBrushBeActuallyDrawn)
			RedrawNeed=false;
		
		return true;
	}

	if(WillBrushBeActuallyDrawn)
	{
		
		FVector Loc = GetRootComponent()->GetComponentLocation();
	
	if((BrushLocation_Material-Loc).SizeSquared()>0.005f)	
		{
		redraw=true;	
		}			
	if (abs(Influence_Layer_Material - LayerInfluence) > 0.01f)
		{
		redraw=true;
		}			
	if (abs(Influence_Brush_Material - BrushInfluence) > 0.01f)
		{
		redraw=true;
		}

	for (auto& Elem : BrushScalarParameters)
	{
		if(redraw)
		break;
		if (Elem.Key != Elem.Value.Name_past || abs(Elem.Value.float_value_past - Elem.Value.float_value) > 0.01f || !Elem.Value.SentToMaterial)
		{
			redraw = true;
		}

	}

	for (auto& Elem : BrushVectorParameters)
	{
		if (redraw)
			break;
		if (Elem.Key != Elem.Value.Name_past || (Elem.Value.Vector_value_past - Elem.Value.Vector_value).SizeSquared() > 0.00005f 
		|| !Elem.Value.SentToMaterial)
		{
			redraw = true;
		}

	}

	for (auto& Elem : BrushTextureParameters)
	{
		if (redraw)
			break;
		if (Elem.Key != Elem.Value.Name_past || Elem.Value.Texture2D_value != Elem.Value.Texture2D_value_past || !Elem.Value.SentToMaterial)
		{
			redraw = true;
		}

	}

	for (auto& Elem : BrushVolumeTextureParameters)
	{
		if (redraw)
			break;
		if (Elem.Key != Elem.Value.Name_past || Elem.Value.Texture3D_value != Elem.Value.Texture3D_value_past || !Elem.Value.SentToMaterial)
		{
			redraw = true;
		}

	}
			
	}	

	
	return redraw;
}

void AShaderWorldBrush::SetRedrawNeed()
{
	Force_Layer_influcence_update = true;
	Force_Brush_influcence_update = true;
	Force_Position_update = true;

	for (auto& Elem : BrushScalarParameters)
	{
		Elem.Value.SentToMaterial = false;
	}

	for (auto& Elem : BrushVectorParameters)
	{
		Elem.Value.SentToMaterial = false;
	}

	for (auto& Elem : BrushTextureParameters)
	{
		Elem.Value.SentToMaterial = false;
	}

	for (auto& Elem : BrushVolumeTextureParameters)
	{
		Elem.Value.SentToMaterial = false;
	}

}

void AShaderWorldBrush::ResetB(bool LayerEnabled,bool BrushEnabled, float LayerInfluence,float BrushInfluence)
{
	if (BrushMaterialDyn && BrushMaterialDyn->IsRooted())
		BrushMaterialDyn->RemoveFromRoot();
	BrushMaterialDyn=nullptr;

	if (LayerBrushMaterialDyn && LayerBrushMaterialDyn->IsRooted())
		LayerBrushMaterialDyn->RemoveFromRoot();
	LayerBrushMaterialDyn = nullptr;

	RedrawNeed=false;

	Influence_Layer_Material = LayerInfluence;
	Influence_Brush_Material = BrushInfluence;

	BrushLocation_Material = FVector(0.f, 0.f, 0.f);
	BrushLocation = FVector(0.f, 0.f, 0.f);

	SetRedrawNeed();

	ResetBrush();

	Layer_Enabled = LayerEnabled;
	Brush_Enabled = BrushEnabled;
}


void AShaderWorldBrush::ApplyBrushAt(UTextureRenderTarget2D* Destination_RT,UTextureRenderTarget2D* Source_RT,float LayerInfluence,float BrushInfluence, FVector RingLocation, float GridScaling, int N,bool CollisionMesh, bool IsLayer)
{
	UWorld* World = GetWorld();
	FVector Loc = GetActorLocation();

	if(BrushMaterial && !BrushMaterialDyn)
	{
		BrushMaterialDyn = UMaterialInstanceDynamic::Create(BrushMaterial, this);

#if !WITH_EDITOR
		BrushMaterialDyn->AddToRoot();
#endif
		if (World->WorldType == EWorldType::PIE)
			BrushMaterialDyn->AddToRoot();
		
		SetRedrawNeed();
	}

	if (DrawToLayer && LayerBrushMaterial && !LayerBrushMaterialDyn)
	{
		LayerBrushMaterialDyn = UMaterialInstanceDynamic::Create(LayerBrushMaterial, this);
#if !WITH_EDITOR
		LayerBrushMaterialDyn->AddToRoot();
#endif
		if (World->WorldType == EWorldType::PIE)
			LayerBrushMaterialDyn->AddToRoot();

		SetRedrawNeed();
	}

	if (IsLayer)
	{
		if(!DrawToLayer)
		{
			UE_LOG(LogTemp,Warning,TEXT("ERROR Land Data Layer drawing pass on a brush not enabled for that"));
			return;
		}
			

		if (LayerBrushMaterialDyn)
		{
			LayerBrushMaterialDyn->SetTextureParameterValue("DataLayer", Source_RT);
			LayerBrushMaterialDyn->SetVectorParameterValue("RingLocation", RingLocation);

			LayerBrushMaterialDyn->SetScalarParameterValue("CacheRes", Source_RT->SizeX);
			LayerBrushMaterialDyn->SetScalarParameterValue("LocalGridScaling", GridScaling);
			LayerBrushMaterialDyn->SetScalarParameterValue("N", N);
			LayerBrushMaterialDyn->SetScalarParameterValue("Collision", 0.f);

			UKismetRenderingLibrary::ClearRenderTarget2D(this, Destination_RT, FLinearColor::Black);
			UKismetRenderingLibrary::DrawMaterialToRenderTarget(this, Destination_RT, LayerBrushMaterialDyn);
		}		

		return;
	}

	if ((BrushLocation_Material - Loc).SizeSquared() > 0.005f || Force_Position_update)
	{
		Force_Position_update=false;
		BrushLocation_Material = Loc;
		BrushMaterialDyn->SetVectorParameterValue("BrushLocation", BrushLocation_Material);
		if(LayerBrushMaterialDyn)
			LayerBrushMaterialDyn->SetVectorParameterValue("BrushLocation", BrushLocation_Material);
	}
	
	if (abs(Influence_Layer_Material - LayerInfluence) > 0.01f || Force_Layer_influcence_update)
	{
		Force_Layer_influcence_update = false;
		Influence_Layer_Material = LayerInfluence;
		BrushMaterialDyn->SetScalarParameterValue("LayerInfluence", Influence_Layer_Material);
		if (LayerBrushMaterialDyn)
			LayerBrushMaterialDyn->SetScalarParameterValue("LayerInfluence", Influence_Layer_Material);
	}
	if (abs(Influence_Brush_Material - BrushInfluence) > 0.01f || Force_Brush_influcence_update)
	{
		Force_Brush_influcence_update = false;
		Influence_Brush_Material = BrushInfluence;
		BrushMaterialDyn->SetScalarParameterValue("BrushInfluence", Influence_Brush_Material);
		if (LayerBrushMaterialDyn)
			LayerBrushMaterialDyn->SetScalarParameterValue("BrushInfluence", Influence_Brush_Material);
	}

	//Set Parameters
	{

		for(auto& Elem : BrushScalarParameters)
		{
			if(Elem.Key!=Elem.Value.Name_past || abs(Elem.Value.float_value_past - Elem.Value.float_value)>0.01f || !Elem.Value.SentToMaterial)
			{
				Elem.Value.float_value_past=Elem.Value.float_value;
				Elem.Value.Name_past = Elem.Key;
				Elem.Value.SentToMaterial = true;
				BrushMaterialDyn->SetScalarParameterValue(FName(*Elem.Key), Elem.Value.float_value);
				if (LayerBrushMaterialDyn)
					LayerBrushMaterialDyn->SetScalarParameterValue(FName(*Elem.Key), Elem.Value.float_value);

				
				if (ShaderWorldDebug != 0)
				{
					UE_LOG(LogTemp,Warning,TEXT("RedrawNeed = true Elem.Key!=Elem.Value.Name_past || abs(Elem.Value.float_value_past - Elem.Value.float_value)>0.01f || !Elem.Value.SentToMaterial"));
				}

				
				//RedrawNeed = true;
			}
		
		}

		for (auto& Elem : BrushVectorParameters)
		{
			if (Elem.Key != Elem.Value.Name_past || (Elem.Value.Vector_value_past - Elem.Value.Vector_value).SizeSquared() > 0.00005f 
				|| !Elem.Value.SentToMaterial)
			{
				Elem.Value.Vector_value_past = Elem.Value.Vector_value;
				Elem.Value.Name_past = Elem.Key;
				Elem.Value.SentToMaterial = true;
				BrushMaterialDyn->SetVectorParameterValue(FName(*Elem.Key), FLinearColor(Elem.Value.Vector_value));
				if (LayerBrushMaterialDyn)
					LayerBrushMaterialDyn->SetVectorParameterValue(FName(*Elem.Key), FLinearColor(Elem.Value.Vector_value));
			
				if (ShaderWorldDebug != 0)
				{
					UE_LOG(LogTemp, Warning, TEXT("Elem.Key != Elem.Value.Name_past || abs(FVector::DotProduct(Elem.Value.Vector_value_past,Elem.Value.Vector_value)-1.0)>0.001f %f || (Elem.Value.Vector_value_past - Elem.Value.Vector_value).SizeSquared() > 0.0001f %f || !Elem.Value.SentToMaterial"), abs(FVector::DotProduct(Elem.Value.Vector_value_past, Elem.Value.Vector_value) - 1.0), (Elem.Value.Vector_value_past - Elem.Value.Vector_value).SizeSquared());
				}

				//RedrawNeed = true;
			}

		}

		for (auto& Elem : BrushTextureParameters)
		{
			if (Elem.Key != Elem.Value.Name_past || Elem.Value.Texture2D_value!=Elem.Value.Texture2D_value_past|| !Elem.Value.SentToMaterial)
			{
				Elem.Value.Texture2D_value_past = Elem.Value.Texture2D_value;
				Elem.Value.Name_past = Elem.Key;
				Elem.Value.SentToMaterial = true;

				if (Elem.Value.Texture2D_value)
				{
					BrushMaterialDyn->SetTextureParameterValue(FName(*Elem.Key), Elem.Value.Texture2D_value);
					if (LayerBrushMaterialDyn)
						LayerBrushMaterialDyn->SetTextureParameterValue(FName(*Elem.Key), Elem.Value.Texture2D_value);
				}

				if (ShaderWorldDebug != 0)
				{
					UE_LOG(LogTemp, Warning, TEXT("Elem.Key != Elem.Value.Name_past || Elem.Value.Texture2D_value!=Elem.Value.Texture2D_value_past|| !Elem.Value.SentToMaterial"));

				}
				
				//RedrawNeed = true;
			}

		}

		for (auto& Elem : BrushVolumeTextureParameters)
		{
			if (Elem.Key != Elem.Value.Name_past || Elem.Value.Texture3D_value!=Elem.Value.Texture3D_value_past|| !Elem.Value.SentToMaterial)
			{
				Elem.Value.Texture3D_value_past = Elem.Value.Texture3D_value;
				Elem.Value.Name_past = Elem.Key;
				Elem.Value.SentToMaterial = true;

				if(Elem.Value.Texture3D_value)
				{				
					BrushMaterialDyn->SetTextureParameterValue(FName(*Elem.Key), Elem.Value.Texture3D_value);
					if (LayerBrushMaterialDyn)
						LayerBrushMaterialDyn->SetTextureParameterValue(FName(*Elem.Key), Elem.Value.Texture3D_value);
				}

				if (ShaderWorldDebug != 0)
				{
					UE_LOG(LogTemp,Warning,TEXT("Elem.Key != Elem.Value.Name_past || Elem.Value.Texture3D_value!=Elem.Value.Texture3D_value_past|| !Elem.Value.SentToMaterial"));

				}

				

				//RedrawNeed = true;
			}

		}
	}

	Layer_Enabled = true;
	Brush_Enabled = true;
	
	
	BrushMaterialDyn->SetTextureParameterValue("HeightMap", Source_RT);

	BrushMaterialDyn->SetVectorParameterValue("RingLocation", RingLocation);

	BrushMaterialDyn->SetScalarParameterValue("CacheRes", CollisionMesh ? Source_RT->SizeX : Source_RT->SizeX - 2);
	BrushMaterialDyn->SetScalarParameterValue("LocalGridScaling", GridScaling);
	BrushMaterialDyn->SetScalarParameterValue("N", N);
	BrushMaterialDyn->SetScalarParameterValue("Collision", CollisionMesh ? 1.f : 0.f);

	UKismetRenderingLibrary::ClearRenderTarget2D(this, Destination_RT, FLinearColor::Black);
	UKismetRenderingLibrary::DrawMaterialToRenderTarget(this, Destination_RT, BrushMaterialDyn);




}

bool AShaderWorldBrush::IsValidBrush()
{
	if(!IsValid(this))
		return false;

	if (!IsPendingKillOrUnreachable() && BrushMaterial && (!DrawToLayer || DrawToLayer && LayerBrushMaterial))
		return true;

	return false;
}

// Called when the game starts or when spawned
void AShaderWorldBrush::BeginPlay()
{
	Super::BeginPlay();
	
//	UE_LOG(LogTemp,Warning,TEXT("BeginPlay()"));
}

// Called every frame
void AShaderWorldBrush::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}