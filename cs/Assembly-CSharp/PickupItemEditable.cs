/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class PickupItemEditable : PickupItemWithDelay
{
	// Fields
	[SerializeField]
	protected Transform weaponParent;
	[SerializeField]
	protected Transform weaponHandle;
	[SerializeField]
	protected Transform cubeModelParent;
	[SerializeField]
	protected AudioSource fireAudioSource;
	[SerializeField]
	protected AudioSource hitAudioSource;
	[SerializeField]
	protected Animator animator;
	[SerializeField]
	protected AudioClip[] fireAudioClips;
	[SerializeField]
	protected AudioClip[] hitAudioClips;
	[CompilerGenerated]
	private int _CubeModelPid_k__BackingField;
	[CompilerGenerated]
	private EditableItemConfiguration _Configuration_k__BackingField;
	protected int hitLayerMask;
	protected GameObject cubeModelObject;
	private IEnumerator animatorRoutine;

	// Properties
	public int CubeModelPid { [CompilerGenerated] get; [CompilerGenerated] private set; }
	protected virtual string FireSoundEffectName { get; }
	protected virtual string HitSoundEffectName { get; }
	protected virtual string AttackAnimationName { get; }
	protected EditableItemConfiguration Configuration { [CompilerGenerated] get; [CompilerGenerated] set; }

	// Nested types
	protected abstract class EditableItemConfiguration
	{
		// Fields
		public string name;
		public int cubeModelId;
		public int maxAmmo;
		public float damage;
		public float impulseStrength;
		public float recoilStrength;
		public float fireAnimationTime;
		public float attackCooldown;
		public float range;
		public float radius;
		public int fireSoundEffect;
		public int hitSoundEffect;

		// Constructors
		protected EditableItemConfiguration();
	}

	[CompilerGenerated]
	private sealed class _DisableAnimatorCoroutine_d__42 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public PickupItemEditable __4__this;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _DisableAnimatorCoroutine_d__42(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	protected PickupItemEditable();

	// Methods
	public abstract bool IsSameItemData(Dictionary<object, object> itemData);
	protected abstract void SetConfiguration(Dictionary<object, object> data);
	protected abstract EditableItemConfiguration GetDefaultConfiguration();
	private void Awake();
	protected virtual void Initialize();
	private void SetValuesBasedOnConfiguration();
	public override void OnStateChanged(Dictionary<object, object> newState);
	protected void OnCubeModelStateChanged();
	protected virtual void SetAnimation();
	protected override void OnFire(bool isLocal);
	protected void PlayAnimation();
	protected virtual void OnHit(List<VoxelHit> voxelHits, Ray lineOfFire);
	protected void OnHit(VoxelHit voxelHit, Ray lineOfFire);
	protected void OnLocalHit(List<VoxelHit> voxelHits, Ray lineOfFire);
	private void OnLocalHit(VoxelHit voxelHit, Ray lineOfFire);
	protected void PlayAudio(AudioSource audioSource, string soundEffectName, Vector3 position, bool useAudioManager = true);
	[IteratorStateMachine(typeof(_DisableAnimatorCoroutine_d__42))]
	private IEnumerator DisableAnimatorCoroutine();
	private void DisableAnimation();
	protected bool IsSamePickupItem(Dictionary<object, object> itemData);
	protected virtual void InterruptFire();
	public override void OnUnequip();
	protected override void OnHolstered();
	public override void OnEnterVehicleWithWeapon();
}

