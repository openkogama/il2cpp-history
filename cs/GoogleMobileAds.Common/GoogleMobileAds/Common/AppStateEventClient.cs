/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 50: GoogleMobileAds.Common.dll - Assembly: GoogleMobileAds.Common, Version=8.1.0.0, Culture=neutral, PublicKeyToken=null

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
		private static void _AppStateChanged_m__0(AppState param_000112a6);
	}
}
