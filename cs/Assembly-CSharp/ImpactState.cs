/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ImpactState
{
	// Fields
	public Vector3 prevVelocityChangeVector;
	private bool collidedPrevFrame;
	private float averageSoftnessPrevFrame;
	private float maxAccBeforeDamageDealt;
	private float impactDamageMultiplier;
	private float impactDamage;
	private const int suspendImpactDamageFrames = 1;
	private int suspendImpactDamageCounter;
	private ImpactDestruction impactDestruction;
	private List<MVControllerColliderHit> moveHits;

	// Properties
	public float ImpactDamage { get; }

	// Nested types
	public class ImpactDamageRuntimeEventType : IComparable
	{
		// Fields
		private readonly float damageThreshold;
		private readonly RuntimeEventType runtimeEventType;

		// Properties
		public float DamageThreshold { get; }
		public RuntimeEventType RuntimeEventType { get; }

		// Constructors
		public ImpactDamageRuntimeEventType(float damageThreshold, RuntimeEventType runtimeEventType);

		// Methods
		public int CompareTo(object obj);
		public override string ToString();
	}

	private class ImpactDestruction
	{
		// Fields
		private List<ImpactDamageRuntimeEventType> impactDamageRuntimeEventTypes;
		private float velChangeToDamageConstant;

		// Constructors
		public ImpactDestruction(params RuntimeEventType[] explosionEvents);

		// Methods
		public void HandleImpactDestruction(float velChangeMagnitude, List<MVControllerColliderHit> moveHits);
		private MVControllerColliderHit GetColliderHit(List<MVControllerColliderHit> moveHits);
		private bool TryGetExplosionEvent(out RuntimeEventType runtimeEventType, float damage);
		private float GetImpactDamage(float velChangeMagnitude);
		private void GetMoveHitWithHighestImpactVelocity(ref MVControllerColliderHit colliderHit, List<MVControllerColliderHit> moveHits);
	}

	// Constructors
	public ImpactState(params RuntimeEventType[] explosionEvents);

	// Methods
	public void SuspendImpactDamage();
	private float CalcImpactDamage(float velocityChange);
	public void HandleMoveHit(MVControllerColliderHit moveHit);
	public float UpdateImpactState(Vector3 curVelocity, Vector3 prevVelocity, MVInteractableBase interactableLocal);
}

