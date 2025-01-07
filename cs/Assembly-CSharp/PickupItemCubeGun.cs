/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CodeStage.AntiCheat.ObscuredTypes;
using MV.Common;
using MV.WorldObject;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PickupItemCubeGun : PickupItemWithDelay
{
	// Fields
	[SerializeField]
	private float minDistanceToCubeFire;
	[SerializeField]
	private ObscuredInt maxAmmo;
	[SerializeField]
	private float speed;
	[SerializeField]
	private float range;
	[SerializeField]
	private Transform chargeObject;
	[SerializeField]
	private ObscuredFloat fireIntervalSecondary;
	[SerializeField]
	private GUICellCursor primaryCursor;
	[SerializeField]
	private GUICellCursor secondaryCursor;
	[SerializeField]
	private AudioSource audioSource;
	[SerializeField]
	private CubeBullet cubeBullet;
	private float prevFireTime;
	private byte material;
	private bool waitingToFire;
	private ObscuredInt currentAmmo;
	private bool fireMain;
	private bool fireSecondary;
	private bool showingCursors;
	private bool hasLeftVehicle;

	// Properties
	public override AvatarItemType Type { get; }
	public override int Quantity { get; }
	protected override bool IsAmmoDepleted { get; }

	// Constructors
	public PickupItemCubeGun();

	// Methods
	private void Awake();
	private void Start();
	private void Update();
	public override void OnEquip();
	private bool DoLineOfFireCheck(out VoxelHit hit);
	public override void OnLeaveVehicleWithWeapon();
	public override void OnEnterVehicleWithWeapon();
	protected override void OnHolstered();
	protected override void OnUnholstered();
	private bool CanInsertCubeAtCubePos(IntVector cubePos);
	private void HandleCursors();
	public override void OnUnequip();
	public override void ResetAmmo();
	public override void OnStateChanged(Dictionary<object, object> newState);
	private void SetCubeBulletMaterial(byte materialId);
	protected override void OnFire(bool isLocal);
	protected void OnFireSecondary(bool isLocal);
	public override void TriggerBegin(int instigatorActorNr);
	public override void TriggerEnd();
	private void StartFire();
	private bool ShowCursors();
	public override void UpdateControllerUpdate();
	private void DoAutoFire();
	private void Execute();
	private static bool GetCubePosFromFineGrainedTerrain(VoxelHit voxelHit, float maxDistanceToEdge, ref IntVector pos);
	private static int GetEdgeVertexMatchCount(MVWorldObjectClient wo, VoxelHit voxelHit, Face face, Edge edge, Vector3[] edgeVerticesCubeHit);
	public static IntVector GetCubePos(VoxelHit voxelHit);
}

