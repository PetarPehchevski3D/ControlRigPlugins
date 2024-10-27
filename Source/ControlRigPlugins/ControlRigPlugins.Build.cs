// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ControlRigPlugins : ModuleRules
{
	public ControlRigPlugins(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
