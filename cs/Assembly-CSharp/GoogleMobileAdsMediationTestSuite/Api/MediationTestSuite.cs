/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using GoogleMobileAds.Api;
using GoogleMobileAdsMediationTestSuite.Common;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace GoogleMobileAdsMediationTestSuite.Api
{
	public class MediationTestSuite
	{
		// Fields
		private readonly IMediationTestClient client;
		private static MediationTestSuite instance;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private static EventHandler<EventArgs> OnMediationTestSuiteDismissed;
	
		// Properties
		private static MediationTestSuite Instance { get; }
		public static AdRequest AdRequest { set; }
		private AdRequest AdRequestImpl { set; }
	
		// Events
		public static event EventHandler<EventArgs> OnMediationTestSuiteDismissed {
			add;
			remove;
		}
	
		// Constructors
		private MediationTestSuite();
		static MediationTestSuite();
	
		// Methods
		public static void Show();
		[Obsolete]
		public static void Show(string appId);
		private static IMediationTestClient GetMediationTestClient();
		private void HandleMediationTestSuiteDismissed(object sender, EventArgs args);
		private void CallShow(string appId);
		private void CallShow();
	}
}
