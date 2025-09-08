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

[ExecuteInEditMode]
public class WaterTile : MonoBehaviour
{
	// Fields
	public PlanarReflection reflection;
	public WaterBase waterBase;

	// Constructors
	public WaterTile();

	// Methods
	public void Start();
	private void AcquireComponents();
	public void OnWillRenderObject();
}

