/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SetupCubeModelTutorialUI : MonoBehaviour, IHandleCubeEditTutorial
{
	// Fields
	protected CubeModelingStateMachine cubeModelingStateMachine;
	[SerializeField]
	private DesktopCubeModelingControllerCubeTutorial desktopCubeModelTutorialControllerPrefab;
	[SerializeField]
	private MaterialsController materialsController;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Nested types
	[CompilerGenerated]
	private sealed class _PushCubeEditCubeTutorialTools_c__AnonStorey0
	{
		// Fields
		internal DesktopCubeModelingControllerCubeTutorial cubeModelTutorialController;
		internal UnityAction closeAction;

		// Constructors
		public _PushCubeEditCubeTutorialTools_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public SetupCubeModelTutorialUI();

	// Methods
	public void Initialize(CubeModelingStateMachine cubeModelingStateMachine);
	public void PushCubeEditCubeTutorialTools(UnityAction closeAction);
	[CompilerGenerated]
	private static void _PushCubeEditCubeTutorialTools_m__0(IUIStack x, BaseEventData y);
}

