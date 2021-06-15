/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CodeStage.AntiCheat.ObscuredTypes;
using MV.Common;
using MV.WorldObject;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SizeGunBase : PickupItemWithDelay
{
	// Fields
	[SerializeField]
	private AudioSource audioSource;
	[SerializeField]
	private float range;
	[SerializeField]
	private ObscuredInt maxAmmo;
	[SerializeField]
	private Color hitColor;
	[SerializeField]
	private Color missColor;
	private ObscuredInt currentAmmo;
	private int layerMask;

	// Properties
	public override int Quantity { get; }
	public override AvatarItemType Type { get; }
	protected override bool IsAmmoDepleted { get; }

	// Constructors
	public SizeGunBase();

	// Methods
	private void Awake();
	public override void ResetAmmo();
	protected override void OnFire(bool isLocal);
	protected virtual InteractionData GetPackageData();
	private void ReduceAmmo();
}

