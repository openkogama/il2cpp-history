/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using GoogleMobileAds.Mediation.LiftoffMonetize.Api;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace GoogleMobileAds.Mediation.LiftoffMonetize.Common
{
	public class DummyClient : ILiftoffMonetizeClient
	{
		// Constructors
		public DummyClient();
	
		// Methods
		public void UpdateConsentStatus(VungleConsentStatus consentStatus, string consentMessageVersion);
		public void UpdateCCPAStatus(VungleCCPAStatus consentStatus);
		public void SetGDPRStatus(bool gdprStatus);
		public void SetGDPRMessageVersion(string gdprMessageVersion);
		public void SetCCPAStatus(bool ccpaStatus);
	}
}
