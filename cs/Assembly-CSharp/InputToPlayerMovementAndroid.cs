/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class InputToPlayerMovementAndroid : IInputToPlayerMovement
{
	// Fields
	private bool jump;
	private bool jumpFrameUpdate;
	private bool jumpFixedUpdate;
	private Vector3 direction;

	// Properties
	public Vector3 Direction { get; }
	public bool Jump { get; }

	// Constructors
	public InputToPlayerMovementAndroid();

	// Methods
	public void HandleInputState(bool fromFrameUpdate);
}

