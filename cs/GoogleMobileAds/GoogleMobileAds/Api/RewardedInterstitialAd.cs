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
	public class RewardedInterstitialAd
	{
		// Fields
		private Action<AdValue> OnAdPaid;
		private Action OnAdClicked;
		private Action OnAdImpressionRecorded;
		private Action OnAdFullScreenContentOpened;
		private Action OnAdFullScreenContentClosed;
		private Action<AdError> OnAdFullScreenContentFailed;
		private IRewardedInterstitialAdClient _client;
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
			internal Action<RewardedInterstitialAd, LoadAdError> adLoadCallback;
			internal IRewardedInterstitialAdClient client;
	
			// Constructors
			public _Load_c__AnonStorey0();
	
			// Methods
			internal void __m__0(object sender, EventArgs args);
			internal void __m__1(object sender, LoadAdErrorClientEventArgs args);
		}
	
		// Constructors
		private RewardedInterstitialAd(IRewardedInterstitialAdClient client);
	
		// Methods
		public static void Load(string adUnitId, AdRequest request, Action<RewardedInterstitialAd, LoadAdError> adLoadCallback);
		public bool CanShowAd();
		public void Show(Action<Reward> userEarnedRewardCallback);
		public void SetServerSideVerificationOptions(ServerSideVerificationOptions options);
		public Reward GetRewardItem();
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
		private void _RegisterAdEvents_m__6(object sender, Reward args);
	}
}
