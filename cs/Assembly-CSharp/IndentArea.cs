/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class IndentArea : ICursor
{
	// Fields
	private Material materialEdge;
	private Material materialNone;
	private Camera mainCamera;
	private GameObject gameObject;
	private float size;

	// Properties
	public GameObject GameObject { get; }
	public float Size { set; }

	// Constructors
	public IndentArea();

	// Methods
	public void Remove();
	public void UpdateIndentArea(CubePickingInfo info, GameObject cubeGameObject);
	public bool IsColliding();
	private Vector2[] SetUVs();
}

