/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace GoogleMobileAds.Common.Mediation.AdColony
{
	public interface IAdColonyAppOptionsClient
	{
		// Methods
		void SetGDPRConsentString(string consentString);
		void SetGDPRRequired(bool gdprRequired);
		void SetUserId(string userId);
		void SetTestMode(bool isTestMode);
		string GetGDPRConsentString();
		bool IsGDPRRequired();
		string GetUserId();
		bool IsTestMode();
	}
}
