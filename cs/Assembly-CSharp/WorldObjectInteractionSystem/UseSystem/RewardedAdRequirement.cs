/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace WorldObjectInteractionSystem.UseSystem
{
	public class RewardedAdRequirement : UseRequirement
	{
		// Fields
		private const UseRequirementType RequirementType = UseRequirementType.RewardedAd;
		private readonly Vector3 displayObjectOffset;
		private int worldObjectID;
		private GameObject displayGO;
		private RewardedAdDisplayObject displayObject;
		private readonly GameObject displayObjectRoot;
		private bool requiresRewardedAd;
		private bool currentlyInAd;
		private readonly RewardedCheckNoCost checkNoCost;
		private readonly bool hasCheckNoCost;
	
		// Properties
		public override bool IsInputBlocking { get; }
		public override bool IsInputBlockingNow { get; }
		public override GameObject GameObject { get; }
	
		// Nested types
		[Serializable]
		[CompilerGenerated]
		private sealed class __c
		{
			// Fields
			public static readonly __c __9;
			public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__27_0;
	
			// Constructors
			static __c();
			public __c();
	
			// Methods
			internal void _OnAdFinished_b__27_0(IModalPopupCreator x, BaseEventData y);
		}
	
		// Constructors
		public RewardedAdRequirement(GameObject root);
		public RewardedAdRequirement(GameObject root, RewardedCheckNoCost action);
		public RewardedAdRequirement(GameObject root, Vector3 displayOffset);
		public RewardedAdRequirement(GameObject root, RewardedCheckNoCost action, Vector3 displayOffset);
	
		// Methods
		public override UseGUIResult GetCanUseGUIResult();
		public override UseRequirementType GetRequirementType();
		public override int GetRequirementValue();
		public override ShowUseOption GetShowOption();
		public override void OnDataUpdate(Dictionary<object, object> data, int ownerID);
		public override void SetScale(Vector3 scale);
		private void CreateDisplayObject();
		public override void DestroyRequirement(Dictionary<object, object> data);
		public override void PayUseCost();
		private void OnAdFinished(bool adWasSuccessful);
		public override bool IsActive();
		public override void CalculatePosAroundPivot(Vector3 pivot, float spacingAngle, float distanceFromPivot);
	}
}
