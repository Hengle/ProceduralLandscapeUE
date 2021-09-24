// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FVector2D;
struct FLinearColor;
struct FGeoCProcMeshTangent;
struct FColor;
#ifdef SHADERWORLD_GeoClipmapMeshComponent_generated_h
#error "GeoClipmapMeshComponent.generated.h already included, missing '#pragma once' in GeoClipmapMeshComponent.h"
#endif
#define SHADERWORLD_GeoClipmapMeshComponent_generated_h

#define ShaderToLandscape_Plugins_ShaderWorld_Source_ShaderWorld_Public_Component_GeoClipmapMeshComponent_h_109_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeoCProcMeshSection_Statics; \
	SHADERWORLD_API static class UScriptStruct* StaticStruct();


template<> SHADERWORLD_API UScriptStruct* StaticStruct<struct FGeoCProcMeshSection>();

#define ShaderToLandscape_Plugins_ShaderWorld_Source_ShaderWorld_Public_Component_GeoClipmapMeshComponent_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeoCProcMeshVertex_Statics; \
	SHADERWORLD_API static class UScriptStruct* StaticStruct();


template<> SHADERWORLD_API UScriptStruct* StaticStruct<struct FGeoCProcMeshVertex>();

#define ShaderToLandscape_Plugins_ShaderWorld_Source_ShaderWorld_Public_Component_GeoClipmapMeshComponent_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeoCProcMeshTangent_Statics; \
	SHADERWORLD_API static class UScriptStruct* StaticStruct();


template<> SHADERWORLD_API UScriptStruct* StaticStruct<struct FGeoCProcMeshTangent>();

#define ShaderToLandscape_Plugins_ShaderWorld_Source_ShaderWorld_Public_Component_GeoClipmapMeshComponent_h_155_SPARSE_DATA
#define ShaderToLandscape_Plugins_ShaderWorld_Source_ShaderWorld_Public_Component_GeoClipmapMeshComponent_h_155_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearCollisionConvexMeshes); \
	DECLARE_FUNCTION(execAddCollisionConvexMesh); \
	DECLARE_FUNCTION(execGetNumSections); \
	DECLARE_FUNCTION(execIsMeshSectionVisible); \
	DECLARE_FUNCTION(execSetMeshSectionVisible); \
	DECLARE_FUNCTION(execClearAllMeshSections); \
	DECLARE_FUNCTION(execClearMeshSection); \
	DECLARE_FUNCTION(execUpdateMeshSection_LinearColor); \
	DECLARE_FUNCTION(execUpdateMeshSection); \
	DECLARE_FUNCTION(execCreateMeshSection_LinearColor); \
	DECLARE_FUNCTION(execCreateMeshSection);


#define ShaderToLandscape_Plugins_ShaderWorld_Source_ShaderWorld_Public_Component_GeoClipmapMeshComponent_h_155_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearCollisionConvexMeshes); \
	DECLARE_FUNCTION(execAddCollisionConvexMesh); \
	DECLARE_FUNCTION(execGetNumSections); \
	DECLARE_FUNCTION(execIsMeshSectionVisible); \
	DECLARE_FUNCTION(execSetMeshSectionVisible); \
	DECLARE_FUNCTION(execClearAllMeshSections); \
	DECLARE_FUNCTION(execClearMeshSection); \
	DECLARE_FUNCTION(execUpdateMeshSection_LinearColor); \
	DECLARE_FUNCTION(execUpdateMeshSection); \
	DECLARE_FUNCTION(execCreateMeshSection_LinearColor); \
	DECLARE_FUNCTION(execCreateMeshSection);


#define ShaderToLandscape_Plugins_ShaderWorld_Source_ShaderWorld_Public_Component_GeoClipmapMeshComponent_h_155_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeoClipmapMeshComponent(); \
	friend struct Z_Construct_UClass_UGeoClipmapMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UGeoClipmapMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShaderWorld"), NO_API) \
	DECLARE_SERIALIZER(UGeoClipmapMeshComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UGeoClipmapMeshComponent*>(this); }


#define ShaderToLandscape_Plugins_ShaderWorld_Source_ShaderWorld_Public_Component_GeoClipmapMeshComponent_h_155_INCLASS \
private: \
	static void StaticRegisterNativesUGeoClipmapMeshComponent(); \
	friend struct Z_Construct_UClass_UGeoClipmapMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UGeoClipmapMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShaderWorld"), NO_API) \
	DECLARE_SERIALIZER(UGeoClipmapMeshComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UGeoClipmapMeshComponent*>(this); }


#define ShaderToLandscape_Plugins_ShaderWorld_Source_ShaderWorld_Public_Component_GeoClipmapMeshComponent_h_155_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeoClipmapMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeoClipmapMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeoClipmapMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeoClipmapMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeoClipmapMeshComponent(UGeoClipmapMeshComponent&&); \
	NO_API UGeoClipmapMeshComponent(const UGeoClipmapMeshComponent&); \
public:


#define ShaderToLandscape_Plugins_ShaderWorld_Source_ShaderWorld_Public_Component_GeoClipmapMeshComponent_h_155_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeoClipmapMeshComponent(UGeoClipmapMeshComponent&&); \
	NO_API UGeoClipmapMeshComponent(const UGeoClipmapMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeoClipmapMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeoClipmapMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeoClipmapMeshComponent)


#define ShaderToLandscape_Plugins_ShaderWorld_Source_ShaderWorld_Public_Component_GeoClipmapMeshComponent_h_155_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProcMeshSections() { return STRUCT_OFFSET(UGeoClipmapMeshComponent, ProcMeshSections); } \
	FORCEINLINE static uint32 __PPO__CollisionConvexElems() { return STRUCT_OFFSET(UGeoClipmapMeshComponent, CollisionConvexElems); } \
	FORCEINLINE static uint32 __PPO__LocalBounds() { return STRUCT_OFFSET(UGeoClipmapMeshComponent, LocalBounds); } \
	FORCEINLINE static uint32 __PPO__UseCustomBounds() { return STRUCT_OFFSET(UGeoClipmapMeshComponent, UseCustomBounds); } \
	FORCEINLINE static uint32 __PPO__LocalBoundsGeoC() { return STRUCT_OFFSET(UGeoClipmapMeshComponent, LocalBoundsGeoC); } \
	FORCEINLINE static uint32 __PPO__TargetHeight() { return STRUCT_OFFSET(UGeoClipmapMeshComponent, TargetHeight); } \
	FORCEINLINE static uint32 __PPO__AsyncBodySetupQueue() { return STRUCT_OFFSET(UGeoClipmapMeshComponent, AsyncBodySetupQueue); }


#define ShaderToLandscape_Plugins_ShaderWorld_Source_ShaderWorld_Public_Component_GeoClipmapMeshComponent_h_152_PROLOG
#define ShaderToLandscape_Plugins_ShaderWorld_Source_ShaderWorld_Public_Component_GeoClipmapMeshComponent_h_155_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShaderToLandscape_Plugins_ShaderWorld_Source_ShaderWorld_Public_Component_GeoClipmapMeshComponent_h_155_PRIVATE_PROPERTY_OFFSET \
	ShaderToLandscape_Plugins_ShaderWorld_Source_ShaderWorld_Public_Component_GeoClipmapMeshComponent_h_155_SPARSE_DATA \
	ShaderToLandscape_Plugins_ShaderWorld_Source_ShaderWorld_Public_Component_GeoClipmapMeshComponent_h_155_RPC_WRAPPERS \
	ShaderToLandscape_Plugins_ShaderWorld_Source_ShaderWorld_Public_Component_GeoClipmapMeshComponent_h_155_INCLASS \
	ShaderToLandscape_Plugins_ShaderWorld_Source_ShaderWorld_Public_Component_GeoClipmapMeshComponent_h_155_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShaderToLandscape_Plugins_ShaderWorld_Source_ShaderWorld_Public_Component_GeoClipmapMeshComponent_h_155_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShaderToLandscape_Plugins_ShaderWorld_Source_ShaderWorld_Public_Component_GeoClipmapMeshComponent_h_155_PRIVATE_PROPERTY_OFFSET \
	ShaderToLandscape_Plugins_ShaderWorld_Source_ShaderWorld_Public_Component_GeoClipmapMeshComponent_h_155_SPARSE_DATA \
	ShaderToLandscape_Plugins_ShaderWorld_Source_ShaderWorld_Public_Component_GeoClipmapMeshComponent_h_155_RPC_WRAPPERS_NO_PURE_DECLS \
	ShaderToLandscape_Plugins_ShaderWorld_Source_ShaderWorld_Public_Component_GeoClipmapMeshComponent_h_155_INCLASS_NO_PURE_DECLS \
	ShaderToLandscape_Plugins_ShaderWorld_Source_ShaderWorld_Public_Component_GeoClipmapMeshComponent_h_155_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHADERWORLD_API UClass* StaticClass<class UGeoClipmapMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShaderToLandscape_Plugins_ShaderWorld_Source_ShaderWorld_Public_Component_GeoClipmapMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
