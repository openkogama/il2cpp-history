/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	private sealed class __c__DisplayClass14_0
	{
		// Fields
		public string errorText;

		// Constructors
		public __c__DisplayClass14_0();

		// Methods
		internal void _Execute_b__0(IModalPopupCreator handler, BaseEventData data);
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__14_1;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Execute_b__14_1(IUIStack x, BaseEventData y);
	}

	// Constructors
	public ESSelection(ContextMenuController contextMenuController, GizmoController gizmoController);

	// Methods
	private void ShowContextMenuGizmo();
	private void ShowLinkMenuGizmo();
	private void PopMenuGizmos();
	public override void Enter(EditorStateMachine e);
	private void DeselectAll(EditorStateMachine e);
	public override void Execute(EditorStateMachine e);
	public override void Exit(EditorStateMachine e);
	private bool IsMouseUpValid(Vector3 mousePosition);
	private bool CheckAndExecuteOnClickHandler(EditorStateMachine e, PickResult<WorldObjectClientRef> pick);
	private void SelectionController_SelectedWorldObjectDeletedHandler(object sender, WorldObjectDestroyedEventArgs e);
	private LinkObjectBase GetLinkHit(EditorStateMachine e, ref VoxelHit hit);
	private bool EnterObject(EditorStateMachine e, MVWorldObjectClient selectedWo);
	private void HandleEscape(EditorStateMachine e);
}

