/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public interface ILaserPointer
{
	// Methods
	void SetLaserActiveState(bool isActive);
	void SetCurrentCubeMaterial(byte cubeMaterial);
	void ChangeState(LaserPointerState newState);
	void UpdatePosition(Vector3 to);
	void ActivateLaserForDuration(float duration);
}

