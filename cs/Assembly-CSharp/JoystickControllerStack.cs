/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class JoystickControllerStack : MonoBehaviour
{
	// Fields
	private List<InGameControls> controls;
	[SerializeField]
	private InGameControls avatar;
	[SerializeField]
	private InGameControls basicVehicle;
	[SerializeField]
	private InGameControls jetPackControls;

	// Constructors
	public JoystickControllerStack();

	// Methods
	private void Awake();
	public void PushJoystick(ControlType joystickType);
	public void Pop();
	private void CreateJoystickFromPrefab(InGameControls prefab);
}

