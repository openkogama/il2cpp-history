/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 18: Assembly-CSharp-firstpass.dll - Assembly: Assembly-CSharp-firstpass, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[AddComponentMenu("")]
[RequireComponent(typeof(Camera))]
public class ImageEffectBase : MonoBehaviour
{
	// Fields
	public Shader shader;
	private Material m_Material;

	// Properties
	protected Material material { get; }

	// Constructors
	public ImageEffectBase();

	// Methods
	protected void Start();
	protected void OnDisable();
}

