/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using GoogleMobileAds.Common;

// Image 38: GoogleMobileAds.dll - Assembly: GoogleMobileAds, Version=8.7.0.0, Culture=neutral, PublicKeyToken=null

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
		protected internal IInterstitialClient _client;
		protected internal bool _canShowAd;
	
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
			internal IInterstitialClient client;
			internal Action<InterstitialAd, LoadAdError> adLoadCallback;
	
			// Nested types
			private sealed class _Load_c__AnonStorey1
			{
				// Fields
				internal InterstitialAd interstitialAd;
				internal _Load_c__AnonStorey0 __f__ref_0;
	
				// Constructors
				public _Load_c__AnonStorey1();
	
				// Methods
				internal void __m__0();
			}
	
			private sealed class _Load_c__AnonStorey2
			{
				// Fields
				internal LoadAdError loadAdError;
				internal _Load_c__AnonStorey0 __f__ref_0;
	
				// Constructors
				public _Load_c__AnonStorey2();
	
				// Methods
				internal void __m__0();
			}
	
			// Constructors
			public _Load_c__AnonStorey0();
	
			// Methods
			internal void __m__0(object sender, EventArgs args);
			internal void __m__1(object sender, LoadAdErrorClientEventArgs error);
		}
	
		[CompilerGenerated]
		private sealed class _RegisterAdEvents_c__AnonStorey3
		{
			// Fields
			internal AdError adError;
			internal InterstitialAd _this;
	
			// Constructors
			public _RegisterAdEvents_c__AnonStorey3();
	
			// Methods
			internal void __m__0();
		}
	
		[CompilerGenerated]
		private sealed class _RegisterAdEvents_c__AnonStorey4
		{
			// Fields
			internal AdValueEventArgs args;
			internal InterstitialAd _this;
	
			// Constructors
			public _RegisterAdEvents_c__AnonStorey4();
	
			// Methods
			internal void __m__0();
		}
	
		// Constructors
		private InterstitialAd(IInterstitialClient client);
	
		// Methods
		public static void Load(string adUnitId, AdRequest request, Action<InterstitialAd, LoadAdError> adLoadCallback);
		public bool CanShowAd();
		public void Show();
		public void Destroy();
		public ResponseInfo GetResponseInfo();
		protected internal virtual void RegisterAdEvents();
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
		private void _RegisterAdEvents_m__6();
		[CompilerGenerated]
		private void _RegisterAdEvents_m__7();
		[CompilerGenerated]
		private void _RegisterAdEvents_m__8();
		[CompilerGenerated]
		private void _RegisterAdEvents_m__9();
	}
}
