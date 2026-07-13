// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeyummy_food_my_tummy_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
	YUMMY_FOOD_MY_TUMMY_API UFunction* Z_Construct_UDelegateFunction_yummy_food_my_tummy_BulletCountUpdatedDelegate__DelegateSignature(ETypeConstructPhase);
	YUMMY_FOOD_MY_TUMMY_API UFunction* Z_Construct_UDelegateFunction_yummy_food_my_tummy_DamagedDelegate__DelegateSignature(ETypeConstructPhase);
	YUMMY_FOOD_MY_TUMMY_API UFunction* Z_Construct_UDelegateFunction_yummy_food_my_tummy_PawnDeathDelegate__DelegateSignature(ETypeConstructPhase);
	YUMMY_FOOD_MY_TUMMY_API UFunction* Z_Construct_UDelegateFunction_yummy_food_my_tummy_SprintStateChangedDelegate__DelegateSignature(ETypeConstructPhase);
	YUMMY_FOOD_MY_TUMMY_API UFunction* Z_Construct_UDelegateFunction_yummy_food_my_tummy_UpdateSprintMeterDelegate__DelegateSignature(ETypeConstructPhase);
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_yummy_food_my_tummy;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_yummy_food_my_tummy(ETypeConstructPhase)
	{
		if (!Z_Registration_Info_UPackage__Script_yummy_food_my_tummy.OuterSingleton)
		{
		static FTypeConstructFunc* SingletonFuncArray[] = {
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_yummy_food_my_tummy_BulletCountUpdatedDelegate__DelegateSignature,
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_yummy_food_my_tummy_DamagedDelegate__DelegateSignature,
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_yummy_food_my_tummy_PawnDeathDelegate__DelegateSignature,
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_yummy_food_my_tummy_SprintStateChangedDelegate__DelegateSignature,
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_yummy_food_my_tummy_UpdateSprintMeterDelegate__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/yummy_food_my_tummy",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0xA2BB71C1,
			0xBD2BC857,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_yummy_food_my_tummy.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_yummy_food_my_tummy.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_yummy_food_my_tummy(Z_Construct_UPackage__Script_yummy_food_my_tummy, TEXT("/Script/yummy_food_my_tummy"), Z_Registration_Info_UPackage__Script_yummy_food_my_tummy, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA2BB71C1, 0xBD2BC857));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
