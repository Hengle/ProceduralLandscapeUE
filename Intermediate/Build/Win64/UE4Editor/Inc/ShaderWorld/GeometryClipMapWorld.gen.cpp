// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShaderWorld/Public/Actor/GeometryClipMapWorld.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryClipMapWorld() {}
// Cross Module References
	SHADERWORLD_API UEnum* Z_Construct_UEnum_ShaderWorld_ESpawnableType();
	UPackage* Z_Construct_UPackage__Script_ShaderWorld();
	SHADERWORLD_API UEnum* Z_Construct_UEnum_ShaderWorld_ENValue();
	SHADERWORLD_API UEnum* Z_Construct_UEnum_ShaderWorld_EClipMapInteriorConfig();
	SHADERWORLD_API UEnum* Z_Construct_UEnum_ShaderWorld_EWorldPresentation();
	SHADERWORLD_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnableMesh();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
	SHADERWORLD_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnedActorList();
	SHADERWORLD_API UClass* Z_Construct_UClass_AGeometryClipMapWorld_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SHADERWORLD_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnableMeshElement();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	SHADERWORLD_API UScriptStruct* Z_Construct_UScriptStruct_FInstanceIndexes();
	SHADERWORLD_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionMeshElement();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	SHADERWORLD_API UScriptStruct* Z_Construct_UScriptStruct_FClipMapLayer();
	SHADERWORLD_API UScriptStruct* Z_Construct_UScriptStruct_FClipMapMeshElement();
	SHADERWORLD_API UClass* Z_Construct_UClass_UGeoClipmapMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	SHADERWORLD_API UClass* Z_Construct_UClass_AGeometryClipMapWorld();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SHADERWORLD_API UClass* Z_Construct_UClass_AShaderWorldBrushManager_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D();
// End Cross Module References
	static UEnum* ESpawnableType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ShaderWorld_ESpawnableType, Z_Construct_UPackage__Script_ShaderWorld(), TEXT("ESpawnableType"));
		}
		return Singleton;
	}
	template<> SHADERWORLD_API UEnum* StaticEnum<ESpawnableType>()
	{
		return ESpawnableType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESpawnableType(ESpawnableType_StaticEnum, TEXT("/Script/ShaderWorld"), TEXT("ESpawnableType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ShaderWorld_ESpawnableType_Hash() { return 4285279859U; }
	UEnum* Z_Construct_UEnum_ShaderWorld_ESpawnableType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ShaderWorld();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESpawnableType"), 0, Get_Z_Construct_UEnum_ShaderWorld_ESpawnableType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESpawnableType::Mesh", (int64)ESpawnableType::Mesh },
				{ "ESpawnableType::Actor", (int64)ESpawnableType::Actor },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Actor.DisplayName", "Spawn Actors" },
				{ "Actor.Name", "ESpawnableType::Actor" },
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n* Selection of Spawnable type. Either we using hierarchical instanced mesh on a given set of Static Meshes, \n* or we simply spawn actors of the given class\n*/" },
				{ "Mesh.DisplayName", "Spawn instanced Meshes" },
				{ "Mesh.Name", "ESpawnableType::Mesh" },
				{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
				{ "ToolTip", "Selection of Spawnable type. Either we using hierarchical instanced mesh on a given set of Static Meshes,\nor we simply spawn actors of the given class" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ShaderWorld,
				nullptr,
				"ESpawnableType",
				"ESpawnableType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ENValue_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ShaderWorld_ENValue, Z_Construct_UPackage__Script_ShaderWorld(), TEXT("ENValue"));
		}
		return Singleton;
	}
	template<> SHADERWORLD_API UEnum* StaticEnum<ENValue>()
	{
		return ENValue_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENValue(ENValue_StaticEnum, TEXT("/Script/ShaderWorld"), TEXT("ENValue"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ShaderWorld_ENValue_Hash() { return 1537827788U; }
	UEnum* Z_Construct_UEnum_ShaderWorld_ENValue()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ShaderWorld();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENValue"), 0, Get_Z_Construct_UEnum_ShaderWorld_ENValue_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENValue::N511", (int64)ENValue::N511 },
				{ "ENValue::N255", (int64)ENValue::N255 },
				{ "ENValue::N127", (int64)ENValue::N127 },
				{ "ENValue::N63", (int64)ENValue::N63 },
				{ "ENValue::N31", (int64)ENValue::N31 },
				{ "ENValue::N15", (int64)ENValue::N15 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n* Number of vertices per side for a given Clipmap ring\n*\n*/" },
				{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
				{ "N127.DisplayName", "127" },
				{ "N127.Name", "ENValue::N127" },
				{ "N15.DisplayName", "15" },
				{ "N15.Name", "ENValue::N15" },
				{ "N255.DisplayName", "255" },
				{ "N255.Name", "ENValue::N255" },
				{ "N31.DisplayName", "31" },
				{ "N31.Name", "ENValue::N31" },
				{ "N511.DisplayName", "511" },
				{ "N511.Name", "ENValue::N511" },
				{ "N63.DisplayName", "63" },
				{ "N63.Name", "ENValue::N63" },
				{ "ToolTip", "Number of vertices per side for a given Clipmap ring" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ShaderWorld,
				nullptr,
				"ENValue",
				"ENValue",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EClipMapInteriorConfig_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ShaderWorld_EClipMapInteriorConfig, Z_Construct_UPackage__Script_ShaderWorld(), TEXT("EClipMapInteriorConfig"));
		}
		return Singleton;
	}
	template<> SHADERWORLD_API UEnum* StaticEnum<EClipMapInteriorConfig>()
	{
		return EClipMapInteriorConfig_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EClipMapInteriorConfig(EClipMapInteriorConfig_StaticEnum, TEXT("/Script/ShaderWorld"), TEXT("EClipMapInteriorConfig"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ShaderWorld_EClipMapInteriorConfig_Hash() { return 1012507004U; }
	UEnum* Z_Construct_UEnum_ShaderWorld_EClipMapInteriorConfig()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ShaderWorld();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EClipMapInteriorConfig"), 0, Get_Z_Construct_UEnum_ShaderWorld_EClipMapInteriorConfig_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EClipMapInteriorConfig::BotLeft", (int64)EClipMapInteriorConfig::BotLeft },
				{ "EClipMapInteriorConfig::TopLeft", (int64)EClipMapInteriorConfig::TopLeft },
				{ "EClipMapInteriorConfig::BotRight", (int64)EClipMapInteriorConfig::BotRight },
				{ "EClipMapInteriorConfig::TopRight", (int64)EClipMapInteriorConfig::TopRight },
				{ "EClipMapInteriorConfig::NotVisible", (int64)EClipMapInteriorConfig::NotVisible },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BotLeft.DisplayName", "BotLeft" },
				{ "BotLeft.Name", "EClipMapInteriorConfig::BotLeft" },
				{ "BotRight.DisplayName", "BotRight" },
				{ "BotRight.Name", "EClipMapInteriorConfig::BotRight" },
				{ "Comment", "/**\n* Configuration of a parent Clipmap Ring, given his child relative position*\n*/" },
				{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
				{ "NotVisible.DisplayName", "NotVisible" },
				{ "NotVisible.Name", "EClipMapInteriorConfig::NotVisible" },
				{ "ToolTip", "Configuration of a parent Clipmap Ring, given his child relative position*" },
				{ "TopLeft.DisplayName", "TopLeft" },
				{ "TopLeft.Name", "EClipMapInteriorConfig::TopLeft" },
				{ "TopRight.DisplayName", "TopRight" },
				{ "TopRight.Name", "EClipMapInteriorConfig::TopRight" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ShaderWorld,
				nullptr,
				"EClipMapInteriorConfig",
				"EClipMapInteriorConfig",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EWorldPresentation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ShaderWorld_EWorldPresentation, Z_Construct_UPackage__Script_ShaderWorld(), TEXT("EWorldPresentation"));
		}
		return Singleton;
	}
	template<> SHADERWORLD_API UEnum* StaticEnum<EWorldPresentation>()
	{
		return EWorldPresentation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWorldPresentation(EWorldPresentation_StaticEnum, TEXT("/Script/ShaderWorld"), TEXT("EWorldPresentation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ShaderWorld_EWorldPresentation_Hash() { return 1305369937U; }
	UEnum* Z_Construct_UEnum_ShaderWorld_EWorldPresentation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ShaderWorld();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWorldPresentation"), 0, Get_Z_Construct_UEnum_ShaderWorld_EWorldPresentation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWorldPresentation::Smooth", (int64)EWorldPresentation::Smooth },
				{ "EWorldPresentation::InstancedMesh", (int64)EWorldPresentation::InstancedMesh },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "InstancedMesh.DisplayName", "InstancedMesh Shaped" },
				{ "InstancedMesh.Name", "EWorldPresentation::InstancedMesh" },
				{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
				{ "Smooth.DisplayName", "Triangle Based Terrain" },
				{ "Smooth.Name", "EWorldPresentation::Smooth" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ShaderWorld,
				nullptr,
				"EWorldPresentation",
				"EWorldPresentation",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSpawnableMesh::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHADERWORLD_API uint32 Get_Z_Construct_UScriptStruct_FSpawnableMesh_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnableMesh, Z_Construct_UPackage__Script_ShaderWorld(), TEXT("SpawnableMesh"), sizeof(FSpawnableMesh), Get_Z_Construct_UScriptStruct_FSpawnableMesh_Hash());
	}
	return Singleton;
}
template<> SHADERWORLD_API UScriptStruct* StaticStruct<FSpawnableMesh>()
{
	return FSpawnableMesh::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpawnableMesh(FSpawnableMesh::StaticStruct, TEXT("/Script/ShaderWorld"), TEXT("SpawnableMesh"), false, nullptr, nullptr);
static struct FScriptStruct_ShaderWorld_StaticRegisterNativesFSpawnableMesh
{
	FScriptStruct_ShaderWorld_StaticRegisterNativesFSpawnableMesh()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpawnableMesh")),new UScriptStruct::TCppStructOps<FSpawnableMesh>);
	}
} ScriptStruct_ShaderWorld_StaticRegisterNativesFSpawnableMesh;
	struct Z_Construct_UScriptStruct_FSpawnableMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpawnType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpawnType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionEnabled_MetaData[];
#endif
		static void NewProp_CollisionEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CollisionEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastShadows_MetaData[];
#endif
		static void NewProp_CastShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CastShadows;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlignMaxAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlignMaxAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AltitudeRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AltitudeRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScaleRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroundSlopeAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GroundSlopeAngle;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HIM_Mesh_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HIM_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HIM_Mesh;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Spawned_Actors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawned_Actors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Spawned_Actors;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Actors_Validated_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actors_Validated_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actors_Validated;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InstanceIndexToHIMIndex_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceIndexToHIMIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstanceIndexToHIMIndex;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumInstancePerHIM_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumInstancePerHIM_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NumInstancePerHIM;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InstanceIndexToIndexForHIM_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceIndexToIndexForHIM_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstanceIndexToIndexForHIM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfInstanceToComputePerRegion_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumberOfInstanceToComputePerRegion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegionWorldDimension_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RegionWorldDimension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberRegionPerQuadrantSide_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumberRegionPerQuadrantSide;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RT_Dim_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_RT_Dim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtentOfMeshElement_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtentOfMeshElement;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnablesElem_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnablesElem_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnablesElem;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AvailableSpawnablesElem_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvailableSpawnablesElem_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AvailableSpawnablesElem;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_UsedSpawnablesElem_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsedSpawnablesElem_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UsedSpawnablesElem;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SpawnablesElemReadToProcess_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnablesElemReadToProcess_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnablesElemReadToProcess;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SpawnablesLayout_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnablesLayout_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnablesLayout_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SpawnablesLayout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndexOfClipMapForCompute_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_IndexOfClipMapForCompute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomSpawnablesMat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomSpawnablesMat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMesh_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* The spawnable system is tied to the cache system, if cache is disabled, no asset will be spawned\n*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "The spawnable system is tied to the cache system, if cache is disabled, no asset will be spawned" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnableMesh>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnType_MetaData[] = {
		{ "Category", "MeshToSpawn" },
		{ "Comment", "/**\n\x09* Spawn instanced meshes or actors\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "Spawn instanced meshes or actors" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnType = { "SpawnType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableMesh, SpawnType), Z_Construct_UEnum_ShaderWorld_ESpawnableType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_CollisionEnabled_MetaData[] = {
		{ "Category", "MeshToSpawn" },
		{ "EditCondition", "SpawnType==ESpawnableType::Mesh" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_CollisionEnabled_SetBit(void* Obj)
	{
		((FSpawnableMesh*)Obj)->CollisionEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_CollisionEnabled = { "CollisionEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSpawnableMesh), &Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_CollisionEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_CollisionEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_CollisionEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_CastShadows_MetaData[] = {
		{ "Category", "MeshToSpawn" },
		{ "EditCondition", "SpawnType==ESpawnableType::Mesh" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_CastShadows_SetBit(void* Obj)
	{
		((FSpawnableMesh*)Obj)->CastShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_CastShadows = { "CastShadows", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSpawnableMesh), &Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_CastShadows_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_CastShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_CastShadows_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_Mesh_Inner = { "Mesh", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "MeshToSpawn" },
		{ "EditCondition", "SpawnType==ESpawnableType::Mesh" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableMesh, Mesh), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_Actors_MetaData[] = {
		{ "Category", "MeshToSpawn" },
		{ "Comment", "/**\n\x09* Class of actors to spawn\n\x09*/" },
		{ "EditCondition", "SpawnType==ESpawnableType::Actor" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "Class of actors to spawn" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableMesh, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_Actors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_AlignMaxAngle_MetaData[] = {
		{ "Category", "MeshToSpawn" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_AlignMaxAngle = { "AlignMaxAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableMesh, AlignMaxAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_AlignMaxAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_AlignMaxAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_AltitudeRange_MetaData[] = {
		{ "Category", "MeshToSpawn" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_AltitudeRange = { "AltitudeRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableMesh, AltitudeRange), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_AltitudeRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_AltitudeRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_ScaleRange_MetaData[] = {
		{ "Category", "MeshToSpawn" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_ScaleRange = { "ScaleRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableMesh, ScaleRange), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_ScaleRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_ScaleRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_GroundSlopeAngle_MetaData[] = {
		{ "Category", "MeshToSpawn" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_GroundSlopeAngle = { "GroundSlopeAngle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableMesh, GroundSlopeAngle), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_GroundSlopeAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_GroundSlopeAngle_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_HIM_Mesh_Inner = { "HIM_Mesh", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_HIM_Mesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_HIM_Mesh = { "HIM_Mesh", nullptr, (EPropertyFlags)0x0010008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableMesh, HIM_Mesh), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_HIM_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_HIM_Mesh_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_Spawned_Actors_Inner = { "Spawned_Actors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSpawnedActorList, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_Spawned_Actors_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_Spawned_Actors = { "Spawned_Actors", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableMesh, Spawned_Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_Spawned_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_Spawned_Actors_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_Actors_Validated_Inner = { "Actors_Validated", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_Actors_Validated_MetaData[] = {
		{ "Comment", "/**\n\x09* Filtered list of valid asset classes to spawn\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "Filtered list of valid asset classes to spawn" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_Actors_Validated = { "Actors_Validated", nullptr, (EPropertyFlags)0x0014000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableMesh, Actors_Validated), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_Actors_Validated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_Actors_Validated_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_InstanceIndexToHIMIndex_Inner = { "InstanceIndexToHIMIndex", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_InstanceIndexToHIMIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_InstanceIndexToHIMIndex = { "InstanceIndexToHIMIndex", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableMesh, InstanceIndexToHIMIndex), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_InstanceIndexToHIMIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_InstanceIndexToHIMIndex_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_NumInstancePerHIM_Inner = { "NumInstancePerHIM", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_NumInstancePerHIM_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_NumInstancePerHIM = { "NumInstancePerHIM", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableMesh, NumInstancePerHIM), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_NumInstancePerHIM_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_NumInstancePerHIM_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_InstanceIndexToIndexForHIM_Inner = { "InstanceIndexToIndexForHIM", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_InstanceIndexToIndexForHIM_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_InstanceIndexToIndexForHIM = { "InstanceIndexToIndexForHIM", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableMesh, InstanceIndexToIndexForHIM), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_InstanceIndexToIndexForHIM_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_InstanceIndexToIndexForHIM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableMesh, Owner), Z_Construct_UClass_AGeometryClipMapWorld_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_Owner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_NumberOfInstanceToComputePerRegion_MetaData[] = {
		{ "Category", "MeshToSpawn" },
		{ "Comment", "/**\n\x09* How many instances are we computing per computed grid ?\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "How many instances are we computing per computed grid ?" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_NumberOfInstanceToComputePerRegion = { "NumberOfInstanceToComputePerRegion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableMesh, NumberOfInstanceToComputePerRegion), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_NumberOfInstanceToComputePerRegion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_NumberOfInstanceToComputePerRegion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_RegionWorldDimension_MetaData[] = {
		{ "Category", "MeshToSpawn" },
		{ "Comment", "/**\n\x09* What are the world dimension of a grid side size? In Unreal Engine unity/cm.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "What are the world dimension of a grid side size? In Unreal Engine unity/cm." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_RegionWorldDimension = { "RegionWorldDimension", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableMesh, RegionWorldDimension), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_RegionWorldDimension_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_RegionWorldDimension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_NumberRegionPerQuadrantSide_MetaData[] = {
		{ "Category", "MeshToSpawn" },
		{ "ClampMax", "10" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "UIMax", "10" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_NumberRegionPerQuadrantSide = { "NumberRegionPerQuadrantSide", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableMesh, NumberRegionPerQuadrantSide), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_NumberRegionPerQuadrantSide_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_NumberRegionPerQuadrantSide_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_RT_Dim_MetaData[] = {
		{ "Category", "MeshToSpawn" },
		{ "Comment", "/**\n\x09* Given specified information this is the dimension of the rendertarget that will be used to store the computed assets.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "Given specified information this is the dimension of the rendertarget that will be used to store the computed assets." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_RT_Dim = { "RT_Dim", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableMesh, RT_Dim), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_RT_Dim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_RT_Dim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_ExtentOfMeshElement_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_ExtentOfMeshElement = { "ExtentOfMeshElement", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableMesh, ExtentOfMeshElement), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_ExtentOfMeshElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_ExtentOfMeshElement_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnablesElem_Inner = { "SpawnablesElem", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSpawnableMeshElement, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnablesElem_MetaData[] = {
		{ "Comment", "/**\n\x09* Pool of Computed grid\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "Pool of Computed grid" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnablesElem = { "SpawnablesElem", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableMesh, SpawnablesElem), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnablesElem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnablesElem_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_AvailableSpawnablesElem_Inner = { "AvailableSpawnablesElem", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_AvailableSpawnablesElem_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_AvailableSpawnablesElem = { "AvailableSpawnablesElem", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableMesh, AvailableSpawnablesElem), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_AvailableSpawnablesElem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_AvailableSpawnablesElem_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_UsedSpawnablesElem_Inner = { "UsedSpawnablesElem", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_UsedSpawnablesElem_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_UsedSpawnablesElem = { "UsedSpawnablesElem", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableMesh, UsedSpawnablesElem), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_UsedSpawnablesElem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_UsedSpawnablesElem_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnablesElemReadToProcess_Inner = { "SpawnablesElemReadToProcess", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnablesElemReadToProcess_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnablesElemReadToProcess = { "SpawnablesElemReadToProcess", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableMesh, SpawnablesElemReadToProcess), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnablesElemReadToProcess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnablesElemReadToProcess_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnablesLayout_ValueProp = { "SpawnablesLayout", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnablesLayout_Key_KeyProp = { "SpawnablesLayout_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnablesLayout_MetaData[] = {
		{ "Comment", "/**\n\x09* A map holding the compute grid elements location and IDs\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "A map holding the compute grid elements location and IDs" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnablesLayout = { "SpawnablesLayout", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableMesh, SpawnablesLayout), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnablesLayout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnablesLayout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_IndexOfClipMapForCompute_MetaData[] = {
		{ "Comment", "/**\n\x09* This spawnable element is tied to a specific clipmap ring defined by the surface around the player we're computing asset for.\n\x09* Asset computed near the player will be tied to lower LODs/(higher level) clipmap ring.\n\x09* If those rings are not visible, the assets won't be neither/ not computed.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "This spawnable element is tied to a specific clipmap ring defined by the surface around the player we're computing asset for.\nAsset computed near the player will be tied to lower LODs/(higher level) clipmap ring.\nIf those rings are not visible, the assets won't be neither/ not computed." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_IndexOfClipMapForCompute = { "IndexOfClipMapForCompute", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableMesh, IndexOfClipMapForCompute), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_IndexOfClipMapForCompute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_IndexOfClipMapForCompute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_CustomSpawnablesMat_MetaData[] = {
		{ "Category", "Spawnables" },
		{ "Comment", "/**\n\x09* Used only if this spawnable wants to use custom density logic to be spawned, it can use the landscape heightmap, normalmap and all its layers\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "Used only if this spawnable wants to use custom density logic to be spawned, it can use the landscape heightmap, normalmap and all its layers" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_CustomSpawnablesMat = { "CustomSpawnablesMat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableMesh, CustomSpawnablesMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_CustomSpawnablesMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_CustomSpawnablesMat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpawnableMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_CollisionEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_CastShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_Mesh_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_Actors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_Actors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_AlignMaxAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_AltitudeRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_ScaleRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_GroundSlopeAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_HIM_Mesh_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_HIM_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_Spawned_Actors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_Spawned_Actors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_Actors_Validated_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_Actors_Validated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_InstanceIndexToHIMIndex_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_InstanceIndexToHIMIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_NumInstancePerHIM_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_NumInstancePerHIM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_InstanceIndexToIndexForHIM_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_InstanceIndexToIndexForHIM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_Owner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_NumberOfInstanceToComputePerRegion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_RegionWorldDimension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_NumberRegionPerQuadrantSide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_RT_Dim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_ExtentOfMeshElement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnablesElem_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnablesElem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_AvailableSpawnablesElem_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_AvailableSpawnablesElem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_UsedSpawnablesElem_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_UsedSpawnablesElem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnablesElemReadToProcess_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnablesElemReadToProcess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnablesLayout_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnablesLayout_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_SpawnablesLayout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_IndexOfClipMapForCompute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMesh_Statics::NewProp_CustomSpawnablesMat,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnableMesh_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ShaderWorld,
		nullptr,
		&NewStructOps,
		"SpawnableMesh",
		sizeof(FSpawnableMesh),
		alignof(FSpawnableMesh),
		Z_Construct_UScriptStruct_FSpawnableMesh_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMesh_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpawnableMesh()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpawnableMesh_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ShaderWorld();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpawnableMesh"), sizeof(FSpawnableMesh), Get_Z_Construct_UScriptStruct_FSpawnableMesh_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpawnableMesh_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpawnableMesh_Hash() { return 3339432115U; }
class UScriptStruct* FSpawnedActorList::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHADERWORLD_API uint32 Get_Z_Construct_UScriptStruct_FSpawnedActorList_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnedActorList, Z_Construct_UPackage__Script_ShaderWorld(), TEXT("SpawnedActorList"), sizeof(FSpawnedActorList), Get_Z_Construct_UScriptStruct_FSpawnedActorList_Hash());
	}
	return Singleton;
}
template<> SHADERWORLD_API UScriptStruct* StaticStruct<FSpawnedActorList>()
{
	return FSpawnedActorList::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpawnedActorList(FSpawnedActorList::StaticStruct, TEXT("/Script/ShaderWorld"), TEXT("SpawnedActorList"), false, nullptr, nullptr);
static struct FScriptStruct_ShaderWorld_StaticRegisterNativesFSpawnedActorList
{
	FScriptStruct_ShaderWorld_StaticRegisterNativesFSpawnedActorList()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpawnedActorList")),new UScriptStruct::TCppStructOps<FSpawnedActorList>);
	}
} ScriptStruct_ShaderWorld_StaticRegisterNativesFSpawnedActorList;
	struct Z_Construct_UScriptStruct_FSpawnedActorList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnedActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnedActorList_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Hold the ptr to each spawned actors, elements can be nullptr if a spawning wasn't necessary\n*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "Hold the ptr to each spawned actors, elements can be nullptr if a spawning wasn't necessary" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpawnedActorList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnedActorList>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpawnedActorList_Statics::NewProp_SpawnedActors_Inner = { "SpawnedActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnedActorList_Statics::NewProp_SpawnedActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnedActorList_Statics::NewProp_SpawnedActors = { "SpawnedActors", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnedActorList, SpawnedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnedActorList_Statics::NewProp_SpawnedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnedActorList_Statics::NewProp_SpawnedActors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpawnedActorList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnedActorList_Statics::NewProp_SpawnedActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnedActorList_Statics::NewProp_SpawnedActors,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnedActorList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ShaderWorld,
		nullptr,
		&NewStructOps,
		"SpawnedActorList",
		sizeof(FSpawnedActorList),
		alignof(FSpawnedActorList),
		Z_Construct_UScriptStruct_FSpawnedActorList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnedActorList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnedActorList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnedActorList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpawnedActorList()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpawnedActorList_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ShaderWorld();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpawnedActorList"), sizeof(FSpawnedActorList), Get_Z_Construct_UScriptStruct_FSpawnedActorList_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpawnedActorList_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpawnedActorList_Hash() { return 1404873340U; }
class UScriptStruct* FSpawnableMeshElement::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHADERWORLD_API uint32 Get_Z_Construct_UScriptStruct_FSpawnableMeshElement_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnableMeshElement, Z_Construct_UPackage__Script_ShaderWorld(), TEXT("SpawnableMeshElement"), sizeof(FSpawnableMeshElement), Get_Z_Construct_UScriptStruct_FSpawnableMeshElement_Hash());
	}
	return Singleton;
}
template<> SHADERWORLD_API UScriptStruct* StaticStruct<FSpawnableMeshElement>()
{
	return FSpawnableMeshElement::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpawnableMeshElement(FSpawnableMeshElement::StaticStruct, TEXT("/Script/ShaderWorld"), TEXT("SpawnableMeshElement"), false, nullptr, nullptr);
static struct FScriptStruct_ShaderWorld_StaticRegisterNativesFSpawnableMeshElement
{
	FScriptStruct_ShaderWorld_StaticRegisterNativesFSpawnableMeshElement()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpawnableMeshElement")),new UScriptStruct::TCppStructOps<FSpawnableMeshElement>);
	}
} ScriptStruct_ShaderWorld_StaticRegisterNativesFSpawnableMeshElement;
	struct Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComputeLaunched_MetaData[];
#endif
		static void NewProp_ComputeLaunched_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ComputeLaunched;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocationX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationY_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocationY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocationZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComputeSpawnTransformDyn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComputeSpawnTransformDyn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationXData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationXData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocationXData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationYData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationYData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocationYData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationZData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationZData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocationZData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RotationData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstancesTransform_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstancesTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstancesTransform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstancesIndexes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstancesIndexes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstancesIndexes;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InstanceOffset_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstanceOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* This is a computation grid element for Spawnables, managed by FSpawnableMesh\n*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "This is a computation grid element for Spawnables, managed by FSpawnableMesh" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnableMeshElement>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_ComputeLaunched_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_ComputeLaunched_SetBit(void* Obj)
	{
		((FSpawnableMeshElement*)Obj)->ComputeLaunched = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_ComputeLaunched = { "ComputeLaunched", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSpawnableMeshElement), &Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_ComputeLaunched_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_ComputeLaunched_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_ComputeLaunched_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationX_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationX = { "LocationX", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableMeshElement, LocationX), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationY_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationY = { "LocationY", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableMeshElement, LocationY), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationZ_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationZ = { "LocationZ", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableMeshElement, LocationZ), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableMeshElement, Rotation), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_ComputeSpawnTransformDyn_MetaData[] = {
		{ "Comment", "/**\n\x09* Dynamic material used to computed the assets transforms\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "Dynamic material used to computed the assets transforms" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_ComputeSpawnTransformDyn = { "ComputeSpawnTransformDyn", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableMeshElement, ComputeSpawnTransformDyn), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_ComputeSpawnTransformDyn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_ComputeSpawnTransformDyn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_Location_MetaData[] = {
		{ "Comment", "/**\n\x09* We're computing assets transforms within a grid around the view point, that could be interpreted has the \n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "We're computing assets transforms within a grid around the view point, that could be interpreted has the" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableMeshElement, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_ID_MetaData[] = {
		{ "Comment", "/**\n\x09* IDs are indexes within the mesh element pool\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "IDs are indexes within the mesh element pool" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableMeshElement, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationXData_Inner = { "LocationXData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationXData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationXData = { "LocationXData", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableMeshElement, LocationXData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationXData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationXData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationYData_Inner = { "LocationYData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationYData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationYData = { "LocationYData", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableMeshElement, LocationYData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationYData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationYData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationZData_Inner = { "LocationZData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationZData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationZData = { "LocationZData", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableMeshElement, LocationZData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationZData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationZData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_RotationData_Inner = { "RotationData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_RotationData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_RotationData = { "RotationData", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableMeshElement, RotationData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_RotationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_RotationData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_InstancesTransform_Inner = { "InstancesTransform", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_InstancesTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_InstancesTransform = { "InstancesTransform", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableMeshElement, InstancesTransform), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_InstancesTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_InstancesTransform_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_InstancesIndexes_Inner = { "InstancesIndexes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInstanceIndexes, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_InstancesIndexes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_InstancesIndexes = { "InstancesIndexes", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableMeshElement, InstancesIndexes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_InstancesIndexes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_InstancesIndexes_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_InstanceOffset_Inner = { "InstanceOffset", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_InstanceOffset_MetaData[] = {
		{ "Comment", "/**\n\x09* Index Offset for each Mesh/actor variety computed on this element within the owning FSpawnableMesh HIM_Mesh/Spawned_Actors\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "Index Offset for each Mesh/actor variety computed on this element within the owning FSpawnableMesh HIM_Mesh/Spawned_Actors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_InstanceOffset = { "InstanceOffset", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnableMeshElement, InstanceOffset), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_InstanceOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_InstanceOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_ComputeLaunched,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_ComputeSpawnTransformDyn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationXData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationXData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationYData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationYData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationZData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_LocationZData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_RotationData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_RotationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_InstancesTransform_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_InstancesTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_InstancesIndexes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_InstancesIndexes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_InstanceOffset_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::NewProp_InstanceOffset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ShaderWorld,
		nullptr,
		&NewStructOps,
		"SpawnableMeshElement",
		sizeof(FSpawnableMeshElement),
		alignof(FSpawnableMeshElement),
		Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpawnableMeshElement()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpawnableMeshElement_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ShaderWorld();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpawnableMeshElement"), sizeof(FSpawnableMeshElement), Get_Z_Construct_UScriptStruct_FSpawnableMeshElement_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpawnableMeshElement_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpawnableMeshElement_Hash() { return 3721021494U; }
class UScriptStruct* FInstanceIndexes::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHADERWORLD_API uint32 Get_Z_Construct_UScriptStruct_FInstanceIndexes_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstanceIndexes, Z_Construct_UPackage__Script_ShaderWorld(), TEXT("InstanceIndexes"), sizeof(FInstanceIndexes), Get_Z_Construct_UScriptStruct_FInstanceIndexes_Hash());
	}
	return Singleton;
}
template<> SHADERWORLD_API UScriptStruct* StaticStruct<FInstanceIndexes>()
{
	return FInstanceIndexes::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInstanceIndexes(FInstanceIndexes::StaticStruct, TEXT("/Script/ShaderWorld"), TEXT("InstanceIndexes"), false, nullptr, nullptr);
static struct FScriptStruct_ShaderWorld_StaticRegisterNativesFInstanceIndexes
{
	FScriptStruct_ShaderWorld_StaticRegisterNativesFInstanceIndexes()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InstanceIndexes")),new UScriptStruct::TCppStructOps<FInstanceIndexes>);
	}
} ScriptStruct_ShaderWorld_StaticRegisterNativesFInstanceIndexes;
	struct Z_Construct_UScriptStruct_FInstanceIndexes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InstancesIndexes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstancesIndexes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstancesIndexes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstanceIndexes_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Just a simple struct to nest indexes within a TArray, each Mesh/Actor variety has its own index\n*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "Just a simple struct to nest indexes within a TArray, each Mesh/Actor variety has its own index" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInstanceIndexes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstanceIndexes>();
	}
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FInstanceIndexes_Statics::NewProp_InstancesIndexes_Inner = { "InstancesIndexes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstanceIndexes_Statics::NewProp_InstancesIndexes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInstanceIndexes_Statics::NewProp_InstancesIndexes = { "InstancesIndexes", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInstanceIndexes, InstancesIndexes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInstanceIndexes_Statics::NewProp_InstancesIndexes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstanceIndexes_Statics::NewProp_InstancesIndexes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInstanceIndexes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstanceIndexes_Statics::NewProp_InstancesIndexes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstanceIndexes_Statics::NewProp_InstancesIndexes,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInstanceIndexes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ShaderWorld,
		nullptr,
		&NewStructOps,
		"InstanceIndexes",
		sizeof(FInstanceIndexes),
		alignof(FInstanceIndexes),
		Z_Construct_UScriptStruct_FInstanceIndexes_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstanceIndexes_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInstanceIndexes_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstanceIndexes_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInstanceIndexes()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInstanceIndexes_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ShaderWorld();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InstanceIndexes"), sizeof(FInstanceIndexes), Get_Z_Construct_UScriptStruct_FInstanceIndexes_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInstanceIndexes_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInstanceIndexes_Hash() { return 2013536049U; }
class UScriptStruct* FCollisionMeshElement::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHADERWORLD_API uint32 Get_Z_Construct_UScriptStruct_FCollisionMeshElement_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollisionMeshElement, Z_Construct_UPackage__Script_ShaderWorld(), TEXT("CollisionMeshElement"), sizeof(FCollisionMeshElement), Get_Z_Construct_UScriptStruct_FCollisionMeshElement_Hash());
	}
	return Singleton;
}
template<> SHADERWORLD_API UScriptStruct* StaticStruct<FCollisionMeshElement>()
{
	return FCollisionMeshElement::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCollisionMeshElement(FCollisionMeshElement::StaticStruct, TEXT("/Script/ShaderWorld"), TEXT("CollisionMeshElement"), false, nullptr, nullptr);
static struct FScriptStruct_ShaderWorld_StaticRegisterNativesFCollisionMeshElement
{
	FScriptStruct_ShaderWorld_StaticRegisterNativesFCollisionMeshElement()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CollisionMeshElement")),new UScriptStruct::TCppStructOps<FCollisionMeshElement>);
	}
} ScriptStruct_ShaderWorld_StaticRegisterNativesFCollisionMeshElement;
	struct Z_Construct_UScriptStruct_FCollisionMeshElement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionRT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionRT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeightData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HeightData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollisionMeshElement>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::NewProp_Mesh_MetaData[] = {
		{ "Comment", "/**\n\x09* Collisions are handled by a set of traditional procedural meshes, masked to the viewer\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "Collisions are handled by a set of traditional procedural meshes, masked to the viewer" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCollisionMeshElement, Mesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::NewProp_CollisionRT_MetaData[] = {
		{ "Comment", "/**\n\x09* The Collision rendertarget holding the computed height data for a given vertice\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "The Collision rendertarget holding the computed height data for a given vertice" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::NewProp_CollisionRT = { "CollisionRT", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCollisionMeshElement, CollisionRT), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::NewProp_CollisionRT_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::NewProp_CollisionRT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::NewProp_Location_MetaData[] = {
		{ "Comment", "/**\n\x09* Location of the collision patch\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "Location of the collision patch" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCollisionMeshElement, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::NewProp_ID_MetaData[] = {
		{ "Comment", "/**\n\x09* IDs are indexes within the collision mesh pool\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "IDs are indexes within the collision mesh pool" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCollisionMeshElement, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::NewProp_HeightData_Inner = { "HeightData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::NewProp_HeightData_MetaData[] = {
		{ "Comment", "/**\n\x09* Stores the read back data computed from the AGeometryClipMapWorld::CollisionMat_HeightRead applied to CollisionRT\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "Stores the read back data computed from the AGeometryClipMapWorld::CollisionMat_HeightRead applied to CollisionRT" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::NewProp_HeightData = { "HeightData", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCollisionMeshElement, HeightData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::NewProp_HeightData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::NewProp_HeightData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::NewProp_CollisionRT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::NewProp_HeightData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::NewProp_HeightData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ShaderWorld,
		nullptr,
		&NewStructOps,
		"CollisionMeshElement",
		sizeof(FCollisionMeshElement),
		alignof(FCollisionMeshElement),
		Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollisionMeshElement()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCollisionMeshElement_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ShaderWorld();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CollisionMeshElement"), sizeof(FCollisionMeshElement), Get_Z_Construct_UScriptStruct_FCollisionMeshElement_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCollisionMeshElement_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCollisionMeshElement_Hash() { return 2486347257U; }
class UScriptStruct* FClipMapLayer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHADERWORLD_API uint32 Get_Z_Construct_UScriptStruct_FClipMapLayer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClipMapLayer, Z_Construct_UPackage__Script_ShaderWorld(), TEXT("ClipMapLayer"), sizeof(FClipMapLayer), Get_Z_Construct_UScriptStruct_FClipMapLayer_Hash());
	}
	return Singleton;
}
template<> SHADERWORLD_API UScriptStruct* StaticStruct<FClipMapLayer>()
{
	return FClipMapLayer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClipMapLayer(FClipMapLayer::StaticStruct, TEXT("/Script/ShaderWorld"), TEXT("ClipMapLayer"), false, nullptr, nullptr);
static struct FScriptStruct_ShaderWorld_StaticRegisterNativesFClipMapLayer
{
	FScriptStruct_ShaderWorld_StaticRegisterNativesFClipMapLayer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClipMapLayer")),new UScriptStruct::TCppStructOps<FClipMapLayer>);
	}
} ScriptStruct_ShaderWorld_StaticRegisterNativesFClipMapLayer;
	struct Z_Construct_UScriptStruct_FClipMapLayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LayerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialToGenerateLayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialToGenerateLayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClipMapLayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClipMapLayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClipMapLayer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClipMapLayer_Statics::NewProp_LayerName_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClipMapLayer_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClipMapLayer, LayerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FClipMapLayer_Statics::NewProp_LayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClipMapLayer_Statics::NewProp_LayerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClipMapLayer_Statics::NewProp_MaterialToGenerateLayer_MetaData[] = {
		{ "Category", "Spawnables" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClipMapLayer_Statics::NewProp_MaterialToGenerateLayer = { "MaterialToGenerateLayer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClipMapLayer, MaterialToGenerateLayer), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClipMapLayer_Statics::NewProp_MaterialToGenerateLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClipMapLayer_Statics::NewProp_MaterialToGenerateLayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClipMapLayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapLayer_Statics::NewProp_LayerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapLayer_Statics::NewProp_MaterialToGenerateLayer,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClipMapLayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ShaderWorld,
		nullptr,
		&NewStructOps,
		"ClipMapLayer",
		sizeof(FClipMapLayer),
		alignof(FClipMapLayer),
		Z_Construct_UScriptStruct_FClipMapLayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClipMapLayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClipMapLayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClipMapLayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClipMapLayer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClipMapLayer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ShaderWorld();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClipMapLayer"), sizeof(FClipMapLayer), Get_Z_Construct_UScriptStruct_FClipMapLayer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClipMapLayer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClipMapLayer_Hash() { return 4048251076U; }
class UScriptStruct* FClipMapMeshElement::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHADERWORLD_API uint32 Get_Z_Construct_UScriptStruct_FClipMapMeshElement_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClipMapMeshElement, Z_Construct_UPackage__Script_ShaderWorld(), TEXT("ClipMapMeshElement"), sizeof(FClipMapMeshElement), Get_Z_Construct_UScriptStruct_FClipMapMeshElement_Hash());
	}
	return Singleton;
}
template<> SHADERWORLD_API UScriptStruct* StaticStruct<FClipMapMeshElement>()
{
	return FClipMapMeshElement::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClipMapMeshElement(FClipMapMeshElement::StaticStruct, TEXT("/Script/ShaderWorld"), TEXT("ClipMapMeshElement"), false, nullptr, nullptr);
static struct FScriptStruct_ShaderWorld_StaticRegisterNativesFClipMapMeshElement
{
	FScriptStruct_ShaderWorld_StaticRegisterNativesFClipMapMeshElement()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClipMapMeshElement")),new UScriptStruct::TCppStructOps<FClipMapMeshElement>);
	}
} ScriptStruct_ShaderWorld_StaticRegisterNativesFClipMapMeshElement;
	struct Z_Construct_UScriptStruct_FClipMapMeshElement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_I_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_I_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridSpacing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GridSpacing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Config_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Config;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatDyn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MatDyn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeightMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NormalMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CacheMatDyn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CacheMatDyn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CacheNormalMatDyn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CacheNormalMatDyn;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LandLayers_names_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandLayers_names_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LandLayers_names;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LandLayers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandLayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LandLayers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LayerMatDyn_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerMatDyn_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LayerMatDyn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightMapFromLastSourceElement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeightMapFromLastSourceElement;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SectionVisibility_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SectionVisibility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* A ring Element, support either a procedural grid mesh, or a set of instanced meshes\n* \n*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "A ring Element, support either a procedural grid mesh, or a set of instanced meshes" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClipMapMeshElement>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClipMapMeshElement, Mesh), Z_Construct_UClass_UGeoClipmapMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_I_Mesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_I_Mesh = { "I_Mesh", nullptr, (EPropertyFlags)0x0010000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClipMapMeshElement, I_Mesh), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_I_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_I_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_GridSpacing_MetaData[] = {
		{ "Comment", "/**\n\x09* Each clipmap ring has its own real world distance between vertices represented by GridSpacing value\x09\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "Each clipmap ring has its own real world distance between vertices represented by GridSpacing value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_GridSpacing = { "GridSpacing", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClipMapMeshElement, GridSpacing), METADATA_PARAMS(Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_GridSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_GridSpacing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_Level_MetaData[] = {
		{ "Comment", "/**\n\x09* Level\x09""0 is the largest ring , levels are scaling inversed proportionality to LODs\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "Level 0 is the largest ring , levels are scaling inversed proportionality to LODs" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClipMapMeshElement, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_Location_MetaData[] = {
		{ "Comment", "/**\n\x09* Center of the ring\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "Center of the ring" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClipMapMeshElement, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_Config_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_Config_MetaData[] = {
		{ "Comment", "/**\n\x09* GeoClipmap L-shape configuration, to compensate for child clipmap offset\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "GeoClipmap L-shape configuration, to compensate for child clipmap offset" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClipMapMeshElement, Config), Z_Construct_UEnum_ShaderWorld_EClipMapInteriorConfig, METADATA_PARAMS(Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_Config_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_Config_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_MatDyn_MetaData[] = {
		{ "Comment", "/**\n\x09* Material applied to the ring, keeping a ptr to update its \"RingLocation\" parameter\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "Material applied to the ring, keeping a ptr to update its \"RingLocation\" parameter" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_MatDyn = { "MatDyn", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClipMapMeshElement, MatDyn), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_MatDyn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_MatDyn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_HeightMap_MetaData[] = {
		{ "Comment", "/**\n\x09* If using cache, keeping a ptr to this ring Heightmap\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "If using cache, keeping a ptr to this ring Heightmap" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_HeightMap = { "HeightMap", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClipMapMeshElement, HeightMap), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_HeightMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_HeightMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_NormalMap_MetaData[] = {
		{ "Comment", "/**\n\x09* If using cache, keeping a ptr to this ring Normalmap\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "If using cache, keeping a ptr to this ring Normalmap" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_NormalMap = { "NormalMap", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClipMapMeshElement, NormalMap), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_NormalMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_NormalMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_CacheMatDyn_MetaData[] = {
		{ "Comment", "/**\n\x09* This material is responsible for generating the cache, updating the Heightmap Render target\n\x09* keeping a ptr to update its \"RingLocation\" parameter\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "This material is responsible for generating the cache, updating the Heightmap Render target\nkeeping a ptr to update its \"RingLocation\" parameter" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_CacheMatDyn = { "CacheMatDyn", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClipMapMeshElement, CacheMatDyn), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_CacheMatDyn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_CacheMatDyn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_CacheNormalMatDyn_MetaData[] = {
		{ "Comment", "/**\n\x09* This material is responsible for generating the cache, updating the Normalmap Render target\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "This material is responsible for generating the cache, updating the Normalmap Render target" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_CacheNormalMatDyn = { "CacheNormalMatDyn", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClipMapMeshElement, CacheNormalMatDyn), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_CacheNormalMatDyn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_CacheNormalMatDyn_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_LandLayers_names_Inner = { "LandLayers_names", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_LandLayers_names_MetaData[] = {
		{ "Comment", "/**\n\x09* Validated layers names for this ring (layers with no name or no material defined were skipped at initialization)\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "Validated layers names for this ring (layers with no name or no material defined were skipped at initialization)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_LandLayers_names = { "LandLayers_names", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClipMapMeshElement, LandLayers_names), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_LandLayers_names_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_LandLayers_names_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_LandLayers_Inner = { "LandLayers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_LandLayers_MetaData[] = {
		{ "Comment", "/**\n\x09* Validated layers Render targets\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "Validated layers Render targets" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_LandLayers = { "LandLayers", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClipMapMeshElement, LandLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_LandLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_LandLayers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_LayerMatDyn_Inner = { "LayerMatDyn", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_LayerMatDyn_MetaData[] = {
		{ "Comment", "/**\n\x09* Validated layers Material to generate the given layer, keeping a ptr to update its \"RingLocation\" parameter\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "Validated layers Material to generate the given layer, keeping a ptr to update its \"RingLocation\" parameter" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_LayerMatDyn = { "LayerMatDyn", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClipMapMeshElement, LayerMatDyn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_LayerMatDyn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_LayerMatDyn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_HeightMapFromLastSourceElement_MetaData[] = {
		{ "Comment", "/**\n\x09* When binding two worlds together (land and ocean), keeping a pointer to the last heightmap we read from the Source world\n\x09* if we're updating a ring with new Source data but the heightmap ptr is identical, we're just updating the \"Ext_RingLocation\" in the ring material (MatDyn)\n\x09* instead of updating the external heightmap, normalmap, gridscaling, etc... necessary for generating UVs from world coordinate for this external Heightmap/Normalmap\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "When binding two worlds together (land and ocean), keeping a pointer to the last heightmap we read from the Source world\nif we're updating a ring with new Source data but the heightmap ptr is identical, we're just updating the \"Ext_RingLocation\" in the ring material (MatDyn)\ninstead of updating the external heightmap, normalmap, gridscaling, etc... necessary for generating UVs from world coordinate for this external Heightmap/Normalmap" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_HeightMapFromLastSourceElement = { "HeightMapFromLastSourceElement", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClipMapMeshElement, HeightMapFromLastSourceElement), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_HeightMapFromLastSourceElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_HeightMapFromLastSourceElement_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_SectionVisibility_Inner = { "SectionVisibility", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_SectionVisibility_MetaData[] = {
		{ "Comment", "/**\n\x09* Instead of directly using 'Issectionvisible' we're using a simple array of visibility to allow the Instanced Mesh Ground workflow as well.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "Instead of directly using 'Issectionvisible' we're using a simple array of visibility to allow the Instanced Mesh Ground workflow as well." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_SectionVisibility = { "SectionVisibility", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClipMapMeshElement, SectionVisibility), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_SectionVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_SectionVisibility_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_I_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_GridSpacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_Config_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_Config,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_MatDyn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_HeightMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_NormalMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_CacheMatDyn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_CacheNormalMatDyn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_LandLayers_names_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_LandLayers_names,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_LandLayers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_LandLayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_LayerMatDyn_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_LayerMatDyn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_HeightMapFromLastSourceElement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_SectionVisibility_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::NewProp_SectionVisibility,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ShaderWorld,
		nullptr,
		&NewStructOps,
		"ClipMapMeshElement",
		sizeof(FClipMapMeshElement),
		alignof(FClipMapMeshElement),
		Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClipMapMeshElement()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClipMapMeshElement_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ShaderWorld();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClipMapMeshElement"), sizeof(FClipMapMeshElement), Get_Z_Construct_UScriptStruct_FClipMapMeshElement_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClipMapMeshElement_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClipMapMeshElement_Hash() { return 3811007946U; }
	DEFINE_FUNCTION(AGeometryClipMapWorld::execGet_LOD_Dimension)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LOD);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Get_LOD_Dimension(Z_Param_LOD);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeometryClipMapWorld::execGet_LOD_NormalMap)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LOD);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->Get_LOD_NormalMap(Z_Param_LOD);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeometryClipMapWorld::execGet_LOD_HeightMap)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LOD);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->Get_LOD_HeightMap(Z_Param_LOD);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeometryClipMapWorld::execGet_LOD_RingLocation)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LOD);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->Get_LOD_RingLocation(Z_Param_LOD);
		P_NATIVE_END;
	}
	void AGeometryClipMapWorld::StaticRegisterNativesAGeometryClipMapWorld()
	{
		UClass* Class = AGeometryClipMapWorld::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get_LOD_Dimension", &AGeometryClipMapWorld::execGet_LOD_Dimension },
			{ "Get_LOD_HeightMap", &AGeometryClipMapWorld::execGet_LOD_HeightMap },
			{ "Get_LOD_NormalMap", &AGeometryClipMapWorld::execGet_LOD_NormalMap },
			{ "Get_LOD_RingLocation", &AGeometryClipMapWorld::execGet_LOD_RingLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_Dimension_Statics
	{
		struct GeometryClipMapWorld_eventGet_LOD_Dimension_Parms
		{
			int32 LOD;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_LOD;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_Dimension_Statics::NewProp_LOD = { "LOD", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeometryClipMapWorld_eventGet_LOD_Dimension_Parms, LOD), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_Dimension_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeometryClipMapWorld_eventGet_LOD_Dimension_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_Dimension_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_Dimension_Statics::NewProp_LOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_Dimension_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_Dimension_Statics::Function_MetaDataParams[] = {
		{ "Category", "WorldData" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_Dimension_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeometryClipMapWorld, nullptr, "Get_LOD_Dimension", nullptr, nullptr, sizeof(GeometryClipMapWorld_eventGet_LOD_Dimension_Parms), Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_Dimension_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_Dimension_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_Dimension_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_Dimension_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_Dimension()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_Dimension_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_HeightMap_Statics
	{
		struct GeometryClipMapWorld_eventGet_LOD_HeightMap_Parms
		{
			int32 LOD;
			UTextureRenderTarget2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_LOD;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_HeightMap_Statics::NewProp_LOD = { "LOD", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeometryClipMapWorld_eventGet_LOD_HeightMap_Parms, LOD), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_HeightMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeometryClipMapWorld_eventGet_LOD_HeightMap_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_HeightMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_HeightMap_Statics::NewProp_LOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_HeightMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_HeightMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "WorldData" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_HeightMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeometryClipMapWorld, nullptr, "Get_LOD_HeightMap", nullptr, nullptr, sizeof(GeometryClipMapWorld_eventGet_LOD_HeightMap_Parms), Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_HeightMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_HeightMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_HeightMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_HeightMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_HeightMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_HeightMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_NormalMap_Statics
	{
		struct GeometryClipMapWorld_eventGet_LOD_NormalMap_Parms
		{
			int32 LOD;
			UTextureRenderTarget2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_LOD;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_NormalMap_Statics::NewProp_LOD = { "LOD", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeometryClipMapWorld_eventGet_LOD_NormalMap_Parms, LOD), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_NormalMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeometryClipMapWorld_eventGet_LOD_NormalMap_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_NormalMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_NormalMap_Statics::NewProp_LOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_NormalMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_NormalMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "WorldData" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_NormalMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeometryClipMapWorld, nullptr, "Get_LOD_NormalMap", nullptr, nullptr, sizeof(GeometryClipMapWorld_eventGet_LOD_NormalMap_Parms), Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_NormalMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_NormalMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_NormalMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_NormalMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_NormalMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_NormalMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_RingLocation_Statics
	{
		struct GeometryClipMapWorld_eventGet_LOD_RingLocation_Parms
		{
			int32 LOD;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_LOD;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_RingLocation_Statics::NewProp_LOD = { "LOD", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeometryClipMapWorld_eventGet_LOD_RingLocation_Parms, LOD), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_RingLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeometryClipMapWorld_eventGet_LOD_RingLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_RingLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_RingLocation_Statics::NewProp_LOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_RingLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_RingLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "WorldData" },
		{ "Comment", "/*Allow other actors to access the landscape data, i.e ocean getting landscape heightmap*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "Allow other actors to access the landscape data, i.e ocean getting landscape heightmap" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_RingLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeometryClipMapWorld, nullptr, "Get_LOD_RingLocation", nullptr, nullptr, sizeof(GeometryClipMapWorld_eventGet_LOD_RingLocation_Parms), Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_RingLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_RingLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_RingLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_RingLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_RingLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_RingLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGeometryClipMapWorld_NoRegister()
	{
		return AGeometryClipMapWorld::StaticClass();
	}
	struct Z_Construct_UClass_AGeometryClipMapWorld_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BrushManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateRatePerSecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpdateRatePerSecond;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeAcu_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeAcu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushManagerAskRedraw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BrushManagerAskRedraw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushManagerRedrawScope_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BrushManagerRedrawScope;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenerateCollision_MetaData[];
#endif
		static void NewProp_GenerateCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_GenerateCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableCaching_MetaData[];
#endif
		static void NewProp_EnableCaching_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableCaching;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClipMapCacheIntraVerticesTexel_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ClipMapCacheIntraVerticesTexel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LOD_above_doubleCacheResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_LOD_above_doubleCacheResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RendertargetMemoryBudgetMB_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RendertargetMemoryBudgetMB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rebuild_MetaData[];
#endif
		static void NewProp_rebuild_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_rebuild;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rebuildVegetationOnly_MetaData[];
#endif
		static void NewProp_rebuildVegetationOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_rebuildVegetationOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldDimensionMeters_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_WorldDimensionMeters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridSpacing_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_GridSpacing;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VerticePerPatch_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticePerPatch_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VerticePerPatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_N_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_N;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LOD_Num_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_LOD_Num;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalRangeMeters_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VerticalRangeMeters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuntimeMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RuntimeMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatDyn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MatDyn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComputeCacheHeightmap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComputeCacheHeightmap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComputeCacheNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComputeCacheNormal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LandDataLayers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandDataLayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LandDataLayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionMeshPerQuadrantAroundPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CollisionMeshPerQuadrantAroundPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionMeshVerticeNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CollisionMeshVerticeNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionMeshWorldDimension_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionMeshWorldDimension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionMat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionMat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionMat_HeightRead_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionMat_HeightRead;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Spawnables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawnables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Spawnables;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnablesMat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnablesMat;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SortedSpawnables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortedSpawnables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SortedSpawnables;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawCallBudget_Spawnables_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_DrawCallBudget_Spawnables;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WorldPresentation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldPresentation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WorldPresentation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisualRepresentation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VisualRepresentation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_InstancedMeshRepresentation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material_InstancedMeshRepresentation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataReceiver_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataReceiver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LOD_Offset_FromReceiverToSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_LOD_Offset_FromReceiverToSource;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Meshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Meshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Meshes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionMesh_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CollisionMesh;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AvailableCollisionMesh_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvailableCollisionMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AvailableCollisionMesh;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_UsedCollisionMesh_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsedCollisionMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UsedCollisionMesh;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CollisionReadToProcess_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionReadToProcess_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CollisionReadToProcess;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GroundCollisionLayout_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GroundCollisionLayout_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroundCollisionLayout_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_GroundCollisionLayout;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeometryClipMapWorld_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ShaderWorld,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGeometryClipMapWorld_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_Dimension, "Get_LOD_Dimension" }, // 742349791
		{ &Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_HeightMap, "Get_LOD_HeightMap" }, // 1507772358
		{ &Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_NormalMap, "Get_LOD_NormalMap" }, // 3436841564
		{ &Z_Construct_UFunction_AGeometryClipMapWorld_Get_LOD_RingLocation, "Get_LOD_RingLocation" }, // 1803707747
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Input Actor Game LOD Replication Cooking" },
		{ "IncludePath", "Actor/GeometryClipMapWorld.h" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_BrushManager_MetaData[] = {
		{ "Category", "Brush Manager (Optional)" },
		{ "EditCondition", "EnableCaching" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_BrushManager = { "BrushManager", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryClipMapWorld, BrushManager), Z_Construct_UClass_AShaderWorldBrushManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_BrushManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_BrushManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_UpdateRatePerSecond_MetaData[] = {
		{ "Category", "World Settings" },
		{ "ClampMax", "120.000000" },
		{ "ClampMin", "1.000000" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "UIMax", "120.000000" },
		{ "UIMin", "1.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_UpdateRatePerSecond = { "UpdateRatePerSecond", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryClipMapWorld, UpdateRatePerSecond), METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_UpdateRatePerSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_UpdateRatePerSecond_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_TimeAcu_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_TimeAcu = { "TimeAcu", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryClipMapWorld, TimeAcu), METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_TimeAcu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_TimeAcu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_BrushManagerAskRedraw_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_BrushManagerAskRedraw = { "BrushManagerAskRedraw", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryClipMapWorld, BrushManagerAskRedraw), METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_BrushManagerAskRedraw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_BrushManagerAskRedraw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_BrushManagerRedrawScope_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_BrushManagerRedrawScope = { "BrushManagerRedrawScope", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryClipMapWorld, BrushManagerRedrawScope), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_BrushManagerRedrawScope_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_BrushManagerRedrawScope_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_GenerateCollision_MetaData[] = {
		{ "Category", "World Settings" },
		{ "Comment", "/**\n\x09* You can generated an ocean not requiring collisions\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "You can generated an ocean not requiring collisions" },
	};
#endif
	void Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_GenerateCollision_SetBit(void* Obj)
	{
		((AGeometryClipMapWorld*)Obj)->GenerateCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_GenerateCollision = { "GenerateCollision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGeometryClipMapWorld), &Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_GenerateCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_GenerateCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_GenerateCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_EnableCaching_MetaData[] = {
		{ "Category", "World Settings" },
		{ "Comment", "/*If defining a static landscape, cache the landscape computation instead of computing it each frame*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "If defining a static landscape, cache the landscape computation instead of computing it each frame" },
	};
#endif
	void Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_EnableCaching_SetBit(void* Obj)
	{
		((AGeometryClipMapWorld*)Obj)->EnableCaching = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_EnableCaching = { "EnableCaching", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGeometryClipMapWorld), &Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_EnableCaching_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_EnableCaching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_EnableCaching_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_ClipMapCacheIntraVerticesTexel_MetaData[] = {
		{ "Category", "World Settings" },
		{ "ClampMax", "10" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09* Define the cache resolution\n\x09*/" },
		{ "EditCondition", "EnableCaching" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "Define the cache resolution" },
		{ "UIMax", "10" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_ClipMapCacheIntraVerticesTexel = { "ClipMapCacheIntraVerticesTexel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryClipMapWorld, ClipMapCacheIntraVerticesTexel), METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_ClipMapCacheIntraVerticesTexel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_ClipMapCacheIntraVerticesTexel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_LOD_above_doubleCacheResolution_MetaData[] = {
		{ "Category", "World Settings" },
		{ "ClampMax", "15" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09* LOD above will double their ClipMapCacheIntraVerticesTexel, use to compensate visible artefact in the distance when using cache.\n\x09*/" },
		{ "EditCondition", "EnableCaching" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "LOD above will double their ClipMapCacheIntraVerticesTexel, use to compensate visible artefact in the distance when using cache." },
		{ "UIMax", "15" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_LOD_above_doubleCacheResolution = { "LOD_above_doubleCacheResolution", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryClipMapWorld, LOD_above_doubleCacheResolution), METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_LOD_above_doubleCacheResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_LOD_above_doubleCacheResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_RendertargetMemoryBudgetMB_MetaData[] = {
		{ "Category", "World Settings" },
		{ "Comment", "/**\n\x09* Indicated the total memory budget allocated by the rendertargets, including the spawnables and collisions\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "Indicated the total memory budget allocated by the rendertargets, including the spawnables and collisions" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_RendertargetMemoryBudgetMB = { "RendertargetMemoryBudgetMB", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryClipMapWorld, RendertargetMemoryBudgetMB), METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_RendertargetMemoryBudgetMB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_RendertargetMemoryBudgetMB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_rebuild_MetaData[] = {
		{ "Category", "World Settings" },
		{ "Comment", "/**\n\x09* Hard rebuild of the world\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "Hard rebuild of the world" },
	};
#endif
	void Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_rebuild_SetBit(void* Obj)
	{
		((AGeometryClipMapWorld*)Obj)->rebuild = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_rebuild = { "rebuild", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGeometryClipMapWorld), &Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_rebuild_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_rebuild_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_rebuild_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_rebuildVegetationOnly_MetaData[] = {
		{ "Category", "Spawnables" },
		{ "Comment", "/**\n\x09* Hard rebuild of the vegetation\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "Hard rebuild of the vegetation" },
	};
#endif
	void Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_rebuildVegetationOnly_SetBit(void* Obj)
	{
		((AGeometryClipMapWorld*)Obj)->rebuildVegetationOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_rebuildVegetationOnly = { "rebuildVegetationOnly", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGeometryClipMapWorld), &Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_rebuildVegetationOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_rebuildVegetationOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_rebuildVegetationOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_WorldDimensionMeters_MetaData[] = {
		{ "Category", "World Settings" },
		{ "Comment", "/**\n\x09* Level 0 / Highest LOD World dimensions per side in meters\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "Level 0 / Highest LOD World dimensions per side in meters" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_WorldDimensionMeters = { "WorldDimensionMeters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryClipMapWorld, WorldDimensionMeters), METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_WorldDimensionMeters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_WorldDimensionMeters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_GridSpacing_MetaData[] = {
		{ "Comment", "/**\n\x09* Translate WorldDimensionMeters to intra vertices dimension for Level 0 / Highest LOD\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "Translate WorldDimensionMeters to intra vertices dimension for Level 0 / Highest LOD" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_GridSpacing = { "GridSpacing", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryClipMapWorld, GridSpacing), METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_GridSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_GridSpacing_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_VerticePerPatch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_VerticePerPatch_MetaData[] = {
		{ "Category", "World Settings" },
		{ "Comment", "/**\n\x09* Currently supporting 511/255/127/63/31/15\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "Currently supporting 511/255/127/63/31/15" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_VerticePerPatch = { "VerticePerPatch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryClipMapWorld, VerticePerPatch), Z_Construct_UEnum_ShaderWorld_ENValue, METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_VerticePerPatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_VerticePerPatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_N_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_N = { "N", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryClipMapWorld, N), METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_N_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_LOD_Num_MetaData[] = {
		{ "Category", "World Settings" },
		{ "ClampMax", "16" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09* Number of LODs to compute\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "Number of LODs to compute" },
		{ "UIMax", "16" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_LOD_Num = { "LOD_Num", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryClipMapWorld, LOD_Num), METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_LOD_Num_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_LOD_Num_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_VerticalRangeMeters_MetaData[] = {
		{ "Category", "ClipMap Hack Culling" },
		{ "ClampMax", "4000.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/**\n\x09 * To counter CPU culling we're scaterring the actual ring clipmaps vertices vertically\n\x09 * Ocean should work with this parameter close to 0.f\n\x09 */" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "To counter CPU culling we're scaterring the actual ring clipmaps vertices vertically\nOcean should work with this parameter close to 0.f" },
		{ "UIMax", "4000.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_VerticalRangeMeters = { "VerticalRangeMeters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryClipMapWorld, VerticalRangeMeters), METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_VerticalRangeMeters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_VerticalRangeMeters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_RuntimeMaterial_MetaData[] = {
		{ "Category", "World Settings" },
		{ "Comment", "/**\n\x09* Material applied when Cache is disabled: Ocean/Land world is computed each frame during vertex shader stage\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "Material applied when Cache is disabled: Ocean/Land world is computed each frame during vertex shader stage" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_RuntimeMaterial = { "RuntimeMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryClipMapWorld, RuntimeMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_RuntimeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_RuntimeMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CachedMaterial_MetaData[] = {
		{ "Category", "World Settings" },
		{ "Comment", "/**\n\x09* Material applied when Cache is enabled: Ocean/Land world is Height/Normals are read from the cache\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "Material applied when Cache is enabled: Ocean/Land world is Height/Normals are read from the cache" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CachedMaterial = { "CachedMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryClipMapWorld, CachedMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CachedMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CachedMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_MatDyn_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_MatDyn = { "MatDyn", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryClipMapWorld, MatDyn), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_MatDyn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_MatDyn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_ComputeCacheHeightmap_MetaData[] = {
		{ "Category", "World Settings" },
		{ "EditCondition", "EnableCaching" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_ComputeCacheHeightmap = { "ComputeCacheHeightmap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryClipMapWorld, ComputeCacheHeightmap), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_ComputeCacheHeightmap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_ComputeCacheHeightmap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_ComputeCacheNormal_MetaData[] = {
		{ "Category", "World Settings" },
		{ "EditCondition", "EnableCaching" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_ComputeCacheNormal = { "ComputeCacheNormal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryClipMapWorld, ComputeCacheNormal), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_ComputeCacheNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_ComputeCacheNormal_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_LandDataLayers_Inner = { "LandDataLayers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FClipMapLayer, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_LandDataLayers_MetaData[] = {
		{ "Category", "World Settings" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_LandDataLayers = { "LandDataLayers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryClipMapWorld, LandDataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_LandDataLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_LandDataLayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMeshPerQuadrantAroundPlayer_MetaData[] = {
		{ "Category", "World Collision" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMeshPerQuadrantAroundPlayer = { "CollisionMeshPerQuadrantAroundPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryClipMapWorld, CollisionMeshPerQuadrantAroundPlayer), METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMeshPerQuadrantAroundPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMeshPerQuadrantAroundPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMeshVerticeNumber_MetaData[] = {
		{ "Category", "World Collision" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMeshVerticeNumber = { "CollisionMeshVerticeNumber", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryClipMapWorld, CollisionMeshVerticeNumber), METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMeshVerticeNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMeshVerticeNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMeshWorldDimension_MetaData[] = {
		{ "Category", "World Collision" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMeshWorldDimension = { "CollisionMeshWorldDimension", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryClipMapWorld, CollisionMeshWorldDimension), METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMeshWorldDimension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMeshWorldDimension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMat_MetaData[] = {
		{ "Category", "World Collision" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMat = { "CollisionMat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryClipMapWorld, CollisionMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMat_HeightRead_MetaData[] = {
		{ "Category", "World Collision" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMat_HeightRead = { "CollisionMat_HeightRead", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryClipMapWorld, CollisionMat_HeightRead), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMat_HeightRead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMat_HeightRead_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_Spawnables_Inner = { "Spawnables", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSpawnableMesh, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_Spawnables_MetaData[] = {
		{ "Category", "Spawnables" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_Spawnables = { "Spawnables", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryClipMapWorld, Spawnables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_Spawnables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_Spawnables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_SpawnablesMat_MetaData[] = {
		{ "Category", "Spawnables" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_SpawnablesMat = { "SpawnablesMat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryClipMapWorld, SpawnablesMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_SpawnablesMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_SpawnablesMat_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_SortedSpawnables_Inner = { "SortedSpawnables", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_SortedSpawnables_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_SortedSpawnables = { "SortedSpawnables", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryClipMapWorld, SortedSpawnables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_SortedSpawnables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_SortedSpawnables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_DrawCallBudget_Spawnables_MetaData[] = {
		{ "Category", "Spawnables" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_DrawCallBudget_Spawnables = { "DrawCallBudget_Spawnables", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryClipMapWorld, DrawCallBudget_Spawnables), METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_DrawCallBudget_Spawnables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_DrawCallBudget_Spawnables_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_WorldPresentation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_WorldPresentation_MetaData[] = {
		{ "Category", "Experimental WorldPresentation" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_WorldPresentation = { "WorldPresentation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryClipMapWorld, WorldPresentation), Z_Construct_UEnum_ShaderWorld_EWorldPresentation, METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_WorldPresentation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_WorldPresentation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_VisualRepresentation_MetaData[] = {
		{ "Category", "Experimental WorldPresentation" },
		{ "Comment", "/*Relevant Only if using InstancedMesh representation*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "Relevant Only if using InstancedMesh representation" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_VisualRepresentation = { "VisualRepresentation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryClipMapWorld, VisualRepresentation), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_VisualRepresentation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_VisualRepresentation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_Material_InstancedMeshRepresentation_MetaData[] = {
		{ "Category", "Experimental WorldPresentation" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_Material_InstancedMeshRepresentation = { "Material_InstancedMeshRepresentation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryClipMapWorld, Material_InstancedMeshRepresentation), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_Material_InstancedMeshRepresentation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_Material_InstancedMeshRepresentation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_DataReceiver_MetaData[] = {
		{ "Category", "Dependencies" },
		{ "Comment", "/*Send our data updates TO those other world*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "Send our data updates TO those other world" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_DataReceiver = { "DataReceiver", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryClipMapWorld, DataReceiver), Z_Construct_UClass_AGeometryClipMapWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_DataReceiver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_DataReceiver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_DataSource_MetaData[] = {
		{ "Category", "Dependencies" },
		{ "Comment", "/*Receive data updates FROM those other world*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "Receive data updates FROM those other world" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_DataSource = { "DataSource", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryClipMapWorld, DataSource), Z_Construct_UClass_AGeometryClipMapWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_DataSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_DataSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_LOD_Offset_FromReceiverToSource_MetaData[] = {
		{ "Category", "Dependencies" },
		{ "Comment", "/*A ring of LOD 5 in receiver will use the LOD 5 + LOD_Offset_FromReceiverToSource of source*/" },
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
		{ "ToolTip", "A ring of LOD 5 in receiver will use the LOD 5 + LOD_Offset_FromReceiverToSource of source" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_LOD_Offset_FromReceiverToSource = { "LOD_Offset_FromReceiverToSource", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryClipMapWorld, LOD_Offset_FromReceiverToSource), METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_LOD_Offset_FromReceiverToSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_LOD_Offset_FromReceiverToSource_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_Meshes_Inner = { "Meshes", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FClipMapMeshElement, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_Meshes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x0020088000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryClipMapWorld, Meshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_Meshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_Meshes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMesh_Inner = { "CollisionMesh", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCollisionMeshElement, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMesh = { "CollisionMesh", nullptr, (EPropertyFlags)0x0020088000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryClipMapWorld, CollisionMesh), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMesh_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_AvailableCollisionMesh_Inner = { "AvailableCollisionMesh", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_AvailableCollisionMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_AvailableCollisionMesh = { "AvailableCollisionMesh", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryClipMapWorld, AvailableCollisionMesh), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_AvailableCollisionMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_AvailableCollisionMesh_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_UsedCollisionMesh_Inner = { "UsedCollisionMesh", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_UsedCollisionMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_UsedCollisionMesh = { "UsedCollisionMesh", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryClipMapWorld, UsedCollisionMesh), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_UsedCollisionMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_UsedCollisionMesh_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionReadToProcess_Inner = { "CollisionReadToProcess", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionReadToProcess_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionReadToProcess = { "CollisionReadToProcess", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryClipMapWorld, CollisionReadToProcess), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionReadToProcess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionReadToProcess_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_GroundCollisionLayout_ValueProp = { "GroundCollisionLayout", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FCollisionMeshElement, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_GroundCollisionLayout_Key_KeyProp = { "GroundCollisionLayout_Key", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_GroundCollisionLayout_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/GeometryClipMapWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_GroundCollisionLayout = { "GroundCollisionLayout", nullptr, (EPropertyFlags)0x0020088000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryClipMapWorld, GroundCollisionLayout), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_GroundCollisionLayout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_GroundCollisionLayout_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGeometryClipMapWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_BrushManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_UpdateRatePerSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_TimeAcu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_BrushManagerAskRedraw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_BrushManagerRedrawScope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_GenerateCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_EnableCaching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_ClipMapCacheIntraVerticesTexel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_LOD_above_doubleCacheResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_RendertargetMemoryBudgetMB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_rebuild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_rebuildVegetationOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_WorldDimensionMeters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_GridSpacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_VerticePerPatch_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_VerticePerPatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_N,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_LOD_Num,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_VerticalRangeMeters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_RuntimeMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CachedMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_MatDyn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_ComputeCacheHeightmap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_ComputeCacheNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_LandDataLayers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_LandDataLayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMeshPerQuadrantAroundPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMeshVerticeNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMeshWorldDimension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMat_HeightRead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_Spawnables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_Spawnables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_SpawnablesMat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_SortedSpawnables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_SortedSpawnables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_DrawCallBudget_Spawnables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_WorldPresentation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_WorldPresentation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_VisualRepresentation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_Material_InstancedMeshRepresentation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_DataReceiver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_DataSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_LOD_Offset_FromReceiverToSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_Meshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_Meshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMesh_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_AvailableCollisionMesh_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_AvailableCollisionMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_UsedCollisionMesh_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_UsedCollisionMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionReadToProcess_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_CollisionReadToProcess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_GroundCollisionLayout_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_GroundCollisionLayout_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryClipMapWorld_Statics::NewProp_GroundCollisionLayout,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeometryClipMapWorld_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeometryClipMapWorld>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGeometryClipMapWorld_Statics::ClassParams = {
		&AGeometryClipMapWorld::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGeometryClipMapWorld_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGeometryClipMapWorld_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryClipMapWorld_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeometryClipMapWorld()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGeometryClipMapWorld_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGeometryClipMapWorld, 3575184993);
	template<> SHADERWORLD_API UClass* StaticClass<AGeometryClipMapWorld>()
	{
		return AGeometryClipMapWorld::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGeometryClipMapWorld(Z_Construct_UClass_AGeometryClipMapWorld, &AGeometryClipMapWorld::StaticClass, TEXT("/Script/ShaderWorld"), TEXT("AGeometryClipMapWorld"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeometryClipMapWorld);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
