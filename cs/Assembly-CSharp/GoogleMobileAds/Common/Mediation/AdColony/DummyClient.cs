/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace GoogleMobileAds.Common.Mediation.AdColony
{
	public class DummyClient : IAdColonyAppOptionsClient
	{
		// Constructors
		public DummyClient();
	
		// Methods
		public void SetGDPRConsentString(string consentString);
		public void SetGDPRRequired(bool gdprRequired);
		public void SetUserId(string userId);
		public void SetTestMode(bool isTestMode);
		public string GetGDPRConsentString();
		public bool IsGDPRRequired();
		public string GetUserId();
		public bool IsTestMode();
	}
}
