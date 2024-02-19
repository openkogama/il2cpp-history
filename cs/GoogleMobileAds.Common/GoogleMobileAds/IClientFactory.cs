/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using GoogleMobileAds.Common;

// Image 50: GoogleMobileAds.Common.dll - Assembly: GoogleMobileAds.Common, Version=8.7.0.0, Culture=neutral, PublicKeyToken=null

namespace GoogleMobileAds
{
	public interface IClientFactory
	{
		// Methods
		IInterstitialClient BuildInterstitialClient();
		IRewardedAdClient BuildRewardedAdClient();
		IMobileAdsClient MobileAdsInstance();
	}
}
