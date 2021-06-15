/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.AdIntegration;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Assets.Scripts.AdIntegration.Web
{
	public class WebAdManager : IAdManager, IUpdatecontrollerSubscriberUpdate
	{
		// Fields
		private bool webReturnedAvailabilityInterstitial;
		private bool webReturnedAvailabilityRewardedAd;
		private static readonly float refreshTimer;
		private float updateTime;
		private DateTime prevInterstitialTime;
		private IAdUIManager adUIManager;
		private IAdManager sdkManager;
		private bool embeddedSiteSDKAvailable;
		private EmbeddedSiteConfigData siteData;
		private bool probablyWatchingAd;
		private float probablyWatchingAdDelay;
		private float probablyWatchingAdStarted;
		private AdContext currentAdType;
		private bool showingAd;
		private float timeOfRewardedAdStart;
		private bool timeoutAdAfterDelayAsUnlocked;
		private int timeoutSuccessDelay;
		private float interstitialTimeoutAfterRewardedAd;
		private float lastSeenRewardedAd;
	
		// Properties
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
	
		private struct JSONRewardedAdSuccessful
		{
			// Fields
			public bool status;
		}
	
		// Constructors
		public WebAdManager();
		static WebAdManager();
	
		// Methods
		public void InitializeAdConfigSettings(AdConfigSettings config);
		public void InitializeCallbackManager(IAdUIManager adUIManager);
		public void CreateAdManagerHack();
		public void ForceCreateEmbeddedSiteSDK(EmbeddedSiteConfigData site);
		public void RequestRewardedAd(Action<RewardedAdResult> rewardedAdCallback, AdContext context);
		private void StartedWatchingAd();
		private void SendRewardRequestStats(AdContext context);
		public void RequestInterstitial(Action<InterstitialAdResult> interstitialCB, AdContext context);
		private void SendInterstitialAdRequestStats(AdContext context);
		private void InterstitialAdShownSDKCallback(InterstitialAdResult result);
		private void RewardedAdShownSDKCallback(RewardedAdResult result);
		private void RequestNonEmbeddedInterstitialAd();
		private void RequestNonEmbeddedRewardedAd();
		private void SetFinishedWatchingAd(string adType);
		private static void SendStat(string stat);
		public void UpdateControllerUpdate();
		private void OnInterstitialShownCallback(bool ok, string json);
		private void OnRewardedAdShownCallback(bool ok, string json);
		private void WebCallbackAdAvailable(bool ok, string jsonData);
		private void WebCallbackRewardedAdAvailable(bool ok, string jsonData);
	}
}
