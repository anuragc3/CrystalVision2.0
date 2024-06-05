using UnrealBuildTool;

public class CV2Target : TargetRules
{
	public CV2Target(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V3;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Game;
		ExtraModuleNames.Add("CV2");
	}
}
