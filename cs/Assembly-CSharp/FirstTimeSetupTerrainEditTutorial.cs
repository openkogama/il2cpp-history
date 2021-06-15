/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FirstTimeSetupTerrainEditTutorial : FirstTimeActivatableElementBase
{
	// Fields
	[SerializeField]
	private List<UIPushOption> pushOptions;
	[SerializeField]
	private TerrainCubeModelingControllerTutorial terrainCubeModelingControllerTutorialPrefab;
	private CubeModelingStateMachine cubeModelingStateMachine;
	private MaterialsController materialsController;

	// Properties
	public override bool CanShow { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _OnShow_c__AnonStorey0
	{
		// Fields
		internal TerrainCubeModelingControllerTutorial terrainCubeModelingControllerTutorial;
		internal UIPushOption options;

		// Constructors
		public _OnShow_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public FirstTimeSetupTerrainEditTutorial();

	// Methods
	public override void OnShow();
	public void Initialize(CubeModelingStateMachine cubeModelingStateMachine, MaterialsController materialsController);
}

