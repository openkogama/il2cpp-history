/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class PlayModeControlsBase : MonoBehaviour
{
	// Fields
	[SerializeField]
	private CrossHairAndroid crossHair;
	[SerializeField]
	private GameObject crossHairGO;
	[SerializeField]
	protected ShowUse useButtonLarge;
	[SerializeField]
	private JoystickControllerStack joystickControllerStack;
	private PickupGUIFlags showingEquipableUI;
	private WaitForTicks waitForMs;
	private bool testForLowFPS;
	private bool waitedUntilPlaying;

	// Constructors
	protected PlayModeControlsBase();

	// Methods
	private void OnEnable();
	private void Update();
	public void ShowEUseIcon(ShowUseOption option);
	public void HideEUseIcon();
	public IGUICrossHair GetCrossHair();
}

