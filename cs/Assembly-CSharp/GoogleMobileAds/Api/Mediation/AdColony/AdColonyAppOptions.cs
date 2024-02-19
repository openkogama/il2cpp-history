/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using GoogleMobileAds.Mediation.AdColony.Api;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace GoogleMobileAds.Api.Mediation.AdColony
{
	[Obsolete("Use `GoogleMobileAds.Mediation.AdColony.Api.AdColonyAppOptions` instead.")]
	public class AdColonyAppOptions
	{
		// Constructors
		public AdColonyAppOptions();
	
		// Methods
		public static void SetPrivacyFrameworkRequired(AdColonyPrivacyFramework privacyFramework, bool isRequired);
		public static bool GetPrivacyFrameworkRequired(AdColonyPrivacyFramework privacyFramework);
		public static void SetPrivacyConsentString(AdColonyPrivacyFramework privacyFramework, string consentString);
		public static string GetPrivacyConsentString(AdColonyPrivacyFramework privacyFramework);
		public static void SetUserId(string userId);
		public static string GetUserId();
		public static void SetTestMode(bool isTestMode);
		public static bool IsTestMode();
	}
}
