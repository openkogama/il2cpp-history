/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class DeleteCursor
{
	// Fields
	private readonly CellCursor deleteCursor;
	private const float DeleteCubeLaserOnTime = 0.2f;

	// Constructors
	public DeleteCursor(Vector3[] cubeCorners);

	// Methods
	public void UpdateCursor(CubePickingInfo selectedCube, MVCubeModelBase targetCubeModel, bool deletedCube);
	public void Remove();
	public void UnlockMaterialToRemove();
}

