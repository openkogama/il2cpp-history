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

public abstract class MVPickupOwner : MVComponent
{
	// Fields
	private Vector3 lookOrigin;
	private Vector3 lookDirection;
	private float prevUpdateLineOfFireTime;
	private const float _updateLineOfFireInterval = 0.5f;
	private bool hasUnlimitedAmmoSetting;
	protected PickupItem currentItem;
	public OnEquipItemDelegate onEquipItem;
	public OnUnequipItemDelegate onUnequipItem;
	public OnHandleFiringDelegate onHandleFiring;
	public Action<bool> OnHolsteredChanged;
	[CompilerGenerated]
	private bool _IsLocal_k__BackingField;

	// Properties
	public PickupItem CurrentItem { get; }
	public bool IsLocal { [CompilerGenerated] get; [CompilerGenerated] set; }
	public Vector3 LookOrigin { get; }
	public Vector3 LookDirection { get; }
	public bool HasUnlimitedAmmo { get; }
	public bool InGunMode { get; }
	public bool PickupItemIsInHand { get; }
	public MVWorldObjectClient WorldObjectOwner { get; }
	public virtual HashSet<int> IgnoreWOIDs { get; }

	// Nested types
	public delegate void OnEquipItemDelegate(PickupItem equippedItem);

	public delegate void OnUnequipItemDelegate(PickupItem unequippedItem);

	public delegate void OnHandleFiringDelegate(bool isFiring);

	// Constructors
	protected MVPickupOwner();

	// Methods
	protected abstract void Equip(AvatarItemType type, int variantId);
	protected abstract void Unequip();
	protected override void Awake();
	public float GetAbsolutProjectileSpeed(float projectileSpeed);
	public void HandleFire(bool inputFire, MVRuntimeDataVariable isFiringRuntimeVariable);
	public void SetLineOfFire(Vector3 lookOrigin, Vector3 lookDirection);
	protected void Init(MVRuntimeDataVariable currentItemRuntimeVariable, MVRuntimeDataVariable isFiringRuntimeVariable);
	protected void InitializeSettings(bool hasUnlimitedAmmoSetting);
	private Vector3 GetLookDirectionWithAddedVelocityMagnitude(Vector3 lookDirection);
	public void SetLineOfFireLocal();
	private void UpdateCurrentItem(Dictionary<object, object> newState);
	private Transform GetTargetHolsterTransform();
	private void HandleFiring(bool isFiring);
	protected void SetAvatarItemAsCurrent(PickupItem avatarItem);
	protected PickupItem CreateAvatarItem(AvatarItemType type, int variantId);
	[CompilerGenerated]
	private void _Init_b__39_0(object item);
	[CompilerGenerated]
	private void _Init_b__39_1(object value);
}

