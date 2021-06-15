/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class LineRangeIndicator : MonoBehaviour
{
	// Fields
	[Header]
	[SerializeField]
	private float lineDotDensity;
	[SerializeField]
	private float lineWidth;
	[Header]
	[SerializeField]
	private MeshRenderer rangeIndicator;
	[SerializeField]
	private MeshRenderer rangeIndicator_backside;
	[SerializeField]
	private Material lineDotMaterial;
	private Material materialCopy;

	// Constructors
	public LineRangeIndicator();

	// Methods
	protected void Awake();
	private void CopyMaterial();
	public void SetRange(float range);
}

