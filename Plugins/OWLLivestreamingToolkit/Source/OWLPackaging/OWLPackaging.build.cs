using System;
using System.IO;
using System.Text.RegularExpressions;
using UnrealBuildTool;

public class OWLPackaging : ModuleRules
{
	public OWLPackaging(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"Engine",
				"CoreUObject",
			});
		PublicDefinitions.Add("OWL_CURRENT_DATE=" + DateTime.UtcNow.ToString("yyyy-MM-ddTHH:mm:ss.fffZ"));

		if (Target.Type != TargetType.Game) return;

		string ProjectDir = GetProjectDir();

		if (ProjectDir == "") {
			System.Console.Error.WriteLine(
				"Unable to find Unreal Project directory. " +
				"If you are packaging a project using the OWL Plugin, require offline authentication and this plugin is not " +
				"in the project 'Plugins' directory, specify the project directory in the environment variable 'UE_PROJECT_DIR' when executing the build." +
				"Alternatively copy line 40 of this file and paste it in any '.build.cs' file in your project");
		} else {
			System.Console.WriteLine($"Unreal Project Path found: {ProjectDir}");
		}

		if (File.Exists(Path.Combine(ProjectDir, "Saved/Config/OWLDefaultGame.ini")))
		{
			System.Console.WriteLine("Packaging OWLDefaultGame.ini");
			RuntimeDependencies.Add("$(ProjectDir)/Content/OWLDefaultGame.ini", "$(ProjectDir)/Saved/Config/OWLDefaultGame.ini", StagedFileType.UFS);
		} else {
			System.Console.Error.WriteLine("No OWLDefaultGame.ini found. Not included in runtime pak");
		}
	}

	public bool IsUProjectDir(string ProjectDirectory)
	{
		if (ProjectDirectory == null || ProjectDirectory == "") return false;
		string[] ProjectFiles = Directory.GetFiles(ProjectDirectory, "*.uproject");
		return ProjectFiles.Length == 1;
	}

	public string GetProjectDir()
	{
		// check environment variable override first
		string EnvDir = Environment.GetEnvironmentVariable("UE_PROJECT_DIR");
		if (EnvDir != "" && IsUProjectDir(EnvDir)) return EnvDir;
		// try and ge the parent directory to this plugin
		string ProjectDirectory = Path.Combine(PluginDirectory, "../../");
		if (IsUProjectDir(ProjectDirectory))
		{
			return ProjectDirectory;
		}
		// finally if none of that works, try and parse the command line arguments and
		// and get the "project" parameter
		string[] Args = Environment.GetCommandLineArgs();
		foreach (var Arg in Args)
		{
			Match match = Regex.Match(Arg, @"-Project=""?([^""]+)");
			if (match.Success)
			{
				string ProjectDir = Path.GetDirectoryName(match.Groups[1].ToString());

				if (IsUProjectDir(ProjectDir)) {
					return ProjectDir;
				}
			}
		}

		return "";
	}

}

