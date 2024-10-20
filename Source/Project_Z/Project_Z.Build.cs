// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Project_Z : ModuleRules
{
	public Project_Z(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
