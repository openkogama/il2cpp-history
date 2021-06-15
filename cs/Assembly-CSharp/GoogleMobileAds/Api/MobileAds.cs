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
	public class MobileAds
	{
		// Fields
		private static readonly IMobileAdsClient client;
	
		// Nested types
		public static class Utils
		{
			// Methods
			public static float GetDeviceScale();
			public static int GetDeviceSafeWidth();
		}
	
		// Constructors
		public MobileAds();
		static MobileAds();
	
		// Methods
		public static void Initialize(string appId);
		public static void Initialize(Action<InitializationStatus> initCompleteAction);
		public static void SetApplicationMuted(bool muted);
		public static void SetApplicationVolume(float volume);
		public static void SetiOSAppPauseOnBackground(bool pause);
		private static IMobileAdsClient GetMobileAdsClient();
	}
}
