// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShaderWorld/Public/Actor/ShaderWorldBrushManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShaderWorldBrushManager() {}
// Cross Module References
	SHADERWORLD_API UScriptStruct* Z_Construct_UScriptStruct_FHeightMapSourceElement();
	UPackage* Z_Construct_UPackage__Script_ShaderWorld();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	SHADERWORLD_API UScriptStruct* Z_Construct_UScriptStruct_FBrushLayer();
	SHADERWORLD_API UScriptStruct* Z_Construct_UScriptStruct_FBrushElement();
	SHADERWORLD_API UClass* Z_Construct_UClass_AShaderWorldBrushManager_NoRegister();
	SHADERWORLD_API UClass* Z_Construct_UClass_AShaderWorldBrush_NoRegister();
	SHADERWORLD_API UClass* Z_Construct_UClass_AShaderWorldBrushManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	SHADERWORLD_API UClass* Z_Construct_UClass_AGeometryClipMapWorld_NoRegister();
// End Cross Module References
class UScriptStruct* FHeightMapSourceElement::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHADERWORLD_API uint32 Get_Z_Construct_UScriptStruct_FHeightMapSourceElement_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHeightMapSourceElement, Z_Construct_UPackage__Script_ShaderWorld(), TEXT("HeightMapSourceElement"), sizeof(FHeightMapSourceElement), Get_Z_Construct_UScriptStruct_FHeightMapSourceElement_Hash());
	}
	return Singleton;
}
template<> SHADERWORLD_API UScriptStruct* StaticStruct<FHeightMapSourceElement>()
{
	return FHeightMapSourceElement::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHeightMapSourceElement(FHeightMapSourceElement::StaticStruct, TEXT("/Script/ShaderWorld"), TEXT("HeightMapSourceElement"), false, nullptr, nullptr);
static struct FScriptStruct_ShaderWorld_StaticRegisterNativesFHeightMapSourceElement
{
	FScriptStruct_ShaderWorld_StaticRegisterNativesFHeightMapSourceElement()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HeightMapSourceElement")),new UScriptStruct::TCppStructOps<FHeightMapSourceElement>);
	}
} ScriptStruct_ShaderWorld_StaticRegisterNativesFHeightMapSourceElement;
	struct Z_Construct_UScriptStruct_FHeightMapSourceElement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionRT_MetaData[];
#endif
		static void NewProp_CollisionRT_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CollisionRT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightmapToLocalRT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeightmapToLocalRT;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeightMapSourceElement_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/ShaderWorldBrushManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHeightMapSourceElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHeightMapSourceElement>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeightMapSourceElement_Statics::NewProp_CollisionRT_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/ShaderWorldBrushManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHeightMapSourceElement_Statics::NewProp_CollisionRT_SetBit(void* Obj)
	{
		((FHeightMapSourceElement*)Obj)->CollisionRT = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHeightMapSourceElement_Statics::NewProp_CollisionRT = { "CollisionRT", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHeightMapSourceElement), &Z_Construct_UScriptStruct_FHeightMapSourceElement_Statics::NewProp_CollisionRT_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHeightMapSourceElement_Statics::NewProp_CollisionRT_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeightMapSourceElement_Statics::NewProp_CollisionRT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeightMapSourceElement_Statics::NewProp_HeightmapToLocalRT_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/ShaderWorldBrushManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHeightMapSourceElement_Statics::NewProp_HeightmapToLocalRT = { "HeightmapToLocalRT", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHeightMapSourceElement, HeightmapToLocalRT), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHeightMapSourceElement_Statics::NewProp_HeightmapToLocalRT_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeightMapSourceElement_Statics::NewProp_HeightmapToLocalRT_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHeightMapSourceElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeightMapSourceElement_Statics::NewProp_CollisionRT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeightMapSourceElement_Statics::NewProp_HeightmapToLocalRT,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHeightMapSourceElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ShaderWorld,
		nullptr,
		&NewStructOps,
		"HeightMapSourceElement",
		sizeof(FHeightMapSourceElement),
		alignof(FHeightMapSourceElement),
		Z_Construct_UScriptStruct_FHeightMapSourceElement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeightMapSourceElement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHeightMapSourceElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeightMapSourceElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHeightMapSourceElement()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHeightMapSourceElement_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ShaderWorld();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HeightMapSourceElement"), sizeof(FHeightMapSourceElement), Get_Z_Construct_UScriptStruct_FHeightMapSourceElement_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHeightMapSourceElement_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHeightMapSourceElement_Hash() { return 2617138447U; }
class UScriptStruct* FBrushLayer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHADERWORLD_API uint32 Get_Z_Construct_UScriptStruct_FBrushLayer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBrushLayer, Z_Construct_UPackage__Script_ShaderWorld(), TEXT("BrushLayer"), sizeof(FBrushLayer), Get_Z_Construct_UScriptStruct_FBrushLayer_Hash());
	}
	return Singleton;
}
template<> SHADERWORLD_API UScriptStruct* StaticStruct<FBrushLayer>()
{
	return FBrushLayer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBrushLayer(FBrushLayer::StaticStruct, TEXT("/Script/ShaderWorld"), TEXT("BrushLayer"), false, nullptr, nullptr);
static struct FScriptStruct_ShaderWorld_StaticRegisterNativesFBrushLayer
{
	FScriptStruct_ShaderWorld_StaticRegisterNativesFBrushLayer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BrushLayer")),new UScriptStruct::TCppStructOps<FBrushLayer>);
	}
} ScriptStruct_ShaderWorld_StaticRegisterNativesFBrushLayer;
	struct Z_Construct_UScriptStruct_FBrushLayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[];
#endif
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Influence_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Influence;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Brushes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brushes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Brushes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushManagerOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BrushManagerOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushLayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Actor/ShaderWorldBrushManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBrushLayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBrushLayer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushLayer_Statics::NewProp_Enabled_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Actor/ShaderWorldBrushManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBrushLayer_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((FBrushLayer*)Obj)->Enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBrushLayer_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBrushLayer), &Z_Construct_UScriptStruct_FBrushLayer_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushLayer_Statics::NewProp_Enabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushLayer_Statics::NewProp_Enabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushLayer_Statics::NewProp_Influence_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Actor/ShaderWorldBrushManager.h" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrushLayer_Statics::NewProp_Influence = { "Influence", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBrushLayer, Influence), METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushLayer_Statics::NewProp_Influence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushLayer_Statics::NewProp_Influence_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBrushLayer_Statics::NewProp_Brushes_Inner = { "Brushes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBrushElement, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushLayer_Statics::NewProp_Brushes_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Actor/ShaderWorldBrushManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBrushLayer_Statics::NewProp_Brushes = { "Brushes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBrushLayer, Brushes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushLayer_Statics::NewProp_Brushes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushLayer_Statics::NewProp_Brushes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushLayer_Statics::NewProp_BrushManagerOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/ShaderWorldBrushManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBrushLayer_Statics::NewProp_BrushManagerOwner = { "BrushManagerOwner", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBrushLayer, BrushManagerOwner), Z_Construct_UClass_AShaderWorldBrushManager_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushLayer_Statics::NewProp_BrushManagerOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushLayer_Statics::NewProp_BrushManagerOwner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBrushLayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushLayer_Statics::NewProp_Enabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushLayer_Statics::NewProp_Influence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushLayer_Statics::NewProp_Brushes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushLayer_Statics::NewProp_Brushes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushLayer_Statics::NewProp_BrushManagerOwner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBrushLayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ShaderWorld,
		nullptr,
		&NewStructOps,
		"BrushLayer",
		sizeof(FBrushLayer),
		alignof(FBrushLayer),
		Z_Construct_UScriptStruct_FBrushLayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushLayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushLayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushLayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBrushLayer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBrushLayer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ShaderWorld();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BrushLayer"), sizeof(FBrushLayer), Get_Z_Construct_UScriptStruct_FBrushLayer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBrushLayer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBrushLayer_Hash() { return 1439305713U; }
class UScriptStruct* FBrushElement::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHADERWORLD_API uint32 Get_Z_Construct_UScriptStruct_FBrushElement_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBrushElement, Z_Construct_UPackage__Script_ShaderWorld(), TEXT("BrushElement"), sizeof(FBrushElement), Get_Z_Construct_UScriptStruct_FBrushElement_Hash());
	}
	return Singleton;
}
template<> SHADERWORLD_API UScriptStruct* StaticStruct<FBrushElement>()
{
	return FBrushElement::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBrushElement(FBrushElement::StaticStruct, TEXT("/Script/ShaderWorld"), TEXT("BrushElement"), false, nullptr, nullptr);
static struct FScriptStruct_ShaderWorld_StaticRegisterNativesFBrushElement
{
	FScriptStruct_ShaderWorld_StaticRegisterNativesFBrushElement()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BrushElement")),new UScriptStruct::TCppStructOps<FBrushElement>);
	}
} ScriptStruct_ShaderWorld_StaticRegisterNativesFBrushElement;
	struct Z_Construct_UScriptStruct_FBrushElement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[];
#endif
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Influence_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Influence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Brush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushManagerOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BrushManagerOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushElement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Actor/ShaderWorldBrushManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBrushElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBrushElement>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushElement_Statics::NewProp_Enabled_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Actor/ShaderWorldBrushManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBrushElement_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((FBrushElement*)Obj)->Enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBrushElement_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBrushElement), &Z_Construct_UScriptStruct_FBrushElement_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushElement_Statics::NewProp_Enabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushElement_Statics::NewProp_Enabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushElement_Statics::NewProp_Influence_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Actor/ShaderWorldBrushManager.h" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrushElement_Statics::NewProp_Influence = { "Influence", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBrushElement, Influence), METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushElement_Statics::NewProp_Influence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushElement_Statics::NewProp_Influence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushElement_Statics::NewProp_Brush_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Actor/ShaderWorldBrushManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBrushElement_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBrushElement, Brush), Z_Construct_UClass_AShaderWorldBrush_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushElement_Statics::NewProp_Brush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushElement_Statics::NewProp_Brush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushElement_Statics::NewProp_BrushManagerOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/ShaderWorldBrushManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBrushElement_Statics::NewProp_BrushManagerOwner = { "BrushManagerOwner", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBrushElement, BrushManagerOwner), Z_Construct_UClass_AShaderWorldBrushManager_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushElement_Statics::NewProp_BrushManagerOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushElement_Statics::NewProp_BrushManagerOwner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBrushElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushElement_Statics::NewProp_Enabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushElement_Statics::NewProp_Influence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushElement_Statics::NewProp_Brush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushElement_Statics::NewProp_BrushManagerOwner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBrushElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ShaderWorld,
		nullptr,
		&NewStructOps,
		"BrushElement",
		sizeof(FBrushElement),
		alignof(FBrushElement),
		Z_Construct_UScriptStruct_FBrushElement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushElement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBrushElement()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBrushElement_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ShaderWorld();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BrushElement"), sizeof(FBrushElement), Get_Z_Construct_UScriptStruct_FBrushElement_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBrushElement_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBrushElement_Hash() { return 3909690327U; }
	void AShaderWorldBrushManager::StaticRegisterNativesAShaderWorldBrushManager()
	{
	}
	UClass* Z_Construct_UClass_AShaderWorldBrushManager_NoRegister()
	{
		return AShaderWorldBrushManager::StaticClass();
	}
	struct Z_Construct_UClass_AShaderWorldBrushManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BrushLayers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushLayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BrushLayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorkRT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorkRT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionWorkRT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionWorkRT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RedrawCheckPerSecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RedrawCheckPerSecond;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludeBlueprintUpdateEvery_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IncludeBlueprintUpdateEvery;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeAcu_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeAcu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightmapCopyPostWork_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeightmapCopyPostWork;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShaderWorldOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShaderWorldOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightmapToLocalRT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeightmapToLocalRT;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShaderWorldBrushManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ShaderWorld,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShaderWorldBrushManager_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Input Actor Game LOD Replication Cooking" },
		{ "IncludePath", "Actor/ShaderWorldBrushManager.h" },
		{ "ModuleRelativePath", "Public/Actor/ShaderWorldBrushManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_BrushLayers_Inner = { "BrushLayers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBrushLayer, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_BrushLayers_MetaData[] = {
		{ "Category", "LayerStack" },
		{ "ModuleRelativePath", "Public/Actor/ShaderWorldBrushManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_BrushLayers = { "BrushLayers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShaderWorldBrushManager, BrushLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_BrushLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_BrushLayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_WorkRT_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/ShaderWorldBrushManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_WorkRT = { "WorkRT", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShaderWorldBrushManager, WorkRT), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_WorkRT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_WorkRT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_CollisionWorkRT_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/ShaderWorldBrushManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_CollisionWorkRT = { "CollisionWorkRT", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShaderWorldBrushManager, CollisionWorkRT), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_CollisionWorkRT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_CollisionWorkRT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_RedrawCheckPerSecond_MetaData[] = {
		{ "Category", "Required" },
		{ "ClampMax", "60.000000" },
		{ "ClampMin", "1.000000" },
		{ "ModuleRelativePath", "Public/Actor/ShaderWorldBrushManager.h" },
		{ "UIMax", "60.000000" },
		{ "UIMin", "1.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_RedrawCheckPerSecond = { "RedrawCheckPerSecond", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShaderWorldBrushManager, RedrawCheckPerSecond), METADATA_PARAMS(Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_RedrawCheckPerSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_RedrawCheckPerSecond_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_IncludeBlueprintUpdateEvery_MetaData[] = {
		{ "Category", "Required" },
		{ "ClampMax", "12" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Actor/ShaderWorldBrushManager.h" },
		{ "UIMax", "12" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_IncludeBlueprintUpdateEvery = { "IncludeBlueprintUpdateEvery", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShaderWorldBrushManager, IncludeBlueprintUpdateEvery), nullptr, METADATA_PARAMS(Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_IncludeBlueprintUpdateEvery_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_IncludeBlueprintUpdateEvery_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_TimeAcu_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/ShaderWorldBrushManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_TimeAcu = { "TimeAcu", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShaderWorldBrushManager, TimeAcu), METADATA_PARAMS(Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_TimeAcu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_TimeAcu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_HeightmapCopyPostWork_MetaData[] = {
		{ "Category", "Required" },
		{ "ModuleRelativePath", "Public/Actor/ShaderWorldBrushManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_HeightmapCopyPostWork = { "HeightmapCopyPostWork", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShaderWorldBrushManager, HeightmapCopyPostWork), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_HeightmapCopyPostWork_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_HeightmapCopyPostWork_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_ShaderWorldOwner_MetaData[] = {
		{ "Category", "Required" },
		{ "ModuleRelativePath", "Public/Actor/ShaderWorldBrushManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_ShaderWorldOwner = { "ShaderWorldOwner", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShaderWorldBrushManager, ShaderWorldOwner), Z_Construct_UClass_AGeometryClipMapWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_ShaderWorldOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_ShaderWorldOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_HeightmapToLocalRT_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/ShaderWorldBrushManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_HeightmapToLocalRT = { "HeightmapToLocalRT", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShaderWorldBrushManager, HeightmapToLocalRT), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_HeightmapToLocalRT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_HeightmapToLocalRT_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShaderWorldBrushManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_BrushLayers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_BrushLayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_WorkRT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_CollisionWorkRT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_RedrawCheckPerSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_IncludeBlueprintUpdateEvery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_TimeAcu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_HeightmapCopyPostWork,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_ShaderWorldOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShaderWorldBrushManager_Statics::NewProp_HeightmapToLocalRT,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShaderWorldBrushManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShaderWorldBrushManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShaderWorldBrushManager_Statics::ClassParams = {
		&AShaderWorldBrushManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShaderWorldBrushManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShaderWorldBrushManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShaderWorldBrushManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShaderWorldBrushManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShaderWorldBrushManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShaderWorldBrushManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShaderWorldBrushManager, 2818839104);
	template<> SHADERWORLD_API UClass* StaticClass<AShaderWorldBrushManager>()
	{
		return AShaderWorldBrushManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShaderWorldBrushManager(Z_Construct_UClass_AShaderWorldBrushManager, &AShaderWorldBrushManager::StaticClass, TEXT("/Script/ShaderWorld"), TEXT("AShaderWorldBrushManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShaderWorldBrushManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
