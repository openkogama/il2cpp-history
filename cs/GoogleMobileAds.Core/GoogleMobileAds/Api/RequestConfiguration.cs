/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;

// Image 54: GoogleMobileAds.Core.dll - Assembly: GoogleMobileAds.Core, Version=8.7.0.0, Culture=neutral, PublicKeyToken=null

namespace GoogleMobileAds.Api
{
	[Serializable]
	public class RequestConfiguration
	{
		// Fields
		public TagForChildDirectedTreatment? TagForChildDirectedTreatment;
		public TagForUnderAgeOfConsent? TagForUnderAgeOfConsent;
		public List<string> TestDeviceIds;
		[Obsolete("Use PublisherFirstPartyIdEnabled instead.")]
		public bool? SameAppKeyEnabled;
	
		// Constructors
		public RequestConfiguration();
	}
}
