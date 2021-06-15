/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using GoogleMobileAds.Common;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace GoogleMobileAds.Api
{
	public class RewardedAd
	{
		// Fields
		private IRewardedAdClient client;
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
		public RewardedAd(string adUnitId);
	
		// Methods
		public void LoadAd(AdRequest request);
		public bool IsLoaded();
		public void Show();
		public void SetServerSideVerificationOptions(ServerSideVerificationOptions serverSideVerificationOptions);
		public Reward GetRewardItem();
		public string MediationAdapterClassName();
		[CompilerGenerated]
		private void _RewardedAd_m__0(object sender, EventArgs args);
		[CompilerGenerated]
		private void _RewardedAd_m__1(object sender, AdErrorEventArgs args);
		[CompilerGenerated]
		private void _RewardedAd_m__2(object sender, AdErrorEventArgs args);
		[CompilerGenerated]
		private void _RewardedAd_m__3(object sender, EventArgs args);
		[CompilerGenerated]
		private void _RewardedAd_m__4(object sender, EventArgs args);
		[CompilerGenerated]
		private void _RewardedAd_m__5(object sender, Reward args);
	}
}
