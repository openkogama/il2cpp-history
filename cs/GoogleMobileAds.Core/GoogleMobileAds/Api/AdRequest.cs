/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using GoogleMobileAds.Api.Mediation;

// Image 53: GoogleMobileAds.Core.dll - Assembly: GoogleMobileAds.Core, Version=8.1.0.0, Culture=neutral, PublicKeyToken=null

namespace GoogleMobileAds.Api
{
	public class AdRequest
	{
		// Fields
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private static string _Version_k__BackingField;
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
		private static string Version { [CompilerGenerated] set; }
		private HashSet<string> Keywords { [CompilerGenerated] set; }
		private Dictionary<string, string> Extras { [CompilerGenerated] set; }
		private List<MediationExtras> MediationExtras { [CompilerGenerated] set; }
	
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
			public AdRequest Build();
		}
	
		// Constructors
		static AdRequest();
		private AdRequest(Builder builder);
	}
}
