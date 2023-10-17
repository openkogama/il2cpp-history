/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CodeStage.AntiCheat.ObscuredTypes;
using MV.Common;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PickupItemRailGun : PickupItemWithDelay
{
	// Fields
	public ParticleSystem chargeParticles;
	[SerializeField]
	private float range;
	[SerializeField]
	private ObscuredInt maxAmmo;
	[SerializeField]
	private RailRay railGunRayPrefab;
	[SerializeField]
	private float targetFieldOfView;
	[SerializeField]
	private ObscuredFloat baseDamage;
	[SerializeField]
	private Color hitColor;
	[SerializeField]
	private Color missColor;
	[SerializeField]
	private AudioSource releaseSound;
	[SerializeField]
	private AudioSource chargeAudioSource;
	[SerializeField]
	private AnimationCurve chargeCurve;
	[SerializeField]
	private float curveChargeLength;
	private float toFieldOfView;
	private float initialFOV;
	private bool canDoFOVZoom;
	private bool isCharging;
	private float chargeBeginTime;
	private ObscuredInt currentAmmo;
	private float currentCharge;
	private int hitLayerMask;

	// Properties
	public override AvatarItemType Type { get; }
	protected override bool IsAmmoDepleted { get; }
	public override int Quantity { get; }
	public override float ChargeState { get; }
	public override Color CrossHairColor { get; }

	// Constructors
	public PickupItemRailGun();

	// Methods
	private void Awake();
	public override void ResetAmmo();
	public override void OnLeaveVehicleWithWeapon();
	public override void OnEnterVehicleWithWeapon();
	private void DoChargingAnimation();
	private void Update();
	public override void OnEquip();
	public override void OnUnequip();
	public override void TriggerBegin(int instigatorActorNr);
	public override void TriggerEnd();
	private new void Fire();
}

