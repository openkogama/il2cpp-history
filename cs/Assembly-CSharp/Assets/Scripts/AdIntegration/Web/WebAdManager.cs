/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using AdIntegration.InHouse;
using Assets.Scripts.AdIntegration;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Assets.Scripts.AdIntegration.Web
{
	public class WebAdManager : IAdManager, IUpdatecontrollerSubscriberUpdate
	{
		// Fields
		private bool webReturnedAvailabilityInterstitial;
		private bool webReturnedAvailabilityRewardedAd;
		private const float RefreshTimer = 60f;
		private float updateTime;
		private readonly DateTime prevInterstitialTime;
		private IAdUIManager adUIManager;
		private IAdManager sdkManager;
		private IAdManager inHouseAdManager;
		private bool embeddedSiteSDKAvailable;
		private bool inHouseAdManagerAvailable;
		private EmbeddedSiteConfigData siteData;
		private bool probablyWatchingAd;
		private const float ProbablyWatchingAdDelay = 3f;
		private float probablyWatchingAdStarted;
		private AdContext currentAdType;
		private bool showingAd;
		private float timeOfRewardedAdStart;
		private bool timeoutAdAfterDelayAsUnlocked;
		private int timeoutSuccessDelay;
		private float interstitialTimeoutAfterRewardedAd;
		private float lastSeenRewardedAd;
	
		// Properties
		public EmbeddedSiteConfigData EmbeddedSiteConfig { get; }
		public bool EmbeddedSiteSDKAvailable { get; }
		public string RewardedAdNotAvailableText { get; }
		public TimeSpan TimeSinceLastAd { get; }
		public TimeSpan TimeSinceLastInterstitial { get; }
		public TimeSpan TimeSinceLastRewarded { get; }
		public bool ReadyForRewardedAdRequest { get; }
		public bool ReadyForInterstitialAdRequest { get; }
	
		// Nested types
		private struct JSONAdReturnedData
		{
			// Fields
			public bool adAvailable;
		}
	
		private struct JSONInterstitialAdSuccessful
		{
			// Fields
			public bool status;
		}
	
		private struct JSONRewardedAdSuccessful
		{
			// Fields
			public bool status;
			public bool noReward;
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass46_0
		{
			// Fields
			public Action<RewardedAdResult> rewardedAdCallback;
			public WebAdManager __4__this;
			public AdContext context;
	
			// Constructors
			public __c__DisplayClass46_0();
	
			// Methods
			internal void _RequestRewardedAd_b__0();
			internal void _RequestRewardedAd_b__1();
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass49_0
		{
			// Fields
			public Action<InterstitialAdResult> interstitialCB;
			public WebAdManager __4__this;
			public AdContext context;
	
			// Constructors
			public __c__DisplayClass49_0();
	
			// Methods
			internal void _RequestInterstitial_b__0();
			internal void _RequestInterstitial_b__1();
		}
	
		// Constructors
		public WebAdManager();
	
		// Methods
		public static void AdLog(Exception e);
		public static void AdLog(string msg);
		public void InitializeAdConfigSettings(AdConfigSettings config);
		public bool HideFullscreen();
		public void InitializeCallbackManager(IAdUIManager adUIManager);
		public void CreateAdManagerHack();
		public void ForceCreateEmbeddedSiteSDK(EmbeddedSiteConfigData site);
		private void PrepareForAd(bool rewarded, AdContext context, Action onAdShowing, Action requestAd);
		public void RequestRewardedAd(Action<RewardedAdResult> rewardedAdCallback, AdContext context);
		private void StartedWatchingAd();
		private void SendRequestStats(bool rewarded, AdContext context);
		public void RequestInterstitial(Action<InterstitialAdResult> interstitialCB, AdContext context);
		private void InterstitialAdShownSDKCallback(InterstitialAdResult result);
		private void RewardedAdShownSDKCallback(RewardedAdResult result);
		private void RequestNonEmbeddedInterstitialAd();
		private void RequestNonEmbeddedRewardedAd();
		private void SetFinishedWatchingAd(string adType);
		private static void SendStat(string stat);
		public void UpdateControllerUpdate();
		private void OnInterstitialShownCallback(bool ok, string json);
		private void OnInHouseInterstitialAdShownCallback(InterstitialAdResult obj);
		private void OnRewardedAdShownCallback(bool ok, string json);
		private void RewardAdSuccess();
		private void OnInHouseRewardedAdShownCallback(RewardedAdResult obj);
		private void WebCallbackAdAvailable(bool ok, string jsonData);
		private void WebCallbackRewardedAdAvailable(bool ok, string jsonData);
		public void InitializeInHouse(InHouseAdController inHouseAdController);
	}
}
