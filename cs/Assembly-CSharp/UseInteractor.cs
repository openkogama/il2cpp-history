/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class UseInteractor
{
	// Fields
	private readonly UseInteractorVisualization useInteractorVisuals;
	private readonly int woOwnerID;
	private readonly Func<int, bool> useFunction;
	private readonly Collider triggerCollider;
	private readonly bool reset;
	private readonly Func<int, MVInteractableBase, bool> checkCanUseFunction;
	[CompilerGenerated]
	private readonly bool _UsedInVehicles_k__BackingField;
	[CompilerGenerated]
	private readonly bool _UsedDirectlyInVehicles_k__BackingField;

	// Properties
	public bool Reset { get; }
	public Collider TriggerCollider { get; }
	public int WoOwnerID { get; }
	public bool UsedInVehicles { [CompilerGenerated] get; }
	public bool UsedDirectlyInVehicles { [CompilerGenerated] get; }

	// Constructors
	public UseInteractor(MVWorldObjectClient wo, GameObject owner, bool reset, Collider triggerCollider, Func<int, bool> useFunction, Func<int, MVInteractableBase, bool> checkCanUseFunction = null, float yOffset = 2.5f, bool usedInVehicles = false, bool usedDirectlyInVehicles = true);

	// Methods
	public bool GetInteractorCanBeUsed(int woId, MVInteractableBase avatarInteractable);
	public bool Use(int userWoID);
	private UseInteractorHandler GetUseInteractorHandler(int woID);
	public void TriggerBoxEvents_TriggerEnter(object sender, TriggerEventArgs e);
	public void TriggerBoxEvents_TriggerExit(object sender, TriggerEventArgs e);
	public void UpdateData(Dictionary<object, object> data);
	public void AddRequirement(UseRequirement useRequirement);
	public UseGUIResult EvaluateRequirementsUsability();
	public bool HasUseRequirements();
	public ShowUseOption GetGUIShowOptions();
	public void PayUseCost();
	public void OnDestroy(Dictionary<object, object> data);
}

