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

// Image 48: GoogleMobileAds.dll - Assembly: GoogleMobileAds, Version=8.7.0.0, Culture=neutral, PublicKeyToken=null

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
		public static bool RaiseAdEventsOnUnityMainThread { [CompilerGenerated] get; }
	
		// Nested types
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
		static MobileAds();
		public MobileAds();
	
		// Methods
		public static void Initialize(Action<InitializationStatus> initCompleteAction);
		public static void SetRequestConfiguration(RequestConfiguration requestConfiguration);
		public static void SetiOSAppPauseOnBackground(bool pause);
		internal static IClientFactory GetClientFactory();
		internal static void RaiseAction(Action action);
		internal static void SetUnityMainThreadSynchronizationContext();
		private static IMobileAdsClient GetMobileAdsClient();
	}
}
