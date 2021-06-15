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
	public interface IAdLoaderClient
	{
		// Events
		event EventHandler<AdFailedToLoadEventArgs> OnAdFailedToLoad {
			add;
			remove;
		}
		event EventHandler<CustomNativeEventArgs> OnCustomNativeTemplateAdLoaded {
			add;
			remove;
		}
	
		// Methods
		void LoadAd(AdRequest request);
	}
}
