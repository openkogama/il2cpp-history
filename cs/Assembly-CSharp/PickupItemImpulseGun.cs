/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[RequireComponent(typeof(AudioSource))]
public class PickupItemImpulseGun : PickupItem
{
	// Fields
	public Transform chargeObject;
	public float hitImpulse;
	public float recoilImpulse;
	public float maxRange;
	public float chargingRate;
	public float radius;
	public ImpulseRay impulseRayPrefab;
	public Color hitColor;
	public Color missColor;
	public float shakeFrequency;
	public float shakePower;
	public Vector3 shakeDirection;
	public AudioClip chargeSound;
	public AudioClip releaseSound;
	public AnimationCurve chargeCurve;
	public AnimationCurve shakeCurve;
	[SerializeField]
	private Transform modelTransform;
	[SerializeField]
	private AudioSource audioSource;
	private float maxVolume;
	private bool isCharging;
	private float chargeBeginTime;

	// Properties
	protected override bool IsAmmoDepleted { get; }
	public override AvatarItemType Type { get; }
	public override int Quantity { get; }
	public override int MaxAmmo { get; }
	public override bool HasUnlimitedAmmo { get; }
	public override float ChargeState { get; }

	// Constructors
	public PickupItemImpulseGun();

	// Methods
	private void Awake();
	private void DoChargingAnimation();
	public override void TriggerBegin(int instigatorActorNr);
	private void Update();
	public override void TriggerEnd();
	private void Fire(int avatarId, float impulseMagnitude, float recoilMagnitude);
	private List<MVWorldObjectClient> SphereCastAgainstWorldObjects(Ray lineOfFire);
	private Vector3 FindRayTarget(Ray lineOfFire);
	private Vector3 ComputeImpulseDirection(Ray lineOfFire);
}

