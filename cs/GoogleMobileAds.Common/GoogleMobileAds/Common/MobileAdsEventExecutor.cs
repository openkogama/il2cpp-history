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

// Image 51: GoogleMobileAds.Common.dll - Assembly: GoogleMobileAds.Common, Version=8.7.0.0, Culture=neutral, PublicKeyToken=null

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
