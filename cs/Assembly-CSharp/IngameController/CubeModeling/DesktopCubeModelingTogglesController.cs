/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UGUI.Desktop.Scripts.EditMode.ToolToggles;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace IngameController.CubeModeling
{
	public class DesktopCubeModelingTogglesController : MonoBehaviour
	{
		// Fields
		[SerializeField]
		private ToggleDrawPlaneHandlerTerrain toggleDrawPlane;
		[SerializeField]
		private ToggleSnapToGrid toggleSnapToGrid;
		[SerializeField]
		private ToggleLogic toggleLogic;
		[SerializeField]
		private EnterPlayModeButton togglePlayMode;
		[SerializeField]
		private ToggleCameraEffects toggleCameraEffects;
	
		// Constructors
		public DesktopCubeModelingTogglesController();
	
		// Methods
		private void Awake();
		public void Initialize(CubeModelingStateMachine cubeModelingStateMachine);
		private void OnGameCameraEffectsChange(bool obj);
		private bool StartSetValue();
		private void CamEffectsUpdate(bool obj);
		private void OnDestroy();
	}
}
