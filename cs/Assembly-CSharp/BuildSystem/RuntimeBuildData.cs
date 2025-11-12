/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Newtonsoft.Json;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace BuildSystem
{
	[Serializable]
	public class RuntimeBuildData
	{
		// Fields
		[CompilerGenerated]
		private VersionInfo _Version_k__BackingField;
		[CompilerGenerated]
		private BuildMetadata _Metadata_k__BackingField;
	
		// Properties
		public VersionInfo Version { [CompilerGenerated] get; [CompilerGenerated] set; }
		public BuildMetadata Metadata { [CompilerGenerated] get; [CompilerGenerated] set; }
	
		// Nested types
		[Serializable]
		public class VersionInfo
		{
			// Fields
			[CompilerGenerated]
			private int _Major_k__BackingField;
			[CompilerGenerated]
			private int _Minor_k__BackingField;
			[CompilerGenerated]
			private int _Micro_k__BackingField;
			[CompilerGenerated]
			private int _Build_k__BackingField;
			[CompilerGenerated]
			private string _Guid_k__BackingField;
	
			// Properties
			public int Major { [CompilerGenerated] get; [CompilerGenerated] set; }
			public int Minor { [CompilerGenerated] get; [CompilerGenerated] set; }
			public int Micro { [CompilerGenerated] get; [CompilerGenerated] set; }
			public int Build { [CompilerGenerated] get; [CompilerGenerated] set; }
			public string Guid { [CompilerGenerated] get; [CompilerGenerated] set; }
			public int VersionCode { get; }
			public string VersionString { get; }
			public string VersionStringNoBuild { get; }
	
			// Constructors
			public VersionInfo();
		}
	
		public class BuildMetadata
		{
			// Fields
			[CompilerGenerated]
			private string _BranchName_k__BackingField;
			[CompilerGenerated]
			private System.DateTime _BuildTime_k__BackingField;
			[CompilerGenerated]
			private string _ReleaseName_k__BackingField;
			[CompilerGenerated]
			private bool _ShowDebugLogin_k__BackingField;
			[CompilerGenerated]
			private int _StreamingAssetsVersion_k__BackingField;
	
			// Properties
			public string BranchName { [CompilerGenerated] get; [CompilerGenerated] set; }
			public System.DateTime BuildTime { [CompilerGenerated] get; [CompilerGenerated] set; }
			public string ReleaseName { [CompilerGenerated] get; [CompilerGenerated] set; }
			public bool ShowDebugLogin { [CompilerGenerated] get; [CompilerGenerated] set; }
			public int StreamingAssetsVersion { [CompilerGenerated] get; [CompilerGenerated] set; }
			[JsonIgnore]
			public string UrlCacheAssetVersionArgument { get; }
			[JsonIgnore]
			public string BuildTimeString { get; }
			[JsonIgnore]
			public int LocalDiscCacheAssetVersion { get; }
	
			// Constructors
			public BuildMetadata();
		}
	
		// Constructors
		public RuntimeBuildData();
	}
}
