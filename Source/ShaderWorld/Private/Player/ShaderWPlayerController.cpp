//Copyright Maxime Dupart 2021  https://twitter.com/Max_Dupt


#include "Player/ShaderWPlayerController.h"
#include "ShaderCompiler.h"

bool AShaderWPlayerController::CanRestartPlayer()
{
	//Our world is generated by shaders, if shader compiling do not spawn
	if (GShaderCompilingManager && GShaderCompilingManager->IsCompiling())
		return false;

	return Super::CanRestartPlayer();
}
