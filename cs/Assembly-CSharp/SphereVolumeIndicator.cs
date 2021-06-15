/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SphereVolumeIndicator : MonoBehaviour
{
	// Fields
	[Header]
	[SerializeField]
	private float lineDotDensity;
	[SerializeField]
	private int circleSergmentCount;
	[SerializeField]
	private float lineWidth;
	[Header]
	[SerializeField]
	private LineRenderer rangeIndicatorXY;
	[SerializeField]
	private LineRenderer rangeIndicatorYZ;
	[SerializeField]
	private LineRenderer rangeIndicatorZX;
	[SerializeField]
	private Material lineDotMaterial;
	private Material materialCopy;

	// Constructors
	public SphereVolumeIndicator();

	// Methods
	protected void Awake();
	private void CopyMaterial();
	public void SetRadius(float radius);
	private void SetLineWidths(float w);
}

