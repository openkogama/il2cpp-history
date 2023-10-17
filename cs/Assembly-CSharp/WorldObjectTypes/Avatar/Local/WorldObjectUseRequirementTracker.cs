/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.AdIntegration;
using UnityEngine.Events;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace WorldObjectTypes.Avatar.Local
{
	public class WorldObjectUseRequirementTracker : Dictionary<int, float>
	{
		// Fields
		private UnityAction<bool> onAdFinishedCallback;
		private readonly Dictionary<UseRequirementType, float> timeouts;
	
		// Constructors
		public WorldObjectUseRequirementTracker();
	
		// Methods
		public bool HasUnlocked(int worldObjectID);
		public void PayUse(UseRequirementType requirementType, int worldObjectID, UnityAction<bool> onAdFinished);
		public void UseRequirementFulfilled(UseRequirementType requirementType, int worldObjectID);
		private void RewardedAdCallback(RewardedAdResult obj);
	}
}
