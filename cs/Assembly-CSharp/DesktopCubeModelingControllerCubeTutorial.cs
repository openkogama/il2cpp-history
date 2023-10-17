/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject.MetaData;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class DesktopCubeModelingControllerCubeTutorial : MonoBehaviour
{
	// Fields
	private byte defaultMaterial;
	private CubeModelingStateMachine cubeModelingStateMachine;
	private MaterialsController materialsController;
	[SerializeField]
	private RawImage materialsButtonImage;
	[SerializeField]
	private DesktopCubeModelingToolsController desktopCubeModelingController;
	[SerializeField]
	private GameObject deleteTool;
	[SerializeField]
	private GameObject paintTool;
	[SerializeField]
	private GameObject cubeTool;
	[SerializeField]
	private FirstTimeCubeEditFadeButtons materialButton;
	[SerializeField]
	private DesktopCubeModelingToolsController desktopCubeModelingToolsController;
	[SerializeField]
	private FirstTimeEvent exitFirstTimeEvent;
	private bool paintHasBeenActivated;

	// Nested types
	[CompilerGenerated]
	private sealed class _OverRideIfDefaultMaterial_d__20 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public DesktopCubeModelingControllerCubeTutorial __4__this;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _OverRideIfDefaultMaterial_d__20(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public DesktopCubeModelingControllerCubeTutorial();

	// Methods
	public void Initialize(CubeModelingStateMachine cubeModelingStateMachine, MaterialsController materialsController);
	private void OnFirstTimeState(FirstTimeState firstTimeState, FirstTimeEvent firstTimeEvent);
	private void UpdateDelete();
	private void UpdatePaint();
	private void DeactivateAllToolButtons();
	public void SetMaterial(byte materialId);
	private void DoSetMaterial(byte materialId);
	public void MaterialsPop();
	[IteratorStateMachine(typeof(_OverRideIfDefaultMaterial_d__20))]
	private IEnumerator OverRideIfDefaultMaterial();
	private void OnDestroy();
	[CompilerGenerated]
	private void _OnFirstTimeState_b__12_0(IUIStack x, BaseEventData y);
}

