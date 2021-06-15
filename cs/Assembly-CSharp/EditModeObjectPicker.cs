/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class EditModeObjectPicker
{
	// Fields
	private const int defaultMask = -262149;
	private static Camera mainCamera;

	// Properties
	private static Camera MainCamera { get; }

	// Methods
	public static bool Pick(ref VoxelHit hit, HashSet<int> ignoreWoIds = null, int layerMask = -262149);
	public static bool GetPickingInfo(MVCubeModelBase cr, ref CubePickingInfo info);
	private static bool IsHitPickup(VoxelHit hit);
}

