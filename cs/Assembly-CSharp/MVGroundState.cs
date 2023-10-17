/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CodeStage.AntiCheat.ObscuredTypes;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVGroundState
{
	// Fields
	private MVMaterial groundMaterial;
	private const float groundDepth = 0.1f;
	private ObscuredBool grounded;
	private Vector3 groundNormal;
	private float gradientAngle;
	private Vector3 gradientDirection;
	public Action<GroundChange> OnGroundChange;

	// Properties
	public float GradientAngle { get; }
	public float GroundDepth { get; }
	public MVMaterial GroundMaterial { get; }
	public bool Grounded { get; }
	public Vector3 GroundNormal { get; }

	// Constructors
	public MVGroundState();

	// Methods
	public Vector3 ApplySlidingVelocity(Vector3 velocity, float density, MVInteractableBase interactableLocal);
	public bool GroundTest(out MVControllerColliderHit groundHit, MvCharacterController controller, Vector3 velocity, bool sendCollData, float additionalGroundDepth = 0f);
	public bool Update(MvCharacterController controller, Vector3 velocity, float additionalGroundDepth = 0f);
	public void UpdateGroundStateWithHitExternal(MvCharacterController controller, MVControllerColliderHit groundHit);
	private void UpdateGroundStateWithHit(MvCharacterController controller, bool foundGroundHit, MVControllerColliderHit groundHit);
	private void UpdateGroundData(MvCharacterController controller, bool foundGroundHit, MVControllerColliderHit groundHit);
	private static float GetGradientAngle(Vector3 gradientDirection);
	private void UpdateGroundChange();
	private bool IsGroundedTest();
}

