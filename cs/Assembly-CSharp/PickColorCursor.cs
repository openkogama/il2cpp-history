/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PickColorCursor
{
	// Fields
	private readonly CellCursor paintCursor;
	private bool flashing;
	private float flashingTime;
	private bool currentMaterial;

	// Constructors
	public PickColorCursor(Vector3[] cubeCorners);

	// Methods
	public void UpdateCursor(CubePickingInfo selectedCube, MVCubeModelBase targetCubeModel, bool allowedMaterial);
	public void Remove();
	public void UnlockMaterialToRemove();
}

