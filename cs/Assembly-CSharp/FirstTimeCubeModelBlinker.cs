/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FirstTimeCubeModelBlinker : BlinkerBase
{
	// Fields
	private MVCubeModelBase targetCubeModelBase;

	// Constructors
	public FirstTimeCubeModelBlinker();

	// Methods
	public void Initialize(Material material, Camera targetCamera, MVCubeModelBase targetCubeModelBase);
	protected override void BeforeDraw();
}

