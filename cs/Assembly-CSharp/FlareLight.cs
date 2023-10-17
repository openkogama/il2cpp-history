/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FlareLight : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Light light;
	[SerializeField]
	private LensFlare lensFlare;

	// Properties
	public Light Light { get; }
	public LensFlare LensFlare { get; }

	// Constructors
	public FlareLight();

	// Methods
	protected void OnEnable();
	protected void OnDisable();
	private void SetEnabled(bool b);
	protected void Reset();
}

