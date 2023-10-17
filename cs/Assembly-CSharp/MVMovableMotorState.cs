/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVMovableMotorState
{
	// Constructors
	public MVMovableMotorState();

	// Methods
	public bool Move(Vector3 velocity, MvCharacterController controller, float tolerance, MVGroundState groundState, out Vector3 movableVelocityVector);
	protected void CheckMoveables(MvCharacterController controller, float tolerance);
}

