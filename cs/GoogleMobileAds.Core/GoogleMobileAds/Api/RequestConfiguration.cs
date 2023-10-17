/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;

// Image 29: GoogleMobileAds.Core.dll - Assembly: GoogleMobileAds.Core, Version=8.1.0.0, Culture=neutral, PublicKeyToken=null

namespace GoogleMobileAds.Api
{
	public class RequestConfiguration
	{
		// Fields
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private MaxAdContentRating _MaxAdContentRating_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private TagForChildDirectedTreatment? _TagForChildDirectedTreatment_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private TagForUnderAgeOfConsent? _TagForUnderAgeOfConsent_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private List<string> _TestDeviceIds_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private bool? _SameAppKeyEnabled_k__BackingField;
	
		// Properties
		public MaxAdContentRating MaxAdContentRating { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public TagForChildDirectedTreatment? TagForChildDirectedTreatment { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public TagForUnderAgeOfConsent? TagForUnderAgeOfConsent { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public List<string> TestDeviceIds { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public bool? SameAppKeyEnabled { [CompilerGenerated] get; [CompilerGenerated] private set; }
	
		// Nested types
		public class Builder
		{
			// Fields
			[CompilerGenerated]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			private MaxAdContentRating _MaxAdContentRating_k__BackingField;
			[CompilerGenerated]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			private TagForChildDirectedTreatment? _TagForChildDirectedTreatment_k__BackingField;
			[CompilerGenerated]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			private TagForUnderAgeOfConsent? _TagForUnderAgeOfConsent_k__BackingField;
			[CompilerGenerated]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			private List<string> _TestDeviceIds_k__BackingField;
			[CompilerGenerated]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			private bool? _SameAppKeyEnabled_k__BackingField;
	
			// Properties
			internal MaxAdContentRating MaxAdContentRating { [CompilerGenerated] get; [CompilerGenerated] private set; }
			internal TagForChildDirectedTreatment? TagForChildDirectedTreatment { [CompilerGenerated] get; [CompilerGenerated] private set; }
			internal TagForUnderAgeOfConsent? TagForUnderAgeOfConsent { [CompilerGenerated] get; [CompilerGenerated] private set; }
			internal List<string> TestDeviceIds { [CompilerGenerated] get; [CompilerGenerated] private set; }
			internal bool? SameAppKeyEnabled { [CompilerGenerated] get; [CompilerGenerated] private set; }
	
			// Constructors
			public Builder();
	
			// Methods
			public Builder SetMaxAdContentRating(MaxAdContentRating maxAdContentRating);
			public Builder SetTagForChildDirectedTreatment(TagForChildDirectedTreatment? tagForChildDirectedTreatment);
			public Builder SetTagForUnderAgeOfConsent(TagForUnderAgeOfConsent? tagForUnderAgeOfConsent);
			public Builder SetTestDeviceIds(List<string> testDeviceIds);
			public Builder SetSameAppKeyEnabled(bool enabled);
			public RequestConfiguration build();
		}
	
		// Constructors
		private RequestConfiguration(Builder builder);
	
		// Methods
		public Builder ToBuilder();
	}
}
