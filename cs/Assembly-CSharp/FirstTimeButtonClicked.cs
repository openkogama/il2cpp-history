/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject.MetaData;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[RequireComponent(typeof(Button))]
public class FirstTimeButtonClicked : FirstTimeEventHandler
{
	// Fields
	private bool isReady;
	private bool buttonHasBeenClicked;
	[SerializeField]
	private Button button;
	[SerializeField]
	private FirstTimeActivatableElementBase firstTimeActivatableElementBase;

	// Constructors
	public FirstTimeButtonClicked();

	// Methods
	private void Start();
	private void FirstTimeStateReceiver(FirstTimeState firstTimeState, FirstTimeEvent latestFirstTimeEvent);
	private void Clicked();
	private void HandleFirstTimeEvent();
	private void OnDestroy();
}

