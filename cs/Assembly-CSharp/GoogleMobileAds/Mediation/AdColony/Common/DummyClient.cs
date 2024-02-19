/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using GoogleMobileAds.Mediation.AdColony.Api;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace GoogleMobileAds.Mediation.AdColony.Common
{
	public class DummyClient : IAdColonyAppOptionsClient
	{
		// Constructors
		public DummyClient();
	
		// Methods
		public void SetPrivacyFrameworkRequired(AdColonyPrivacyFramework privacyFramework, bool isRequired);
		public bool GetPrivacyFrameworkRequired(AdColonyPrivacyFramework privacyFramework);
		public void SetPrivacyConsentString(AdColonyPrivacyFramework privacyFramework, string consentString);
		public string GetPrivacyConsentString(AdColonyPrivacyFramework privacyFramework);
		public void SetUserId(string userId);
		public string GetUserId();
		public void SetTestMode(bool isTestMode);
		public bool IsTestMode();
	}
}
