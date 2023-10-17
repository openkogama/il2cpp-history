/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class JoystickLockAxis
{
	// Fields
	private Vector2 prevPos;
	private SmoothTouchAxis smoothTouchAxis;
	private const float minDotForSupress = 0.8f;
	private const float movementRangeFactor = 0.9f;

	// Constructors
	public JoystickLockAxis();

	// Methods
	public void Reset(Vector2 startPos);
	public Joystick.SupressAxisFlag UpdateLockToAxis(Vector3 position, float normalizedDistance);
	private Joystick.SupressAxisFlag SetLockToAxis(Vector2 movement, float normalizedDistance);
}

