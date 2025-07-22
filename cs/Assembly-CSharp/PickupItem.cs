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

public abstract class PickupItem : MonoBehaviour
{
	// Fields
	[SerializeField]
	protected Transform muzzlePoint;
	[SerializeField]
	protected Transform holsterTransformOffset;
	[SerializeField]
	protected Transform firstPersonTransform;
	[SerializeField]
	protected Transform handTransform;
	[SerializeField]
	protected Transform center;
	[SerializeField]
	protected MeshRenderer[] meshRenderers;
	public MVPickupOwner owner;
	protected bool firedThisFrame;
	private Transform originalParent;
	private Vector3 originalPos;
	private Quaternion originalRot;
	private Vector3 originalScale;
	[CompilerGenerated]
	private bool _IsHolstered_k__BackingField;
	[CompilerGenerated]
	private int _VariantID_k__BackingField;
	[CompilerGenerated]
	private bool _AbleToFire_k__BackingField;

	// Properties
	public abstract AvatarItemType Type { get; }
	public abstract int MaxAmmo { get; }
	public virtual int Quantity { get; }
	public virtual Color CrossHairColor { get; }
	public virtual float ChargeState { get; }
	public virtual bool FirstPerson { get; }
	public virtual bool GunMode { get; }
	public virtual bool IsHandEquippable { get; }
	public virtual bool ThirdPersonGunMode { get; }
	public virtual bool CanHolster { get; }
	public virtual bool HasUnlimitedAmmo { get; }
	public virtual bool CanUnequip { get; }
	protected virtual bool IsAmmoDepleted { get; }
	public bool IsHolstered { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public Vector3 Origin { get; }
	public bool IsInFirstPersonMode { get; }
	public bool IsAmmoEmpty { get; }
	public int VariantID { [CompilerGenerated] get; [CompilerGenerated] set; }
	public bool AbleToFire { [CompilerGenerated] get; [CompilerGenerated] set; }

	// Constructors
	protected PickupItem();

	// Methods
	public static GameObject InstantiatePickupItem(AvatarItemType type, int variantId);
	public void HolsterPickup(Transform targetHolsterTransform);
	public void UnholsterPickup();
	public void EnterFirstPersonView(MVCameraBase camera);
	public void EquipToHand(Transform hand);
	public void LeaveFirstPersonView();
	private void RevertToOriginalTransform();
	public virtual bool CanFire();
	public virtual void TriggerBegin(int instigatorActorNr);
	public virtual void TriggerEnd();
	public virtual void OnStateChanged(Dictionary<object, object> newState);
	public virtual void OnEquip();
	public virtual void OnUnequip();
	public virtual void ResetAmmo();
	public virtual void OnLeaveVehicleWithWeapon();
	public virtual void OnEnterVehicleWithWeapon();
	protected virtual void OnHolstered();
	protected virtual void OnUnholstered();
	protected virtual int CalculateMaxAmmo(int defaultAmmo);
	public virtual void UpdateWithDirection(Vector3 dir);
	public bool GetAndResetFiredThisFrame();
	public static GameObject CloneCubeModelInstance(MVCubeModelInstance cmb, bool forceVisible = false);
	private static GameObject InstantiateMeleeWeapon(int variantId);
}

