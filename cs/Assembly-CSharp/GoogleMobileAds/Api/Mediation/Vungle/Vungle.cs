/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using GoogleMobileAds.Common.Mediation.Vungle;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace GoogleMobileAds.Api.Mediation.Vungle
{
	public class Vungle
	{
		// Fields
		public static readonly IVungleClient client;
	
		// Constructors
		public Vungle();
		static Vungle();
	
		// Methods
		public static void UpdateConsentStatus(VungleConsentStatus consentStatus, string consentMessageVersion);
		public static void UpdateCCPAStatus(VungleCCPAStatus consentStatus);
	}
}
