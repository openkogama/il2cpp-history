/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FaceCursor : ICursor
{
	// Fields
	private Material materialCorner;
	private Material materialEdge;
	private Material materialNone;
	private GameObject gameObject;

	// Properties
	public GameObject GameObject { get; }

	// Constructors
	public FaceCursor(Material materialEdgePath, Material materialCornerPath, Material materialNonePath);

	// Methods
	public void Remove();
	public void UpdateCursor(CubePickingInfo info, GameObject cubeGameObject);
	private Vector2[] SetUVs(Edge edge, bool mirror);
}

