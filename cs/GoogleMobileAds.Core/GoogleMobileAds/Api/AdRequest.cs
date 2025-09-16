/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using GoogleMobileAds.Api.Mediation;

// Image 55: GoogleMobileAds.Core.dll - Assembly: GoogleMobileAds.Core, Version=8.7.0.0, Culture=neutral, PublicKeyToken=null
[assembly: AssemblyCompany("Google LLC")]
[assembly: AssemblyConfiguration("")]
[assembly: AssemblyCopyright("Copyright 2023 Google LLC. All Rights Reserved.")]
[assembly: AssemblyDescription("")]
[assembly: AssemblyFileVersion("8.7.0")]
[assembly: AssemblyProduct("GoogleMobileAds")]
[assembly: AssemblyTitle("GoogleMobileAds.Core")]
[assembly: AssemblyTrademark("")]
[assembly: Debuggable(DebuggableAttribute.DebuggingModes.None | DebuggableAttribute.DebuggingModes.IgnoreSymbolStoreSequencePoints)]
[assembly: InternalsVisibleTo("GoogleMobileAds.iOS")]
[assembly: InternalsVisibleTo("GoogleMobileAds.Android")]
[assembly: InternalsVisibleTo("GoogleMobileAds.Common")]
[assembly: InternalsVisibleTo("GoogleMobileAds")]
[assembly: InternalsVisibleTo("GoogleMobileAds")]
[assembly: InternalsVisibleTo("GoogleMobileAds.Android")]
[assembly: InternalsVisibleTo("GoogleMobileAds.iOS")]
[assembly: InternalsVisibleTo("GoogleMobileAds.Unity")]
[assembly: InternalsVisibleTo("GoogleMobileAdsNative")]
[assembly: InternalsVisibleTo("GoogleMobileAdsNative.iOS")]
[assembly: InternalsVisibleTo("GoogleMobileAdsNative.Android")]
[assembly: InternalsVisibleTo("GoogleMobileAdsNative.unobfuscate")]
[assembly: InternalsVisibleTo("GoogleMobileAdsNative.iOS.unobfuscate")]
[assembly: InternalsVisibleTo("GoogleMobileAdsNative.Android.unobfuscate")]
[assembly: InternalsVisibleTo("GoogleMobileAds.Ump")]
[assembly: RuntimeCompatibility(WrapNonExceptionThrows = true)]

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
