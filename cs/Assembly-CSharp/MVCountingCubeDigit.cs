/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVCountingCubeDigit : MonoBehaviour
{
	// Fields
	public Material CountingCubeDigitMaterial;
	private MeshRenderer meshRenderer;
	private int _number;

	// Properties
	public int Number { get; set; }
	public MeshRenderer MeshRenderer { get; }

	// Constructors
	public MVCountingCubeDigit();

	// Methods
	private void Awake();
	private void SetMaterialOffset();
}

