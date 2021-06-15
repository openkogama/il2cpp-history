/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GhostEye : MonoBehaviour
{
	// Fields
	private GhostEyeState currentEyeState;
	private readonly Dictionary<GhostEyeState, IGhostEyeState> ghostEyeStates;
	private const float transitionTime = 10f;
	private float currentTransitionTime;
	public float maxPitch;
	public float maxYaw;
	public Transform eyeBall;

	// Nested types
	private enum GhostEyeState
	{
		RandomEyeRoll = 0,
		LookAtTarget = 1,
		DieRollback = 2,
		SneakySideToSide = 3
	}

	private interface IGhostEyeState
	{
		// Methods
		void Enter(GhostEye ghostEye);
		Quaternion Update(GhostEye ghostEye);
		void Exit();
	}

	private abstract class IdleBase : IGhostEyeState
	{
		// Fields
		protected float rotatationPrSecond;
		protected float wrappedTime;
		protected const float pi2 = 6.2831855f;
		protected float direction;
		protected float radiusPitch;
		protected float radiusYaw;

		// Constructors
		protected IdleBase();

		// Methods
		public virtual void Enter(GhostEye ghostEye);
		public virtual Quaternion Update(GhostEye ghostEye);
		public virtual void Exit();
		protected void UpdateWrappedTime(float deltaTime);
		protected Quaternion GetYawRotation();
		private float GetYaw();
	}

	private class DieRollback : IGhostEyeState
	{
		// Fields
		private const float rollbackPitch = -90f;
		private const float rollbackTime = 1f;
		private float currentRollbackTime;
		private Quaternion rollbackRotation;

		// Constructors
		public DieRollback();

		// Methods
		public void Enter(GhostEye ghostEye);
		public Quaternion Update(GhostEye ghostEye);
		public void Exit();
	}

	private class RandomEyeRoll : IdleBase
	{
		// Constructors
		public RandomEyeRoll();

		// Methods
		public override Quaternion Update(GhostEye ghostEye);
		private Quaternion GetEyeRollRotation();
		private Quaternion GetPitchRotation();
		private float GetPitch();
		public override void Exit();
	}

	private class LookAtTarget : IGhostEyeState
	{
		// Fields
		private Vector3 target;
		private float maxPitch;
		private float maxYaw;

		// Constructors
		public LookAtTarget();

		// Methods
		public void Enter(GhostEye ghostEye);
		public Quaternion Update(GhostEye ghostEye);
		private Quaternion GetClampedYawRotation(Vector3 localTargetDirection);
		private Quaternion GetClampedPitchRotation(Vector3 localTargetDirection);
		private bool TryGetLocalTargetDir(GhostEye ghostEye, out Vector3 localTargetDir);
		private float GetPitch(Vector3 localTargetPosition);
		private float GetSignedYaw(Vector3 localTargetPosition);
		public void Exit();
		public void SetTarget(Vector3 target);
	}

	private class SneakySideToSide : IdleBase
	{
		// Constructors
		public SneakySideToSide();

		// Methods
		public override Quaternion Update(GhostEye ghostEye);
		private Quaternion GetSneakySideToSideRotation();
	}

	// Constructors
	public GhostEye();

	// Methods
	private void Start();
	private void Update();
	public void Spawn();
	private void SetEyeState(GhostEyeState ghostEyeState);
	public void UpdateLookAtTarget(Vector3 target);
	public void ClearLookAtTarget();
	private Quaternion TransitionSmooth(Quaternion newRotation);
}

