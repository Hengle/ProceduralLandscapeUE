// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "ShaderWorldAssetTypeActions.h"
#include "AssetTypeCategories.h"
#include "Engine/EngineTypes.h"
#include "Data/ShaderWorld_Material.h"
#include "Data/ShaderWorld_Material_Collection.h"
#include "Data/ShaderWorld_Spawnable.h"
#include "Data/ShaderWorld_Spawnable_Collection.h"
#include "Modules/ModuleManager.h"
#include "Internationalization/Internationalization.h"


#define LOCTEXT_NAMESPACE "ShaderWorld_Material"

FText FSW_MaterialAssetTypeActions::GetName() const
{
	return LOCTEXT("FSW_MaterialAssetTypeActionsName", "ShaderWorld_Material");
}

FColor FSW_MaterialAssetTypeActions::GetTypeColor() const
{
	return FColor::Cyan;
}

UClass* FSW_MaterialAssetTypeActions::GetSupportedClass() const
{
	return UShaderWorld_Material::StaticClass();
}

uint32 FSW_MaterialAssetTypeActions::GetCategories()
{
		return EAssetTypeCategories::Misc;
}

#undef LOCTEXT_NAMESPACE

#define LOCTEXT_NAMESPACE "ShaderWorld_Material_Collection"

FText FSW_Material_CollectionAssetTypeActions::GetName() const
{
	return LOCTEXT("FSW_Material_CollectionAssetTypeActionsName", "ShaderWorld_Material_Collection");
}

FColor FSW_Material_CollectionAssetTypeActions::GetTypeColor() const
{
	return FColor::Cyan;
}

UClass* FSW_Material_CollectionAssetTypeActions::GetSupportedClass() const
{
	return UShaderWorld_Material_Collection::StaticClass();
}

uint32 FSW_Material_CollectionAssetTypeActions::GetCategories()
{
		return EAssetTypeCategories::Misc;
}

#undef LOCTEXT_NAMESPACE

#define LOCTEXT_NAMESPACE "ShaderWorld_Spawnable"


FText FSW_SpawnableAssetTypeActions::GetName() const
{
	return LOCTEXT("FSW_SpawnableAssetTypeActionsName", "ShaderWorld_Spawnable");
}

FColor FSW_SpawnableAssetTypeActions::GetTypeColor() const
{
	return FColor::Cyan;
}

UClass* FSW_SpawnableAssetTypeActions::GetSupportedClass() const
{
	return UShaderWorld_Spawnable::StaticClass();
}

uint32 FSW_SpawnableAssetTypeActions::GetCategories()
{
		return EAssetTypeCategories::Misc;
}

#undef LOCTEXT_NAMESPACE

#define LOCTEXT_NAMESPACE "ShaderWorld_Spawnable_Collection"


FText FSW_Spawnable_collectionAssetTypeActions::GetName() const
{
	return LOCTEXT("FSW_Spawnable_collectionAssetTypeActionsName", "ShaderWorld_Spawnable_Collection");
}

FColor FSW_Spawnable_collectionAssetTypeActions::GetTypeColor() const
{
	return FColor::Cyan;
}

UClass* FSW_Spawnable_collectionAssetTypeActions::GetSupportedClass() const
{
	return UShaderWorld_Spawnable_Collection::StaticClass();
}

uint32 FSW_Spawnable_collectionAssetTypeActions::GetCategories()
{
		return EAssetTypeCategories::Misc;
}

#undef LOCTEXT_NAMESPACE