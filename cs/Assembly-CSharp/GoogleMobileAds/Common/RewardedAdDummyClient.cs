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
	public class RewardedAdDummyClient : IRewardedAdClient
	{
		// Fields
		[CompilerGenerated]
		[DebuggerBrowsable]
		private EventHandler<EventArgs> OnAdLoaded;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private EventHandler<AdErrorEventArgs> OnAdFailedToLoad;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private EventHandler<AdErrorEventArgs> OnAdFailedToShow;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private EventHandler<EventArgs> OnAdOpening;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private EventHandler<EventArgs> OnAdClosed;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private EventHandler<Reward> OnUserEarnedReward;
	
		// Events
		public event EventHandler<EventArgs> OnAdLoaded {
			add;
			remove;
		}
		public event EventHandler<AdErrorEventArgs> OnAdFailedToLoad {
			add;
			remove;
		}
		public event EventHandler<AdErrorEventArgs> OnAdFailedToShow {
			add;
			remove;
		}
		public event EventHandler<EventArgs> OnAdOpening {
			add;
			remove;
		}
		public event EventHandler<EventArgs> OnAdClosed {
			add;
			remove;
		}
		public event EventHandler<Reward> OnUserEarnedReward {
			add;
			remove;
		}
	
		// Constructors
		public RewardedAdDummyClient();
	
		// Methods
		public void CreateRewardedAd(string adUnitId);
		public void LoadAd(AdRequest request);
		public bool IsLoaded();
		public void Show();
		public string MediationAdapterClassName();
		public Reward GetRewardItem();
		public void SetServerSideVerificationOptions(ServerSideVerificationOptions serverSideVerificationOptions);
	}
}
