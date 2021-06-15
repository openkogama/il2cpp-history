/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class SimpleVehicleMotorBase : MVRigidBody
{
	// Fields
	protected MVMovableMotorState movableMotorState;
	protected MVInteractableBase interactableLocal;
	protected SmoothCharacterController smoothController;
	protected StuckEvaluator stuckEvaluator;
	public Vector3 DirectInputMoveMap;
	public bool Jump;
	public bool HandleInput;

	// Properties
	protected MvCharacterController Controller { get; }

	// Constructors
	protected SimpleVehicleMotorBase();

	// Methods
	public virtual void Init(SmoothCharacterController smoothController, VehicleInteractable interactableLocal);
	public virtual void OnLocalVehicleLeave();
	public bool IsStuck();
	public abstract void VehicleUpdateFunction();
	public override void Reset();
	public void UpdateFunction();
}

