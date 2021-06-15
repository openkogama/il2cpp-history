/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GizmoController : MonoBehaviour, IGizmoHandler
{
	// Fields
	private int woID;
	private EditorStateMachine editorStateMachine;
	[SerializeField]
	private GizmoMenu gizmoMenuPrefab;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Nested types
	[CompilerGenerated]
	private sealed class _Show_c__AnonStorey0
	{
		// Fields
		internal GizmoMenu gizmoMenu;
		internal GizmoController _this;

		// Constructors
		public _Show_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public GizmoController();

	// Methods
	public void Initialize(EditorStateMachine editorStateMachine);
	public void Show(int woID, Vector3 worldPosition, EditorStateMachine e);
	private void OnGizmoMenuPop();
	public void Handle(GizmoAction action);
	[CompilerGenerated]
	private static void _Show_m__0(IUIStack handler, BaseEventData data);
}

