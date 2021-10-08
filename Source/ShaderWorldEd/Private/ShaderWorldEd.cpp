// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShaderWorldEd.h"
#include "ShaderWorldEdEdMode.h"

#include "ShaderWorldAssetTypeActions.h"

#define LOCTEXT_NAMESPACE "FShaderWorldEdModule"

EAssetTypeCategories::Type FShaderWorldEdModule::ShaderWorldAssetCategory;

void FShaderWorldEdModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	FEditorModeRegistry::Get().RegisterMode<FShaderWorldEdEdMode>(FShaderWorldEdEdMode::EM_ShaderWorldEdEdModeId, LOCTEXT("ShaderWorldEdEdModeName", "ShaderWorldEdEdMode"), FSlateIcon(), true);

	// Only register once
	if (!StyleSet.IsValid())
	{
		StyleSet = MakeShareable(new FSlateStyleSet("ShaderWorldStyle"));
		//"../../../Resources"
		FString ContentDir = FPaths::Combine(FPaths:: ProjectDir(), TEXT("Plugins/ShaderWorld/Resources"));
		StyleSet->SetContentRoot(ContentDir);


		//Create a brush from the icon
		FSlateImageBrush* IconBrush_Spawn = new FSlateImageBrush(StyleSet->RootToContentDir(TEXT("SW_Spawnable_16"), TEXT(".png")), FVector2D(16.f, 16.f));
		FSlateImageBrush* ThumbnailBrush_Spawn = new FSlateImageBrush(StyleSet->RootToContentDir(TEXT("SW_Spawnable_128"), TEXT(".png")), FVector2D(128.f, 128.f));

		if (IconBrush_Spawn)
			StyleSet->Set("ClassIcon.ShaderWorld_Spawnable", IconBrush_Spawn);
		if (ThumbnailBrush_Spawn)
			StyleSet->Set("ClassThumbnail.ShaderWorld_Spawnable", ThumbnailBrush_Spawn);

		FSlateImageBrush* IconBrush_SpawnCollection = new FSlateImageBrush(StyleSet->RootToContentDir(TEXT("SW_Spawnable_collection_16"), TEXT(".png")), FVector2D(16.f, 16.f));
		FSlateImageBrush* ThumbnailBrush_SpawnCollection = new FSlateImageBrush(StyleSet->RootToContentDir(TEXT("SW_Spawnable_collection_128"), TEXT(".png")), FVector2D(128.f, 128.f));

		if (IconBrush_SpawnCollection)
			StyleSet->Set("ClassIcon.ShaderWorld_Spawnable_Collection", IconBrush_SpawnCollection);
		if (ThumbnailBrush_SpawnCollection)
			StyleSet->Set("ClassThumbnail.ShaderWorld_Spawnable_Collection", ThumbnailBrush_SpawnCollection);

		FSlateImageBrush* IconBrush_Mat = new FSlateImageBrush(StyleSet->RootToContentDir(TEXT("SW_Material_16"), TEXT(".png")), FVector2D(16.f, 16.f));
		FSlateImageBrush* ThumbnailBrush_Mat = new FSlateImageBrush(StyleSet->RootToContentDir(TEXT("SW_Material_128"), TEXT(".png")), FVector2D(128.f, 128.f));

		if (IconBrush_Mat)
			StyleSet->Set("ClassIcon.ShaderWorld_Material", IconBrush_Mat);
		if (ThumbnailBrush_Mat)
			StyleSet->Set("ClassThumbnail.ShaderWorld_Material", ThumbnailBrush_Mat);

		FSlateImageBrush* IconBrush_MatCollection = new FSlateImageBrush(StyleSet->RootToContentDir(TEXT("SW_Material_collection_16"), TEXT(".png")), FVector2D(16.f, 16.f));
		FSlateImageBrush* ThumbnailBrush_MatCollection = new FSlateImageBrush(StyleSet->RootToContentDir(TEXT("SW_Material_collection_128"), TEXT(".png")), FVector2D(128.f, 128.f));

		if (IconBrush_MatCollection)
			StyleSet->Set("ClassIcon.ShaderWorld_Material_Collection", IconBrush_MatCollection);
		if (ThumbnailBrush_MatCollection)
			StyleSet->Set("ClassThumbnail.ShaderWorld_Material_Collection", ThumbnailBrush_MatCollection);


		FSlateStyleRegistry::RegisterSlateStyle(*StyleSet.Get());

	}




	// Register asset types
	IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
	ShaderWorldAssetCategory = AssetTools.RegisterAdvancedAssetCategory(FName(TEXT("ShaderWorld")), LOCTEXT("ShaderWorldAssetCategory", "ShaderWorld"));

	// Helper lambda for registering asset type actions for automatic cleanup on shutdown
	auto RegisterAssetTypeAction = [&](TSharedRef<IAssetTypeActions> Action)
	{
		AssetTools.RegisterAssetTypeActions(Action);
		CreatedAssetTypeActions.Add(Action);
	};

	// Register type actions
	RegisterAssetTypeAction(MakeShareable(new FSW_MaterialAssetTypeActions));
	RegisterAssetTypeAction(MakeShareable(new FSW_Material_CollectionAssetTypeActions));
	RegisterAssetTypeAction(MakeShareable(new FSW_SpawnableAssetTypeActions));
	RegisterAssetTypeAction(MakeShareable(new FSW_Spawnable_collectionAssetTypeActions));
}

void FShaderWorldEdModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FEditorModeRegistry::Get().UnregisterMode(FShaderWorldEdEdMode::EM_ShaderWorldEdEdModeId);

	FSlateStyleRegistry::UnRegisterSlateStyle(StyleSet->GetStyleSetName());

	if (FModuleManager::Get().IsModuleLoaded("AssetTools"))
	{
		IAssetTools& AssetTools = FModuleManager::GetModuleChecked<FAssetToolsModule>("AssetTools").Get();
		for (auto CreatedAssetTypeAction : CreatedAssetTypeActions)
		{
			AssetTools.UnregisterAssetTypeActions(CreatedAssetTypeAction.ToSharedRef());
		}
	}
	CreatedAssetTypeActions.Empty();
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FShaderWorldEdModule, ShaderWorldEd)