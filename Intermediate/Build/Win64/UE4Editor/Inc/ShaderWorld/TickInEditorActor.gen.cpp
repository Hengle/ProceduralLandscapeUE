// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShaderWorld/Public/Actor/TickInEditorActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTickInEditorActor() {}
// Cross Module References
	SHADERWORLD_API UClass* Z_Construct_UClass_ATickInEditorActor_NoRegister();
	SHADERWORLD_API UClass* Z_Construct_UClass_ATickInEditorActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ShaderWorld();
// End Cross Module References
	static FName NAME_ATickInEditorActor_Compute = FName(TEXT("Compute"));
	void ATickInEditorActor::Compute()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATickInEditorActor_Compute),NULL);
	}
	void ATickInEditorActor::StaticRegisterNativesATickInEditorActor()
	{
	}
	struct Z_Construct_UFunction_ATickInEditorActor_Compute_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATickInEditorActor_Compute_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Actor/TickInEditorActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATickInEditorActor_Compute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATickInEditorActor, nullptr, "Compute", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATickInEditorActor_Compute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATickInEditorActor_Compute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATickInEditorActor_Compute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATickInEditorActor_Compute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATickInEditorActor_NoRegister()
	{
		return ATickInEditorActor::StaticClass();
	}
	struct Z_Construct_UClass_ATickInEditorActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Trigger_MetaData[];
#endif
		static void NewProp_Trigger_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Trigger;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATickInEditorActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ShaderWorld,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATickInEditorActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATickInEditorActor_Compute, "Compute" }, // 1670143083
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATickInEditorActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/TickInEditorActor.h" },
		{ "ModuleRelativePath", "Public/Actor/TickInEditorActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATickInEditorActor_Statics::NewProp_Trigger_MetaData[] = {
		{ "Category", "Trigger" },
		{ "ModuleRelativePath", "Public/Actor/TickInEditorActor.h" },
	};
#endif
	void Z_Construct_UClass_ATickInEditorActor_Statics::NewProp_Trigger_SetBit(void* Obj)
	{
		((ATickInEditorActor*)Obj)->Trigger = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATickInEditorActor_Statics::NewProp_Trigger = { "Trigger", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATickInEditorActor), &Z_Construct_UClass_ATickInEditorActor_Statics::NewProp_Trigger_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATickInEditorActor_Statics::NewProp_Trigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATickInEditorActor_Statics::NewProp_Trigger_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATickInEditorActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATickInEditorActor_Statics::NewProp_Trigger,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATickInEditorActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATickInEditorActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATickInEditorActor_Statics::ClassParams = {
		&ATickInEditorActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATickInEditorActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATickInEditorActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATickInEditorActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATickInEditorActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATickInEditorActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATickInEditorActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATickInEditorActor, 3233891525);
	template<> SHADERWORLD_API UClass* StaticClass<ATickInEditorActor>()
	{
		return ATickInEditorActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATickInEditorActor(Z_Construct_UClass_ATickInEditorActor, &ATickInEditorActor::StaticClass, TEXT("/Script/ShaderWorld"), TEXT("ATickInEditorActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATickInEditorActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
