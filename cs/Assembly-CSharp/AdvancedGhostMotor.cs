/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AdvancedGhostMotor : MVRigidBody
{
	// Fields
	private float baseHeight;
	private Transform targetTransform;
	private float ghostFriction;
	private Vector3 prevLocalPosition;
	private float minDeltaPos;
	private Vector3 velocity;
	private float speedSmoothing;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private Vector3 _MoveDirection_k__BackingField;
	private MVInteractableBase interactable;
	private SmoothPhysicsMovement smoothPhysicsMovement;

	// Properties
	public override bool Grounded { get; }
	public override Vector3 Velocity { get; }
	public override bool IsMovementLocked { get; set; }
	public Vector3 MoveDirection { [CompilerGenerated] get; [CompilerGenerated] set; }

	// Constructors
	public AdvancedGhostMotor();

	// Methods
	protected override void SuspendImpactDamage();
	public void Init(GameObject ghostBehaviour, MVInteractableBase interactable, CullingSubscriberBase cullingSubscriberBase);
	public void FixedUpdateFunction();
	public void FixedUpdateRotation();
	public void FrameUpdate();
	public void Reset(Vector3 velocity);
	private void UpdateVelocity();
	private void Move(Vector3 velocity);
	private Vector3 ApplyInputVelocityChange();
	private Vector3 GetDesiredHorizontalVelocity();
}

