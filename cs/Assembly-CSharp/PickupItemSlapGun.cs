/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PickupItemSlapGun : PickupItemWithDelay
{
	// Fields
	[SerializeField]
	private AudioSource audioSource;
	[SerializeField]
	private AudioClip[] slapSounds;
	public ParticleSystem hitParticles;
	public float maxRange;
	public float slapStrength;
	public ImpulseRay impulseRayPrefab;
	public Color slapColor;
	private int layerMask;
	private static readonly float damage;

	// Properties
	public override AvatarItemType Type { get; }
	public override bool CanUnequip { get; }
	public override bool ActivateGunModeOnEquip { get; }
	public override int Quantity { get; }
	public override bool CanHolster { get; }

	// Constructors
	public PickupItemSlapGun();
	static PickupItemSlapGun();

	// Methods
	private void Awake();
	protected override void OnFire(bool isLocal);
	private Vector3 FindRayTarget(Ray lineOfFire);
	private Vector3 ComputeImpulseDirection(Ray lineOfFire);
}

