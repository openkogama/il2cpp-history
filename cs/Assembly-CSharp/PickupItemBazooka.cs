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

public class PickupItemBazooka : PickupItemWithDelay
{
	// Fields
	[SerializeField]
	private ObscuredInt maxAmmo;
	[SerializeField]
	private ObscuredFloat baseDamage;
	[SerializeField]
	private float blastRadius;
	[SerializeField]
	private AnimationCurve damageFalloff;
	[SerializeField]
	private float baseImpulse;
	[SerializeField]
	private float rocketSpeed;
	[SerializeField]
	private float rocketRange;
	[SerializeField]
	private AudioSource aSource;
	private int layerMask;
	private ObscuredInt currentAmmo;

	// Properties
	public override AvatarItemType Type { get; }
	public override int Quantity { get; }
	protected override bool IsAmmoDepleted { get; }

	// Constructors
	public PickupItemBazooka();

	// Methods
	private void Awake();
	public override void ResetAmmo();
	protected override void OnFire(bool isLocal);
	private void OnHit(VoxelHit voxelHit, Ray lineOfFire);
	private void OnHitLocal(VoxelHit voxelHit, Ray lineOfFire);
	private void OnHitMaxRangeRemote(Ray lineOfFire);
	private void OnHitMaxRangeLocal(Ray lineOfFire);
}

