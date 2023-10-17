/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SprayCursor
{
	// Fields
	private CellCursor sprayCursor;
	private float addCubeTime;
	private float addCubeLaserOnTime;

	// Constructors
	public SprayCursor(Vector3[] cubeCorners);

	// Methods
	public void UpdateCursor(CubePickingInfo selectedCube, MVCubeModelBase targetCubeModel, bool addCube);
	public void Remove();
	private IntVector FaceToOffset(Face face);
	public void UnlockMaterialToRemove();
}

