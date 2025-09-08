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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PickupItemFlamethrower : PickupItem
{
	// Fields
	[SerializeField]
	private ParticleSystem flameParticles;
	[SerializeField]
	private float hitRadius;
	[SerializeField]
	[Tooltip("How many seconds a fueltank lasts.")]
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
	public override int MaxAmmo { get; }
	public override bool HasPercentageAmmo { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _DoFlaming_d__21 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public PickupItemFlamethrower __4__this;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _DoFlaming_d__21(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	[CompilerGenerated]
	private sealed class _DoFuelBurn_d__22 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public PickupItemFlamethrower __4__this;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _DoFuelBurn_d__22(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public PickupItemFlamethrower();

	// Methods
	private bool IsStillFlaming();
	private void Awake();
	private void Update();
	public override void ResetAmmo();
	[IteratorStateMachine(typeof(_DoFlaming_d__21))]
	private IEnumerator DoFlaming();
	[IteratorStateMachine(typeof(_DoFuelBurn_d__22))]
	private IEnumerator DoFuelBurn();
	public override void TriggerBegin(int instigatorActorNr);
	public override void TriggerEnd();
}

