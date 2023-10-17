/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using GoogleMobileAds.Common;

// Image 15: GoogleMobileAds.dll - Assembly: GoogleMobileAds, Version=8.1.0.0, Culture=neutral, PublicKeyToken=null

namespace GoogleMobileAds.Api
{
	public class InitializationStatus
	{
		// Fields
		private IInitializationStatusClient client;
	
		// Constructors
		internal InitializationStatus(IInitializationStatusClient client);
	
		// Methods
		public AdapterStatus getAdapterStatusForClassName(string className);
		public Dictionary<string, AdapterStatus> getAdapterStatusMap();
	}
}
