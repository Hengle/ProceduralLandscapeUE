// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Factories/Factory.h"
#include "Actor/GeometryClipMapWorld.h"
#include "ShaderWorldAssetFactories.generated.h"





UCLASS()
class UShaderWorld_MaterialFactory : public UFactory
{
	GENERATED_UCLASS_BODY()

public:

	
	virtual uint32 GetMenuCategories() const override;
	
	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;

	
};

UCLASS()
class UShaderWorld_Material_CollectionFactory : public UFactory
{
	GENERATED_UCLASS_BODY()

public:


	virtual uint32 GetMenuCategories() const override;

	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;


};

UCLASS()
class UShaderWorld_SpawnableFactory : public UFactory
{
	GENERATED_UCLASS_BODY()

public:


	virtual uint32 GetMenuCategories() const override;

	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;


};

UCLASS()
class UShaderWorld_Spawnable_CollectionFactory : public UFactory
{
	GENERATED_UCLASS_BODY()

public:


	virtual uint32 GetMenuCategories() const override;

	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;


};
