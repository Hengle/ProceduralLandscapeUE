//Copyright Maxime Dupart 2021  https://twitter.com/Max_Dupt

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ShaderWPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class SHADERWORLD_API AShaderWPlayerController : public APlayerController
{
	GENERATED_BODY()
	
	public:

	virtual bool CanRestartPlayer() override;
};
