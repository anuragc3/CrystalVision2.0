using UnrealBuildTool;

public class CV2ServerTarget : TargetRules
{
	public CV2ServerTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V3;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Server;
		ExtraModuleNames.Add("CV2");
	}
}
