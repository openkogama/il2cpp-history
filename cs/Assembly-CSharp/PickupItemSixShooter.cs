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

public class PickupItemSixShooter : PickupItemWithDelay
{
	// Fields
	[SerializeField]
	private ObscuredInt maxAmmo;
	[SerializeField]
	private float recoilImpact;
	[SerializeField]
	private float bulletRange;
	[SerializeField]
	private float bulletSpeed;
	[SerializeField]
	private float hitImpact;
	[SerializeField]
	private AudioSource fireSound;
	[SerializeField]
	private ParticleSystem muzzleParticles;
	public Animation animComponent;
	private ObscuredInt currentAmmo;
	private static readonly float baseDamage;

	// Properties
	public override AvatarItemType Type { get; }
	public override int Quantity { get; }
	protected override bool IsAmmoDepleted { get; }

	// Constructors
	public PickupItemSixShooter();
	static PickupItemSixShooter();

	// Methods
	public void Awake();
	public override void ResetAmmo();
	protected override void OnFire(bool isLocal);
	private void OnBulletHit(VoxelHit voxelHit, Ray lineOfFire);
	private void OnLocalBulletHit(VoxelHit voxelHit, Ray lineOfFire);
}

