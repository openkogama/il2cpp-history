/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using GoogleMobileAds.Api.Mediation;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace GoogleMobileAds.Mediation.LiftoffMonetize.Api
{
	public abstract class LiftoffMonetizeMediationExtras : MediationExtrasLiftoff
	{
		// Fields
		public const string AllPlacementsKey = "all_placements";
		public const string UserIdKey = "user_id";
		public const string SoundEnabledKey = "sound_enabled";
	
		// Properties
		public override string IOSMediationExtraBuilderClassName { get; }
	
		// Constructors
		public LiftoffMonetizeMediationExtras();
	
		// Methods
		public void SetAllPlacements(string[] allPlacements);
		public void SetUserId(string userId);
		public void SetSoundEnabled(bool soundEnabled);
	}
}
