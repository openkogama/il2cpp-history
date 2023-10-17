/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.AdIntegration;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public interface IAdSDK
{
	// Methods
	void PreInit(Action OnInitReady);
	bool TryInitialize();
	void ShowInterstitial(Action<InterstitialAdResult> onAdFinished);
	void ShowRewardedAd(Action<RewardedAdResult> onAdFinished);
}

