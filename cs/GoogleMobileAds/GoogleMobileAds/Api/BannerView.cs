/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using GoogleMobileAds.Common;

// Image 15: GoogleMobileAds.dll - Assembly: GoogleMobileAds, Version=8.1.0.0, Culture=neutral, PublicKeyToken=null

namespace GoogleMobileAds.Api
{
	public class BannerView
	{
		// Fields
		private Action OnBannerAdLoaded;
		private Action<LoadAdError> OnBannerAdLoadFailed;
		private Action<AdValue> OnAdPaid;
		private Action OnAdClicked;
		private Action OnAdImpressionRecorded;
		private Action OnAdFullScreenContentOpened;
		private Action OnAdFullScreenContentClosed;
		private IBannerClient _client;
	
		// Properties
		public bool IsDestroyed { get; }
	
		// Events
		public event Action OnBannerAdLoaded {
			add;
			remove;
		}
		public event Action<LoadAdError> OnBannerAdLoadFailed {
			add;
			remove;
		}
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
	
		// Nested types
		[CompilerGenerated]
		private sealed class _ConfigureBannerEvents_c__AnonStorey0
		{
			// Fields
			internal LoadAdError loadAdError;
			internal BannerView _this;
	
			// Constructors
			public _ConfigureBannerEvents_c__AnonStorey0();
	
			// Methods
			internal void __m__0();
		}
	
		[CompilerGenerated]
		private sealed class _ConfigureBannerEvents_c__AnonStorey1
		{
			// Fields
			internal AdValueEventArgs args;
			internal BannerView _this;
	
			// Constructors
			public _ConfigureBannerEvents_c__AnonStorey1();
	
			// Methods
			internal void __m__0();
		}
	
		// Constructors
		public BannerView(string adUnitId, AdSize adSize, AdPosition position);
		public BannerView(string adUnitId, AdSize adSize, int x, int y);
	
		// Methods
		public void Destroy();
		public ResponseInfo GetResponseInfo();
		public float GetHeightInPixels();
		public float GetWidthInPixels();
		public void LoadAd(AdRequest request);
		public void Show();
		public void Hide();
		public void SetPosition(AdPosition adPosition);
		public void SetPosition(int x, int y);
		private void ConfigureBannerEvents();
		[CompilerGenerated]
		private void _ConfigureBannerEvents_m__0(object sender, EventArgs args);
		[CompilerGenerated]
		private void _ConfigureBannerEvents_m__1(object sender, LoadAdErrorClientEventArgs args);
		[CompilerGenerated]
		private void _ConfigureBannerEvents_m__2(object sender, EventArgs args);
		[CompilerGenerated]
		private void _ConfigureBannerEvents_m__3(object sender, EventArgs args);
		[CompilerGenerated]
		private void _ConfigureBannerEvents_m__4(object sender, AdValueEventArgs args);
		[CompilerGenerated]
		private void _ConfigureBannerEvents_m__5();
		[CompilerGenerated]
		private void _ConfigureBannerEvents_m__6();
		[CompilerGenerated]
		private void _ConfigureBannerEvents_m__7();
		[CompilerGenerated]
		private void _ConfigureBannerEvents_m__8();
		[CompilerGenerated]
		private void _ConfigureBannerEvents_m__9();
		[CompilerGenerated]
		private void _ConfigureBannerEvents_m__A();
		[CompilerGenerated]
		private void _ConfigureBannerEvents_m__B();
	}
}
