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

public class PickupItemThrowingStar : PickupItemWithDelay
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
	private AudioSource fireSound;
	private static readonly float damage;
	private ObscuredInt currentAmmo;

	// Properties
	public override AvatarItemType Type { get; }
	public override int Quantity { get; }
	protected override bool IsAmmoDepleted { get; }

	// Constructors
	public PickupItemThrowingStar();
	static PickupItemThrowingStar();

	// Methods
	private void Awake();
	public override void ResetAmmo();
	protected override void OnFire(bool isLocal);
	private void OnBulletHit(VoxelHit voxelHit, Ray lineOfFire);
	private void OnLocalBulletHit(VoxelHit voxelHit, Ray lineOfFire);
}

