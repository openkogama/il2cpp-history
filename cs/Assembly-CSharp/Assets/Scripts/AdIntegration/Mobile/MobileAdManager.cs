/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.AdIntegration;
using GoogleMobileAds.Api;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
			private AdLoadState adLoadState;
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
			public void HandleInterstitialLoaded(object sender, EventArgs args);
			public void HandleInterstitialFailedToLoad(object sender, AdFailedToLoadEventArgs args);
			public void HandleInterstitialOpened(object sender, EventArgs args);
			public void HandleInterstitialClosed(object sender, EventArgs args);
			public void HandleInterstitialLeftApplication(object sender, EventArgs args);
		}
	
		private class InternalStateRewardedAd
		{
			// Fields
			private DateTime prevInterstitialTime;
			private AdLoadState adLoadState;
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
			public void CreateAndLoadRewardedAd();
			public void RequestRewardedAd(Action<RewardedAdResult> rewardedAdCallback);
			private void SetupCallbacks();
			private void LoadRewardedAd();
			private void HandleRewardedAdOpening(object sender, EventArgs args);
			private void HandleRewardedAdLoaded(object sender, EventArgs args);
			private void HandleRewardedAdFailedToLoad(object sender, AdErrorEventArgs args);
			private void HandleRewardedAdFailedToShow(object sender, AdErrorEventArgs args);
			private void HandleError();
			private void HandleRewardedAdClosed(object sender, EventArgs args);
			private void HandleUserEarnedReward(object sender, Reward args);
			private void FinishRequest();
			public void Destroy();
			private void DestroyRewardedAd();
			public override string ToString();
			private void RemoveCallbacks();
		}
	
		private class InterstitialAdResultHandler
		{
			// Fields
			public bool IsDone;
			private readonly Action<InterstitialAdResult> interstitialCallback;
			private InterstitialAdResult interstitialAdResult;
			private IAdUIManager adUIManager;
			private AdContext context;
	
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
			private IAdUIManager adUIManager;
			private AdContext context;
	
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
		static MobileAdManager();
	
		// Methods
		public void InitializeAdConfigSettings(AdConfigSettings config);
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
		private void SetConsent(bool hasConsented, bool isGDPRConsentRequired);
		private static AdRequest CreateAdRequest();
		private void SetConsentUnityAds(bool hasConsented);
		private void SetConsentIronSource(bool hasConsented);
		private static string BoolToString(bool b);
		private static void SendStat(string stat);
		private void InitCompleteAction(InitializationStatus initializationStatus);
	}
}
