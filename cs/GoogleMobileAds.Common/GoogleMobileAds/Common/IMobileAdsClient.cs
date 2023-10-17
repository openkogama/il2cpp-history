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
	public interface IMobileAdsClient
	{
		// Methods
		void Initialize(Action<IInitializationStatusClient> initCompleteAction);
		void DisableMediationInitialization();
		void SetApplicationVolume(float volume);
		void SetApplicationMuted(bool muted);
		void SetiOSAppPauseOnBackground(bool pause);
		float GetDeviceScale();
		int GetDeviceSafeWidth();
		void SetRequestConfiguration(RequestConfiguration requestConfiguration);
		RequestConfiguration GetRequestConfiguration();
		void OpenAdInspector(Action<AdInspectorErrorClientEventArgs> adInspectorClosedAction);
	}
}
