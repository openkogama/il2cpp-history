/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UGUI.Desktop.Scripts.EditMode.Gizmo;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GizmoController : MonoBehaviour, IGizmoHandler
{
	// Fields
	private EditorStateMachine editorStateMachine;
	[SerializeField]
	private GizmoMenu gizmoMenuPrefab;
	[SerializeField]
	private GizmoMenuNg gizmoMenuNgPrefab;
	private GizmoMenu gizmoMenuInstance;
	private GizmoMenuNg gizmoMenuNgInstance;
	private RotationHelper rotationHelper;
	private bool ignoreSelectionOnce;

	// Properties
	public bool IgnoreSelectionOnce { get; set; }

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__11_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Show_b__11_0(IUIStack handler, BaseEventData data);
	}

	// Constructors
	public GizmoController();

	// Methods
	public void Initialize(EditorStateMachine esm);
	public void Show(int id, Vector3 worldPosition, EditorStateMachine e);
	private void OnGizmoMenuPop();
	public void Handle(GizmoAction action);
	void IGizmoHandler.IgnoreSelectionOnce();
	public void Hide();
	[CompilerGenerated]
	private void _Show_b__11_1(IUIStack x, BaseEventData y);
}

