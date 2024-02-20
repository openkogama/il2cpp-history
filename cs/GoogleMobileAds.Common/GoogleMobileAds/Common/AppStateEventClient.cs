/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 50: GoogleMobileAds.Common.dll - Assembly: GoogleMobileAds.Common, Version=8.7.0.0, Culture=neutral, PublicKeyToken=null
[assembly: AssemblyCompany("Google LLC")]
[assembly: AssemblyConfiguration("")]
[assembly: AssemblyCopyright("Copyright 2023 Google LLC. All Rights Reserved.")]
[assembly: AssemblyDescription("")]
[assembly: AssemblyFileVersion("8.7.0")]
[assembly: AssemblyProduct("GoogleMobileAds")]
[assembly: AssemblyTitle("GoogleMobileAds.Common")]
[assembly: AssemblyTrademark("")]
[assembly: Debuggable(DebuggableAttribute.DebuggingModes.None | DebuggableAttribute.DebuggingModes.IgnoreSymbolStoreSequencePoints)]
[assembly: InternalsVisibleTo("GoogleMobileAdsNative.iOS")]
[assembly: InternalsVisibleTo("GoogleMobileAdsNative.Android")]
[assembly: InternalsVisibleTo("GoogleMobileAdsNative")]
[assembly: InternalsVisibleTo("GoogleMobileAds.Android")]
[assembly: InternalsVisibleTo("GoogleMobileAds.iOS")]
[assembly: InternalsVisibleTo("GoogleMobileAds")]
[assembly: InternalsVisibleTo("GoogleMobileAds")]
[assembly: InternalsVisibleTo("GoogleMobileAds.Android")]
[assembly: InternalsVisibleTo("GoogleMobileAds.iOS")]
[assembly: InternalsVisibleTo("GoogleMobileAds.Unity")]
[assembly: InternalsVisibleTo("GoogleMobileAdsNative")]
[assembly: InternalsVisibleTo("GoogleMobileAdsNative.unobfuscate")]
[assembly: InternalsVisibleTo("GoogleMobileAdsNative.Android.unobfuscate")]
[assembly: InternalsVisibleTo("GoogleMobileAdsNative.iOS.unobfuscate")]
[assembly: RuntimeCompatibility(WrapNonExceptionThrows = true)]

namespace GoogleMobileAds.Common
{
	public class AppStateEventClient : MonoBehaviour
	{
		// Fields
		private static AppStateEventClient instance;
		private Action<AppState> AppStateChanged;
		[CompilerGenerated]
		private static Action<AppState> __f__am_cache0;
	
		// Properties
		public static AppStateEventClient Instance { get; }
	
		// Events
		public event Action<AppState> AppStateChanged {
			add;
			remove;
		}
	
		// Constructors
		public AppStateEventClient();
	
		// Methods
		private void OnApplicationPause(bool isPaused);
		[CompilerGenerated]
		private static void _AppStateChanged_m__0(AppState param_0001133d);
	}
}
