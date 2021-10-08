//Copyright Maxime Dupart 2021  https://twitter.com/Max_Dupt


#include "Brushes/ShaderWorldPaintableBrush.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Components/BoxComponent.h"
#include "Kismet/KismetRenderingLibrary.h"


// Sets default values
AShaderWorldPaintableBrush::AShaderWorldPaintableBrush(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

#if WITH_EDITOR
bool AShaderWorldPaintableBrush::ShouldTickIfViewportsOnly() const
{
	return true;
}

#endif

// Called when the game starts or when spawned
void AShaderWorldPaintableBrush::BeginPlay()
{
	Super::BeginPlay();
}


#if WITH_EDITOR
void AShaderWorldPaintableBrush::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	FProperty* Property = PropertyChangedEvent.MemberProperty;

	if (Property && PropertyChangedEvent.ChangeType != EPropertyChangeType::Interactive)
	{
		FString PropName = PropertyChangedEvent.Property->GetName();

		if (PropName == TEXT("RenderTargetDimension") ||
			PropName == TEXT("WorldDimensionMeters"))
		{
			Recreate_RenderTarget = true;
		}
		
		if(PropName == TEXT("WorldDimensionMeters"))
		{
			BoxBound->SetBoxExtent(FVector(WorldDimensionMeters,WorldDimensionMeters,100.f));
			SetActorScale3D(FVector(1.f,1.f,1.f));
		}
		
	}

	Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif

void AShaderWorldPaintableBrush::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (RT_A && RT_A->IsRooted())
		RT_A->RemoveFromRoot();
	if (RT_B && RT_B->IsRooted())
		RT_B->RemoveFromRoot();

	Super::EndPlay(EndPlayReason);
}

// Called every frame
void AShaderWorldPaintableBrush::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

void AShaderWorldPaintableBrush::ApplyBrushAt(UTextureRenderTarget2D* Destination_RT,UTextureRenderTarget2D* Source_RT,float LayerInfluence,float BrushInfluence, FVector RingLocation, float GridScaling, int N,bool CollisionMesh, bool IsLayer)
{
	UWorld* World = GetWorld();

	if(Recreate_RenderTarget)
	{
		if(RT_A && RT_A->IsRooted())
			RT_A->RemoveFromRoot();

		if (RT_B && RT_B->IsRooted())
			RT_B->RemoveFromRoot();

		RT_A=nullptr;
		RT_B=nullptr;
	}

	if (!RT_A && World)
	{
		RT_A = UKismetRenderingLibrary::CreateRenderTarget2D(GetWorld(), RenderTargetDimension, RenderTargetDimension, RTF_RGBA8, FLinearColor(0, 0, 0, 1), false);
#if !WITH_EDITOR
		RT_A->AddToRoot();
#endif
		if (World->WorldType == EWorldType::PIE)
			RT_A->AddToRoot();
		RT_A->Filter = TF_Nearest;
		RT_A->AddressX = TA_Clamp;
		RT_A->AddressY = TA_Clamp;
		RT_A->UpdateResourceImmediate();
	}

	if (!RT_B && World)
	{
		RT_B = UKismetRenderingLibrary::CreateRenderTarget2D(GetWorld(), RenderTargetDimension, RenderTargetDimension, RTF_RGBA8, FLinearColor(0, 0, 0, 1), false);
#if !WITH_EDITOR
		RT_B->AddToRoot();
#endif
		if (World->WorldType == EWorldType::PIE)
			RT_B->AddToRoot();
		RT_B->Filter = TF_Nearest;
		RT_B->AddressX = TA_Clamp;
		RT_B->AddressY = TA_Clamp;
		RT_B->UpdateResourceImmediate();
	}

	Super::ApplyBrushAt( Destination_RT, Source_RT, LayerInfluence, BrushInfluence,  RingLocation,  GridScaling,  N, CollisionMesh,  IsLayer);

}

void AShaderWorldPaintableBrush::ResetB(bool LayerEnabled,bool BrushEnabled, float LayerInfluence,float BrushInfluence)
{
	if (RT_A && RT_A->IsRooted())
		RT_A->RemoveFromRoot();
	if (RT_B && RT_B->IsRooted())
		RT_B->RemoveFromRoot();
	RT_A = nullptr;
	RT_B = nullptr;

	Super::ResetB(LayerEnabled,BrushEnabled,LayerInfluence,BrushInfluence);

}

