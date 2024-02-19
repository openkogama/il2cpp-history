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
	public interface IAdColonyAppOptionsClient
	{
		// Methods
		void SetPrivacyFrameworkRequired(AdColonyPrivacyFramework privacyFramework, bool required);
		bool GetPrivacyFrameworkRequired(AdColonyPrivacyFramework privacyFramework);
		void SetPrivacyConsentString(AdColonyPrivacyFramework privacyFramework, string consentString);
		string GetPrivacyConsentString(AdColonyPrivacyFramework privacyFramework);
		void SetUserId(string userId);
		string GetUserId();
		void SetTestMode(bool isTestMode);
		bool IsTestMode();
	}
}
