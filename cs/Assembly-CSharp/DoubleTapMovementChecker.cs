/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class DoubleTapMovementChecker
{
	// Fields
	private const float doubleTapThreshold = 0.3f;
	private KogamaControls[] movementControls;
	private KogamaControls lastMovement;
	private float timer;
	private bool doubleTap;

	// Properties
	public bool DoubleTap { get; }

	// Constructors
	public DoubleTapMovementChecker();

	// Methods
	public void FrameUpdate();
}

