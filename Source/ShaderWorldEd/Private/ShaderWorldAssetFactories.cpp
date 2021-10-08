#include "ShaderWorldAssetFactories.h"
#include "ShaderWorldEd.h"

#include "Data/ShaderWorld_Material.h"
#include "Data/ShaderWorld_Material_Collection.h"
#include "Data/ShaderWorld_Spawnable.h"
#include "Data/ShaderWorld_Spawnable_Collection.h"

//The asset type categories will let us access the various asset categories inside the Editor
#include "AssetTypeCategories.h"

#define LOCTEXT_NAMESPACE "ShaderWorld_MaterialFactory"

UShaderWorld_MaterialFactory::UShaderWorld_MaterialFactory(const FObjectInitializer & ObjectInitializer)
		: Super(ObjectInitializer)
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UShaderWorld_Material::StaticClass();
}


uint32 UShaderWorld_MaterialFactory::GetMenuCategories() const
{
	//Let's place this asset in the Blueprints category in the Editor
	return FShaderWorldEdModule::GetAssetCategory();
}

UObject* UShaderWorld_MaterialFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	//Create the editor asset 
	UShaderWorld_Material* OrfeasEditorAsset = NewObject<UShaderWorld_Material>(InParent, InClass, InName, Flags);
	return OrfeasEditorAsset;
}

#undef LOCTEXT_NAMESPACE

#define LOCTEXT_NAMESPACE "ShaderWorld_Material_CollectionFactory"


UShaderWorld_Material_CollectionFactory::UShaderWorld_Material_CollectionFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UShaderWorld_Material_Collection::StaticClass();
}


uint32 UShaderWorld_Material_CollectionFactory::GetMenuCategories() const
{
	//Let's place this asset in the Blueprints category in the Editor
	return FShaderWorldEdModule::GetAssetCategory();
}

UObject* UShaderWorld_Material_CollectionFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	//Create the editor asset 
	UShaderWorld_Material_Collection* OrfeasEditorAsset = NewObject<UShaderWorld_Material_Collection>(InParent, InClass, InName, Flags);
	return OrfeasEditorAsset;
}

#undef LOCTEXT_NAMESPACE

#define LOCTEXT_NAMESPACE "ShaderWorld_SpawnableFactory"

UShaderWorld_SpawnableFactory::UShaderWorld_SpawnableFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UShaderWorld_Spawnable::StaticClass();
}


uint32 UShaderWorld_SpawnableFactory::GetMenuCategories() const
{
	//Let's place this asset in the Blueprints category in the Editor
	return FShaderWorldEdModule::GetAssetCategory();
}

UObject* UShaderWorld_SpawnableFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	//Create the editor asset 
	UShaderWorld_Spawnable* OrfeasEditorAsset = NewObject<UShaderWorld_Spawnable>(InParent, InClass, InName, Flags);
	return OrfeasEditorAsset;
}

#undef LOCTEXT_NAMESPACE

#define LOCTEXT_NAMESPACE "ShaderWorld_Spawnable_CollectionFactory"


UShaderWorld_Spawnable_CollectionFactory::UShaderWorld_Spawnable_CollectionFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UShaderWorld_Spawnable_Collection::StaticClass();
}


uint32 UShaderWorld_Spawnable_CollectionFactory::GetMenuCategories() const
{
	//Let's place this asset in the Blueprints category in the Editor
	return FShaderWorldEdModule::GetAssetCategory();
}

UObject* UShaderWorld_Spawnable_CollectionFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	//Create the editor asset 
	UShaderWorld_Spawnable_Collection* OrfeasEditorAsset = NewObject<UShaderWorld_Spawnable_Collection>(InParent, InClass, InName, Flags);
	return OrfeasEditorAsset;
}

#undef LOCTEXT_NAMESPACE

