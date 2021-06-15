/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CodeStage.AntiCheat.ObscuredTypes;
using MV.Common;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PickupItemMultiThrowingStar : PickupItemWithDelay
{
	// Fields
	[SerializeField]
	private ObscuredInt maxAmmo;
	[SerializeField]
	private float bulletRangeStraight;
	[SerializeField]
	private float bulletRangeFall;
	[SerializeField]
	private float bulletFallRate;
	[SerializeField]
	private float bulletSpeed;
	[SerializeField]
	private int numStars;
	[SerializeField]
	private float fireSpacingDelay;
	[SerializeField]
	private float fireRate;
	[SerializeField]
	private AudioSource fireSound;
	private static readonly float baseDamage;
	private ObscuredInt currentAmmo;
	private int throwingStarsFired;
	private float fireTime;
	private bool isLocal;

	// Properties
	public override AvatarItemType Type { get; }
	public override int Quantity { get; }
	protected override bool IsAmmoDepleted { get; }

	// Constructors
	public PickupItemMultiThrowingStar();
	static PickupItemMultiThrowingStar();

	// Methods
	private void Awake();
	public override void ResetAmmo();
	protected override void OnHolstered();
	protected override void OnUnholstered();
	public override void OnEquip();
	protected override void OnFire(bool isLocal);
	public override void UpdateControllerUpdate();
	public override void OnEnterVehicleWithWeapon();
	public override void OnLeaveVehicleWithWeapon();
	private void TriggerFire();
	public override void TriggerBegin(int instigator);
	public override void TriggerEnd();
	private void DoFire(bool isLocal);
	private void Fire(bool isLocal);
	private void OnBulletHit(VoxelHit voxelHit, Ray lineOfFire);
	private void OnLocalBulletHit(VoxelHit voxelHit, Ray lineOfFire);
}

