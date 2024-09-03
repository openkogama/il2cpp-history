/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class LoadingCube : MonoBehaviour
{
	// Fields
	private const float hueChangePerSecond = 0.2f;
	private const float cubeSpinSpeed = 0.75f;
	[SerializeField]
	private GameObject cube;
	private bool visible;
	private float time;
	private Material cubeMaterial;

	// Constructors
	public LoadingCube();

	// Methods
	private void Awake();
	private void Update();
	private void SelfDestruct();
}

