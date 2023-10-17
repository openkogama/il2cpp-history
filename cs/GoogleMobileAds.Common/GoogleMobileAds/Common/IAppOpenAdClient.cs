/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using GoogleMobileAds.Api;
using UnityEngine;

// Image 28: GoogleMobileAds.Common.dll - Assembly: GoogleMobileAds.Common, Version=8.1.0.0, Culture=neutral, PublicKeyToken=null

namespace GoogleMobileAds.Common
{
	public interface IAppOpenAdClient
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
		void CreateAppOpenAd();
		void LoadAd(string adUnitID, AdRequest request, ScreenOrientation orientation);
		void Show();
		IResponseInfoClient GetResponseInfoClient();
		void DestroyAppOpenAd();
	}
}
