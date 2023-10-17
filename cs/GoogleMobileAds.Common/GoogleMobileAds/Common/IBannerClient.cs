/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using GoogleMobileAds.Api;

// Image 28: GoogleMobileAds.Common.dll - Assembly: GoogleMobileAds.Common, Version=8.1.0.0, Culture=neutral, PublicKeyToken=null

namespace GoogleMobileAds.Common
{
	public interface IBannerClient
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
		event EventHandler<EventArgs> OnAdOpening {
			add;
			remove;
		}
		event EventHandler<EventArgs> OnAdClosed {
			add;
			remove;
		}
		event EventHandler<AdValueEventArgs> OnPaidEvent {
			add;
			remove;
		}
		event Action OnAdClicked {
			add;
			remove;
		}
		event Action OnAdImpressionRecorded {
			add;
			remove;
		}
	
		// Methods
		void CreateBannerView(string adUnitId, AdSize adSize, AdPosition position);
		void CreateBannerView(string adUnitId, AdSize adSize, int x, int y);
		void LoadAd(AdRequest request);
		void ShowBannerView();
		void HideBannerView();
		void DestroyBannerView();
		float GetHeightInPixels();
		float GetWidthInPixels();
		void SetPosition(AdPosition adPosition);
		void SetPosition(int x, int y);
		IResponseInfoClient GetResponseInfoClient();
	}
}
