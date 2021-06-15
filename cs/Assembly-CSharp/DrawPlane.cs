/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class DrawPlane
{
	// Fields
	private static DrawPlaneControllerUUI drawPlaneController;

	// Properties
	public static bool IsDrawPlaneActive { get; }
	public static int Altitude { get; }
	public static DrawPlaneAxis Orientation { get; set; }
	public static Vector3 Pos { get; }
	public static bool InputEnabled { get; set; }

	// Methods
	public static void Initialize(DrawPlaneControllerUUI drawPlaneController);
	public static void Reset();
	public static bool Pick(ref Vector3 hit);
	public static void DrawPlaneToModel(GameObject gameObject);
	public static void ToggleDrawPlane();
	public static void HideDrawPlane();
	public static void ReturnDrawPlaneToLandscape();
	public static bool GetCubePosOnDrawplane(GameObject gameObject, out IntVector intVectorHitPosition);
	public static void MoveDrawPlane(int dir);
}

