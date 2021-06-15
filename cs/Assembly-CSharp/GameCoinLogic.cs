/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GameCoinLogic : UseRequirement
{
	// Fields
	private int purchaseAmount;
	private UseRequirementType requirementType;
	private Vector3 displayObjectOffset;
	private GameObject displayGO;
	private GameCoinDisplayObject displayObject;
	private GameObject displayObjectRoot;
	private bool hasUseWhenFree;

	// Properties
	public int PurchaseAmount { get; }
	public override GameObject GameObject { get; }

	// Constructors
	public GameCoinLogic(GameObject root, bool hasUseButtonWhenFree = true);
	public GameCoinLogic(GameObject root, Vector3 displayObjectOffset, bool hasUseButtonWhenFree = true);

	// Methods
	public override UseGUIResult GetCanUseGUIResult();
	public override bool IsActive();
	public override void PayUseCost();
	public override void OnDataUpdate(Dictionary<object, object> data, int ownerID);
	private void CreateDisplayObject();
	private void DestroyDisplayObject();
	public override void SetScale(Vector3 scale);
	private void SetAmount(Dictionary<object, object> data, int ownerID);
	public override void DestroyRequirement(Dictionary<object, object> data);
	public override ShowUseOption GetShowOption();
	public override int GetRequirementValue();
	public override UseRequirementType GetRequirementType();
	public override void CalculatePosAroundPivot(Vector3 pivot, float spacingAngle, float distanceFromPivot);
}

