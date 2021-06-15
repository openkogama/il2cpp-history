/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System.Diagnostics;
using System.Runtime.CompilerServices;
using GoogleMobileAds.Api;
using GoogleMobileAds.Common;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace GoogleMobileAds
{
	public class GoogleMobileAdsClientFactory
	{
		// Constructors
		public GoogleMobileAdsClientFactory();
	
		// Methods
		public static IBannerClient BuildBannerClient();
		public static IInterstitialClient BuildInterstitialClient();
		public static IRewardBasedVideoAdClient BuildRewardBasedVideoAdClient();
		public static IRewardedAdClient BuildRewardedAdClient();
		public static IAdLoaderClient BuildAdLoaderClient(AdLoader adLoader);
		public static IMobileAdsClient MobileAdsInstance();
	}
}
