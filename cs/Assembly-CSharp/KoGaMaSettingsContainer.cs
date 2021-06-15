/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[Serializable]
public class KoGaMaSettingsContainer : ScriptableObject
{
	// Fields
	[Header]
	[SerializeField]
	private bool showDebugLogin;
	[Header]
	[SerializeField]
	private TextAsset versionText;
	[SerializeField]
	private TextAsset additionalMetaData;
	[SerializeField]
	private int versionBuild;
	[SerializeField]
	private int streamingAssetVersion;
	[SerializeField]
	private string versionGuid;
	[SerializeField]
	private string branchName;
	[SerializeField]
	private string buildTime;
	[SerializeField]
	private KoGaMaSettingsContainer assetReference;

	// Properties
	public int VersionMajor { get; }
	public int VersionMinor { get; }
	public int VersionMicro { get; }
	public int VersionCode { get; }
	public string ReleaseName { get; }
	public int LocalDiscCacheAssetVersion { get; }
	public string UrlCacheAssetVersionArgument { get; }
	public string VersionGuid { get; }
	public bool ShowDebugLogin { get; }
	public string VersionString { get; }
	public string VersionStringNoBuild { get; }
	public string BranchName { get; }
	public string BuildTime { get; }

	// Nested types
	private struct CrunchDesc
	{
		// Fields
		public short data;
		public byte numOfBits;

		// Constructors
		public CrunchDesc(int data, int numOfBits);
	}

	// Constructors
	public KoGaMaSettingsContainer();

	// Methods
	public void InvalidateStreamingAssetsCache(bool serialize = true);
	public void SetStreamingAssetVersion(int version);
}

