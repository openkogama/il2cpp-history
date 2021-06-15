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
	public class DummyClient : IMediationTestClient
	{
		// Fields
		[CompilerGenerated]
		[DebuggerBrowsable]
		private EventHandler<EventArgs> OnMediationTestSuiteDismissed;
	
		// Properties
		public AdRequest AdRequest { set; }
	
		// Events
		public event EventHandler<EventArgs> OnMediationTestSuiteDismissed {
			add;
			remove;
		}
	
		// Constructors
		public DummyClient();
	
		// Methods
		public void Show(string appId);
		public void Show();
	}
}
