// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

#include "Styling/SlateStyle.h"
#include "Styling/SlateStyleRegistry.h"
#include "AssetToolsModule.h"
#include "AssetTypeCategories.h"

class FShaderWorldEdModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	static EAssetTypeCategories::Type GetAssetCategory() { return ShaderWorldAssetCategory; }

public:

	TSharedPtr<FSlateStyleSet> StyleSet;

	static EAssetTypeCategories::Type ShaderWorldAssetCategory;
	TArray<TSharedPtr<IAssetTypeActions>> CreatedAssetTypeActions;
};
