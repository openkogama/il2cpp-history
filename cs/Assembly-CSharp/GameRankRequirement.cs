/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using MV.WorldObject;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GameRankRequirement : UseRequirement
{
	// Fields
	private GamePassTier requiredRank;
	private UseRequirementType requirementType;
	private MVWorldObjectClient worldObject;
	private Vector3 displayObjectOffset;
	private GameObject displayGO;
	private GameRankDisplayObject displayObject;
	private GameObject displayObjectRoot;
	private bool hasUseWhenFree;
	private bool shouldDeleteWhenTier0;
	private WorldObjectType worldObjectType;

	// Properties
	public GamePassTier RequiredRank { get; }
	public bool ShouldDeleteWhenTier0 { set; }
	public override GameObject GameObject { get; }

	// Constructors
	public GameRankRequirement(GameObject root, MVWorldObjectClient worldObject, bool hasUseButtonWhenFree = true);
	public GameRankRequirement(GameObject root, Vector3 displayOffset, MVWorldObjectClient worldObject, bool hasUseButtonWhenFree = true);

	// Methods
	public override UseGUIResult GetCanUseGUIResult();
	public override UseRequirementType GetRequirementType();
	public override int GetRequirementValue();
	public override ShowUseOption GetShowOption();
	public override void OnDataUpdate(Dictionary<object, object> data, int ownerID);
	public void OnDelete();
	public override void SetScale(Vector3 scale);
	private void CreateDisplayObject();
	public override void DestroyRequirement(Dictionary<object, object> data);
	public override void PayUseCost();
	public override bool IsActive();
	public override void CalculatePosAroundPivot(Vector3 pivot, float spacingAngle, float distanceFromPivot);
	private GamePassTier GetLocalPLayerRank();
	private GamePassTier GetLocalPlayerTempRank();
}

