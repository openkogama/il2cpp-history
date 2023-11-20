/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SetupCubeModelTutorialUI : MonoBehaviour, IHandleCubeEditTutorial
{
	// Fields
	protected CubeModelingStateMachine cubeModelingStateMachine;
	[SerializeField]
	private DesktopCubeModelingControllerCubeTutorial desktopCubeModelTutorialControllerPrefab;
	[SerializeField]
	private MaterialsController materialsController;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__4_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _PushCubeEditCubeTutorialTools_b__4_0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass4_0
	{
		// Fields
		public DesktopCubeModelingControllerCubeTutorial cubeModelTutorialController;
		public UnityAction closeAction;

		// Constructors
		public __c__DisplayClass4_0();

		// Methods
		internal void _PushCubeEditCubeTutorialTools_b__1(IUIStack x, BaseEventData y);
	}

	// Constructors
	public SetupCubeModelTutorialUI();

	// Methods
	public void Initialize(CubeModelingStateMachine cubeModelingStateMachine);
	public void PushCubeEditCubeTutorialTools(UnityAction closeAction);
}

