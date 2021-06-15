/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class LevelBasedUseRequirement : UseRequirement
{
	// Fields
	private int levelAmount;
	private const UseRequirementType requirementType = UseRequirementType.Level;
	private readonly bool hasUseWhenFree;
	private LevelDisplayCube displayObject;
	private Vector3 displayObjectOffset;
	private GameObject displayObjectRoot;
	private GameObject go;

	// Properties
	public override GameObject GameObject { get; }

	// Constructors
	public LevelBasedUseRequirement(GameObject root, bool hasUseButtonWhenFree = true);
	public LevelBasedUseRequirement(GameObject root, Vector3 displayOffset, bool hasUseButtonWhenFree = true);

	// Methods
	public override UseGUIResult GetCanUseGUIResult();
	public override void OnDataUpdate(Dictionary<object, object> data, int ownerID);
	public override void SetScale(Vector3 scale);
	private void CreateDisplayObject();
	public override void DestroyRequirement(Dictionary<object, object> data);
	public override void PayUseCost();
	public override ShowUseOption GetShowOption();
	public override int GetRequirementValue();
	public override UseRequirementType GetRequirementType();
	public override bool IsActive();
	public override void CalculatePosAroundPivot(Vector3 pivot, float spacingAngle, float distanceFromPivot);
}

