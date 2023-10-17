/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class Fader : MonoBehaviour
{
	// Fields
	private Renderer _renderer;
	private Shader normalShader;
	public Shader fadeShader;
	private bool faded;

	// Constructors
	public Fader();

	// Methods
	public void Awake();
	public void Fade(float fadeFactor);
}

