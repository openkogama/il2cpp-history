/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.AdIntegration;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace AdIntegration.InHouse
{
	public class InHouseAdManager : IAdManager
	{
		// Fields
		[CompilerGenerated]
		private bool _ReadyForRewardedAdRequest_k__BackingField;
		private InHouseAdController inHouseAdController;
		private bool rewarded;
		private Action<RewardedAdResult> rewardCallback;
		private Action<InterstitialAdResult> interstitialCallback;
		private AdContext adContext;
		private bool timeoutAsEnabled;
		private int timeoutSuccessDelay;
	
		// Properties
		public string RewardedAdNotAvailableText { get; }
		public TimeSpan TimeSinceLastAd { get; }
		public TimeSpan TimeSinceLastInterstitial { get; }
		public TimeSpan TimeSinceLastRewarded { get; }
		public bool ReadyForRewardedAdRequest { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public bool ReadyForInterstitialAdRequest { get; }
	
		// Constructors
		public InHouseAdManager();
	
		// Methods
		public void InitializeAdConfigSettings(AdConfigSettings config);
		public bool HideFullscreen();
		public void InitializeCallbackManager(IAdUIManager handler);
		public void RequestRewardedAd(Action<RewardedAdResult> rewardedAdCallback, AdContext context);
		private void OnRewardedFinished(bool obj);
		private void OnAdFinished();
		private void OnInterstitialFinished(bool obj);
		public void RequestInterstitial(Action<InterstitialAdResult> callback, AdContext context);
		private void PrepareAd(bool reward, AdContext context);
		public void InitializeAdController(InHouseAdController controller);
		private void UpdateInitStatus();
	}
}
