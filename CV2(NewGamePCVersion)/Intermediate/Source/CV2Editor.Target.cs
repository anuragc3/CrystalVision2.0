using UnrealBuildTool;

public class CV2EditorTarget : TargetRules
{
	public CV2EditorTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V3;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Editor;
		ExtraModuleNames.Add("CV2");
	}
}
