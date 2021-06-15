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
	public class BannerView
	{
		// Fields
		private IBannerClient client;
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
		public BannerView(string adUnitId, AdSize adSize, AdPosition position);
		public BannerView(string adUnitId, AdSize adSize, int x, int y);
	
		// Methods
		public void LoadAd(AdRequest request);
		public void Hide();
		public void Show();
		public void Destroy();
		public float GetHeightInPixels();
		public float GetWidthInPixels();
		public void SetPosition(AdPosition adPosition);
		public void SetPosition(int x, int y);
		private void ConfigureBannerEvents();
		public string MediationAdapterClassName();
		[CompilerGenerated]
		private void _ConfigureBannerEvents_m__0(object sender, EventArgs args);
		[CompilerGenerated]
		private void _ConfigureBannerEvents_m__1(object sender, AdFailedToLoadEventArgs args);
		[CompilerGenerated]
		private void _ConfigureBannerEvents_m__2(object sender, EventArgs args);
		[CompilerGenerated]
		private void _ConfigureBannerEvents_m__3(object sender, EventArgs args);
		[CompilerGenerated]
		private void _ConfigureBannerEvents_m__4(object sender, EventArgs args);
	}
}
