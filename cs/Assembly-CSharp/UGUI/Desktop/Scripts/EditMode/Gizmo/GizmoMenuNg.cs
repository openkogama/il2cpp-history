/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Desktop.Scripts.EditMode.Gizmo
{
	public class GizmoMenuNg : MonoBehaviour
	{
		// Fields
		[SerializeField]
		private RectTransform rectTransform;
		[SerializeField]
		private GizmoButton xzTranslate;
		[SerializeField]
		private GizmoButton yTranslate;
		[SerializeField]
		private Transform rotationMenu;
		[SerializeField]
		private Transform resetRotationButton;
		[SerializeField]
		private GizmoRotationButtonHolderNg xRotationHolder;
		[SerializeField]
		private GizmoRotationButtonHolderNg yRotationHolder;
		[SerializeField]
		private GizmoRotationButtonHolderNg zRotationHolder;
		[SerializeField]
		private bool useRotationTexts;
		[SerializeField]
		private UnityEngine.UI.Text xRotationText;
		[SerializeField]
		private UnityEngine.UI.Text yRotationText;
		[SerializeField]
		private UnityEngine.UI.Text zRotationText;
		[SerializeField]
		private GamePassesTextBubble memberToRotate;
		private readonly HashSet<GizmoAction> subscriberActions;
		private Vector3 worldPosition;
		private int woID;
		private EditorStateMachine editorStateMachine;
		private MVWorldObjectClient worldObjectClient;
		private bool isSubscriber;
		private bool objectLocked;
		private readonly HashSet<WorldObjectType> xyzLockedItems;
	
		// Nested types
		[Serializable]
		[CompilerGenerated]
		private sealed class __c
		{
			// Fields
			public static readonly __c __9;
			public static ExecuteEvents.EventFunction<IUIStack> __9__28_0;
			public static ExecuteEvents.EventFunction<IUIStack> __9__31_0;
			public static ExecuteEvents.EventFunction<IUIStack> __9__32_0;
			public static ExecuteEvents.EventFunction<IGizmoHandler> __9__44_0;
			public static ExecuteEvents.EventFunction<IGizmoHandler> __9__45_0;
			public static ExecuteEvents.EventFunction<IGizmoHandler> __9__45_1;
	
			// Constructors
			static __c();
			public __c();
	
			// Methods
			internal void _Pop_b__28_0(IUIStack handler, BaseEventData data);
			internal void _Clone_b__31_0(IUIStack handler, BaseEventData data);
			internal void _CloneRoot_b__32_0(IUIStack handler, BaseEventData data);
			internal void _DoGizmoAction_b__44_0(IGizmoHandler handler, BaseEventData data);
			internal void _ResetRotation_b__45_0(IGizmoHandler handler, BaseEventData data);
			internal void _ResetRotation_b__45_1(IGizmoHandler handler, BaseEventData data);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass32_0
		{
			// Fields
			public MVWorldObjectClient root;
	
			// Constructors
			public __c__DisplayClass32_0();
	
			// Methods
			internal void _CloneRoot_b__1(ICloneHandler handler, BaseEventData data);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass44_0
		{
			// Fields
			public GizmoAction gizmoAction;
	
			// Constructors
			public __c__DisplayClass44_0();
	
			// Methods
			internal void _DoGizmoAction_b__1(IGizmoHandler handler, BaseEventData data);
		}
	
		// Constructors
		public GizmoMenuNg();
	
		// Methods
		public void Initialize(int id, Vector3 wp, EditorStateMachine esm);
		private void Update();
		private void Setup();
		private void OnSpawnRoleActivated(int obj);
		private void OnJoinChanged(MVJoinState obj);
		private void SetToScreenPoint();
		private void HandleCloningHotkey();
		public void Pop();
		private void OnDestroy();
		private void PopWoDestroyed(object obj, WorldObjectDestroyedEventArgs args);
		private void Clone();
		private void CloneRoot();
		private bool CanClone();
		private bool CanCloneRoot();
		public void RotateStepLeftX();
		public void RotateStepRightX();
		public void RotateStepLeftY();
		public void RotateStepRightY();
		public void RotateStepLeftZ();
		public void RotateStepRightZ();
		public void FlipX();
		public void FlipY();
		public void FlipZ();
		private void DoGizmoAction(GizmoAction gizmoAction);
		public void ResetRotation();
		private void UpdateRotationText();
		[CompilerGenerated]
		private void _Clone_b__31_1(ICloneHandler handler, BaseEventData data);
	}
}
