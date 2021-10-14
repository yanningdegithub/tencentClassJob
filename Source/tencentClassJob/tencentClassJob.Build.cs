// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class tencentClassJob : ModuleRules
{
	public tencentClassJob(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
