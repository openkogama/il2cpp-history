/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using GoogleMobileAds.Mediation.LiftoffMonetize.Common;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace GoogleMobileAds.Mediation.LiftoffMonetize.Api
{
	public class LiftoffMonetize
	{
		// Fields
		public static readonly ILiftoffMonetizeClient client;
	
		// Constructors
		public LiftoffMonetize();
		static LiftoffMonetize();
	
		// Methods
		public static void UpdateConsentStatus(VungleConsentStatus consentStatus, string consentMessageVersion);
		public static void UpdateCCPAStatus(VungleCCPAStatus consentStatus);
		public static void SetGDPRStatus(bool gdprStatus);
		public static void SetGDPRMessageVersion(string gdprMessageVersion);
		public static void SetCCPAStatus(bool ccpaStatus);
	}
}
