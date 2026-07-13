// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class yummy_food_my_tummy : ModuleRules
{
	public yummy_food_my_tummy(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"yummy_food_my_tummy",
			"yummy_food_my_tummy/Variant_Horror",
			"yummy_food_my_tummy/Variant_Horror/UI",
			"yummy_food_my_tummy/Variant_Shooter",
			"yummy_food_my_tummy/Variant_Shooter/AI",
			"yummy_food_my_tummy/Variant_Shooter/UI",
			"yummy_food_my_tummy/Variant_Shooter/Weapons"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
