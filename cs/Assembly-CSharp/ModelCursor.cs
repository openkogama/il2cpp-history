/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ModelCursor
{
	// Fields
	protected FaceCursor faceCursor;
	protected CellCursor errorCursor;
	private float addCubeLaserOnTime;

	// Properties
	public virtual bool CursorVisible { get; set; }

	// Constructors
	public ModelCursor(Vector3[] cubeCorners);

	// Methods
	private void HandleLaserMovingEdge(CubePickingInfo movingEdgeCube, GameObject targetGameObject);
	protected void HandleLaser(CubePickingInfo movingEdgeCube, CubePickingInfo selectedCube, GameObject targetGameObject, BuildState buildState, bool addCube);
	public void SetErrorCursor(IntVector iPos, GameObject targetGameObject);
	public virtual void Remove();
}

