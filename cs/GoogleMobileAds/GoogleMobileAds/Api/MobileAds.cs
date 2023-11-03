/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Threading;
using GoogleMobileAds;
using GoogleMobileAds.Common;

// Image 15: GoogleMobileAds.dll - Assembly: GoogleMobileAds, Version=8.1.0.0, Culture=neutral, PublicKeyToken=null
[assembly: AssemblyCompany("Google LLC")]
[assembly: AssemblyConfiguration("")]
[assembly: AssemblyCopyright("Copyright 2023 Google LLC. All Rights Reserved.")]
[assembly: AssemblyDescription("")]
[assembly: AssemblyFileVersion("8.1.0")]
[assembly: AssemblyProduct("GoogleMobileAds")]
[assembly: AssemblyTitle("GoogleMobileAds")]
[assembly: AssemblyTrademark("")]
[assembly: Debuggable(DebuggableAttribute.DebuggingModes.None | DebuggableAttribute.DebuggingModes.IgnoreSymbolStoreSequencePoints)]
[assembly: InternalsVisibleTo("UnitTests")]
[assembly: InternalsVisibleTo("basic_unittests_test_library")]
[assembly: InternalsVisibleTo("GoogleMobileAds.Placement")]
[assembly: InternalsVisibleTo("GoogleMobileAdsNative")]
[assembly: InternalsVisibleTo("GoogleMobileAdsNative.unobfuscate")]
[assembly: RuntimeCompatibility(WrapNonExceptionThrows = true)]

namespace GoogleMobileAds.Api
{
	public class MobileAds
	{
		// Fields
		private readonly IMobileAdsClient client;
		private static IClientFactory clientFactory;
		private static SynchronizationContext _synchronizationContext;
		private static int _unityMainThreadId;
		private static MobileAds instance;
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private static bool _RaiseAdEventsOnUnityMainThread_k__BackingField;
	
		// Properties
		public static MobileAds Instance { get; }
		public static bool RaiseAdEventsOnUnityMainThread { [CompilerGenerated] get; [CompilerGenerated] set; }
	
		// Nested types
		public static class Utils
		{
			// Methods
			public static float GetDeviceScale();
			public static int GetDeviceSafeWidth();
		}
	
		[CompilerGenerated]
		private sealed class _Initialize_c__AnonStorey0
		{
			// Fields
			internal Action<InitializationStatus> initCompleteAction;
	
			// Nested types
			private sealed class _Initialize_c__AnonStorey1
			{
				// Fields
				internal IInitializationStatusClient initStatusClient;
				internal _Initialize_c__AnonStorey0 __f__ref_0;
	
				// Constructors
				public _Initialize_c__AnonStorey1();
	
				// Methods
				internal void __m__0();
			}
	
			// Constructors
			public _Initialize_c__AnonStorey0();
	
			// Methods
			internal void __m__0(IInitializationStatusClient initStatusClient);
		}
	
		[CompilerGenerated]
		private sealed class _OpenAdInspector_c__AnonStorey2
		{
			// Fields
			internal Action<AdInspectorError> adInspectorClosedAction;
	
			// Nested types
			private sealed class _OpenAdInspector_c__AnonStorey3
			{
				// Fields
				internal AdInspectorErrorClientEventArgs args;
				internal _OpenAdInspector_c__AnonStorey2 __f__ref_2;
	
				// Constructors
				public _OpenAdInspector_c__AnonStorey3();
	
				// Methods
				internal void __m__0();
			}
	
			// Constructors
			public _OpenAdInspector_c__AnonStorey2();
	
			// Methods
			internal void __m__0(AdInspectorErrorClientEventArgs args);
		}
	
		[CompilerGenerated]
		private sealed class _RaiseAction_c__AnonStorey4
		{
			// Fields
			internal Action action;
	
			// Constructors
			public _RaiseAction_c__AnonStorey4();
	
			// Methods
			internal void __m__0(object state);
		}
	
		// Constructors
		public MobileAds();
	
		// Methods
		public static void Initialize(Action<InitializationStatus> initCompleteAction);
		public static void DisableMediationInitialization();
		public static void SetApplicationMuted(bool muted);
		public static void SetRequestConfiguration(RequestConfiguration requestConfiguration);
		public static RequestConfiguration GetRequestConfiguration();
		public static void SetApplicationVolume(float volume);
		public static void SetiOSAppPauseOnBackground(bool pause);
		public static void OpenAdInspector(Action<AdInspectorError> adInspectorClosedAction);
		internal static IClientFactory GetClientFactory();
		internal static void SetClientFactory(IClientFactory clientFactory);
		internal static void RaiseAction(Action action);
		private static IMobileAdsClient GetMobileAdsClient();
	}
}
