/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PickupItemHand : PickupItemWithDelay
{
	// Fields
	public float pushMagnitude;
	public float pushRadius;

	// Properties
	public override AvatarItemType Type { get; }
	public override bool ActivateGunModeOnEquip { get; }
	public override bool CanUnequip { get; }
	public override bool CanHolster { get; }
	public override int Quantity { get; }

	// Constructors
	public PickupItemHand();

	// Methods
	public override bool CanFire();
	private void Awake();
	protected override void OnFire(bool isLocal);
	private void DoRemoveCubes();
}

