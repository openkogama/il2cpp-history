/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class DrawPlaneControllerUUI : MonoBehaviour
{
	// Fields
	private bool inputEnabled;
	[SerializeField]
	protected WorldEditorDrawPlane worldEditorDrawPlane;

	// Properties
	public bool IsDrawPlaneActive { get; }
	public bool InputEnabled { get; set; }
	public int Altitude { get; }
	public DrawPlaneAxis Orientation { get; set; }
	public Vector3 Pos { get; }

	// Constructors
	public DrawPlaneControllerUUI();

	// Methods
	public void Initialize();
	public bool Pick(ref Vector3 hit);
	public void DrawPlaneToModel(GameObject gameObject);
	public void ToggleDrawPlane();
	public void HideDrawPlane();
	public void ReturnDrawPlaneToLandscape();
	public bool GetCubePosOnDrawplane(GameObject gameObject, out IntVector intVectorHitPosition);
	public void MoveDrawPlane(int dir);
}

