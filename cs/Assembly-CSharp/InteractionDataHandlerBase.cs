/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class InteractionDataHandlerBase : MVComponent
{
	// Fields
	[SerializeField]
	private ClosestPointBase closestPoint;

	// Properties
	public abstract MVTeam Team { get; }

	// Constructors
	protected InteractionDataHandlerBase();

	// Methods
	public Vector3 GetClosestPoint(Vector3 from);
	public virtual bool CanHandle(InteractionPackageType interactionPackageType, bool interactionIsLocal);
	public abstract bool HandleInteraction(MVPickupOwner interactor, InteractionData interaction, bool interactionIsLocal);
	public bool HandleInteraction(InteractionData interaction, bool interactionIsLocal);
	protected virtual void OnValidate();
	protected override void Awake();
	protected bool IsFriendlyFire(MVPickupOwner interactor);
}

