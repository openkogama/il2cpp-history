/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using GoogleMobileAds.Api;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace GoogleMobileAds.Common
{
	public class DummyClient : IBannerClient, IInterstitialClient, IRewardBasedVideoAdClient, IAdLoaderClient, IMobileAdsClient
	{
		// Fields
		[CompilerGenerated]
		[DebuggerBrowsable]
		private EventHandler<EventArgs> OnAdLoaded;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private EventHandler<AdFailedToLoadEventArgs> OnAdFailedToLoad;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private EventHandler<EventArgs> OnAdOpening;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private EventHandler<EventArgs> OnAdStarted;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private EventHandler<EventArgs> OnAdClosed;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private EventHandler<Reward> OnAdRewarded;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private EventHandler<EventArgs> OnAdLeavingApplication;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private EventHandler<EventArgs> OnAdCompleted;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private EventHandler<CustomNativeEventArgs> OnCustomNativeTemplateAdLoaded;
	
		// Properties
		public string UserId { get; set; }
	
		// Events
		public event EventHandler<EventArgs> OnAdLoaded {
			add;
			remove;
		}
		public event EventHandler<AdFailedToLoadEventArgs> OnAdFailedToLoad {
			add;
			remove;
		}
		public event EventHandler<EventArgs> OnAdOpening {
			add;
			remove;
		}
		public event EventHandler<EventArgs> OnAdStarted {
			add;
			remove;
		}
		public event EventHandler<EventArgs> OnAdClosed {
			add;
			remove;
		}
		public event EventHandler<Reward> OnAdRewarded {
			add;
			remove;
		}
		public event EventHandler<EventArgs> OnAdLeavingApplication {
			add;
			remove;
		}
		public event EventHandler<EventArgs> OnAdCompleted {
			add;
			remove;
		}
		public event EventHandler<CustomNativeEventArgs> OnCustomNativeTemplateAdLoaded {
			add;
			remove;
		}
	
		// Constructors
		public DummyClient();
	
		// Methods
		public void Initialize(string appId);
		public void Initialize(Action<InitializationStatus> initCompleteAction);
		public void SetApplicationMuted(bool muted);
		public void SetApplicationVolume(float volume);
		public void SetiOSAppPauseOnBackground(bool pause);
		public float GetDeviceScale();
		public int GetDeviceSafeWidth();
		public void CreateBannerView(string adUnitId, AdSize adSize, AdPosition position);
		public void CreateBannerView(string adUnitId, AdSize adSize, int positionX, int positionY);
		public void LoadAd(AdRequest request);
		public void ShowBannerView();
		public void HideBannerView();
		public void DestroyBannerView();
		public float GetHeightInPixels();
		public float GetWidthInPixels();
		public void SetPosition(AdPosition adPosition);
		public void SetPosition(int x, int y);
		public void CreateInterstitialAd(string adUnitId);
		public bool IsLoaded();
		public void ShowInterstitial();
		public void DestroyInterstitial();
		public void CreateRewardBasedVideoAd();
		public void SetUserId(string userId);
		public void LoadAd(AdRequest request, string adUnitId);
		public void DestroyRewardBasedVideoAd();
		public void ShowRewardBasedVideoAd();
		public void CreateAdLoader(AdLoader.Builder builder);
		public void Load(AdRequest request);
		public void SetAdSize(AdSize adSize);
		public string MediationAdapterClassName();
	}
}
