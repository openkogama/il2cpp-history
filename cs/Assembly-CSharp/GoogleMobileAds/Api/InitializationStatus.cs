/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using GoogleMobileAds.Common;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
