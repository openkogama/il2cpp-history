/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SizeState
{
	// Fields
	private static readonly int layerMask;
	private readonly MVInteractable interactableLocal;
	private readonly MvCharacterController controllerLocal;
	private float currentSize;
	private const float scalePercent = 0.1f;
	[CompilerGenerated]
	private System.EventHandler EquipSlapGunEvent;
	[CompilerGenerated]
	private EventHandler<ScaleArgs> CameraScaleEvent;
	[CompilerGenerated]
	private EventHandler<EventArgs> UnEquipSlapGunEvent;
	private static List<Vector3> relativePositions;

	// Properties
	public float ControllerRadius { get; }
	public float ControllerCenterY { get; }
	private float AvatarScale { get; }

	// Events
	public event System.EventHandler EquipSlapGunEvent {
		add;
		remove;
	}
	public event EventHandler<ScaleArgs> CameraScaleEvent {
		add;
		remove;
	}
	public event EventHandler<EventArgs> UnEquipSlapGunEvent {
		add;
		remove;
	}

	// Constructors
	public SizeState(MVInteractable interactable, MvCharacterController controller);
	static SizeState();

	// Methods
	public void UpdateScale();
	public void OnScalingWhileColliding(MVControllerColliderHit hitData);
	public void ScaleChanged();
	private Vector3 FindValidMoveLocation(float scale);
	public bool GetIsValidScaledRelativePosition(Vector3 relativeTestPos, float scale);
	public bool GetIsValidScaledPosition(Vector3 position, float scale);
	public void MoveOutOfScalingCollision(MVControllerColliderHit hitData);
}

