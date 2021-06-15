/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using GoogleMobileAds.Api;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace GoogleMobileAdsMediationTestSuite.Common
{
	public interface IMediationTestClient
	{
		// Properties
		AdRequest AdRequest { set; }
	
		// Events
		event EventHandler<EventArgs> OnMediationTestSuiteDismissed {
			add;
			remove;
		}
	
		// Methods
		void Show(string appId);
		void Show();
	}
}
