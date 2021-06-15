/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	private int woID;
	private EditorStateMachine editorStateMachine;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache1;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache2;

	// Nested types
	[CompilerGenerated]
	private sealed class _CloneRoot_c__AnonStorey0
	{
		// Fields
		internal MVWorldObjectClient root;

		// Constructors
		public _CloneRoot_c__AnonStorey0();

		// Methods
		internal void __m__0(ICloneHandler handler, BaseEventData data);
	}

	// Constructors
	public GizmoMenu();

	// Methods
	public void Initialize(int woID, Vector3 worldPosition, EditorStateMachine esm);
	private void Update();
	private void Setup(int woID);
	private void SetToScreenPoint();
	private void HandleCloningHotkey();
	private void LateUpdate();
	private void Pop();
	private void OnDestroy();
	private void PopWoDestroyed(object obj, WorldObjectDestroyedEventArgs args);
	private void Clone();
	private void CloneRoot();
	private bool CanClone();
	private bool CanCloneRoot();
	[CompilerGenerated]
	private static void _Pop_m__0(IUIStack handler, BaseEventData data);
	[CompilerGenerated]
	private static void _Clone_m__1(IUIStack handler, BaseEventData data);
	[CompilerGenerated]
	private void _Clone_m__2(ICloneHandler handler, BaseEventData data);
	[CompilerGenerated]
	private static void _CloneRoot_m__3(IUIStack handler, BaseEventData data);
}

