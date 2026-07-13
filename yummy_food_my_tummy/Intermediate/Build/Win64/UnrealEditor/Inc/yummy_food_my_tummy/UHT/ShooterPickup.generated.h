// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant_Shooter/Weapons/ShooterPickup.h"

#ifdef YUMMY_FOOD_MY_TUMMY_ShooterPickup_generated_h
#error "ShooterPickup.generated.h already included, missing '#pragma once' in ShooterPickup.h"
#endif
#define YUMMY_FOOD_MY_TUMMY_ShooterPickup_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin ScriptStruct FWeaponTableRow ***************************************************
struct Z_Construct_UScriptStruct_FWeaponTableRow_Statics;
YUMMY_FOOD_MY_TUMMY_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponTableRow(ETypeConstructPhase);

#define FID_Users_kyler_Documents_GitHub_chiggas_work_yummy_food_my_tummy_Source_yummy_food_my_tummy_Variant_Shooter_Weapons_ShooterPickup_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWeaponTableRow_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FWeaponTableRow(ETypeConstructPhase::Inner); } \
	typedef FTableRowBase Super;


struct FWeaponTableRow;
// ********** End ScriptStruct FWeaponTableRow *****************************************************

// ********** Begin Class AShooterPickup ***********************************************************
#define FID_Users_kyler_Documents_GitHub_chiggas_work_yummy_food_my_tummy_Source_yummy_food_my_tummy_Variant_Shooter_Weapons_ShooterPickup_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFinishRespawn); \
	DECLARE_FUNCTION(execOnOverlap);


#define FID_Users_kyler_Documents_GitHub_chiggas_work_yummy_food_my_tummy_Source_yummy_food_my_tummy_Variant_Shooter_Weapons_ShooterPickup_h_38_CALLBACK_WRAPPERS
struct Z_Construct_UClass_AShooterPickup_Statics;
YUMMY_FOOD_MY_TUMMY_API UClass* Z_Construct_UClass_AShooterPickup(ETypeConstructPhase);

#define FID_Users_kyler_Documents_GitHub_chiggas_work_yummy_food_my_tummy_Source_yummy_food_my_tummy_Variant_Shooter_Weapons_ShooterPickup_h_38_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_AShooterPickup_Statics; \
	friend YUMMY_FOOD_MY_TUMMY_API UClass* ::Z_Construct_UClass_AShooterPickup(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(AShooterPickup, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/yummy_food_my_tummy"), Z_Construct_UClass_AShooterPickup) \
	DECLARE_SERIALIZER(AShooterPickup)


#define FID_Users_kyler_Documents_GitHub_chiggas_work_yummy_food_my_tummy_Source_yummy_food_my_tummy_Variant_Shooter_Weapons_ShooterPickup_h_38_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AShooterPickup(AShooterPickup&&) = delete; \
	AShooterPickup(const AShooterPickup&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterPickup); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AShooterPickup) \
	NO_API virtual ~AShooterPickup();


#define FID_Users_kyler_Documents_GitHub_chiggas_work_yummy_food_my_tummy_Source_yummy_food_my_tummy_Variant_Shooter_Weapons_ShooterPickup_h_35_PROLOG
#define FID_Users_kyler_Documents_GitHub_chiggas_work_yummy_food_my_tummy_Source_yummy_food_my_tummy_Variant_Shooter_Weapons_ShooterPickup_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_kyler_Documents_GitHub_chiggas_work_yummy_food_my_tummy_Source_yummy_food_my_tummy_Variant_Shooter_Weapons_ShooterPickup_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_kyler_Documents_GitHub_chiggas_work_yummy_food_my_tummy_Source_yummy_food_my_tummy_Variant_Shooter_Weapons_ShooterPickup_h_38_CALLBACK_WRAPPERS \
	FID_Users_kyler_Documents_GitHub_chiggas_work_yummy_food_my_tummy_Source_yummy_food_my_tummy_Variant_Shooter_Weapons_ShooterPickup_h_38_INCLASS_NO_PURE_DECLS \
	FID_Users_kyler_Documents_GitHub_chiggas_work_yummy_food_my_tummy_Source_yummy_food_my_tummy_Variant_Shooter_Weapons_ShooterPickup_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AShooterPickup;

// ********** End Class AShooterPickup *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kyler_Documents_GitHub_chiggas_work_yummy_food_my_tummy_Source_yummy_food_my_tummy_Variant_Shooter_Weapons_ShooterPickup_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
