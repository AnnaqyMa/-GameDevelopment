// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Anna0718 : ModuleRules
{
	public Anna0718(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
