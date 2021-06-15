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
	public interface IMobileAdsClient
	{
		// Methods
		void Initialize(string appId);
		void Initialize(Action<InitializationStatus> initCompleteAction);
		void SetApplicationVolume(float volume);
		void SetApplicationMuted(bool muted);
		void SetiOSAppPauseOnBackground(bool pause);
		float GetDeviceScale();
		int GetDeviceSafeWidth();
	}
}
