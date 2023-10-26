/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using GoogleMobileAds.Common;

// Image 15: GoogleMobileAds.dll - Assembly: GoogleMobileAds, Version=8.1.0.0, Culture=neutral, PublicKeyToken=null

namespace GoogleMobileAds.Api
{
	public class AppStateEventNotifier
	{
		// Fields
		private static IAppStateEventClient client;
	
		// Events
		public static event Action<AppState> AppStateChanged {
			add;
			remove;
		}
	
		// Constructors
		static AppStateEventNotifier();
		public AppStateEventNotifier();
	}
}
