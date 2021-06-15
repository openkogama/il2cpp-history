/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Assets.Scripts.AdIntegration
{
	public interface IAdManager
	{
		// Properties
		string RewardedAdNotAvailableText { get; }
		TimeSpan TimeSinceLastAd { get; }
		TimeSpan TimeSinceLastInterstitial { get; }
		TimeSpan TimeSinceLastRewarded { get; }
		bool ReadyForRewardedAdRequest { get; }
		bool ReadyForInterstitialAdRequest { get; }
	
		// Methods
		void RequestRewardedAd(Action<RewardedAdResult> rewardedAdCallback, AdContext context);
		void RequestInterstitial(Action<InterstitialAdResult> interstitialCallback, AdContext context);
		void InitializeCallbackManager(IAdUIManager handler);
		void InitializeAdConfigSettings(AdConfigSettings config);
	}
}
