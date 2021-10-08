// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShaderWorldEdEdMode.h"
#include "ShaderWorldEdEdModeToolkit.h"
#include "Toolkits/ToolkitManager.h"
#include "EditorModeManager.h"

const FEditorModeID FShaderWorldEdEdMode::EM_ShaderWorldEdEdModeId = TEXT("EM_ShaderWorldEdEdMode");

FShaderWorldEdEdMode::FShaderWorldEdEdMode()
{

}

FShaderWorldEdEdMode::~FShaderWorldEdEdMode()
{

}

void FShaderWorldEdEdMode::Enter()
{
	FEdMode::Enter();

	if (!Toolkit.IsValid() && UsesToolkits())
	{
		Toolkit = MakeShareable(new FShaderWorldEdEdModeToolkit);
		Toolkit->Init(Owner->GetToolkitHost());
	}
}

void FShaderWorldEdEdMode::Exit()
{
	if (Toolkit.IsValid())
	{
		FToolkitManager::Get().CloseToolkit(Toolkit.ToSharedRef());
		Toolkit.Reset();
	}

	// Call base Exit method to ensure proper cleanup
	FEdMode::Exit();
}

bool FShaderWorldEdEdMode::UsesToolkits() const
{
	return true;
}




