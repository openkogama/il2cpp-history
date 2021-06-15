/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Assets.Scripts.AdIntegration
{
	public interface IAdUIManager
	{
		// Methods
		bool AdShowing();
		void ShowInterstitial(Action<InterstitialAdResult> callbackFunction);
		void ShowRewardedVideo(Action<RewardedAdResult> callbackFunction);
		void PopInterstitial(InterstitialAdResult adResult);
		void PopRewardedVideo(RewardedAdResult adResult);
	}
}
