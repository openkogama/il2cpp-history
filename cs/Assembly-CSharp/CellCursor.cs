/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CellCursor : ICursor
{
	// Fields
	private List<CellCursorCubeLineMesh> cursorCubes;

	// Properties
	public bool Active { set; }

	// Constructors
	public CellCursor(int cursorCubeCount, float diagonalWidth, Material material, float fadeOutTime, Vector3[] cubeCorners);

	// Methods
	public void Remove();
	public CellCursorCubeLineMesh GetCellCursor(IntVector iLocalPos);
	public void SetCursor(CubePickingInfo info, GameObject cubeGameObject);
	public void SetCursor(IntVector position, GameObject cubeGameObject);
	public void UpdateCursor();
	private IntVector GetCubeCursorPos(CubePickingInfo info);
	public void ChangeMaterial(Material material);
}

