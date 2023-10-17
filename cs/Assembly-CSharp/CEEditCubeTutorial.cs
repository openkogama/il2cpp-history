/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using MV.WorldObject.MetaData;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CEEditCubeTutorial : ESStateBase
{
	// Fields
	private int targetCubeModelId;
	private bool exiting;
	private IModelingConstraint constraint;
	private ConstraintVisualizer constraintVisualizer;
	private EditableCubeModelWrapper cubeModelWrapper;
	private static HashSet<FirstTimeEvent> successEvents;
	private static HashSet<FirstTimeEvent> disableCubeModelingEvents;
	private static HashSet<FirstTimeEvent> enableCubeModelingEvents;
	private float oneCubeDistance;
	private float multiCubeDistance;
	private Vector3 focusOffset;
	private FirstTimeCubeModelBlinker blinker;
	private bool hasExited;
	private IntVector zeroPos;
	private Dictionary<EditCubeChange, bool> firstTimeEventChangeCheck;
	private bool bordersExpanded;
	private MVCubeModelInstance selectedInstance;
	private CubeModelingStateMachine CMSM;
	private int mainCameraDefaultMask;
	private ResettingBookkeeping resettingBookkeeping;
	private bool disableCubeModeling;
	private bool enableCubemodeling;

	// Properties
	private MVCubeModelBase TargetCubeModel { get; set; }

	// Nested types
	private class ResettingBookkeeping
	{
		// Fields
		private int resettingBeginTime;
		public int resettingDelay;
		private bool doReset;
		public bool isResetting;

		// Properties
		public bool DoReset { get; }
		public bool ReadyToReset { get; }

		// Constructors
		public ResettingBookkeeping();

		// Methods
		public void InitializeResetting(int resettingDelay);
		public void StartResetting();
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass28_0
	{
		// Fields
		public string err;

		// Constructors
		public __c__DisplayClass28_0();

		// Methods
		internal void _Exit_b__0(IModalPopupCreator handler, BaseEventData data);
	}

	// Constructors
	public CEEditCubeTutorial();
	static CEEditCubeTutorial();

	// Methods
	public override void Enter(EditorStateMachine e);
	public override void Execute(EditorStateMachine e);
	private void HandleCubeModelingEnabling(FirstTimeEvent firstTimeEvent);
	public override void Exit(EditorStateMachine esm);
	private void SetFocus(float distance);
	private void SetupBlinker();
	private void CreateConstraint();
	private void OnClosed();
	private void OnEditCubeChange(int cubeCount, EditCubeChange editCubeChange);
	private Dictionary<EditCubeChange, bool> GetFirstTimeEventCheck();
	private void SetFirstTimeEventsHappened(FirstTimeState firstTimeState, FirstTimeEvent firstTimeEvent);
	private bool DoReset();
	[CompilerGenerated]
	private void _Enter_b__23_0(IHandleCubeEditTutorial handler, BaseEventData data);
}

