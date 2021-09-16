/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using GoogleMobileAds.Api;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace GoogleMobileAds.Common
{
	public interface IRewardBasedVideoAdClient
	{
		// Events
		event EventHandler<EventArgs> OnAdLoaded {
			add;
			remove;
		}
		event EventHandler<AdFailedToLoadEventArgs> OnAdFailedToLoad {
			add;
			remove;
		}
		event EventHandler<EventArgs> OnAdOpening {
			add;
			remove;
		}
		event EventHandler<EventArgs> OnAdStarted {
			add;
			remove;
		}
		event EventHandler<Reward> OnAdRewarded {
			add;
			remove;
		}
		event EventHandler<EventArgs> OnAdClosed {
			add;
			remove;
		}
		event EventHandler<EventArgs> OnAdLeavingApplication {
			add;
			remove;
		}
		event EventHandler<EventArgs> OnAdCompleted {
			add;
			remove;
		}
	
		// Methods
		void CreateRewardBasedVideoAd();
		void LoadAd(AdRequest request, string adUnitId);
		bool IsLoaded();
		string MediationAdapterClassName();
		void ShowRewardBasedVideoAd();
		void SetUserId(string userId);
	}
}
