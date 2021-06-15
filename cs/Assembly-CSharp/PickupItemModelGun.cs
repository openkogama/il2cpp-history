/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using MV.WorldObject;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PickupItemModelGun : PickupItemWithDelay
{
	// Fields
	public float minDistanceToCubeFire;
	public int ammo;
	public RailRay railGunRayPrefab;
	public float speed;
	public float range;
	public Transform chargeObject;
	public float fireIntervalSecondary;
	public Bullet rocketPrefab;
	public GUICellCursor primaryCursor;
	public GUICellCursor secondaryCursor;
	public AudioClip cubeLandedSound;
	public AudioClip chargeSound;
	public AudioClip releaseSound;
	public AudioClip cubeDestroyedSound;
	public AudioClip firePrimary;
	private float prevFireTime;
	private byte material;
	private bool waitingToFire;
	private int currentAmmo;
	private bool fireMain;
	private bool fireSecondary;
	public CubeBullet cubeBullet;

	// Properties
	public override AvatarItemType Type { get; }
	public override int Quantity { get; }
	protected override bool IsAmmoDepleted { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _DoAutoFire_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal float _timeFiring___1;
		internal bool _prevFireSecondary___1;
		internal PickupItemModelGun _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _DoAutoFire_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	// Constructors
	public PickupItemModelGun();

	// Methods
	private void Update();
	private bool DoLineOfFireCheck(out VoxelHit hit);
	private bool CanInsertCubeAtCubePos(IntVector cubePos);
	private void HandleCursors();
	public override void OnUnequip();
	public override void OnStateChanged(Dictionary<object, object> newState);
	public override void ResetAmmo();
	protected override void OnFire(bool isLocal);
	protected void OnFireSecondary(bool isLocal);
	public override void TriggerBegin(int instigatorActorNr);
	private bool ShowCursors();
	[DebuggerHidden]
	private IEnumerator DoAutoFire();
	private bool GetCubePosFromFineGrainedTerrain(VoxelHit voxelHit, float maxDistanceToEdge, ref IntVector pos);
	private void HandleCubeHitLocal(VoxelHit voxelHit, Ray lineOfFire);
	private void HandleCubeHit(VoxelHit voxelHit, Ray lineOfFire);
	private IntVector GetCubePos(VoxelHit voxelHit);
}

