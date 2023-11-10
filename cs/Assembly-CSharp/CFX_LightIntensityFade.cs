/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[RequireComponent(typeof(Light))]
public class CFX_LightIntensityFade : MonoBehaviour
{
	// Fields
	public float duration;
	public float delay;
	public float finalIntensity;
	private float baseIntensity;
	public bool autodestruct;
	private float p_lifetime;
	private float p_delay;

	// Constructors
	public CFX_LightIntensityFade();

	// Methods
	private void Start();
	private void OnEnable();
	private void Update();
}

