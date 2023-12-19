/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TerrainCubeModelingControllerTutorial : MonoBehaviour
{
	// Fields
	[SerializeField]
	private RawImage materialsButtonImage;
	[SerializeField]
	private DesktopCubeModelingToolsController desktopCubeModelingController;
	private MaterialsController materialsController;

	// Constructors
	public TerrainCubeModelingControllerTutorial();

	// Methods
	public void Initialize(CubeModelingStateMachine cubeModelingStateMachine, MaterialsController materialsController);
	private void SetMaterial(byte materialId);
	private void OnDestroy();
}

