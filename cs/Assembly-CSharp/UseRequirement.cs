/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class UseRequirement
{
	// Fields
	[CompilerGenerated]
	private readonly bool _IsInputBlocking_k__BackingField;
	[CompilerGenerated]
	private readonly bool _IsInputBlockingNow_k__BackingField;

	// Properties
	public abstract GameObject GameObject { get; }
	public virtual bool IsInputBlocking { [CompilerGenerated] get; }
	public virtual bool IsInputBlockingNow { [CompilerGenerated] get; }

	// Constructors
	protected UseRequirement();

	// Methods
	public abstract UseGUIResult GetCanUseGUIResult();
	public abstract void PayUseCost();
	public abstract void DestroyRequirement(Dictionary<object, object> data);
	public abstract void OnDataUpdate(Dictionary<object, object> data, int ownerID);
	public abstract ShowUseOption GetShowOption();
	public abstract int GetRequirementValue();
	public abstract UseRequirementType GetRequirementType();
	public abstract bool IsActive();
	public abstract void CalculatePosAroundPivot(Vector3 pivot, float spacingAngle, float distanceFromPivot);
	public abstract void SetScale(Vector3 scale);
}

