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

public class PickupItemCollectTheItem : PickupItem
{
	// Fields
	[SerializeField]
	private Transform cubeModelAttachPoint;
	[SerializeField]
	private float pickupScale;
	private ObjectiveArrow arrow;
	private MVWorldObjectClient woDropOff;
	private int cubeModelKeyId;
	private int spawnerId;
	private int dropOffId;
	private GameObject pickup;
	private bool shouldSpawnInstanceOnUnequip;

	// Properties
	public override AvatarItemType Type { get; }
	public override bool ActivateGunModeOnEquip { get; }

	// Constructors
	public PickupItemCollectTheItem();

	// Methods
	private void Awake();
	public override void UpdateWithDirection(Vector3 dir);
	public override void OnLeaveVehicleWithWeapon();
	public override void OnEnterVehicleWithWeapon();
	public override void OnUnequip();
	public void SetShouldSpawnInstanceOnUnequip(bool shouldSpawnInstance);
	public override void OnEquip();
	public int GetCubeModelKeyId();
	private void OnDropoffActivated(bool shouldStayEquipped);
	public override void OnStateChanged(Dictionary<object, object> newState);
	private void SetupDropOffArrow(int dropoffId);
	private void SetupPickupWo(MVWorldObjectClient wo);
	private void OnWorldObjectSpawnerDestroyed();
	private void ForceUnequipPickup();
	private void OnDestroy();
}

