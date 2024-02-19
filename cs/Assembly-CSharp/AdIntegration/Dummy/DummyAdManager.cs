/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.AdIntegration;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace AdIntegration.Dummy
{
	public class DummyAdManager : IAdManager, IUpdatecontrollerSubscriberUpdate
	{
		// Fields
		public const bool PortalUIRealAdManagerInEditor = true;
		private IAdUIManager adUIHandler;
		private float startTime;
		private readonly float delay;
		private bool rewarded;
		private EmbeddedSiteConfigData siteData;
		private bool timeoutAsEnabled;
		private int timeoutSuccessDelay;
	
		// Properties
		public string RewardedAdNotAvailableText { get; }
		public TimeSpan TimeSinceLastAd { get; }
		public TimeSpan TimeSinceLastInterstitial { get; }
		public TimeSpan TimeSinceLastRewarded { get; }
		public bool ReadyForRewardedAdRequest { get; }
		public bool ReadyForInterstitialAdRequest { get; }
	
		// Constructors
		public DummyAdManager();
	
		// Methods
		public void InitializeAdConfigSettings(AdConfigSettings config);
		public bool HideFullscreen();
		public void InitializeCallbackManager(IAdUIManager handler);
		public void RequestRewardedAd(Action<RewardedAdResult> rewardedAdCallback, AdContext context);
		public void RequestInterstitial(Action<InterstitialAdResult> interstitialCallback, AdContext context);
		public void UpdateControllerUpdate();
	}
}
