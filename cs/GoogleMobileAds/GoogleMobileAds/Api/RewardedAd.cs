/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using GoogleMobileAds.Common;

// Image 38: GoogleMobileAds.dll - Assembly: GoogleMobileAds, Version=8.7.0.0, Culture=neutral, PublicKeyToken=null
[assembly: AssemblyCompany("Google LLC")]
[assembly: AssemblyConfiguration("")]
[assembly: AssemblyCopyright("Copyright 2023 Google LLC. All Rights Reserved.")]
[assembly: AssemblyDescription("")]
[assembly: AssemblyFileVersion("8.7.0")]
[assembly: AssemblyProduct("GoogleMobileAds")]
[assembly: AssemblyTitle("GoogleMobileAds")]
[assembly: AssemblyTrademark("")]
[assembly: Debuggable(DebuggableAttribute.DebuggingModes.None | DebuggableAttribute.DebuggingModes.IgnoreSymbolStoreSequencePoints)]
[assembly: InternalsVisibleTo("GoogleMobileAdsNative")]
[assembly: InternalsVisibleTo("GoogleMobileAds.Placement")]
[assembly: InternalsVisibleTo("basic_unittests_test_library")]
[assembly: InternalsVisibleTo("UnitTests")]
[assembly: InternalsVisibleTo("GoogleMobileAds.Ump")]
[assembly: InternalsVisibleTo("GoogleMobileAdsNative.unobfuscate")]
[assembly: RuntimeCompatibility(WrapNonExceptionThrows = true)]

namespace GoogleMobileAds.Api
{
	public class RewardedAd
	{
		// Fields
		private Action<AdValue> OnAdPaid;
		private Action OnAdClicked;
		private Action OnAdImpressionRecorded;
		private Action OnAdFullScreenContentOpened;
		private Action OnAdFullScreenContentClosed;
		private Action<AdError> OnAdFullScreenContentFailed;
		private IRewardedAdClient _client;
		private bool _canShowAd;
		private Action<Reward> _userRewardEarnedCallback;
	
		// Events
		public event Action<AdValue> OnAdPaid {
			add;
			remove;
		}
		public event Action OnAdClicked {
			add;
			remove;
		}
		public event Action OnAdImpressionRecorded {
			add;
			remove;
		}
		public event Action OnAdFullScreenContentOpened {
			add;
			remove;
		}
		public event Action OnAdFullScreenContentClosed {
			add;
			remove;
		}
		public event Action<AdError> OnAdFullScreenContentFailed {
			add;
			remove;
		}
	
		// Nested types
		[CompilerGenerated]
		private sealed class _Load_c__AnonStorey0
		{
			// Fields
			internal Action<RewardedAd, LoadAdError> adLoadCallback;
			internal IRewardedAdClient client;
	
			// Nested types
			private sealed class _Load_c__AnonStorey1
			{
				// Fields
				internal LoadAdError loadAdError;
				internal _Load_c__AnonStorey0 __f__ref_0;
	
				// Constructors
				public _Load_c__AnonStorey1();
	
				// Methods
				internal void __m__0();
			}
	
			// Constructors
			public _Load_c__AnonStorey0();
	
			// Methods
			internal void __m__0(object sender, EventArgs args);
			internal void __m__1(object sender, LoadAdErrorClientEventArgs error);
			internal void __m__2();
		}
	
		[CompilerGenerated]
		private sealed class _RegisterAdEvents_c__AnonStorey2
		{
			// Fields
			internal AdError adError;
			internal RewardedAd _this;
	
			// Constructors
			public _RegisterAdEvents_c__AnonStorey2();
	
			// Methods
			internal void __m__0();
		}
	
		[CompilerGenerated]
		private sealed class _RegisterAdEvents_c__AnonStorey3
		{
			// Fields
			internal AdValueEventArgs args;
			internal RewardedAd _this;
	
			// Constructors
			public _RegisterAdEvents_c__AnonStorey3();
	
			// Methods
			internal void __m__0();
		}
	
		[CompilerGenerated]
		private sealed class _RegisterAdEvents_c__AnonStorey4
		{
			// Fields
			internal Reward args;
			internal RewardedAd _this;
	
			// Constructors
			public _RegisterAdEvents_c__AnonStorey4();
	
			// Methods
			internal void __m__0();
		}
	
		// Constructors
		private RewardedAd(IRewardedAdClient client);
	
		// Methods
		public static void Load(string adUnitId, AdRequest request, Action<RewardedAd, LoadAdError> adLoadCallback);
		public bool CanShowAd();
		public void Show(Action<Reward> userRewardEarnedCallback);
		public void Destroy();
		private void RegisterAdEvents();
		[CompilerGenerated]
		private void _RegisterAdEvents_m__0();
		[CompilerGenerated]
		private void _RegisterAdEvents_m__1(object sender, EventArgs args);
		[CompilerGenerated]
		private void _RegisterAdEvents_m__2(object sender, EventArgs args);
		[CompilerGenerated]
		private void _RegisterAdEvents_m__3(object sender, EventArgs args);
		[CompilerGenerated]
		private void _RegisterAdEvents_m__4(object sender, AdErrorClientEventArgs error);
		[CompilerGenerated]
		private void _RegisterAdEvents_m__5(object sender, AdValueEventArgs args);
		[CompilerGenerated]
		private void _RegisterAdEvents_m__6(object sender, Reward args);
		[CompilerGenerated]
		private void _RegisterAdEvents_m__7();
		[CompilerGenerated]
		private void _RegisterAdEvents_m__8();
		[CompilerGenerated]
		private void _RegisterAdEvents_m__9();
		[CompilerGenerated]
		private void _RegisterAdEvents_m__A();
	}
}
