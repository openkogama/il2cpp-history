/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using GoogleMobileAds.Common;

// Image 38: GoogleMobileAds.dll - Assembly: GoogleMobileAds, Version=8.1.0.0, Culture=neutral, PublicKeyToken=null
[assembly: AssemblyCompany("Google LLC")]
[assembly: AssemblyConfiguration("")]
[assembly: AssemblyCopyright("Copyright 2023 Google LLC. All Rights Reserved.")]
[assembly: AssemblyDescription("")]
[assembly: AssemblyFileVersion("8.1.0")]
[assembly: AssemblyProduct("GoogleMobileAds")]
[assembly: AssemblyTitle("GoogleMobileAds")]
[assembly: AssemblyTrademark("")]
[assembly: Debuggable(DebuggableAttribute.DebuggingModes.None | DebuggableAttribute.DebuggingModes.IgnoreSymbolStoreSequencePoints)]
[assembly: InternalsVisibleTo("GoogleMobileAdsNative.unobfuscate")]
[assembly: InternalsVisibleTo("GoogleMobileAdsNative")]
[assembly: InternalsVisibleTo("GoogleMobileAds.Placement")]
[assembly: InternalsVisibleTo("basic_unittests_test_library")]
[assembly: InternalsVisibleTo("UnitTests")]
[assembly: RuntimeCompatibility(WrapNonExceptionThrows = true)]

namespace GoogleMobileAds.Api
{
	public class InterstitialAd
	{
		// Fields
		private Action<AdValue> OnAdPaid;
		private Action OnAdClicked;
		private Action OnAdImpressionRecorded;
		private Action OnAdFullScreenContentOpened;
		private Action OnAdFullScreenContentClosed;
		private Action<AdError> OnAdFullScreenContentFailed;
		private IInterstitialClient _client;
		private bool _canShowAd;
	
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
			internal Action<InterstitialAd, LoadAdError> adLoadCallback;
			internal IInterstitialClient client;
	
			// Constructors
			public _Load_c__AnonStorey0();
	
			// Methods
			internal void __m__0(object sender, EventArgs args);
			internal void __m__1(object sender, LoadAdErrorClientEventArgs error);
		}
	
		// Constructors
		private InterstitialAd(IInterstitialClient client);
	
		// Methods
		public static void Load(string adUnitId, AdRequest request, Action<InterstitialAd, LoadAdError> adLoadCallback);
		public bool CanShowAd();
		public void Show();
		public void Destroy();
		public ResponseInfo GetResponseInfo();
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
	}
}
