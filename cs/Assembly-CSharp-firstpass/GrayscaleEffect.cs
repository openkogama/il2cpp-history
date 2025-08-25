/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 16: Assembly-CSharp-firstpass.dll - Assembly: Assembly-CSharp-firstpass, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null
[assembly: CompilationRelaxations(8)]
[assembly: Debuggable(DebuggableAttribute.DebuggingModes.None | DebuggableAttribute.DebuggingModes.IgnoreSymbolStoreSequencePoints)]
[assembly: RuntimeCompatibility(WrapNonExceptionThrows = true)]

[AddComponentMenu("Image Effects/Grayscale")]
[ExecuteInEditMode]
public class GrayscaleEffect : ImageEffectBase
{
	// Fields
	public Texture textureRamp;
	public float rampOffset;

	// Constructors
	public GrayscaleEffect();

	// Methods
	private void OnRenderImage(RenderTexture source, RenderTexture destination);
}

