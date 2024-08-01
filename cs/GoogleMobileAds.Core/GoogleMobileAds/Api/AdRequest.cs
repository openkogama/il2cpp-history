/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using GoogleMobileAds.Api.Mediation;

// Image 53: GoogleMobileAds.Core.dll - Assembly: GoogleMobileAds.Core, Version=8.7.0.0, Culture=neutral, PublicKeyToken=null

namespace GoogleMobileAds.Api
{
	[Serializable]
	public class AdRequest
	{
		// Fields
		[CompilerGenerated]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		private static string _Version_k__BackingField;
		public HashSet<string> Keywords;
		public Dictionary<string, string> Extras;
		public List<MediationExtras> MediationExtras;
	
		// Properties
		private static string Version { [CompilerGenerated] set; }
	
		// Constructors
		static AdRequest();
		public AdRequest();
	}
}
