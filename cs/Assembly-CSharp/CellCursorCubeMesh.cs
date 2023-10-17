/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CellCursorCubeMesh
{
	// Fields
	private IntVector pos;
	private float fadeOutTime;
	private float prevCursorSetTime;
	private GameObject gameObject;

	// Properties
	public float PrevCursorSetTime { get; }
	public IntVector LocalPos { get; }
	public GameObject GameObject { get; }

	// Constructors
	public CellCursorCubeMesh();

	// Methods
	public void SetCursorCube(IntVector position, GameObject cubeGameObject);
	public void Update();
	public void Destroy();
}

