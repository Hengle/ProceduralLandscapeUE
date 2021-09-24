//Copyright Maxime Dupart 2021  https://twitter.com/Max_Dupt


#include "Actor/ShaderWorldBrush.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "Components/BoxComponent.h"


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

#if !WITH_EDITOR
	EndPlayTriggered = true;
#endif

	if (BrushMaterialDyn && BrushMaterialDyn->IsRooted())
		BrushMaterialDyn->RemoveFromRoot();
	Super::EndPlay(EndPlayReason);
	

}

#if WITH_EDITOR
bool AShaderWorldBrush::ShouldTickIfViewportsOnly() const
{
	return true;
}

#endif


UMaterialInstanceDynamic* AShaderWorldBrush::GetBrushDynamicMaterial()
{
	return BrushMaterialDyn;
}

FBox2D AShaderWorldBrush::GetBrushFootPrint()
{
	FBox2D BrushFootPrint = FBox2D(ForceInit);

	if (!EndPlayTriggered)
	{
		if (BoxBound)
		{
			FVector Loc = BoxBound->GetComponentLocation();
			FVector Extent_Box = BoxBound->GetScaledBoxExtent();

			BrushFootPrint += FVector2D(Loc.X + Extent_Box.X, Loc.Y + Extent_Box.Y);
			BrushFootPrint += FVector2D(Loc.X - Extent_Box.X, Loc.Y - Extent_Box.Y);
		}
	}
	return BrushFootPrint;
}
//Layer.Enabled,BrushEl.Enabled,Layer.Invert,BrushEl.Invert ,Layer.Influence,BrushEl.Influence
bool AShaderWorldBrush::NeedRedraw(bool LayerEnabled,bool BrushEnabled, float LayerInfluence,float BrushInfluence, bool IncludeBP)
{
	bool redraw = false;

	

	DoesBrushNeedRedraw();

	if(LayerEnabled!=Layer_Enabled || BrushEnabled!=Brush_Enabled)
	{
		Layer_Enabled=LayerEnabled;
		Brush_Enabled=BrushEnabled;
		redraw=true;
	}
	
	if (RedrawNeed)
	{
		
		return true;
	}
	FVector Loc = GetActorLocation();

		
	
	if((BrushLocation_Material-Loc).SizeSquared()>0.005f)	
		redraw=true;	
	if (abs(Influence_Layer_Material - LayerInfluence) > 0.01f)
		redraw=true;
	if (abs(Influence_Brush_Material - BrushInfluence) > 0.01f)
		redraw=true;

	
	return redraw;
}

void AShaderWorldBrush::Reset()
{
	if (BrushMaterialDyn && BrushMaterialDyn->IsRooted())
		BrushMaterialDyn->RemoveFromRoot();
	BrushMaterialDyn=nullptr;

	RedrawNeed=true;

	Layer_Enabled = true;
	Brush_Enabled = true;

	Influence_Layer_Material = 1.f;
	Influence_Brush_Material = 1.f;

	BrushLocation_Material = FVector(0.f, 0.f, 0.f);
	BrushLocation = FVector(0.f, 0.f, 0.f);

	ResetBrush();

	Layer_Enabled = false;
	Brush_Enabled = false;
}


void AShaderWorldBrush::ApplyBrushAt(UTextureRenderTarget2D* Destination_RT,UTextureRenderTarget2D* Source_RT,float LayerInfluence,float BrushInfluence, FVector RingLocation, float GridScaling, int N,bool CollisionMesh)
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
	}

	if ((BrushLocation_Material - Loc).SizeSquared() > 0.005f)
	{
		BrushLocation_Material = Loc;
		BrushMaterialDyn->SetVectorParameterValue("BrushLocation", BrushLocation_Material);
	}
	
	if (abs(Influence_Layer_Material - LayerInfluence) > 0.01f)
	{
		Influence_Layer_Material = LayerInfluence;
		BrushMaterialDyn->SetScalarParameterValue("LayerInfluence", Influence_Layer_Material);
	}
	if (abs(Influence_Brush_Material - BrushInfluence) > 0.01f)
	{
		Influence_Brush_Material = BrushInfluence;
		BrushMaterialDyn->SetScalarParameterValue("BrushInfluence", Influence_Brush_Material);
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

	RedrawNeed=false;


}

// Called when the game starts or when spawned
void AShaderWorldBrush::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShaderWorldBrush::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

