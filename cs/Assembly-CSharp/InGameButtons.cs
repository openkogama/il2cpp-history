/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class InGameButtons : MonoBehaviour
{
	// Fields
	[SerializeField]
	private RectTransform fire;
	[SerializeField]
	private RectTransform point;
	[SerializeField]
	private RectTransform dropWeapon;
	[SerializeField]
	private RectTransform leaveVehicle;
	[SerializeField]
	private GameObject respawnButton;
	[SerializeField]
	private RectTransform holsterButton;
	[SerializeField]
	private RectTransform jumpButton;
	private PickupGUIFlags showingEquipableUI;

	// Constructors
	public InGameButtons();

	// Methods
	private void Update();
	private void HandleFireVisibility();
	private void HandleInPlayMode();
	private void HandleNotInPlayMode();
}

