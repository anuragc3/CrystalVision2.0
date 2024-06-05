using UnrealBuildTool;

public class CV2ClientTarget : TargetRules
{
	public CV2ClientTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V3;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Client;
		ExtraModuleNames.Add("CV2");
	}
}
