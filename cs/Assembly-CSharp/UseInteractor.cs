/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class UseInteractor
{
	// Fields
	private Func<int, bool> useFunction;
	private Func<int, MVInteractableBase, bool> checkCanUseFunction;
	private Collider triggerCollider;
	private bool reset;
	private int woOwnerID;
	private UseInteratorVisualization useInteractorVisuals;

	// Properties
	public bool Reset { get; }
	public Collider TriggerCollider { get; }
	public int WoOwnerID { get; }

	// Constructors
	public UseInteractor(MVWorldObjectClient wo, GameObject owner, bool reset, Collider triggerCollider, Func<int, bool> useFunction, Func<int, MVInteractableBase, bool> checkCanUseFunction = null, float yOffset = 2.5f);

	// Methods
	public bool GetInteractorCanBeUsed(int woId, MVInteractableBase avatarInteractable);
	public bool Use(int userWoID);
	private UseInteractorHandler GetUseInteractorHandler(int woID);
	public void triggerBoxEvents_TriggerEnter(object sender, TriggerEventArgs e);
	public void triggerBoxEvents_TriggerExit(object sender, TriggerEventArgs e);
	public void UpdateData(Dictionary<object, object> data);
	public void AddRequirement(UseRequirement useRequirement);
	public UseGUIResult EvaluateRequirementsUsability();
	public ShowUseOption GetGUIShowOptions();
	public void PayUseCost();
	public void OnDestroy(Dictionary<object, object> data);
}

