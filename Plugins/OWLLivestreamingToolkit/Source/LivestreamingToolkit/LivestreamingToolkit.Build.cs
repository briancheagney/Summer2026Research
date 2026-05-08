// Copyright Off World Live Limited, 2020-2022. All rights reserved.

using UnrealBuildTool;
using System;
using System.IO;
using System.Net;
using EpicGames.Core;

public class LivestreamingToolkit : ModuleRules
{
	public LivestreamingToolkit(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		bUsePrecompiled = GetOffWorldBoolean("UsePrecompiled", true);

		bool bIsStaging = GetOffWorldBoolean("Staging", false);

		string AuthUrl = GetOffWorldString("AuthURL", "https://plugin-api.offworld.live");
		PublicDefinitions.Add("OWL_AUTH_URL=\"" + AuthUrl + "\"");

		string ReleaseDate = "";
		string ReleaseBuildEnv = System.Environment.GetEnvironmentVariable("RELEASE_BUILD");
		if (ReleaseBuildEnv == null || ReleaseBuildEnv == "")
		{
			ReleaseDate = DateTime.UtcNow.ToString("yyyy-MM-ddTHH:mm:ss.fffZ");
		}
		else
		{
			ReleaseDate = ReleaseBuildEnv;
		}
		string CustomerBuild = GetOffWorldString("CustomerBuild", "");
		if (CustomerBuild != "")
		{
			PublicDefinitions.Add("OWL_CUSTOMER_BUILD=" + CustomerBuild);
		}

		PublicDefinitions.Add("RELEASE_DATE=" + ReleaseDate);

		PublicDefinitions.Add("OFFWORLDLIVE_DEBUG=" + (GetOffWorldBoolean("Debug", false) ? "1" : "0"));

		bool bDebugAppLicence = GetOffWorldBoolean("DebugAppLicence", false);
		PublicDefinitions.Add("DEBUG_APP_LICENCE=" + (bDebugAppLicence ? "1" : "0"));

		bool bOfflineOnlyBuild = GetOffWorldBoolean("OfflineOnlyBuild", false);
		PublicDefinitions.Add("OWL_OFFLINE_ONLY_BUILD=" + (bOfflineOnlyBuild ? "1" : "0"));

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"RHI",
				"Renderer",
				"Projects",
				"DeveloperSettings",
				"Json",
				"JsonUtilities",
				"OWLBranding",
				"HTTP",
				// ... add other public dependencies that you statically link with here ...
			}
		);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"RenderCore",
				"Slate",
				"UMG",
				"SlateCore",
				"RenderCore",
				"OWLBranding",
				"RSA",
				"OpenSSL",
				"LivestreamingToolkitShaders",
				"NDIRaw",
				"OWLPackaging",
				// ... add private dependencies that you statically link with here ...
			}
		);

		if (Target.bBuildEditor)
		{
			PrivateDependencyModuleNames.Add("UnrealEd");
		}
		string OpenSourceLicencePath = Path.Combine(PluginDirectory, "OpenSourceLicenses.txt");
		if (File.Exists(OpenSourceLicencePath))
		{
			RuntimeDependencies.Add(OpenSourceLicencePath, StagedFileType.NonUFS);
		}


		string AuthAppName = GetAuthAppName(bIsStaging, bOfflineOnlyBuild);

		string AuthAppPath = Path.Combine(PluginDirectory, "Utils", AuthAppName);

		PublicDefinitions.Add("AUTH_APP_NAME=" + AuthAppName);

		// Check if files exist and then add if they do because the .uplugin
		// file can't be trusted to tell us when packaging if staging is true or not
		// because Unreal recreates the uplugin file ignoring fields it doesn't know
		bool bUtilityFound = false;
		if (File.Exists(AuthAppPath))
		{
			bUtilityFound = true;
			RuntimeDependencies.Add(AuthAppPath, StagedFileType.NonUFS);
		}
		else
		{
			string[] UtilNames = {
				GetAuthAppName(false, false),
				GetAuthAppName(false, true),
				GetAuthAppName(true, false),
				GetAuthAppName(true, true),
			};
			foreach (string UtilName in UtilNames)
			{
				string UtilPath = Path.Combine(PluginDirectory, "Utils", UtilName);
				if (File.Exists(UtilPath))
				{
					bUtilityFound = true;
					RuntimeDependencies.Add(UtilPath, StagedFileType.NonUFS);
				}
			}
		}

		if (bIsStaging && !bUtilityFound)
		{
			// sanity check that this file exists and throw if it doesn't
			// (only do this in staging so we don't accidentally create crashes
			// in user builds
			throw new Exception(AuthAppName + " not found at expected path");
		}

		// Ensure that virtual webcam installer is bundled
		string WebcamInstallerPath = Path.Combine(PluginDirectory, "Utils", "OWLVirtualWebcam_Installer.exe");
		if (!File.Exists(WebcamInstallerPath))
		{
			throw new Exception("Virtual Webcam installer not found");
		}
		RuntimeDependencies.Add(WebcamInstallerPath, StagedFileType.NonUFS);

		// Ensure that virtual webcam installer is bundled
		string NDIInstallerScript = Path.Combine(PluginDirectory, "Utils", "InstallNDISDK.ps1");
		if (!File.Exists(NDIInstallerScript))
		{
			throw new Exception("NDI Installer script not found");
		}
		RuntimeDependencies.Add(NDIInstallerScript, StagedFileType.NonUFS);
	}

	public JsonObject GetOffWorldSettings()
	{
		string RootDir = Path.GetFullPath(Path.Combine(ModuleDirectory, "../../"));
		string UPluginPath = Path.Combine(RootDir, "OWLLivestreamingToolkit.uplugin");
		string RawString = File.ReadAllText(UPluginPath);
		JsonObject UPluginJson = JsonObject.Parse(RawString);
		return UPluginJson.GetObjectField("OffWorldLive");
	}
	public bool GetOffWorldBoolean(string Key, bool defaultValue = false)
	{
		try
		{
			return GetOffWorldSettings().GetBoolField(Key);
		}
		catch
		{
			return defaultValue;
		}
	}

	public string GetOffWorldString(string Key, string defaultValue = "")
	{
		try
		{
			return GetOffWorldSettings().GetStringField(Key);
		}
		catch
		{
			return defaultValue;
		}
	}

	public string GetAuthAppName(bool bIsStaging, bool bOfflineOnlyBuild)
	{
		string AuthAppBase = "owl-licensing-utility";
		string StagingSuffix = ".staging";
		string OfflineSuffix = ".offline";


		string AuthAppName = AuthAppBase;
		if (bIsStaging)
		{
			AuthAppName += StagingSuffix;
		}

		if (bOfflineOnlyBuild)
		{
			AuthAppName += OfflineSuffix;
		}

		AuthAppName += ".exe";

		return AuthAppName;
	}
}

