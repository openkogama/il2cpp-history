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

public class GizmoMenu : MonoBehaviour
{
	// Fields
	private Vector3 worldPosition;
	[SerializeField]
	private RectTransform rectTransform;
	[SerializeField]
	private GizmoButton rotate;
	[SerializeField]
	private GizmoButton xzTranslate;
	[SerializeField]
	private GizmoButton yTranslate;
	[SerializeField]
	private GizmoRotationModeButton xRotation;
	[SerializeField]
	private GizmoRotationModeButton yRotation;
	[SerializeField]
	private GizmoRotationModeButton zRotation;
	private RotationMode? rotationMode;
	private int woID;
	private EditorStateMachine editorStateMachine;

	// Properties
	public RotationMode RotationMode { get; }

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__18_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__21_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__22_0;
		public static ExecuteEvents.EventFunction<IGizmoHandler> __9__28_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Pop_b__18_0(IUIStack handler, BaseEventData data);
		internal void _Clone_b__21_0(IUIStack handler, BaseEventData data);
		internal void _CloneRoot_b__22_0(IUIStack handler, BaseEventData data);
		internal void _ChangeRotationMode_b__28_0(IGizmoHandler handler, BaseEventData data);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass22_0
	{
		// Fields
		public MVWorldObjectClient root;

		// Constructors
		public __c__DisplayClass22_0();

		// Methods
		internal void _CloneRoot_b__1(ICloneHandler handler, BaseEventData data);
	}

	// Constructors
	public GizmoMenu();

	// Methods
	public void Initialize(int id, Vector3 wp, EditorStateMachine esm);
	private void Update();
	private void Setup();
	private void SetToScreenPoint();
	private void HandleCloningHotkey();
	public void Pop();
	private void OnDestroy();
	private void PopWoDestroyed(object obj, WorldObjectDestroyedEventArgs args);
	private void Clone();
	private void CloneRoot();
	private bool CanClone();
	private bool CanCloneRoot();
	public void ChangeRotationModeToX();
	public void ChangeRotationModeToY();
	public void ChangeRotationModeToZ();
	private void ChangeRotationMode(RotationMode mode, GizmoRotationModeButton highlight);
	[CompilerGenerated]
	private void _Clone_b__21_1(ICloneHandler handler, BaseEventData data);
}

