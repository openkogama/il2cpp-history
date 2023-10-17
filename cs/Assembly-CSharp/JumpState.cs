/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

internal class JumpState
{
	// Fields
	private readonly float extraHeight;
	private const float baseHeight = 1f;
	private float jumpHeight;
	private readonly float sliperyValMin;
	private readonly float sliperyValMax;
	private readonly float regularButtonDownTimeLimit;
	private readonly float bouncyMaterialButtonDownTimeLimit;
	private readonly float bouncinessThresshold;
	private readonly float wallJumpAngleMin;
	private readonly float wallJumpAngleMax;
	private readonly float jumpTimeOutWallJump;
	private readonly bool canWallJumpAnySurface;
	private readonly int airJumpsAllowed;
	private float jumpVelocityMultiplier;
	private int airJumpsDone;
	private bool holdingJumpButton;
	private float lastStartTime;
	private float lastButtonDownTime;
	private float jumpTimeOut;
	private Vector3 jumpDir;
	private float accExtraHeight;
	private Vector3 latestSlopeDir;
	private bool jumping;
	private bool airJumping;
	public OnWallJumpDelegate OnWallJump;
	private List<MVControllerColliderHit> wallJumpHits;

	// Properties
	public bool Jumping { get; }
	public bool AirJumping { get; }

	// Nested types
	private enum JumpType
	{
		Regular = 0,
		Wall = 1,
		Water = 2
	}

	public delegate void OnWallJumpDelegate();

	// Constructors
	public JumpState(float regularButtonDownTimeLimit, WorldObjectSkillDataManager skillDataManager);
	public JumpState(float regularButtonDownTimeLimit);

	// Methods
	public void Destroy();
	public void UpdateJumpState(GroundChange groundChange);
	public Vector3 ApplyJumping(MVInteractableBase interactableLocal, MVGroundState groundState, float density, float waterProximity, bool inputJump, Vector3 velocity, Vector3 movableVelocity);
	private void SetJumpState(bool wallJumpPossible, float sliperyFactor);
	private float GetSliperyFactor(MVInteractableBase interactableLocal, MVGroundState groundState, float waterProximity, bool canWaterJump, bool isDoingAirJump);
	private float GetJumpSpeed(MVInteractableBase interactableLocal, float sliperyFactor, bool isDoingAirJump);
	private Vector3 GetJumpTypeVelocity(Vector3 velocity, JumpType jumpType);
	private Vector3 GetWallJumpVelocity(Vector3 velocity);
	private Vector3 JumpDir(ref JumpType jumpType, MVGroundState groundState, float sliperyFactor, bool wallJumpPossible, bool canWaterJump);
	private void UpdateWallJumpValues();
	public void HandleMoveHit(MVControllerColliderHit moveHit);
	private float SpreadFunction(float x);
	private bool CanAirJump();
	private void HandleJumpBoost();
}

