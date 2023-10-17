/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class Blinker
{
	// Fields
	private Material blinkMaterial;
	private float blinkStartTime;
	private float blinkDuration;
	private float blinkInterval;

	// Properties
	public bool IsExpired { get; }

	// Constructors
	public Blinker(float interval, Material m, Color color);

	// Methods
	public void Start(float duration);
	public void Stop();
	public void Draw(Mesh mesh, Transform tfm, Camera targetCamera, int layerMask = 0);
	public void DestroyBlinkerMaterial();
}

