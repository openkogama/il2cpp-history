/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;

// Image 59: GoogleMobileAds.Common.dll - Assembly: GoogleMobileAds.Common, Version=8.7.0.0, Culture=neutral, PublicKeyToken=null
[assembly: AssemblyCompany("Google LLC")]
[assembly: AssemblyConfiguration("")]
[assembly: AssemblyCopyright("Copyright 2023 Google LLC. All Rights Reserved.")]
[assembly: AssemblyDescription("")]
[assembly: AssemblyFileVersion("8.7.0")]
[assembly: AssemblyProduct("GoogleMobileAds")]
[assembly: AssemblyTitle("GoogleMobileAds.Common")]
[assembly: AssemblyTrademark("")]
[assembly: Debuggable(DebuggableAttribute.DebuggingModes.None | DebuggableAttribute.DebuggingModes.IgnoreSymbolStoreSequencePoints)]
[assembly: InternalsVisibleTo("GoogleMobileAdsNative.iOS.unobfuscate")]
[assembly: InternalsVisibleTo("GoogleMobileAdsNative.Android.unobfuscate")]
[assembly: InternalsVisibleTo("GoogleMobileAdsNative.unobfuscate")]
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
[assembly: RuntimeCompatibility(WrapNonExceptionThrows = true)]

namespace GoogleMobileAds.Common
{
	public class MobileAdsEventExecutor : MonoBehaviour
	{
		// Fields
		public static MobileAdsEventExecutor instance;
		private static List<Action> adEventsQueue;
		private static bool adEventsQueueEmpty;
	
		// Nested types
		[CompilerGenerated]
		private sealed class _InvokeInUpdate_c__AnonStorey0
		{
			// Fields
			internal UnityEvent eventParam;
	
			// Constructors
			public _InvokeInUpdate_c__AnonStorey0();
	
			// Methods
			internal void __m__0();
		}
	
		// Constructors
		public MobileAdsEventExecutor();
		static MobileAdsEventExecutor();
	
		// Methods
		public static void Initialize();
		public static bool IsActive();
		public void Awake();
		public static void ExecuteInUpdate(Action action);
		public static void InvokeInUpdate(UnityEvent eventParam);
		public void Update();
		public void OnDisable();
	}
}
