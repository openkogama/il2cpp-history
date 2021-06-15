/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[RequireComponent]
public class ForceField : MonoBehaviour
{
	// Fields
	[SerializeField]
	private TriggerBoxEvents triggerBoxEvents;
	[SerializeField]
	private CapsuleCollider trigger;
	[SerializeField]
	private float strength;
	private HashSet<MVInteractableBase> interactablesInField;
	private HashSet<MVRigidBody> bodiesInField;

	// Constructors
	public ForceField();

	// Methods
	private void Awake();
	private void OnExit(object sender, TriggerEventArgs e);
	private void OnEnter(object sender, TriggerEventArgs e);
	private void ApplyForceTo(MVRigidBody body);
	private void ApplyNoFriction(MVInteractableBase interactable);
	private void FixedUpdate();
}

