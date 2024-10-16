/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PickupItemMeleeWeapon : PickupItemEditable
{
	// Fields
	[SerializeField]
	private MeleeWeaponAnimationEventHandler animationEventHandler;
	private IEnumerator checkHitCoroutine;
	private bool isUnequipped;

	// Properties
	public override AvatarItemType Type { get; }
	public override bool FirstPerson { get; }
	public override bool GunMode { get; }
	public Color TrailColor { get; }
	public Color HitEffectColor { get; }
	protected new MeleeWeaponConfiguration Configuration { get; set; }
	protected override string FireSoundEffectName { get; }
	protected override string HitSoundEffectName { get; }
	protected override string AttackAnimationName { get; }

	// Nested types
	protected class MeleeWeaponConfiguration : PickupItemEditable.EditableItemConfiguration
	{
		// Fields
		public Color trailColor;
		public Color hitEffectColor;

		// Constructors
		public MeleeWeaponConfiguration();
	}

	[CompilerGenerated]
	private sealed class _CheckHitCoroutine_d__28 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public PickupItemMeleeWeapon __4__this;
		public bool isLocal;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _CheckHitCoroutine_d__28(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public PickupItemMeleeWeapon();

	// Methods
	protected override void InitializeAudioPlayers();
	protected override EditableItemConfiguration GetDefaultConfiguration();
	protected override void SetConfiguration(Dictionary<object, object> itemData);
	protected override void OnPickupNewEditableItem();
	protected override void OnFire(bool isLocal);
	[IteratorStateMachine(typeof(_CheckHitCoroutine_d__28))]
	private IEnumerator CheckHitCoroutine(bool isLocal);
	private void CheckHit(bool isLocal);
	private void OnHit(List<VoxelHit> voxelHits, Ray lineOfFire);
	private void OnLocalHit(List<VoxelHit> voxelHits);
	private void OnLocalHit(VoxelHit voxelHit);
	public override void UpdateWithDirection(Vector3 dir);
	public override bool IsSameItemData(Dictionary<object, object> itemData);
	public override void OnUnequip();
	protected override void InterruptFire();
}

