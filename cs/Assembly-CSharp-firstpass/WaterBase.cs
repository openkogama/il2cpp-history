/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 36: Assembly-CSharp-firstpass.dll - Assembly: Assembly-CSharp-firstpass, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[ExecuteInEditMode]
public class WaterBase : MonoBehaviour
{
	// Fields
	public Material sharedMaterial;
	public WaterQuality waterQuality;
	public bool edgeBlend;

	// Constructors
	public WaterBase();

	// Methods
	public void UpdateShader();
	public void WaterTileBeingRendered(Transform tr, Camera currentCam);
	public void Update();
}

