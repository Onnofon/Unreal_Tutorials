// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObstacleAssault/RotatingPlatform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotatingPlatform() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	OBSTACLEASSAULT_API UClass* Z_Construct_UClass_ARotatingPlatform();
	OBSTACLEASSAULT_API UClass* Z_Construct_UClass_ARotatingPlatform_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ObstacleAssault();
// End Cross Module References
	void ARotatingPlatform::StaticRegisterNativesARotatingPlatform()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARotatingPlatform);
	UClass* Z_Construct_UClass_ARotatingPlatform_NoRegister()
	{
		return ARotatingPlatform::StaticClass();
	}
	struct Z_Construct_UClass_ARotatingPlatform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARotatingPlatform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ObstacleAssault,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotatingPlatform_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RotatingPlatform.h" },
		{ "ModuleRelativePath", "RotatingPlatform.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotatingPlatform_Statics::NewProp_RotationVelocity_MetaData[] = {
		{ "Category", "RotatingPlatform" },
		{ "ModuleRelativePath", "RotatingPlatform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARotatingPlatform_Statics::NewProp_RotationVelocity = { "RotationVelocity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARotatingPlatform, RotationVelocity), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ARotatingPlatform_Statics::NewProp_RotationVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingPlatform_Statics::NewProp_RotationVelocity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARotatingPlatform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotatingPlatform_Statics::NewProp_RotationVelocity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARotatingPlatform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARotatingPlatform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARotatingPlatform_Statics::ClassParams = {
		&ARotatingPlatform::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARotatingPlatform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingPlatform_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARotatingPlatform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingPlatform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARotatingPlatform()
	{
		if (!Z_Registration_Info_UClass_ARotatingPlatform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARotatingPlatform.OuterSingleton, Z_Construct_UClass_ARotatingPlatform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARotatingPlatform.OuterSingleton;
	}
	template<> OBSTACLEASSAULT_API UClass* StaticClass<ARotatingPlatform>()
	{
		return ARotatingPlatform::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARotatingPlatform);
	ARotatingPlatform::~ARotatingPlatform() {}
	struct Z_CompiledInDeferFile_FID_Users_marcu_Documents_Unreal_Projects_ObstacleAssault_Source_ObstacleAssault_RotatingPlatform_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marcu_Documents_Unreal_Projects_ObstacleAssault_Source_ObstacleAssault_RotatingPlatform_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARotatingPlatform, ARotatingPlatform::StaticClass, TEXT("ARotatingPlatform"), &Z_Registration_Info_UClass_ARotatingPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARotatingPlatform), 576236744U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marcu_Documents_Unreal_Projects_ObstacleAssault_Source_ObstacleAssault_RotatingPlatform_h_1602420304(TEXT("/Script/ObstacleAssault"),
		Z_CompiledInDeferFile_FID_Users_marcu_Documents_Unreal_Projects_ObstacleAssault_Source_ObstacleAssault_RotatingPlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marcu_Documents_Unreal_Projects_ObstacleAssault_Source_ObstacleAssault_RotatingPlatform_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
