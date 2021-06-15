/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using GoogleMobileAds.Common;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace GoogleMobileAds.Api
{
	public class AdLoader
	{
		// Fields
		private IAdLoaderClient adLoaderClient;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private EventHandler<AdFailedToLoadEventArgs> OnAdFailedToLoad;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private EventHandler<CustomNativeEventArgs> OnCustomNativeTemplateAdLoaded;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private Dictionary<string, Action<CustomNativeTemplateAd, string>> _CustomNativeTemplateClickHandlers_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private string _AdUnitId_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private HashSet<NativeAdType> _AdTypes_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private HashSet<string> _TemplateIds_k__BackingField;
	
		// Properties
		public Dictionary<string, Action<CustomNativeTemplateAd, string>> CustomNativeTemplateClickHandlers { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public string AdUnitId { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public HashSet<NativeAdType> AdTypes { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public HashSet<string> TemplateIds { [CompilerGenerated] get; [CompilerGenerated] private set; }
	
		// Events
		public event EventHandler<AdFailedToLoadEventArgs> OnAdFailedToLoad {
			add;
			remove;
		}
		public event EventHandler<CustomNativeEventArgs> OnCustomNativeTemplateAdLoaded {
			add;
			remove;
		}
	
		// Nested types
		public class Builder
		{
			// Fields
			[CompilerGenerated]
			[DebuggerBrowsable]
			private string _AdUnitId_k__BackingField;
			[CompilerGenerated]
			[DebuggerBrowsable]
			private HashSet<NativeAdType> _AdTypes_k__BackingField;
			[CompilerGenerated]
			[DebuggerBrowsable]
			private HashSet<string> _TemplateIds_k__BackingField;
			[CompilerGenerated]
			[DebuggerBrowsable]
			private Dictionary<string, Action<CustomNativeTemplateAd, string>> _CustomNativeTemplateClickHandlers_k__BackingField;
	
			// Properties
			internal string AdUnitId { [CompilerGenerated] get; [CompilerGenerated] private set; }
			internal HashSet<NativeAdType> AdTypes { [CompilerGenerated] get; [CompilerGenerated] private set; }
			internal HashSet<string> TemplateIds { [CompilerGenerated] get; [CompilerGenerated] private set; }
			internal Dictionary<string, Action<CustomNativeTemplateAd, string>> CustomNativeTemplateClickHandlers { [CompilerGenerated] get; [CompilerGenerated] private set; }
	
			// Constructors
			public Builder(string adUnitId);
	
			// Methods
			public Builder ForCustomNativeAd(string templateId);
			public Builder ForCustomNativeAd(string templateId, Action<CustomNativeTemplateAd, string> callback);
			public AdLoader Build();
		}
	
		// Constructors
		private AdLoader(Builder builder);
	
		// Methods
		public void LoadAd(AdRequest request);
		[CompilerGenerated]
		private void _AdLoader_m__0(object sender, CustomNativeEventArgs args);
		[CompilerGenerated]
		private void _AdLoader_m__1(object sender, AdFailedToLoadEventArgs args);
	}
}
