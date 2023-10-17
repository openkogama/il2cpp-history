/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.AdIntegration;
using GoogleMobileAds.Api;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Assets.Scripts.AdIntegration.Mobile
{
	public class MobileAdManager : IAdManager, IUpdatecontrollerSubscriberUpdate
	{
		// Fields
		private static ConsentAndCompliance consentAndCompliance;
		private bool isInitialized;
		private static bool testing;
		private RewardedAdResultHandler rewardedAdResultHandler;
		private InterstitialAdResultHandler interstitialAdResultHandler;
		private InternalAdManagerState internalAdManagerState;
		private IAdUIManager adUIManager;
		private bool timeoutAdAfterDelayAsUnlocked;
		private int timeoutSuccessDelay;
		private float timeOfRewardedAdStart;
		private float interstitialTimeoutAfterRewardedAd;
		private float lastSeenRewardedAd;
	
		// Properties
		public string RewardedAdNotAvailableText { get; }
		public bool IsAdRunning { get; }
		public TimeSpan TimeSinceLastAd { get; }
		public TimeSpan TimeSinceLastInterstitial { get; }
		public TimeSpan TimeSinceLastRewarded { get; }
		public bool ReadyForRewardedAdRequest { get; }
		public bool ReadyForInterstitialAdRequest { get; }
	
		// Nested types
		private class AdLoadState
		{
			// Fields
			private const int loadAttemptsMax = 0;
			public bool loadingAd;
			private int loadAttempts;
	
			// Properties
			public bool IsOk { get; }
	
			// Constructors
			public AdLoadState();
	
			// Methods
			public void ResetAttempts();
			public bool Reload();
			public override string ToString();
		}
	
		public class InternalStateInterstitial
		{
			// Fields
			private DateTime prevInterstitialTime;
			private readonly AdLoadState adLoadState;
			private InterstitialAdResult interstitialAdResult;
			private InterstitialAd interstitial;
			private bool isHandlingRequest;
			private Action<InterstitialAdResult> interstitialAdCallback;
	
			// Properties
			public TimeSpan TimeSinceLastInterstitial { get; }
			public bool IsHandlingRequest { get; }
			public bool IsOk { get; }
	
			// Constructors
			public InternalStateInterstitial();
	
			// Methods
			public void RequestInterstitialAd(Action<InterstitialAdResult> interstitialAdCallback);
			public void CreateAndLoadInterstitialAd();
			private void LoadInterstitialAd();
			private void SetupCallbacks();
			private void RemoveCallbacks();
			private void DestroyInterstitial();
			public void Destroy();
			private void HandleError();
			private void FinishRequest();
			public override string ToString();
			private void ADLoadCallback(InterstitialAd ad, LoadAdError error);
			private void InterstitialOnOnAdFullScreenContentOpened();
			private void InterstitialOnOnAdFullScreenContentClosed();
			private void InterstitialOnOnAdClicked();
			private void InterstitialOnOnAdFullScreenContentFailed(AdError error);
			private void InterstitialOnOnAdImpressionRecorded();
			private void InterstitialOnOnAdPaid(AdValue adValue);
		}
	
		private class InternalStateRewardedAd
		{
			// Fields
			private DateTime prevInterstitialTime;
			private readonly AdLoadState adLoadState;
			private RewardedAdResult rewardAdResult;
			private Action<RewardedAdResult> rewardedAdCallback;
			private RewardedAd rewardedAd;
			private bool isHandlingRequest;
	
			// Properties
			public TimeSpan TimeSinceLastRewarded { get; }
			public bool IsHandlingRequest { get; }
			public bool IsOk { get; }
	
			// Constructors
			public InternalStateRewardedAd();
	
			// Methods
			public void RequestRewardedAd(Action<RewardedAdResult> rewardedAdCallback);
			public void CreateAndLoadRewardedAd();
			private void LoadRewardedAd();
			private void SetupCallbacks();
			private void RemoveCallbacks();
			private void DestroyRewardedAd();
			public void Destroy();
			private void HandleRewardedAdLoaded(RewardedAd ad, LoadAdError error);
			private void UserRewardEarnedCallback(Reward reward);
			private void RewardedAdOnOnAdFullScreenContentOpened();
			private void RewardedAdOnOnAdFullScreenContentClosed();
			private void RewardedAdOnOnAdFullScreenContentFailed(AdError obj);
			private void RewardedAdOnOnAdImpressionRecorded();
			private void RewardedAdOnOnAdPaid(AdValue adValue);
			private void RewardedAdOnOnAdClicked();
			private void HandleError();
			private void FinishRequest();
			public override string ToString();
		}
	
		private class InterstitialAdResultHandler
		{
			// Fields
			public bool IsDone;
			private readonly Action<InterstitialAdResult> interstitialCallback;
			private InterstitialAdResult interstitialAdResult;
			private readonly IAdUIManager adUIManager;
			private readonly AdContext context;
	
			// Constructors
			public InterstitialAdResultHandler(Action<InterstitialAdResult> interstitialCallback, IAdUIManager adUIManager, AdContext context);
	
			// Methods
			public void SetResult(InterstitialAdResult interstitialAdResult);
			public void DoCallBack();
		}
	
		private class RewardedAdResultHandler
		{
			// Fields
			public bool IsDone;
			private readonly Action<RewardedAdResult> rewardedAdCallback;
			private RewardedAdResult rewardedAdResult;
			private readonly IAdUIManager adUIManager;
			private readonly AdContext context;
	
			// Constructors
			public RewardedAdResultHandler(Action<RewardedAdResult> rewardedAdCallback, IAdUIManager adUIManager, AdContext context);
	
			// Methods
			public void SetResult(RewardedAdResult rewardedAdResult);
			public void DoCallBack();
		}
	
		private class ConsentAndCompliance
		{
			// Fields
			private ConsentData consentData;
	
			// Properties
			public bool DoTagForChildDirectedTreatment { get; }
			public bool TagForUnderAgeOfConsent { get; }
			public bool HasConsented { get; }
			public bool IsGDPRConsentRequired { get; }
	
			// Constructors
			public ConsentAndCompliance();
			public ConsentAndCompliance(ConsentData consentData);
	
			// Methods
			public override string ToString();
		}
	
		private class InternalAdManagerState
		{
			// Fields
			private bool isReady;
			private InternalStateRewardedAd internalStateRewardedAds;
			private InternalStateInterstitial internalStateInterstitial;
	
			// Properties
			public TimeSpan TimeSinceLastAd { get; }
			public TimeSpan TimeSinceLastInterstitial { get; }
			public TimeSpan TimeSinceLastRewarded { get; }
			public bool IsReady { get; }
			public bool ReadyForRewardedAdRequest { get; }
			public bool ReadyForInterstitialAdRequest { get; }
			public bool IsHandlingRequest { get; }
	
			// Constructors
			public InternalAdManagerState();
	
			// Methods
			public void Initialize();
			public void RequestRewardedAd(Action<RewardedAdResult> rewardedAdCallback);
			public void RequestInterstitial(Action<InterstitialAdResult> interstitialCallback);
			public void Destroy();
			public override string ToString();
		}
	
		// Constructors
		public MobileAdManager(bool testing);
	
		// Methods
		public void InitializeAdConfigSettings(AdConfigSettings config);
		public bool HideFullscreen();
		public void Initialize();
		public void InitializeCallbackManager(IAdUIManager adUIManager);
		private void SetupConsentAndCompliance(ConsentData consentData);
		public void RequestRewardedAd(Action<RewardedAdResult> rewardedAdCallback, AdContext context);
		private void SendRewardRequestStats(AdContext context);
		public void RequestInterstitial(Action<InterstitialAdResult> interstitialCallback, AdContext context);
		private void SendInterstitialAdRequestStats(AdContext context);
		private void InterstitialCallback(InterstitialAdResult obj);
		private void RewardedAdCallback(RewardedAdResult obj);
		public void Destroy();
		public override string ToString();
		public void UpdateControllerUpdate();
		private void SetConsent(ConsentAndCompliance cac);
		private void SetConsentVungle(ConsentAndCompliance cac);
		private void SetConsentAdColony(ConsentAndCompliance cac);
		private void SetConsentAppLovin(ConsentAndCompliance cac);
		private void SetConsentUnityAds(bool hasConsented);
		private void SetConsentIronSource(bool hasConsented);
		private static AdRequest CreateAdRequest();
		private static void SendStat(string stat);
		private void InitCompleteAction(InitializationStatus initializationStatus);
	}
}
