/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class InputToPlayerMovementAvatarEdit : IInputToPlayerMovement
{
	// Fields
	private MovementMapFlags frameUpdateMovementMapState;
	private MovementMapFlags movementMapState;

	// Properties
	public Vector3 Direction { get; }
	public bool Jump { get; }

	// Nested types
	[Flags]
	private enum MovementMapFlags
	{
		None = 0,
		Left = 1,
		Forward = 2,
		Right = 4,
		Back = 8,
		Jump = 16
	}

	// Constructors
	public InputToPlayerMovementAvatarEdit();

	// Methods
	public void HandleInputState(bool fromFrameUpdate);
}

