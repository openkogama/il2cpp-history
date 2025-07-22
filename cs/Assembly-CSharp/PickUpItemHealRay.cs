/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CodeStage.AntiCheat.ObscuredTypes;
using MV.Common;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PickUpItemHealRay : PickupItem
{
	// Fields
	private float passedLerpTime;
	private Quaternion lerpStartRotation;
	[SerializeField]
	private ParticleSystem rayParticles;
	private ParticleSystem hitParticles;
	[SerializeField]
	private float maxRayRange;
	[SerializeField]
	private float maxLockOnRange;
	[SerializeField]
	private float rayMinimumChargeTime;
	[SerializeField]
	private AudioSource audioSource;
	private float rayStartTime;
	private GameObject stuckObject;
	private bool damageRay;
	private bool isLockedOn;
	private bool isShooting;
	private ObscuredFloat currentAmmoLeft;
	private const float updateWaitTime = 0.05f;
	private float elapsedUpdateWaitTime;
	private Vector3 hitOffset;
	[SerializeField]
	[Tooltip("How many seconds the healrays ammo lasts.")]
	private ObscuredFloat maxAmmoTime;
	private LayerMask layers;
	private const float hitGroundStartPositionMidifier = 0.6f;
	[SerializeField]
	private Material ZIgnoreMaterial;
	[SerializeField]
	private Transform localMuzzePoint;
	[SerializeField]
	private ParticleSystem localRayParticles;
	private Transform remoteMuzzlePoint;
	private ParticleSystem remoteParticleSystem;
	private Material normalRayMaterial;
	private ParticleSystemRenderer particleRenderer;
	private const string stuckObjectIDString = "S";
	private static readonly Color lockOnColorHealing;
	private static readonly Color lockOnColorDamaging;

	// Properties
	public override AvatarItemType Type { get; }
	public override int Quantity { get; }
	public override int MaxAmmo { get; }

	// Nested types
	private struct RayCastData
	{
		// Fields
		public RayCastStatus Status;
		public VoxelHit HitVoxel;
		public Vector3 Direction;

		// Nested types
		public enum RayCastStatus
		{
			StopRay = 0,
			StartRay = 1,
			ContinueRay = 2
		}
	}

	// Constructors
	public PickUpItemHealRay();
	static PickUpItemHealRay();

	// Methods
	private void Awake();
	private void OnDestroy();
	public override void OnEquip();
	public override void OnUnequip();
	public override void ResetAmmo();
	private bool IsStillChargingRay();
	private void DoHealing();
	public override void TriggerBegin(int instigatorActorNr);
	private void ChangeUsedParticleSystem();
	private Vector3 CalculateParticlesRotation();
	private void DoAmmoDepletion();
	private void DoFloating();
	private void Update();
	private void UpdateRaysVisualRepresentation();
	private void LerpRaysVisualRepresentation();
	public override void TriggerEnd();
	private RayCastData UpdateRaycastLocally(Vector3 direction);
	private void UpdateRaycastRemotely(Vector3 direction);
	private void HandleRaycastResultLocally(RayCastData result);
	private void UpdateRayParticleEffect(VoxelHit hitVoxel, Vector3 direction);
	private Vector3 HandleVehicleHitPosition(Vector3 hitPosition, Vector3 direction, float hitDistance);
	private void UpdateRayHealingLogic(VoxelHit hitVoxel);
	private InteractionDataHandlerBase HandleChildObjectHit(VoxelHit hitVoxel, InteractionDataHandlerBase interactionHandler);
	private InteractionDataHandlerBase GetInteractionHandler(MVWorldObjectClient worldObject);
	private void TryHealTarget(InteractionDataHandlerBase interactionHandler);
	private bool IsDirectionValid(Vector3 direction);
	private List<VoxelHit> DoRaycast(Vector3 direction);
	private VoxelHit CalculateClosestVoxelHit(List<VoxelHit> hitVoxels);
	private Vector3 CalculateHitPosition(Vector3 fireFromPosition, Vector3 direction, float distance);
	private void OnHitParticleUpdate(Vector3 hitPosition, Vector3 firingDirection, float distance);
	private void UpdateHitParticles(Vector3 firingDirection, Vector3 hitPosition);
	private void SetRayParticleDistance(float distance);
	private void HandleNoHit();
	private void HandleOnStuck(MVWorldObjectClient hitObject, RayCastData result);
	private bool IsObjectStuckable(MVWorldObjectClient hitObject);
	private void CalculateHitOffset(VoxelHit hitVoxel, Vector3 direction);
	private void ShowHitEffect();
	private void UpdateStuckObject(MVWorldObjectClient hitObject);
	private void UpdateItemState(int stuckObjectId);
	private Vector3 CalculateStuckPosition();
	public override void OnStateChanged(Dictionary<object, object> newState);
	private static bool IsDamageRay(MVPickupOwner shooter, MVWorldObjectClient stuckWorldObject);
	private void SyncState(Dictionary<object, object> newState);
	private void ChangeValueInState(Dictionary<object, object> newState, string key, int value);
	private void ChangeValueInState(Dictionary<object, object> newState, string key, float value);
	private float GetMaxRange();
}

