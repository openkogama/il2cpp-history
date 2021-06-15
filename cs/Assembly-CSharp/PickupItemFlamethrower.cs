/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CodeStage.AntiCheat.ObscuredTypes;
using MV.Common;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PickupItemFlamethrower : PickupItem
{
	// Fields
	[SerializeField]
	private ParticleSystem flameParticles;
	[SerializeField]
	private float hitRadius;
	[SerializeField]
	[Tooltip]
	private ObscuredFloat maxFuelTime;
	[SerializeField]
	private float maxRange;
	[SerializeField]
	private float flamerMinimumBurnTime;
	[SerializeField]
	private AudioSource audioSource;
	private float flamerStartTime;
	private bool isFlaming;
	private ObscuredFloat currentFuel;

	// Properties
	public override AvatarItemType Type { get; }
	public override int Quantity { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _DoFlaming_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal Ray _lineofFire___1;
		internal int _layers___1;
		internal List<VoxelHit> _hits___1;
		internal PickupItemFlamethrower _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _DoFlaming_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	[CompilerGenerated]
	private sealed class _DoFuelBurn_c__Iterator1 : IEnumerator<object>
	{
		// Fields
		internal MVRigidBody _mvRigidBody___1;
		internal PickupItemFlamethrower _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _DoFuelBurn_c__Iterator1();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	// Constructors
	public PickupItemFlamethrower();

	// Methods
	private bool IsStillFlaming();
	private void Awake();
	public override void ResetAmmo();
	[DebuggerHidden]
	private IEnumerator DoFlaming();
	[DebuggerHidden]
	private IEnumerator DoFuelBurn();
	public override void TriggerBegin(int instigatorActorNr);
	public override void TriggerEnd();
	private void Update();
}

