/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class MVRigidBody : MVComponent
{
	// Fields
	protected MVGroundState groundState;
	protected float weight;
	protected float density;
	protected bool isPlayerControlled;
	protected List<Vector3> impulseVectors;

	// Properties
	public abstract bool Grounded { get; }
	public abstract Vector3 Velocity { get; }
	public abstract bool IsMovementLocked { get; set; }
	public bool IsPlayerControlled { get; set; }

	// Nested types
	protected class StuckEvaluator
	{
		// Fields
		private Dictionary<int, StuckObject> stuckObjects;
		private Func<List<MVOverlapResult>> getOverlappingObjects;
		private float updateInterval;
		private float updateTime;

		// Nested types
		internal class StuckObject
		{
			// Fields
			private const float timeBeforeStuck = 2f;
			private float stuckTime;
			private MVOverlapResult overlapResult;

			// Properties
			public MVOverlapResult OverlapResult { set; }

			// Constructors
			public StuckObject(MVOverlapResult overlapResult);

			// Methods
			public bool IsStuckInObject();
			private bool HandleFineGrained();
		}

		// Constructors
		public StuckEvaluator(Func<List<MVOverlapResult>> getOverlappingObjects);

		// Methods
		public bool Update();
		private Dictionary<int, MVOverlapResult> GetOverlapDictionary();
	}

	// Constructors
	protected MVRigidBody();

	// Methods
	public void AddImpulse(MVPlayer shooter, Vector3 impulse, bool suspendImpactDamage = false);
	public void AddImpulse(Vector3 impulse, bool suspendImpactDamage = false);
	public virtual void Reset();
	protected void Init();
	protected Vector3 GetImpulse(Vector3 velocity, MVInteractableBase interactableLocal);
	protected static Vector3 VelocityDamping(Vector3 velocity, float defaultDampning, MVInteractableBase interactableLocal);
	protected static Vector3 AdjustGroundVelocityToNormal(Vector3 hVelocity, Vector3 groundNormal);
	protected Vector3 ApplyGravity(Vector3 velocity, Vector3 velocityPrevFrame, MVInteractableBase interactableLocal);
	protected abstract void SuspendImpactDamage();
}

