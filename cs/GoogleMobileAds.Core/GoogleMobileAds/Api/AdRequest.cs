/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using GoogleMobileAds.Api.Mediation;

// Image 29: GoogleMobileAds.Core.dll - Assembly: GoogleMobileAds.Core, Version=8.1.0.0, Culture=neutral, PublicKeyToken=null

namespace GoogleMobileAds.Api
{
	public class AdRequest
	{
		// Fields
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private static string _Version_k__BackingField;
		public const string TestDeviceSimulator = "SIMULATOR";
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private HashSet<string> _Keywords_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private Dictionary<string, string> _Extras_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private List<MediationExtras> _MediationExtras_k__BackingField;
	
		// Properties
		public static string Version { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public HashSet<string> Keywords { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public Dictionary<string, string> Extras { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public List<MediationExtras> MediationExtras { [CompilerGenerated] get; [CompilerGenerated] private set; }
	
		// Nested types
		public class Builder
		{
			// Fields
			[CompilerGenerated]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			private HashSet<string> _Keywords_k__BackingField;
			[CompilerGenerated]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			private Dictionary<string, string> _Extras_k__BackingField;
			[CompilerGenerated]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			private List<MediationExtras> _MediationExtras_k__BackingField;
	
			// Properties
			internal HashSet<string> Keywords { [CompilerGenerated] get; [CompilerGenerated] private set; }
			internal Dictionary<string, string> Extras { [CompilerGenerated] get; [CompilerGenerated] private set; }
			internal List<MediationExtras> MediationExtras { [CompilerGenerated] get; [CompilerGenerated] private set; }
	
			// Constructors
			public Builder();
	
			// Methods
			public Builder AddKeyword(string keyword);
			public AdRequest Build();
			public Builder AddMediationExtras(MediationExtras extras);
			public Builder AddExtra(string key, string value);
		}
	
		// Constructors
		static AdRequest();
		private AdRequest(Builder builder);
	
		// Methods
		internal static string BuildVersionString(string nativePluginVersion = null);
	}
}
