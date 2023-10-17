/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.AdIntegration;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Assets.Scripts.AdIntegration.Web
{
	public class AdSDKManager : IAdManager
	{
		// Fields
		private Action<InterstitialAdResult> interstitialCallback;
		private Action<RewardedAdResult> rewardedCallback;
		private IAdSDK adSDK;
		private bool wasInitializedSuccessfully;
	
		// Properties
		public System.Type AdSDKType { get; }
		public bool WasInitializedSuccessfully { get; }
		public string RewardedAdNotAvailableText { get; }
		public TimeSpan TimeSinceLastAd { get; }
		public TimeSpan TimeSinceLastInterstitial { get; }
		public TimeSpan TimeSinceLastRewarded { get; }
		public bool ReadyForRewardedAdRequest { get; }
		public bool ReadyForInterstitialAdRequest { get; }
	
		// Constructors
		public AdSDKManager(EmbeddedSite site);
	
		// Methods
		private void OnAdSDKInitReady();
		public void RequestInterstitial(Action<InterstitialAdResult> interstitialCallback, AdContext context);
		public void RequestRewardedAd(Action<RewardedAdResult> rewardedAdCallback, AdContext context);
		public void InitializeAdConfigSettings(AdConfigSettings config);
		public bool HideFullscreen();
		public void InitializeCallbackManager(IAdUIManager handler);
	}
}
