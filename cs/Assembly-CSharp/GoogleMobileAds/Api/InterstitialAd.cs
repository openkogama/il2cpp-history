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
	public class InterstitialAd
	{
		// Fields
		private IInterstitialClient client;
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
		private EventHandler<EventArgs> OnAdClosed;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private EventHandler<EventArgs> OnAdLeavingApplication;
	
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
		public event EventHandler<EventArgs> OnAdClosed {
			add;
			remove;
		}
		public event EventHandler<EventArgs> OnAdLeavingApplication {
			add;
			remove;
		}
	
		// Constructors
		public InterstitialAd(string adUnitId);
	
		// Methods
		public void LoadAd(AdRequest request);
		public bool IsLoaded();
		public void Show();
		public void Destroy();
		public string MediationAdapterClassName();
		[CompilerGenerated]
		private void _InterstitialAd_m__0(object sender, EventArgs args);
		[CompilerGenerated]
		private void _InterstitialAd_m__1(object sender, AdFailedToLoadEventArgs args);
		[CompilerGenerated]
		private void _InterstitialAd_m__2(object sender, EventArgs args);
		[CompilerGenerated]
		private void _InterstitialAd_m__3(object sender, EventArgs args);
		[CompilerGenerated]
		private void _InterstitialAd_m__4(object sender, EventArgs args);
	}
}
