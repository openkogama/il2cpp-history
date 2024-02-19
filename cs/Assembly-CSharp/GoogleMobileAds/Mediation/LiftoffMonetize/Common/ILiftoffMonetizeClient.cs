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
	public interface ILiftoffMonetizeClient
	{
		// Methods
		void UpdateConsentStatus(VungleConsentStatus consentStatus, string consentMessageVersion);
		void UpdateCCPAStatus(VungleCCPAStatus consentStatus);
		void SetGDPRStatus(bool gdprStatus);
		void SetGDPRMessageVersion(string gdprMessageVersion);
		void SetCCPAStatus(bool ccpaStatus);
	}
}
