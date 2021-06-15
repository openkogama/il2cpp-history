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

public class PickupItemShotgun : PickupItemWithDelay
{
	// Fields
	[SerializeField]
	private ParticleSystem muzzleFlare;
	[SerializeField]
	private ObscuredInt maxAmmo;
	[SerializeField]
	private float spread;
	[SerializeField]
	private float impulseStrength;
	[SerializeField]
	private float maxRange;
	[SerializeField]
	private float bulletSpeed;
	[SerializeField]
	private AudioSource audioSource;
	private static readonly float hitDamage;
	private static readonly float[] offsetsX;
	private static readonly float[] offsetsY;
	private ObscuredInt currentAmmo;

	// Properties
	public override AvatarItemType Type { get; }
	public override int Quantity { get; }
	protected override bool IsAmmoDepleted { get; }

	// Constructors
	public PickupItemShotgun();
	static PickupItemShotgun();

	// Methods
	private void Awake();
	public override void ResetAmmo();
	protected override void OnFire(bool isLocal);
	private void OnBulletHit(VoxelHit voxelHit, Ray lineOfFire);
	private void OnLocalBulletHit(VoxelHit voxelHit, Ray lineOfFire);
}

