// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ/Public/TankComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GGJ_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
GGJ_API UClass* Z_Construct_UClass_UCharacterComponent();
GGJ_API UClass* Z_Construct_UClass_UTankComponent();
GGJ_API UClass* Z_Construct_UClass_UTankComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GGJ();
// End Cross Module References

// Begin Class UTankComponent Function Fire
struct Z_Construct_UFunction_UTankComponent_Fire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tank|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Functions to shoot and use mortar\n" },
#endif
		{ "ModuleRelativePath", "Public/TankComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Functions to shoot and use mortar" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTankComponent_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankComponent, nullptr, "Fire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTankComponent_Fire_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTankComponent_Fire_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTankComponent_Fire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTankComponent_Fire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTankComponent::execFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fire();
	P_NATIVE_END;
}
// End Class UTankComponent Function Fire

// Begin Class UTankComponent Function FireMortar
struct Z_Construct_UFunction_UTankComponent_FireMortar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tank|Firing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to fire a mortar\n" },
#endif
		{ "ModuleRelativePath", "Public/TankComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to fire a mortar" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTankComponent_FireMortar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankComponent, nullptr, "FireMortar", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTankComponent_FireMortar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTankComponent_FireMortar_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTankComponent_FireMortar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTankComponent_FireMortar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTankComponent::execFireMortar)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FireMortar();
	P_NATIVE_END;
}
// End Class UTankComponent Function FireMortar

// Begin Class UTankComponent Function HideTrajectory
struct Z_Construct_UFunction_UTankComponent_HideTrajectory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tank|Trajectory" },
		{ "ModuleRelativePath", "Public/TankComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTankComponent_HideTrajectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankComponent, nullptr, "HideTrajectory", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTankComponent_HideTrajectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTankComponent_HideTrajectory_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTankComponent_HideTrajectory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTankComponent_HideTrajectory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTankComponent::execHideTrajectory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideTrajectory();
	P_NATIVE_END;
}
// End Class UTankComponent Function HideTrajectory

// Begin Class UTankComponent Function ShowTrajectory
struct Z_Construct_UFunction_UTankComponent_ShowTrajectory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tank|Trajectory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to update trajectory\n" },
#endif
		{ "ModuleRelativePath", "Public/TankComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to update trajectory" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTankComponent_ShowTrajectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankComponent, nullptr, "ShowTrajectory", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTankComponent_ShowTrajectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTankComponent_ShowTrajectory_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTankComponent_ShowTrajectory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTankComponent_ShowTrajectory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTankComponent::execShowTrajectory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowTrajectory();
	P_NATIVE_END;
}
// End Class UTankComponent Function ShowTrajectory

// Begin Class UTankComponent
void UTankComponent::StaticRegisterNativesUTankComponent()
{
	UClass* Class = UTankComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fire", &UTankComponent::execFire },
		{ "FireMortar", &UTankComponent::execFireMortar },
		{ "HideTrajectory", &UTankComponent::execHideTrajectory },
		{ "ShowTrajectory", &UTankComponent::execShowTrajectory },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTankComponent);
UClass* Z_Construct_UClass_UTankComponent_NoRegister()
{
	return UTankComponent::StaticClass();
}
struct Z_Construct_UClass_UTankComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TankComponent.h" },
		{ "ModuleRelativePath", "Public/TankComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireCooldown_MetaData[] = {
		{ "Category", "Tank|Firing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//cd\n" },
#endif
		{ "ModuleRelativePath", "Public/TankComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "cd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireLaunchSpeed_MetaData[] = {
		{ "Category", "Tank|Mortar" },
		{ "ModuleRelativePath", "Public/TankComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackDamage_MetaData[] = {
		{ "Category", "Tank|Firing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Damage value for the normal shot\n" },
#endif
		{ "ModuleRelativePath", "Public/TankComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Damage value for the normal shot" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MortarCooldown_MetaData[] = {
		{ "Category", "Tank|Firing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//cd\n" },
#endif
		{ "ModuleRelativePath", "Public/TankComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "cd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MortarLaunchSpeed_MetaData[] = {
		{ "Category", "Tank|Mortar" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Mortar parameters\n" },
#endif
		{ "ModuleRelativePath", "Public/TankComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mortar parameters" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravityOnMortar_MetaData[] = {
		{ "Category", "Tank|Mortar" },
		{ "ModuleRelativePath", "Public/TankComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Tank|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Projectile class\n" },
#endif
		{ "ModuleRelativePath", "Public/TankComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Projectile class" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FiringPointNameRef_MetaData[] = {
		{ "Category", "Tank|Firing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Firing point reference\n" },
#endif
		{ "ModuleRelativePath", "Public/TankComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Firing point reference" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FiringMortarPointNameRef_MetaData[] = {
		{ "Category", "Tank|Firing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Firing point reference\n" },
#endif
		{ "ModuleRelativePath", "Public/TankComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Firing point reference" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireLaunchSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MortarCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MortarLaunchSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityOnMortar;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FiringPointNameRef;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FiringMortarPointNameRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTankComponent_Fire, "Fire" }, // 2817494831
		{ &Z_Construct_UFunction_UTankComponent_FireMortar, "FireMortar" }, // 2607824391
		{ &Z_Construct_UFunction_UTankComponent_HideTrajectory, "HideTrajectory" }, // 3823052894
		{ &Z_Construct_UFunction_UTankComponent_ShowTrajectory, "ShowTrajectory" }, // 3553518782
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTankComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTankComponent_Statics::NewProp_FireCooldown = { "FireCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTankComponent, FireCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireCooldown_MetaData), NewProp_FireCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTankComponent_Statics::NewProp_FireLaunchSpeed = { "FireLaunchSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTankComponent, FireLaunchSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireLaunchSpeed_MetaData), NewProp_FireLaunchSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTankComponent_Statics::NewProp_AttackDamage = { "AttackDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTankComponent, AttackDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackDamage_MetaData), NewProp_AttackDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTankComponent_Statics::NewProp_MortarCooldown = { "MortarCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTankComponent, MortarCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MortarCooldown_MetaData), NewProp_MortarCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTankComponent_Statics::NewProp_MortarLaunchSpeed = { "MortarLaunchSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTankComponent, MortarLaunchSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MortarLaunchSpeed_MetaData), NewProp_MortarLaunchSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTankComponent_Statics::NewProp_GravityOnMortar = { "GravityOnMortar", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTankComponent, GravityOnMortar), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravityOnMortar_MetaData), NewProp_GravityOnMortar_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTankComponent_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTankComponent, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTankComponent_Statics::NewProp_FiringPointNameRef = { "FiringPointNameRef", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTankComponent, FiringPointNameRef), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FiringPointNameRef_MetaData), NewProp_FiringPointNameRef_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTankComponent_Statics::NewProp_FiringMortarPointNameRef = { "FiringMortarPointNameRef", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTankComponent, FiringMortarPointNameRef), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FiringMortarPointNameRef_MetaData), NewProp_FiringMortarPointNameRef_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTankComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTankComponent_Statics::NewProp_FireCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTankComponent_Statics::NewProp_FireLaunchSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTankComponent_Statics::NewProp_AttackDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTankComponent_Statics::NewProp_MortarCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTankComponent_Statics::NewProp_MortarLaunchSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTankComponent_Statics::NewProp_GravityOnMortar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTankComponent_Statics::NewProp_ProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTankComponent_Statics::NewProp_FiringPointNameRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTankComponent_Statics::NewProp_FiringMortarPointNameRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTankComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTankComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GGJ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTankComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTankComponent_Statics::ClassParams = {
	&UTankComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTankComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTankComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTankComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTankComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTankComponent()
{
	if (!Z_Registration_Info_UClass_UTankComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTankComponent.OuterSingleton, Z_Construct_UClass_UTankComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTankComponent.OuterSingleton;
}
template<> GGJ_API UClass* StaticClass<UTankComponent>()
{
	return UTankComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTankComponent);
UTankComponent::~UTankComponent() {}
// End Class UTankComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_TankComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTankComponent, UTankComponent::StaticClass, TEXT("UTankComponent"), &Z_Registration_Info_UClass_UTankComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTankComponent), 1036828954U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_TankComponent_h_1674437151(TEXT("/Script/GGJ"),
	Z_CompiledInDeferFile_FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_TankComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_TankComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
