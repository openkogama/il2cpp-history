/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using GoogleMobileAds.Api.Mediation;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace GoogleMobileAds.Mediation.AdColony.Api
{
	public class AdColonyMediationExtras : MediationExtras
	{
		// Fields
		public const string ShowPrePopupKey = "show_pre_popup";
		public const string ShowPostPopupKey = "show_post_popup";
	
		// Properties
		public override string AndroidMediationExtraBuilderClassName { get; }
		public override string IOSMediationExtraBuilderClassName { get; }
	
		// Constructors
		public AdColonyMediationExtras();
	
		// Methods
		public void SetShowPrePopup(bool showPrePopup);
		public void SetShowPostPopup(bool showPostPopup);
	}
}
