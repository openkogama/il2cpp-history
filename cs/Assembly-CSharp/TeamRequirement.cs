/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TeamRequirement : UseRequirement
{
	// Fields
	public const string teamStr = "team";
	private TintObject tintObject;
	private MVTeam team;
	private bool hasUseButtonWhenFree;

	// Properties
	public override GameObject GameObject { get; }
	public TintObject ToTint { set; }

	// Constructors
	public TeamRequirement(TintObject tintObject, bool hasUseButtonWhenFree = true);

	// Methods
	public override UseGUIResult GetCanUseGUIResult();
	public override void PayUseCost();
	public override void DestroyRequirement(Dictionary<object, object> data);
	public override void OnDataUpdate(Dictionary<object, object> data, int ownerID);
	public override ShowUseOption GetShowOption();
	public override int GetRequirementValue();
	public override UseRequirementType GetRequirementType();
	public override bool IsActive();
	public override void CalculatePosAroundPivot(Vector3 pivot, float spacingAngle, float distanceFromPivot);
	public override void SetScale(Vector3 scale);
}

