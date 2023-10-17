/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class StarRequirement : UseRequirement
{
	// Fields
	private int starAmount;
	private const UseRequirementType requirementType = UseRequirementType.Star;
	private Vector3 displayObjectOffset;
	private GameObject displayGO;
	private StarDisplayObject displayObject;
	private GameObject displayObjectRoot;
	private bool hasUseWhenFree;

	// Properties
	public int StarAmount { get; }
	public override GameObject GameObject { get; }

	// Constructors
	public StarRequirement(GameObject root, bool hasUseButtonWhenFree = true);
	public StarRequirement(GameObject root, Vector3 displayOffset, bool hasUseButtonWhenFree = true);

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
	public override bool IsActive();
	public override void CalculatePosAroundPivot(Vector3 pivot, float spacingAngle, float distanceFromPivot);
	private int GetLocalPLayerStat();
}

