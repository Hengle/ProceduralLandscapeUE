//Copyright Maxime Dupart 2021  https://twitter.com/Max_Dupt

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TickInEditorActor.generated.h"

UCLASS()
class SHADERWORLD_API ATickInEditorActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATickInEditorActor();

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Trigger")
	bool Trigger;

#if WITH_EDITOR

	bool ShouldTickIfViewportsOnly() const override;

#endif

	UFUNCTION(BlueprintImplementableEvent,CallInEditor, Category = "Events")
	void Compute();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
