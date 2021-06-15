/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

internal class ESSelection : ESStateBase
{
	// Fields
	private EditorStateMachine editorStateMachine;
	private LinkObjectBase selectedLinkObject;
	private WorldObjectClientRef selectedWorldObject;
	private PickResult<WorldObjectClientRef> pickedTarget;
	private PickResult<LinkObjectBase> pickedLink;
	private ContextMenuController contextMenuController;
	private GizmoController gizmoController;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Nested types
	private class PickResult<T>
	{
		// Fields
		public readonly Vector3 mousePosition;
		public readonly VoxelHit hit;
		public readonly T data;

		// Constructors
		public PickResult(Vector3 mousePosition, VoxelHit hit, T data);
	}

	[CompilerGenerated]
	private sealed class _Execute_c__AnonStorey0
	{
		// Fields
		internal string errorText;

		// Constructors
		public _Execute_c__AnonStorey0();

		// Methods
		internal void __m__0(IModalPopupCreator handler, BaseEventData data);
	}

	// Constructors
	public ESSelection(ContextMenuController contextMenuController, GizmoController gizmoController);

	// Methods
	private void ShowContextMenuGizmo();
	private void ShowLinkMenuGizmo();
	private void PopMenuGizmos();
	public override void Enter(EditorStateMachine e);
	public override void Execute(EditorStateMachine e);
	public override void Exit(EditorStateMachine e);
	private bool IsMouseUpValid(Vector3 mousePosition);
	private bool CheckAndExecuteOnClickHandler(EditorStateMachine e, PickResult<WorldObjectClientRef> pick);
	private void SelectionController_SelectedWorldObjectDeletedHandler(object sender, WorldObjectDestroyedEventArgs e);
	private LinkObjectBase GetLinkHit(EditorStateMachine e, ref VoxelHit hit);
	private bool EnterObject(EditorStateMachine e, MVWorldObjectClient selectedWo);
	private void HandleEscape(EditorStateMachine e);
	[CompilerGenerated]
	private static void _Execute_m__0(IUIStack x, BaseEventData y);
}

