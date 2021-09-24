// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShaderWorld/Public/Data/Spawnable_Mesh_Collection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnable_Mesh_Collection() {}
// Cross Module References
	SHADERWORLD_API UClass* Z_Construct_UClass_USpawnable_Mesh_Collection_NoRegister();
	SHADERWORLD_API UClass* Z_Construct_UClass_USpawnable_Mesh_Collection();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ShaderWorld();
// End Cross Module References
	void USpawnable_Mesh_Collection::StaticRegisterNativesUSpawnable_Mesh_Collection()
	{
	}
	UClass* Z_Construct_UClass_USpawnable_Mesh_Collection_NoRegister()
	{
		return USpawnable_Mesh_Collection::StaticClass();
	}
	struct Z_Construct_UClass_USpawnable_Mesh_Collection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpawnable_Mesh_Collection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ShaderWorld,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpawnable_Mesh_Collection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Data/Spawnable_Mesh_Collection.h" },
		{ "ModuleRelativePath", "Public/Data/Spawnable_Mesh_Collection.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpawnable_Mesh_Collection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpawnable_Mesh_Collection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpawnable_Mesh_Collection_Statics::ClassParams = {
		&USpawnable_Mesh_Collection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USpawnable_Mesh_Collection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpawnable_Mesh_Collection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpawnable_Mesh_Collection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpawnable_Mesh_Collection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpawnable_Mesh_Collection, 385898431);
	template<> SHADERWORLD_API UClass* StaticClass<USpawnable_Mesh_Collection>()
	{
		return USpawnable_Mesh_Collection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpawnable_Mesh_Collection(Z_Construct_UClass_USpawnable_Mesh_Collection, &USpawnable_Mesh_Collection::StaticClass, TEXT("/Script/ShaderWorld"), TEXT("USpawnable_Mesh_Collection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpawnable_Mesh_Collection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
