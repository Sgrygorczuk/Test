// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ/Public/AmbulanceComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmbulanceComponent() {}

// Begin Cross Module References
GGJ_API UClass* Z_Construct_UClass_UAmbulanceComponent();
GGJ_API UClass* Z_Construct_UClass_UAmbulanceComponent_NoRegister();
GGJ_API UClass* Z_Construct_UClass_UCharacterComponent();
UPackage* Z_Construct_UPackage__Script_GGJ();
// End Cross Module References

// Begin Class UAmbulanceComponent
void UAmbulanceComponent::StaticRegisterNativesUAmbulanceComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAmbulanceComponent);
UClass* Z_Construct_UClass_UAmbulanceComponent_NoRegister()
{
	return UAmbulanceComponent::StaticClass();
}
struct Z_Construct_UClass_UAmbulanceComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AmbulanceComponent.h" },
		{ "ModuleRelativePath", "Public/AmbulanceComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAmbulanceComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAmbulanceComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GGJ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAmbulanceComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAmbulanceComponent_Statics::ClassParams = {
	&UAmbulanceComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAmbulanceComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAmbulanceComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAmbulanceComponent()
{
	if (!Z_Registration_Info_UClass_UAmbulanceComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAmbulanceComponent.OuterSingleton, Z_Construct_UClass_UAmbulanceComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAmbulanceComponent.OuterSingleton;
}
template<> GGJ_API UClass* StaticClass<UAmbulanceComponent>()
{
	return UAmbulanceComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAmbulanceComponent);
UAmbulanceComponent::~UAmbulanceComponent() {}
// End Class UAmbulanceComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_AmbulanceComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAmbulanceComponent, UAmbulanceComponent::StaticClass, TEXT("UAmbulanceComponent"), &Z_Registration_Info_UClass_UAmbulanceComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAmbulanceComponent), 2096088409U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_AmbulanceComponent_h_1170552140(TEXT("/Script/GGJ"),
	Z_CompiledInDeferFile_FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_AmbulanceComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_AmbulanceComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
