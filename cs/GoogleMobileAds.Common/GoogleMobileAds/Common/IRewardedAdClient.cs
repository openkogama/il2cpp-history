/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using GoogleMobileAds.Api;

// Image 59: GoogleMobileAds.Common.dll - Assembly: GoogleMobileAds.Common, Version=8.7.0.0, Culture=neutral, PublicKeyToken=null
[assembly: AssemblyCompany("Google LLC")]
[assembly: AssemblyConfiguration("")]
[assembly: AssemblyCopyright("Copyright 2023 Google LLC. All Rights Reserved.")]
[assembly: AssemblyDescription("")]
[assembly: AssemblyFileVersion("8.7.0")]
[assembly: AssemblyProduct("GoogleMobileAds")]
[assembly: AssemblyTitle("GoogleMobileAds.Common")]
[assembly: AssemblyTrademark("")]
[assembly: Debuggable(DebuggableAttribute.DebuggingModes.None | DebuggableAttribute.DebuggingModes.IgnoreSymbolStoreSequencePoints)]
[assembly: InternalsVisibleTo("GoogleMobileAdsNative.iOS.unobfuscate")]
[assembly: InternalsVisibleTo("GoogleMobileAdsNative.Android.unobfuscate")]
[assembly: InternalsVisibleTo("GoogleMobileAdsNative.unobfuscate")]
[assembly: InternalsVisibleTo("GoogleMobileAdsNative.iOS")]
[assembly: InternalsVisibleTo("GoogleMobileAdsNative.Android")]
[assembly: InternalsVisibleTo("GoogleMobileAdsNative")]
[assembly: InternalsVisibleTo("GoogleMobileAds.Android")]
[assembly: InternalsVisibleTo("GoogleMobileAds.iOS")]
[assembly: InternalsVisibleTo("GoogleMobileAds")]
[assembly: InternalsVisibleTo("GoogleMobileAds")]
[assembly: InternalsVisibleTo("GoogleMobileAds.Android")]
[assembly: InternalsVisibleTo("GoogleMobileAds.iOS")]
[assembly: InternalsVisibleTo("GoogleMobileAds.Unity")]
[assembly: InternalsVisibleTo("GoogleMobileAdsNative")]
[assembly: RuntimeCompatibility(WrapNonExceptionThrows = true)]

namespace GoogleMobileAds.Common
{
	public interface IRewardedAdClient
	{
		// Events
		event EventHandler<EventArgs> OnAdLoaded {
			add;
			remove;
		}
		event EventHandler<LoadAdErrorClientEventArgs> OnAdFailedToLoad {
			add;
			remove;
		}
		event EventHandler<AdValueEventArgs> OnPaidEvent {
			add;
			remove;
		}
		event EventHandler<Reward> OnUserEarnedReward {
			add;
			remove;
		}
		event EventHandler<AdErrorClientEventArgs> OnAdFailedToPresentFullScreenContent {
			add;
			remove;
		}
		event EventHandler<EventArgs> OnAdDidPresentFullScreenContent {
			add;
			remove;
		}
		event EventHandler<EventArgs> OnAdDidDismissFullScreenContent {
			add;
			remove;
		}
		event EventHandler<EventArgs> OnAdDidRecordImpression {
			add;
			remove;
		}
		event Action OnAdClicked {
			add;
			remove;
		}
	
		// Methods
		void CreateRewardedAd();
		void LoadAd(string adUnitID, AdRequest request);
		void Show();
		void DestroyRewardedAd();
	}
}
