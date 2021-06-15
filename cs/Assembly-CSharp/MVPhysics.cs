/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CodeStage.AntiCheat.ObscuredTypes;
using MV.WorldObject;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class MVPhysics
{
	// Fields
	private static ObscuredFloat gravity;
	public static PhysicalProperties airPhysicalProperties;

	// Properties
	public static ObscuredFloat Gravity { get; set; }

	// Constructors
	static MVPhysics();

	// Methods
	public static void Reset();
	public static float CalculateJumpVerticalSpeed(float targetJumpHeight);
	public static float CalculateJumpForceFromVerticalVelocity(float velocity);
}

