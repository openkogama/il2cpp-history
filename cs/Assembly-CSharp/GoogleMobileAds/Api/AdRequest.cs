/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using GoogleMobileAds.Api.Mediation;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace GoogleMobileAds.Api
{
	public class AdRequest
	{
		// Fields
		public const string Version = "4.2.1";
		public const string TestDeviceSimulator = "SIMULATOR";
		[CompilerGenerated]
		[DebuggerBrowsable]
		private List<string> _TestDevices_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private HashSet<string> _Keywords_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private DateTime? _Birthday_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private Gender? _Gender_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private bool? _TagForChildDirectedTreatment_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private Dictionary<string, string> _Extras_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private List<MediationExtras> _MediationExtras_k__BackingField;
	
		// Properties
		public List<string> TestDevices { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public HashSet<string> Keywords { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public DateTime? Birthday { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public Gender? Gender { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public bool? TagForChildDirectedTreatment { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public Dictionary<string, string> Extras { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public List<MediationExtras> MediationExtras { [CompilerGenerated] get; [CompilerGenerated] private set; }
	
		// Nested types
		public class Builder
		{
			// Fields
			[CompilerGenerated]
			[DebuggerBrowsable]
			private List<string> _TestDevices_k__BackingField;
			[CompilerGenerated]
			[DebuggerBrowsable]
			private HashSet<string> _Keywords_k__BackingField;
			[CompilerGenerated]
			[DebuggerBrowsable]
			private DateTime? _Birthday_k__BackingField;
			[CompilerGenerated]
			[DebuggerBrowsable]
			private Gender? _Gender_k__BackingField;
			[CompilerGenerated]
			[DebuggerBrowsable]
			private bool? _ChildDirectedTreatmentTag_k__BackingField;
			[CompilerGenerated]
			[DebuggerBrowsable]
			private Dictionary<string, string> _Extras_k__BackingField;
			[CompilerGenerated]
			[DebuggerBrowsable]
			private List<MediationExtras> _MediationExtras_k__BackingField;
	
			// Properties
			internal List<string> TestDevices { [CompilerGenerated] get; [CompilerGenerated] private set; }
			internal HashSet<string> Keywords { [CompilerGenerated] get; [CompilerGenerated] private set; }
			internal DateTime? Birthday { [CompilerGenerated] get; [CompilerGenerated] private set; }
			internal Gender? Gender { [CompilerGenerated] get; [CompilerGenerated] private set; }
			internal bool? ChildDirectedTreatmentTag { [CompilerGenerated] get; [CompilerGenerated] private set; }
			internal Dictionary<string, string> Extras { [CompilerGenerated] get; [CompilerGenerated] private set; }
			internal List<MediationExtras> MediationExtras { [CompilerGenerated] get; [CompilerGenerated] private set; }
	
			// Constructors
			public Builder();
	
			// Methods
			public Builder AddKeyword(string keyword);
			public Builder AddTestDevice(string deviceId);
			public AdRequest Build();
			public Builder SetBirthday(DateTime birthday);
			public Builder SetGender(Gender gender);
			public Builder AddMediationExtras(MediationExtras extras);
			public Builder TagForChildDirectedTreatment(bool tagForChildDirectedTreatment);
			public Builder AddExtra(string key, string value);
		}
	
		// Constructors
		private AdRequest(Builder builder);
	}
}
