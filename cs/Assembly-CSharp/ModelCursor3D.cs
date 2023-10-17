/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ModelCursor3D : ModelCursor
{
	// Fields
	private IndentArea indentArea;

	// Properties
	public IndentArea IndentArea { get; }
	public override bool CursorVisible { get; set; }

	// Constructors
	public ModelCursor3D(Vector3[] cubeCorners);

	// Methods
	public void SetIndentAreaSize(float size);
	public void UpdateCursor(CubePickingInfo movingEdgeCube, CubePickingInfo selectedCube, GameObject targetGameObject, BuildState buildState, bool addCube);
	public override void Remove();
}

