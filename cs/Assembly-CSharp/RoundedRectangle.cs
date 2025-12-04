/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[ExecuteInEditMode]
[RequireComponent(typeof(CanvasRenderer))]
public class RoundedRectangle : Image
{
	// Fields
	public float radius;
	public float borderThickness;
	public Color borderColor;

	// Properties
	public Rect Rectangle { get; }

	// Constructors
	public RoundedRectangle();

	// Methods
	protected override void OnPopulateMesh(VertexHelper vh);
	protected override void OnDestroy();
}

