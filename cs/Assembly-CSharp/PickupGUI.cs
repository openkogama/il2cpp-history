/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PickupGUI : MonoBehaviour
{
	// Fields
	private IGUICrossHair crossHair;
	private MVPickupOwner pickupOwner;
	private int worldObjectId;
	private bool canBeVisible;
	[CompilerGenerated]
	private static PickupGUIFlags _ShowEquipableUI_k__BackingField;

	// Properties
	public static PickupGUIFlags ShowEquipableUI { [CompilerGenerated] get; [CompilerGenerated] private set; }

	// Constructors
	public PickupGUI();

	// Methods
	public void Initialize(int worldObjectId, MVPickupOwner pickupOwner);
	public void OnHolstered(bool isHolstered);
	private bool IsInJetpack();
	private void LateUpdate();
	private void OnDestroy();
	public void Enter();
	public void Leave();
	private void UpdateCrossHairVisibility();
	public void AvatarLeftVehicle();
	private void OnEquipItem(PickupItem item);
	private void OnUnequipItem(PickupItem item);
}

