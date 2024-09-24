/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CodeStage.AntiCheat.ObscuredTypes;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class PickupItemWithDelay : PickupItem, IUpdatecontrollerSubscriberUpdate
{
	// Fields
	public Color crossHairCannotFireLow;
	public Color crossHairCannotFireHigh;
	public Color crossHairCanFire;
	[SerializeField]
	protected ObscuredFloat fireInterval;
	protected bool isFiring;
	protected float lastFireTime;
	private bool triggerBegin;

	// Properties
	protected override bool IsAmmoDepleted { get; }
	protected bool IsOnCooldown { get; }
	public override Color CrossHairColor { get; }

	// Constructors
	protected PickupItemWithDelay();

	// Methods
	protected virtual void OnFire(bool isLocal);
	public override void TriggerBegin(int instigatorActorNr);
	public override void TriggerEnd();
	public override void OnEquip();
	private void Fire();
	protected virtual void OnDestroy();
	public virtual void UpdateControllerUpdate();
	public void UpdateControllerFixedUpdate();
}

