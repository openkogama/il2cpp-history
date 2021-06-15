/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class VehiclePickupOwner : MVPickupOwner
{
	// Fields
	private Transform mountTransform;

	// Constructors
	public VehiclePickupOwner();

	// Methods
	public void Init(MVRuntimeDataVariable currentItemRuntimeVariable, MVRuntimeDataVariable isFiringRuntimeVariable, Transform mountTransform);
	public void OnLocalObjectsDestroyed();
	protected override void Equip(AvatarItemType type, int variantId);
	protected override void Unequip();
}

