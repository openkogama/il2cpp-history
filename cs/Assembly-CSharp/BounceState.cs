/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class BounceState
{
	// Fields
	private const float maxHeight = 10f;
	private const float bounceMinVal = 1f;
	private const float bounceStrengthThres = 10f;
	private Vector3 bounceVelocity;
	private readonly MVInteractable interactable;
	private bool bounced;

	// Properties
	public bool Bounced { get; }

	// Constructors
	public BounceState(MVInteractable interactable);

	// Methods
	public Vector3 ApplyBounceVelocity(Vector3 velocity);
	public void HandleMoveHit(MVControllerColliderHit moveHit);
	private void UpdateBounceState(MVControllerColliderHit mvControllerColliderHit);
	private static Vector3 GetOutVectorFromInVector(Vector3 normal, Vector3 inVector);
}

