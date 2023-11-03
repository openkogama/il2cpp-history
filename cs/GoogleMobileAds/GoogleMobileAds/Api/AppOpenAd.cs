/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using GoogleMobileAds.Common;
using UnityEngine;

// Image 15: GoogleMobileAds.dll - Assembly: GoogleMobileAds, Version=8.1.0.0, Culture=neutral, PublicKeyToken=null

namespace GoogleMobileAds.Api
{
	public class AppOpenAd
	{
		// Fields
		private Action<AdValue> OnAdPaid;
		private Action OnAdClicked;
		private Action OnAdImpressionRecorded;
		private Action OnAdFullScreenContentOpened;
		private Action OnAdFullScreenContentClosed;
		private Action<AdError> OnAdFullScreenContentFailed;
		private IAppOpenAdClient _client;
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
			internal Action<AppOpenAd, LoadAdError> adLoadCallback;
			internal IAppOpenAdClient client;
	
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
			internal void __m__1(object sender, LoadAdErrorClientEventArgs args);
			internal void __m__2();
		}
	
		[CompilerGenerated]
		private sealed class _RegisterAdEvents_c__AnonStorey2
		{
			// Fields
			internal AdError adError;
			internal AppOpenAd _this;
	
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
			internal AppOpenAd _this;
	
			// Constructors
			public _RegisterAdEvents_c__AnonStorey3();
	
			// Methods
			internal void __m__0();
		}
	
		// Constructors
		private AppOpenAd(IAppOpenAdClient client);
	
		// Methods
		public static void Load(string adUnitId, ScreenOrientation orientation, AdRequest request, Action<AppOpenAd, LoadAdError> adLoadCallback);
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
