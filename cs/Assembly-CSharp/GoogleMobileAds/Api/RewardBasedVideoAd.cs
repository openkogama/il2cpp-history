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
	public class RewardBasedVideoAd
	{
		// Fields
		private IRewardBasedVideoAdClient client;
		private static readonly RewardBasedVideoAd instance;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private EventHandler<EventArgs> OnAdLoaded;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private EventHandler<AdFailedToLoadEventArgs> OnAdFailedToLoad;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private EventHandler<EventArgs> OnAdOpening;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private EventHandler<EventArgs> OnAdStarted;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private EventHandler<EventArgs> OnAdClosed;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private EventHandler<Reward> OnAdRewarded;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private EventHandler<EventArgs> OnAdLeavingApplication;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private EventHandler<EventArgs> OnAdCompleted;
	
		// Properties
		public static RewardBasedVideoAd Instance { get; }
	
		// Events
		public event EventHandler<EventArgs> OnAdLoaded {
			add;
			remove;
		}
		public event EventHandler<AdFailedToLoadEventArgs> OnAdFailedToLoad {
			add;
			remove;
		}
		public event EventHandler<EventArgs> OnAdOpening {
			add;
			remove;
		}
		public event EventHandler<EventArgs> OnAdStarted {
			add;
			remove;
		}
		public event EventHandler<EventArgs> OnAdClosed {
			add;
			remove;
		}
		public event EventHandler<Reward> OnAdRewarded {
			add;
			remove;
		}
		public event EventHandler<EventArgs> OnAdLeavingApplication {
			add;
			remove;
		}
		public event EventHandler<EventArgs> OnAdCompleted {
			add;
			remove;
		}
	
		// Constructors
		private RewardBasedVideoAd();
		static RewardBasedVideoAd();
	
		// Methods
		public void LoadAd(AdRequest request, string adUnitId);
		public bool IsLoaded();
		public void Show();
		public void SetUserId(string userId);
		public string MediationAdapterClassName();
		[CompilerGenerated]
		private void _RewardBasedVideoAd_m__0(object sender, EventArgs args);
		[CompilerGenerated]
		private void _RewardBasedVideoAd_m__1(object sender, AdFailedToLoadEventArgs args);
		[CompilerGenerated]
		private void _RewardBasedVideoAd_m__2(object sender, EventArgs args);
		[CompilerGenerated]
		private void _RewardBasedVideoAd_m__3(object sender, EventArgs args);
		[CompilerGenerated]
		private void _RewardBasedVideoAd_m__4(object sender, EventArgs args);
		[CompilerGenerated]
		private void _RewardBasedVideoAd_m__5(object sender, EventArgs args);
		[CompilerGenerated]
		private void _RewardBasedVideoAd_m__6(object sender, Reward args);
		[CompilerGenerated]
		private void _RewardBasedVideoAd_m__7(object sender, EventArgs args);
	}
}
