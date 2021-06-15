/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using GoogleMobileAds.Common.Mediation.AdColony;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace GoogleMobileAds.Api.Mediation.AdColony
{
	public class AdColonyAppOptions
	{
		// Fields
		public static readonly IAdColonyAppOptionsClient client;
	
		// Constructors
		public AdColonyAppOptions();
		static AdColonyAppOptions();
	
		// Methods
		private static IAdColonyAppOptionsClient GetAdColonyAppOptionsClient();
		public static void SetGDPRConsentString(string consentString);
		public static void SetGDPRRequired(bool gdprRequired);
		public static void SetUserId(string userId);
		public static void SetTestMode(bool isTestMode);
		public static string GetGDPRConsentString();
		public static bool IsGDPRRequired();
		public static string GetUserId();
		public static bool IsTestMode();
	}
}
