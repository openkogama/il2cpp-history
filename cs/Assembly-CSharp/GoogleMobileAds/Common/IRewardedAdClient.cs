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
	public interface IRewardedAdClient
	{
		// Events
		event EventHandler<EventArgs> OnAdLoaded {
			add;
			remove;
		}
		event EventHandler<AdErrorEventArgs> OnAdFailedToLoad {
			add;
			remove;
		}
		event EventHandler<AdErrorEventArgs> OnAdFailedToShow {
			add;
			remove;
		}
		event EventHandler<EventArgs> OnAdOpening {
			add;
			remove;
		}
		event EventHandler<Reward> OnUserEarnedReward {
			add;
			remove;
		}
		event EventHandler<EventArgs> OnAdClosed {
			add;
			remove;
		}
	
		// Methods
		void CreateRewardedAd(string adUnitId);
		void LoadAd(AdRequest request);
		bool IsLoaded();
		string MediationAdapterClassName();
		Reward GetRewardItem();
		void Show();
		void SetServerSideVerificationOptions(ServerSideVerificationOptions serverSideVerificationOptions);
	}
}
