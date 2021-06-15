/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class DeleteCursor
{
	// Fields
	private CellCursor deleteCursor;
	private float deleteCubeTime;
	private float deleteCubeLaserOnTime;

	// Constructors
	public DeleteCursor(Vector3[] cubeCorners);

	// Methods
	public void UpdateCursor(CubePickingInfo selectedCube, MVCubeModelBase targetCubeModel, bool deletedCube);
	public void Remove();
}

