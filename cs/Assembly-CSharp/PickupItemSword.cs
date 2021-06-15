/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PickupItemSword : PickupItemWithDelay
{
	// Fields
	[SerializeField]
	private Transform swordHandle;
	[SerializeField]
	private AudioSource audioSource;
	[SerializeField]
	[Tooltip]
	private float impulseStrength;
	[SerializeField]
	private Animation swordAnim;
	[SerializeField]
	private float recoilForce;
	[SerializeField]
	private float bladeRadius;
	[SerializeField]
	private float range;
	private int hitLayerMask;
	private static readonly float hitDamage;

	// Properties
	public override AvatarItemType Type { get; }
	public override bool ActivateGunModeOnEquip { get; }
	public override int Quantity { get; }

	// Constructors
	public PickupItemSword();
	static PickupItemSword();

	// Methods
	private void Awake();
	public override void OnEquip();
	protected override void OnFire(bool isLocal);
	private void OnSwordHit(List<VoxelHit> voxelHits, Ray lineOfFire);
	private void OnSwordHit(VoxelHit voxelHit, Ray lineOfFire);
	private void OnLocalSwordHit(List<VoxelHit> voxelHits, Ray lineOfFire);
	private Vector3 FindRayTarget(Ray lineOfFire);
	private void OnLocalSwordHit(VoxelHit voxelHit, Ray lineOfFire);
	public override void UpdateWithDirection(Vector3 dir);
}

