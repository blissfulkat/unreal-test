// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yummy_food_my_tummyCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeyummy_food_my_tummyCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_yummy_food_my_tummy(ETypeConstructPhase);
YUMMY_FOOD_MY_TUMMY_API UClass* Z_Construct_UClass_Ayummy_food_my_tummyCameraManager(ETypeConstructPhase);
YUMMY_FOOD_MY_TUMMY_API UClass* Z_Construct_UClass_Ayummy_food_my_tummyCameraManager(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class Ayummy_food_my_tummyCameraManager ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_Ayummy_food_my_tummyCameraManager_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "yummy_food_my_tummyCameraManager.h" },
		{ "ModuleRelativePath", "yummy_food_my_tummyCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class Ayummy_food_my_tummyCameraManager constinit property declarations ********
// ********** End Class Ayummy_food_my_tummyCameraManager constinit property declarations **********
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Ayummy_food_my_tummyCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_APlayerCameraManager,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_yummy_food_my_tummy,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_Ayummy_food_my_tummyCameraManager,
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
	0x008002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_Ayummy_food_my_tummyCameraManager;
UClass* Z_Construct_UClass_Ayummy_food_my_tummyCameraManager(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = Ayummy_food_my_tummyCameraManager;
		if (!Z_Registration_Info_UClass_Ayummy_food_my_tummyCameraManager.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("yummy_food_my_tummyCameraManager"),
				Z_Registration_Info_UClass_Ayummy_food_my_tummyCameraManager.InnerSingleton,
				nullptr,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_Ayummy_food_my_tummyCameraManager.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_Ayummy_food_my_tummyCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Ayummy_food_my_tummyCameraManager.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_Ayummy_food_my_tummyCameraManager.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, Ayummy_food_my_tummyCameraManager);
Ayummy_food_my_tummyCameraManager::~Ayummy_food_my_tummyCameraManager() {}
// ********** End Class Ayummy_food_my_tummyCameraManager ******************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_kyler_Documents_GitHub_chiggas_work_yummy_food_my_tummy_Source_yummy_food_my_tummy_yummy_food_my_tummyCameraManager_h__Script_yummy_food_my_tummy_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Ayummy_food_my_tummyCameraManager, TEXT("Ayummy_food_my_tummyCameraManager"), &Z_Registration_Info_UClass_Ayummy_food_my_tummyCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Ayummy_food_my_tummyCameraManager), 2048698464U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kyler_Documents_GitHub_chiggas_work_yummy_food_my_tummy_Source_yummy_food_my_tummy_yummy_food_my_tummyCameraManager_h__Script_yummy_food_my_tummy_7b7b17c7400c73e8cec94360d4fb0e6e71005695{
	TEXT("/Script/yummy_food_my_tummy"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
