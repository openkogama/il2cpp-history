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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	private sealed class _DoAutoFire_d__39 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public PickupItemModelGun __4__this;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _DoAutoFire_d__39(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
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
	[IteratorStateMachine(typeof(_DoAutoFire_d__39))]
	private IEnumerator DoAutoFire();
	private bool GetCubePosFromFineGrainedTerrain(VoxelHit voxelHit, float maxDistanceToEdge, ref IntVector pos);
	private static int GetEdgeVertexMatchCount(MVWorldObjectClient wo, VoxelHit voxelHit, Face face, Edge edge, Vector3[] edgeVerticesCubeHit);
	private void HandleCubeHitLocal(VoxelHit voxelHit, Ray lineOfFire);
	private void HandleCubeHit(VoxelHit voxelHit, Ray lineOfFire);
	private IntVector GetCubePos(VoxelHit voxelHit);
}

