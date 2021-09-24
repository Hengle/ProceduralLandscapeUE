// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShaderWorld/Public/Actor/ShaderWorldBrush.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShaderWorldBrush() {}
// Cross Module References
	SHADERWORLD_API UClass* Z_Construct_UClass_AShaderWorldBrush_NoRegister();
	SHADERWORLD_API UClass* Z_Construct_UClass_AShaderWorldBrush();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ShaderWorld();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AShaderWorldBrush::execGetBrushDynamicMaterial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetBrushDynamicMaterial();
		P_NATIVE_END;
	}
	static FName NAME_AShaderWorldBrush_DoesBrushNeedRedraw = FName(TEXT("DoesBrushNeedRedraw"));
	void AShaderWorldBrush::DoesBrushNeedRedraw()
	{
		ProcessEvent(FindFunctionChecked(NAME_AShaderWorldBrush_DoesBrushNeedRedraw),NULL);
	}
	static FName NAME_AShaderWorldBrush_ResetBrush = FName(TEXT("ResetBrush"));
	void AShaderWorldBrush::ResetBrush()
	{
		ProcessEvent(FindFunctionChecked(NAME_AShaderWorldBrush_ResetBrush),NULL);
	}
	void AShaderWorldBrush::StaticRegisterNativesAShaderWorldBrush()
	{
		UClass* Class = AShaderWorldBrush::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBrushDynamicMaterial", &AShaderWorldBrush::execGetBrushDynamicMaterial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShaderWorldBrush_DoesBrushNeedRedraw_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShaderWorldBrush_DoesBrushNeedRedraw_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Events" },
		{ "Comment", "/**\n\x09* If your brush is using blueprint code, you can implement this method in blueprint to determine if 'RedrawNeed' should be set to true or not\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/ShaderWorldBrush.h" },
		{ "ToolTip", "If your brush is using blueprint code, you can implement this method in blueprint to determine if 'RedrawNeed' should be set to true or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShaderWorldBrush_DoesBrushNeedRedraw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShaderWorldBrush, nullptr, "DoesBrushNeedRedraw", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShaderWorldBrush_DoesBrushNeedRedraw_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShaderWorldBrush_DoesBrushNeedRedraw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShaderWorldBrush_DoesBrushNeedRedraw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShaderWorldBrush_DoesBrushNeedRedraw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShaderWorldBrush_GetBrushDynamicMaterial_Statics
	{
		struct ShaderWorldBrush_eventGetBrushDynamicMaterial_Parms
		{
			UMaterialInstanceDynamic* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShaderWorldBrush_GetBrushDynamicMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShaderWorldBrush_eventGetBrushDynamicMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShaderWorldBrush_GetBrushDynamicMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShaderWorldBrush_GetBrushDynamicMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShaderWorldBrush_GetBrushDynamicMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "WorldData" },
		{ "Comment", "/**\n\x09* Can be nullptr\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actor/ShaderWorldBrush.h" },
		{ "ToolTip", "Can be nullptr" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShaderWorldBrush_GetBrushDynamicMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShaderWorldBrush, nullptr, "GetBrushDynamicMaterial", nullptr, nullptr, sizeof(ShaderWorldBrush_eventGetBrushDynamicMaterial_Parms), Z_Construct_UFunction_AShaderWorldBrush_GetBrushDynamicMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShaderWorldBrush_GetBrushDynamicMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShaderWorldBrush_GetBrushDynamicMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShaderWorldBrush_GetBrushDynamicMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShaderWorldBrush_GetBrushDynamicMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShaderWorldBrush_GetBrushDynamicMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShaderWorldBrush_ResetBrush_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShaderWorldBrush_ResetBrush_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Actor/ShaderWorldBrush.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShaderWorldBrush_ResetBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShaderWorldBrush, nullptr, "ResetBrush", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShaderWorldBrush_ResetBrush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShaderWorldBrush_ResetBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShaderWorldBrush_ResetBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShaderWorldBrush_ResetBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AShaderWorldBrush_NoRegister()
	{
		return AShaderWorldBrush::StaticClass();
	}
	struct Z_Construct_UClass_AShaderWorldBrush_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxBound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxBound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RedrawNeed_MetaData[];
#endif
		static void NewProp_RedrawNeed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RedrawNeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BrushMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushMaterialDyn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BrushMaterialDyn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShaderWorldBrush_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ShaderWorld,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AShaderWorldBrush_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShaderWorldBrush_DoesBrushNeedRedraw, "DoesBrushNeedRedraw" }, // 1980999831
		{ &Z_Construct_UFunction_AShaderWorldBrush_GetBrushDynamicMaterial, "GetBrushDynamicMaterial" }, // 1495476253
		{ &Z_Construct_UFunction_AShaderWorldBrush_ResetBrush, "ResetBrush" }, // 669300707
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShaderWorldBrush_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Input Actor Game LOD Replication Cooking" },
		{ "IncludePath", "Actor/ShaderWorldBrush.h" },
		{ "ModuleRelativePath", "Public/Actor/ShaderWorldBrush.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShaderWorldBrush_Statics::NewProp_BoxBound_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/ShaderWorldBrush.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShaderWorldBrush_Statics::NewProp_BoxBound = { "BoxBound", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShaderWorldBrush, BoxBound), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShaderWorldBrush_Statics::NewProp_BoxBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShaderWorldBrush_Statics::NewProp_BoxBound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShaderWorldBrush_Statics::NewProp_RedrawNeed_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Actor/ShaderWorldBrush.h" },
	};
#endif
	void Z_Construct_UClass_AShaderWorldBrush_Statics::NewProp_RedrawNeed_SetBit(void* Obj)
	{
		((AShaderWorldBrush*)Obj)->RedrawNeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShaderWorldBrush_Statics::NewProp_RedrawNeed = { "RedrawNeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShaderWorldBrush), &Z_Construct_UClass_AShaderWorldBrush_Statics::NewProp_RedrawNeed_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShaderWorldBrush_Statics::NewProp_RedrawNeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShaderWorldBrush_Statics::NewProp_RedrawNeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShaderWorldBrush_Statics::NewProp_BrushMaterial_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Actor/ShaderWorldBrush.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShaderWorldBrush_Statics::NewProp_BrushMaterial = { "BrushMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShaderWorldBrush, BrushMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShaderWorldBrush_Statics::NewProp_BrushMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShaderWorldBrush_Statics::NewProp_BrushMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShaderWorldBrush_Statics::NewProp_BrushMaterialDyn_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/ShaderWorldBrush.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShaderWorldBrush_Statics::NewProp_BrushMaterialDyn = { "BrushMaterialDyn", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShaderWorldBrush, BrushMaterialDyn), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShaderWorldBrush_Statics::NewProp_BrushMaterialDyn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShaderWorldBrush_Statics::NewProp_BrushMaterialDyn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShaderWorldBrush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShaderWorldBrush_Statics::NewProp_BoxBound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShaderWorldBrush_Statics::NewProp_RedrawNeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShaderWorldBrush_Statics::NewProp_BrushMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShaderWorldBrush_Statics::NewProp_BrushMaterialDyn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShaderWorldBrush_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShaderWorldBrush>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShaderWorldBrush_Statics::ClassParams = {
		&AShaderWorldBrush::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AShaderWorldBrush_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AShaderWorldBrush_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShaderWorldBrush_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShaderWorldBrush_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShaderWorldBrush()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShaderWorldBrush_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShaderWorldBrush, 788930434);
	template<> SHADERWORLD_API UClass* StaticClass<AShaderWorldBrush>()
	{
		return AShaderWorldBrush::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShaderWorldBrush(Z_Construct_UClass_AShaderWorldBrush, &AShaderWorldBrush::StaticClass, TEXT("/Script/ShaderWorld"), TEXT("AShaderWorldBrush"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShaderWorldBrush);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
