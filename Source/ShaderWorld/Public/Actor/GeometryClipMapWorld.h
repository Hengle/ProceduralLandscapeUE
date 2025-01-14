//Copyright Maxime Dupart 2021  https://twitter.com/Max_Dupt

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ConvexVolume.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "GeometryClipMapWorld.generated.h"

class UShaderWorldCollisionComponent;
class UMaterialInterface;
class UMaterialInstanceDynamic;
class UTextureRenderTarget2D;
class UStaticMesh;
class UGeoClipmapMeshComponent;
class UInstancedStaticMeshComponent;
class UMaterialParameterCollection;
class UTextureRenderTarget2DArray;
class AShaderWorldBrushManager;
struct FBox2D;

static int ShaderWorldDebug = 0;



UENUM(BlueprintType)
enum class EWorldPresentation : uint8
{
	Smooth UMETA(DisplayName = "Triangle Based Terrain"),
	InstancedMesh UMETA(DisplayName = "InstancedMesh Shaped"),
};

/**
* Configuration of a parent Clipmap Ring, given his child relative position*
*/
UENUM()
enum class EClipMapInteriorConfig : uint8
{
	BotLeft UMETA(DisplayName = "BotLeft"),
	TopLeft UMETA(DisplayName = "TopLeft"),
	BotRight UMETA(DisplayName = "BotRight"),
	TopRight UMETA(DisplayName = "TopRight"),
	NotVisible UMETA(DisplayName = "NotVisible"),
};

UENUM()
enum class EGeoRenderingAPI : uint8
{
	DX11 UMETA(DisplayName = "DX11"),
	DX12 UMETA(DisplayName = "DX12"),
	OpenGL UMETA(DisplayName = "OpenGL"),
	Vulkan UMETA(DisplayName = "Vulkan"),
	Metal UMETA(DisplayName = "Metal"),
};

/**
* Number of vertices per side for a given Clipmap ring
*
*/
UENUM(BlueprintType)
enum class ENValue : uint8
{
	N2047 UMETA(DisplayName = "2047"),
	N1023 UMETA(DisplayName = "1023"),
	N511 UMETA(DisplayName = "511"),
	N255 UMETA(DisplayName = "255"),
	N127 UMETA(DisplayName = "127"),
	N63 UMETA(DisplayName = "63"),
	N31 UMETA(DisplayName = "31"),
	N15 UMETA(DisplayName = "15"),
};

/**
* Selection of Spawnable type. Either we using hierarchical instanced mesh on a given set of Static Meshes, 
* or we simply spawn actors of the given class
*/
UENUM(BlueprintType)
enum class ESpawnableType : uint8
{
	Mesh UMETA(DisplayName = "Spawn instanced Meshes"),
	Actor UMETA(DisplayName = "Spawn Actors"),
};

/**
* A ring Element, support either a procedural grid mesh, or a set of instanced meshes
* 
*/
USTRUCT()
struct FClipMapMeshElement
{
	GENERATED_BODY()

	UPROPERTY(Transient)
		UGeoClipmapMeshComponent* Mesh = nullptr;
	
	UPROPERTY(Transient)
		UInstancedStaticMeshComponent* I_Mesh = nullptr;

	/**
	* Each clipmap ring has its own real world distance between vertices represented by GridSpacing value	
	*/
	UPROPERTY(Transient)
		float GridSpacing = 1.f;

	/**
	* Level	0 is the largest ring , levels are scaling inversed proportionality to LODs
	*/
	UPROPERTY(Transient)
		int Level = 0;

	/**
	* Center of the ring
	*/
	UPROPERTY(Transient)
		FVector Location = FVector(0.f,0.f,0.f);

	/**
	* GeoClipmap L-shape configuration, to compensate for child clipmap offset
	*/
	UPROPERTY(Transient)
		EClipMapInteriorConfig Config = EClipMapInteriorConfig::BotLeft;
	/**
	* Material applied to the ring, keeping a ptr to update its "RingLocation" parameter
	*/
	UPROPERTY(Transient)
		UMaterialInstanceDynamic* MatDyn=nullptr;

	/**
	* If using cache, keeping a ptr to this ring Heightmap
	*/
	UPROPERTY(Transient)
		UTextureRenderTarget2D* HeightMap = nullptr;
	/**
	* If using cache, keeping a ptr to this ring Normalmap
	*/
	UPROPERTY(Transient)
		UTextureRenderTarget2D* NormalMap = nullptr;

	/**
	* This material is responsible for generating the cache, updating the Heightmap Render target
	* keeping a ptr to update its "RingLocation" parameter
	*/
	UPROPERTY(Transient)
		UMaterialInstanceDynamic* CacheMatDyn = nullptr;

	/**
	* This material is responsible for generating the cache, updating the Normalmap Render target
	*/
	UPROPERTY(Transient)
		UMaterialInstanceDynamic* CacheNormalMatDyn = nullptr;

	/**
	* Validated layers names for this ring (layers with no name or no material defined were skipped at initialization)
	*/
	UPROPERTY(Transient)
		TArray<FName> LandLayers_names;
	/**
	* Validated layers Render targets
	*/
	UPROPERTY(Transient)
		TArray<UTextureRenderTarget2D*> LandLayers;
	/**
	* Validated layers Material to generate the given layer, keeping a ptr to update its "RingLocation" parameter
	*/
	UPROPERTY(Transient)
		TArray<UMaterialInstanceDynamic*> LayerMatDyn;

	/**
	* When binding two worlds together (land and ocean), keeping a pointer to the last heightmap we read from the Source world
	* if we're updating a ring with new Source data but the heightmap ptr is identical, we're just updating the "Ext_RingLocation" in the ring material (MatDyn)
	* instead of updating the external heightmap, normalmap, gridscaling, etc... necessary for generating UVs from world coordinate for this external Heightmap/Normalmap
	*/
	UPROPERTY(Transient)
		UTextureRenderTarget2D* HeightMapFromLastSourceElement = nullptr;

	
	/**
	* Instead of directly using 'Issectionvisible' we're using a simple array of visibility to allow the Instanced Mesh Ground workflow as well.
	*/
	UPROPERTY(Transient)
	TArray<bool> SectionVisibility;

	bool IsSectionVisible(int SectionID);
	void SetSectionVisible(int SectionID,bool NewVisibility);
};

USTRUCT(BlueprintType)
struct FClipMapLayer
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
		FString LayerName = "LayerName";
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawnables")
		UMaterialInterface* MaterialToGenerateLayer = nullptr;
};

USTRUCT()
struct FCollisionMeshElement
{
	GENERATED_BODY()

	/**
	* Collisions are handled by a set of traditional procedural meshes, masked to the viewer
	*/
	UPROPERTY(Transient)
		UShaderWorldCollisionComponent* Mesh = nullptr;
	/**
	* The Collision rendertarget holding the computed height data for a given vertice
	*/
	UPROPERTY(Transient)
		UTextureRenderTarget2D* CollisionRT = nullptr;
	
	UPROPERTY(Transient)
		UMaterialInstanceDynamic* DynCollisionCompute = nullptr;

	/**
	* Location of the collision patch
	*/
	UPROPERTY(Transient)
		FVector Location = FVector(0.f,0.f,0.f);
	/**
	* IDs are indexes within the collision mesh pool
	*/
	UPROPERTY(Transient)
		int ID = -1;
	/**
	* Stores the read back data computed from the AGeometryClipMapWorld::CollisionMat_HeightRead applied to CollisionRT
	*/
	UPROPERTY(Transient)
	TArray<FColor> HeightData;

};

/**
* Just a simple struct to nest indexes within a TArray, each Mesh/Actor variety has its own index
*/
USTRUCT()
struct FInstanceIndexes
{
	GENERATED_BODY()

		UPROPERTY(Transient)
		TArray<int> InstancesIndexes;
};

USTRUCT()
struct FSpawnableMeshProximityCollisionElement
{
	GENERATED_BODY()

	/**
	* We're computing assets transforms within a grid around the view point, that could be interpreted has the 
	*/
	UPROPERTY(Transient)
		FVector Location = FVector(0.f,0.f,0.f);
	/**
	* IDs are indexes within the mesh Collision element pool
	*/
	UPROPERTY(Transient)
		int ID = -1;

	UPROPERTY(Transient)
		TArray<FInstanceIndexes> InstancesIndexes;

	/**
	* Index Offset for each Mesh/actor variety computed on this element within the owning FSpawnableMesh HIM_Mesh/Spawned_Actors
	*/
	UPROPERTY(Transient)
		TArray<int> InstanceOffset;
};

/**
* This is a computation grid element for Spawnables, managed by FSpawnableMesh
*/
USTRUCT()
struct FSpawnableMeshElement
{
	GENERATED_BODY()

	UPROPERTY(Transient)
		bool ComputeLaunched = false;

	UPROPERTY(Transient)
		UTextureRenderTarget2D* LocationX = nullptr;
	UPROPERTY(Transient)
		UTextureRenderTarget2D* LocationY = nullptr;
	UPROPERTY(Transient)
		UTextureRenderTarget2D* LocationZ = nullptr;
	UPROPERTY(Transient)
		UTextureRenderTarget2D* Rotation = nullptr;
	UPROPERTY(Transient)
		UTextureRenderTarget2D* Scale = nullptr;

	/**
	* Dynamic material used to computed the assets transforms
	*/
	UPROPERTY(Transient)
		UMaterialInstanceDynamic* ComputeSpawnTransformDyn = nullptr;

	/**
	* We're computing assets transforms within a grid around the view point, that could be interpreted has the 
	*/
	UPROPERTY(Transient)
		FVector Location = FVector(0.f,0.f,0.f);
	/**
	* IDs are indexes within the mesh element pool
	*/
	UPROPERTY(Transient)
		int ID = -1;

	UPROPERTY(Transient)
		int LOD_usedLastUpdate = -1;

	UPROPERTY(Transient)
		TArray<FColor> LocationXData;
	UPROPERTY(Transient)
		TArray<FColor> LocationYData;
	UPROPERTY(Transient)
		TArray<FColor> LocationZData;	
	UPROPERTY(Transient)
		TArray<FColor> RotationData;	
	/**
	* Only used on device lacking alpha composite | We stick to this relatively user friendly approach of materials/material function instead of diving into global shaders
	*/
	UPROPERTY(Transient)
		TArray<FColor> ScaleData;
	

	TArray<TArray<FTransform>> InstancesT;

	UPROPERTY(Transient)
		TArray<FInstanceIndexes> InstancesIndexes;

	/**
	* Index Offset for each Mesh/actor variety computed on this element within the owning FSpawnableMesh HIM_Mesh/Spawned_Actors
	*/
	UPROPERTY(Transient)
		TArray<int> InstanceOffset;


	UPROPERTY(Transient)
		int Collision_Mesh_ID = -1;
};

class AGeometryClipMapWorld;

/**
* Hold the ptr to each spawned actors, elements can be nullptr if a spawning wasn't necessary
*/
USTRUCT()
struct FSpawnedActorList
{
	GENERATED_BODY()

		UPROPERTY(Transient)
		TArray<AActor*> SpawnedActors;
};

/**
* The spawnable system is tied to the cache system, if cache is disabled, no asset will be spawned
*/
USTRUCT(BlueprintType)
struct FSpawnableMesh
{
	GENERATED_BODY()

	/**
	* Spawn instanced meshes or actors
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MeshToSpawn")
	ESpawnableType SpawnType = ESpawnableType::Mesh;

	/**
	* Could spawn actor on hit, and put scale to zero. But don't remove/add item manually otherwise it'll corrupt our local book keeping  
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MeshToSpawn",meta = (EditCondition = "SpawnType==ESpawnableType::Mesh"))
	TSubclassOf<UHierarchicalInstancedStaticMeshComponent> FoliageComponent = UHierarchicalInstancedStaticMeshComponent::StaticClass();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MeshToSpawn",meta = (EditCondition = "SpawnType==ESpawnableType::Mesh"))
		bool CollisionEnabled = false;
	/**
	* Relevant only if CollisionEnabled and Region Per Quadrant Side >1
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MeshToSpawn", meta = (EditCondition = "CollisionEnabled && NumberRegionPerQuadrantSide>1"))
		bool CollisionOnlyAtProximity = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MeshToSpawn",meta = (EditCondition = "SpawnType==ESpawnableType::Mesh"))
		bool CastShadows = true;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MeshToSpawn",meta = (EditCondition = "SpawnType==ESpawnableType::Mesh"))
		TArray<UStaticMesh*> Mesh;	

	/**
	* Class of actors to spawn
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MeshToSpawn",meta = (EditCondition = "SpawnType==ESpawnableType::Actor"))
		TArray<TSubclassOf<AActor>> Actors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MeshToSpawn")
		float AlignMaxAngle = 90.f;

	UPROPERTY(EditAnywhere, Category = "MeshToSpawn")
		FFloatInterval AltitudeRange = FFloatInterval(-10000000.f,10000000.f);
	UPROPERTY(EditAnywhere, Category = "MeshToSpawn")
		FFloatInterval VerticalOffsetRange = FFloatInterval(0.f, 0.f);

	UPROPERTY(EditAnywhere, Category = "MeshToSpawn")
		FFloatInterval ScaleRange = FFloatInterval(.75f,1.25f);

	UPROPERTY(EditAnywhere, Category = "MeshToSpawn")
		FFloatInterval GroundSlopeAngle = FFloatInterval(0.f, 45.f);
	/**
	 * The distance where instances will begin to fade out if using a PerInstanceFadeAmount material node. 0 disables.
	 * When the entire cluster is beyond this distance, the cluster is completely culled and not rendered at all.
	 */
	UPROPERTY(EditAnywhere, Category="MeshToSpawn", meta=(UIMin=0))
	FInt32Interval CullDistance = FInt32Interval(0,0);

	/** Controls whether the foliage should inject light into the Light Propagation Volume.  This flag is only used if CastShadow is true. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MeshToSpawn", meta = (EditCondition = "CastShadows"))
		uint32 bAffectDynamicIndirectLighting : 1;

	/** Controls whether the primitive should affect dynamic distance field lighting methods.  This flag is only used if CastShadow is true. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MeshToSpawn", meta = (EditCondition = "CastShadows"))
		uint32 bAffectDistanceFieldLighting : 1;

	/** Whether this foliage should cast dynamic shadows as if it were a two sided material. */
	UPROPERTY(EditAnywhere, AdvancedDisplay, BlueprintReadOnly,Category = "MeshToSpawn", meta = (EditCondition = "CastShadows"))
		uint32 bCastShadowAsTwoSided : 1;

	/** Whether the foliage receives decals. */
	UPROPERTY(EditAnywhere, AdvancedDisplay, BlueprintReadOnly, Category = "MeshToSpawn")
		uint32 bReceivesDecals : 1;

	UPROPERTY(Transient)
		TArray<UHierarchicalInstancedStaticMeshComponent*> HIM_Mesh;

	/** If we want collision we'll spawn asset here */
	UPROPERTY(Transient)
		TArray<UHierarchicalInstancedStaticMeshComponent*> HIM_Mesh_Collision_enabled;


	UPROPERTY(Transient)
		TArray<FSpawnedActorList> Spawned_Actors;

	/**
	* Filtered list of valid asset classes to spawn
	*/
	UPROPERTY(Transient)
		TArray<TSubclassOf<AActor>> Actors_Validated;

	UPROPERTY(Transient)
		TArray<int> InstanceIndexToHIMIndex;
	UPROPERTY(Transient)
		TArray<int> NumInstancePerHIM;
	UPROPERTY(Transient)
		TArray<int> InstanceIndexToIndexForHIM;

	UPROPERTY(Transient)
		AGeometryClipMapWorld* Owner = nullptr;

	/**
	* How many instances are we computing per computed grid ?
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MeshToSpawn")
		int NumberOfInstanceToComputePerRegion = 65;
	/**
	* What are the world dimension of a grid side size? In Unreal Engine unity/cm.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MeshToSpawn")
		float RegionWorldDimensionMeters = 64.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MeshToSpawn",meta=(UIMin = 1, UIMax = 20, ClampMin = 1, ClampMax = 20))
		int NumberRegionPerQuadrantSide = 3;
	
	/**
	* Given specified information this is the dimension of the rendertarget that will be used to store the computed assets.
	*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MeshToSpawn")
		int RT_Dim = 30;
	/**
	* The lower, the more precise we can refine the position, the lower it is, the more expensive it is.
	*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MeshToSpawn")
		int PositionCanBeAdjustedWithLOD = 30;

	UPROPERTY(Transient)
		FVector ExtentOfMeshElement = FVector(0.f,0.f,0.f);

	//////////////////////////////////////////////////////////////////////////////////
	// GENERAL PURPOSE COMPUTE GRID
	/**
	* Pool of Computed grid
	*/
	UPROPERTY(Transient)
		TArray<FSpawnableMeshElement> SpawnablesElem;

	UPROPERTY(Transient)
		TArray<int> AvailableSpawnablesElem;
	UPROPERTY(Transient)
		TArray<int> UsedSpawnablesElem;
	UPROPERTY(Transient)
		TArray<int> SpawnablesElemReadToProcess;
	UPROPERTY(Transient)
		TArray<int> SpawnablesElemNeedCollisionUpdate;
	/**
	* A map holding the compute grid elements location and IDs
	*/
	UPROPERTY(Transient)
		TMap<FIntVector, int > SpawnablesLayout;

	//////////////////////////////////////////////////////////////////////////////////
	// PROXIMITY COLLISION ONLY
	/**
	* Pool of Proximity collision
	*/
	UPROPERTY(Transient)
		TArray<FSpawnableMeshProximityCollisionElement> SpawnablesCollisionElem;
	UPROPERTY(Transient)
		TArray<int> AvailableSpawnablesCollisionElem;
	UPROPERTY(Transient)
		TArray<int> UsedSpawnablesCollisionElem;
	/**
	* A map holding the Proximity Collision Layout
	*/
	UPROPERTY(Transient)
		TMap<FIntVector, int > SpawnablesCollisionLayout;
	//////////////////////////////////////////////////////////////////////////////////

	/**
	* This spawnable element is tied to a specific clipmap ring defined by the surface around the player we're computing asset for.
	* Asset computed near the player will be tied to lower LODs/(higher level) clipmap ring.
	* If those rings are not visible, the assets won't be neither/ not computed.
	*/
	UPROPERTY(Transient)
		int IndexOfClipMapForCompute = -1;

	/**
	* Used only if this spawnable wants to use custom density logic to be spawned, it can use the landscape heightmap, normalmap and all its layers
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawnables")
		UMaterialInterface* CustomSpawnablesMat = nullptr;

	FSpawnableMeshElement& GetASpawnableElem();
	FSpawnableMeshProximityCollisionElement& GetASpawnableCollisionElem();

	void ReleaseSpawnableElem(int ID);

	void UpdateSpawnableData(FSpawnableMeshElement& MeshElem );

	void Initiate(AGeometryClipMapWorld* Owner_);

	void SpawnCollisionEnabled_HISM(TArray<TArray<FTransform>>& Transforms);

	void CleanUp();

	~FSpawnableMesh();
};

UCLASS(hideCategories(Collision,Rendering, Input,Actor, Game, LOD, Replication, Cooking))
class SHADERWORLD_API AGeometryClipMapWorld : public AActor
{
	GENERATED_UCLASS_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGeometryClipMapWorld();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:


#if WITH_EDITOR

	bool ShouldTickIfViewportsOnly() const override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;

#endif

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Brush Manager (Optional)",meta = (EditCondition = "EnableCaching"))
	AShaderWorldBrushManager* BrushManager = nullptr;
	
	UPROPERTY(Transient)
		EGeoRenderingAPI RendererAPI = EGeoRenderingAPI::DX11;

	UPROPERTY(Transient)
	FString RHIString="";
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Settings",meta=(UIMin = 1.0, UIMax = 120.0, ClampMin = 1.f, ClampMax = 120.0f))
		float UpdateRatePerSecond = 20.0f;

	UPROPERTY(Transient)
		float TimeAcu = 0.0f;	

	UPROPERTY(Transient)
		float BrushManagerAskRedraw = false;
	UPROPERTY(Transient)
		FBox2D BrushManagerRedrawScope;
	UPROPERTY(Transient)
		float UncompleteBrushSpawnableUpdate = false;

	/**
	* You can generated an ocean not requiring collisions
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Settings")
		bool GenerateCollision = false;

	/*If defining a static landscape, cache the landscape computation instead of computing it each frame*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Settings")
		bool EnableCaching = false;

	/**
	* Define the cache resolution
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Settings",meta = (EditCondition = "EnableCaching",UIMin = 1, UIMax = 10, ClampMin = 1, ClampMax = 10))
		int ClipMapCacheIntraVerticesTexel = 2;
	/**
	* LOD above will double their ClipMapCacheIntraVerticesTexel, use to compensate visible artefact in the distance when using cache.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Settings",meta = (EditCondition = "EnableCaching",UIMin = 1, UIMax = 15, ClampMin = 1, ClampMax = 15))
		int LOD_above_doubleCacheResolution = 15;
	/**
	* Indicated the total memory budget allocated by the rendertargets, including the spawnables and collisions
	*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "World Settings")
		float RendertargetMemoryBudgetMB = 0;
	/**
	* Hard rebuild of the world
	*/
	UPROPERTY(Transient,EditAnywhere, BlueprintReadWrite, Category = "World Settings")
		bool rebuild = false;
	/**
	* Hard rebuild of the vegetation
	*/
	UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite, Category = "Spawnables")
		bool rebuildVegetationOnly = false;

	/**
	* Level 0 / Highest LOD World dimensions per side in meters
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Settings")
		int WorldDimensionMeters = 12700;
	/**
	* Translate WorldDimensionMeters to intra vertices dimension for Level 0 / Highest LOD
	*/
	UPROPERTY(Transient)
		int GridSpacing = 5000;

	/**
	* Currently supporting 511/255/127/63/31/15
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Settings")
		ENValue VerticePerPatch = ENValue::N511;

	UPROPERTY(Transient)
		int N = 511;
	
	/**
	* Number of LODs to compute
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Settings",meta = (UIMin = 1, UIMax = 16, ClampMin = 1, ClampMax = 16))
		int LOD_Num = 8;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "World Settings")
		TArray<int32> LODs_DimensionsMeters;

	/**
	 * To counter CPU culling we're scaterring the actual ring clipmaps vertices vertically
	 * Ocean should work with this parameter close to 0.f
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ClipMap Hack Culling",meta=(UIMin = 0.0, UIMax = 4000.0, ClampMin = 0.f, ClampMax = 4000.0f))
		float VerticalRangeMeters = 0.f;

	/**
	* Material applied when Cache is disabled: Ocean/Land world is computed each frame during vertex shader stage
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Settings")
		UMaterialInterface* RuntimeMaterial = nullptr;
	/**
	* Material applied when Cache is enabled: Ocean/Land world is Height/Normals are read from the cache
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Settings")
		UMaterialInterface* CachedMaterial = nullptr;

	UPROPERTY(Transient)
		UMaterialInstanceDynamic* MatDyn = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Settings",meta = (EditCondition = "EnableCaching"))
		UMaterialInterface* ComputeCacheHeightmap = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Settings",meta = (EditCondition = "EnableCaching"))
		UMaterialInterface* ComputeCacheNormal = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Settings")
		TArray<FClipMapLayer> LandDataLayers;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Collision")
		bool CollisionVisible = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Collision")
		int CollisionMeshPerQuadrantAroundPlayer = 3;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Collision")
		int CollisionMeshVerticeNumber = 65;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Collision")
		float CollisionMeshWorldDimension = 6400.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Collision")
		UMaterialInterface* CollisionMat = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Collision")
		UMaterialInterface* ComputeCollision = nullptr;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawnables")
		TArray<FSpawnableMesh> Spawnables;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawnables")
		UMaterialInterface* SpawnablesMat = nullptr;

	UPROPERTY(Transient)
		TArray<int> SortedSpawnables;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawnables")
		int DrawCallBudget_Spawnables = 3;

	/**
	* Can we use the opacity when storing data ?
	* i.e. Windows DX11/DX12 supports AlphaComposite, but Android OpenGL do not, Metal device might not
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Capabilities")
		bool AlphaCompositeSupported = true;
	UPROPERTY(Transient)
		bool AlphaComposite = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Experimental WorldPresentation")
		EWorldPresentation WorldPresentation = EWorldPresentation::Smooth;
	/*Relevant Only if using InstancedMesh representation*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Experimental WorldPresentation")
	UStaticMesh* VisualRepresentation = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Experimental WorldPresentation")
		UMaterialInterface* Material_InstancedMeshRepresentation = nullptr;

	//////////////////////////////////////////
// Data sharing

/*Allow other actors to access the landscape data, i.e ocean getting landscape heightmap*/
	UFUNCTION(BlueprintCallable, Category = "WorldData")
		FVector Get_LOD_RingLocation(int LOD);

	UFUNCTION(BlueprintCallable, Category = "WorldData")
		UTextureRenderTarget2D* Get_LOD_HeightMap(int LOD);
	UFUNCTION(BlueprintCallable, Category = "WorldData")
		UTextureRenderTarget2D* Get_LOD_NormalMap(int LOD);
	UFUNCTION(BlueprintCallable, Category = "WorldData")
		float Get_LOD_Dimension(int LOD);

	/*Send our data updates TO those other world*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dependencies")
		AGeometryClipMapWorld* DataReceiver = nullptr;

	/*Receive data updates FROM those other world*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dependencies")
		AGeometryClipMapWorld* DataSource = nullptr;

	/*A ring of LOD 5 in receiver will use the LOD 5 + LOD_Offset_FromReceiverToSource of source*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dependencies")
		int LOD_Offset_FromReceiverToSource = 0;

	/*Update Data that will not change regularly: ring dimensions, vertices number,...*/
	void UpdateStaticDataFor(AGeometryClipMapWorld* Source_);
	/*Update Location */
	void ReceiveExternalDataUpdate(AGeometryClipMapWorld* Source, int LOD_, FVector NewLocation);


	//////////////////////////////////////////

	int GetMeshNum(){return Meshes.Num();};
	FClipMapMeshElement& GetMesh(int i){return Meshes[i];};

	FBox2D GetHighestLOD_FootPrint();
	bool HighestLOD_Visible();

	FVector GetCameraLocation(){return CamLocation;};

protected:

	UPROPERTY(Transient)
		TArray<FClipMapMeshElement> Meshes;

	UPROPERTY(Transient)
		TArray<FCollisionMeshElement> CollisionMesh;	
	UPROPERTY(Transient)
		TArray<int> AvailableCollisionMesh;
	UPROPERTY(Transient)
		TArray<int> UsedCollisionMesh;

	UPROPERTY(Transient)
		TArray<int> CollisionReadToProcess;

	UPROPERTY(Transient)
		TMap<FIntVector,FCollisionMeshElement> GroundCollisionLayout;

	FCollisionMeshElement& GetACollisionMesh();
	void ReleaseCollisionMesh(int ID);

	bool Setup();
	void UpdateRenderAPI();
	void InitiateWorld();
	void Merge_SortList(TArray<int>& SourceList);
	void SortSpawnabledBySurface();
	bool UpdateSpawnable(int indice, bool MustBeInFrustum);
	void SetN();
	void IncrementSpawnableDrawCounter();
	void CreateGridMeshWelded(int LOD, int32 NumX, int32 NumY, TArray<int32>& Triangles, TArray<FVector>& Vertices, TArray<FVector2D>& UVs, TArray<FVector2D>& UV1s, TArray<FVector2D>& UV2s, float& GridSpacing, FVector& Offset, uint8 StitchProfil);
	void UpdateViewFrustum();
	void UpdateCameraLocation();
	float HeightToClosestCollisionMesh();
	void UpdateClipMap();
	void UpdateCollisionMesh();
	void UpdateSpawnables();
	bool CanUpdateSpawnables();

	double GetHeightFromGPURead(FColor& ReadLoc,int16& MaterialIndice);
	void ProcessCollisionsPending();
	double ComputeWorldHeightAt(FVector WorldLocation);
	void UpdateCollisionMeshData(FCollisionMeshElement& Mesh );

	FTransform GetLocalTransformOfSpawnable(const FVector& CompLoc, FColor& LocX, FColor& LocY, FColor& LocZ, FColor& Rot,FColor& Scale);
	void ProcessSpawnablePending();

	EClipMapInteriorConfig RelativeLocationToParentInnerMeshConfig(FVector RelativeLocation);

	void UpdateParentInnerMesh(int ChildLevel, EClipMapInteriorConfig NewConfig);
	FVector CamLocation;

	FRenderCommandFence RTUpdate;
	FConvexVolume ViewFrustum;

	bool GenerateCollision_last = false;
	float VerticalRangeMeters_last = 0.f;
	bool Caching_last=false;

	int DrawCall_Spawnables_count = 0;
	int Spawnable_Stopped_indice=-1;
	

};
