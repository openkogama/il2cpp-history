/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	[Serializable]
	public class Gizmo
	{
		// Fields
		[CompilerGenerated]
		private GizmoPostEnabledHandler PostEnabled;
		[CompilerGenerated]
		private GizmoPostDisabledHandler PostDisabled;
		[CompilerGenerated]
		private GizmoPreUpdateBeginHandler PreUpdateBegin;
		[CompilerGenerated]
		private GizmoPostUpdateEndHandler PostUpdateEnd;
		[CompilerGenerated]
		private GizmoPreHoverEnterHandler PreHoverEnter;
		[CompilerGenerated]
		private GizmoPostHoverEnterHandler PostHoverEnter;
		[CompilerGenerated]
		private GizmoPreHoverExitHandler PreHoverExit;
		[CompilerGenerated]
		private GizmoPostHoverExitHandler PostHoverExit;
		[CompilerGenerated]
		private GizmoPreDragBeginHandler PreDragBegin;
		[CompilerGenerated]
		private GizmoPostDragBeginHandler PostDragBegin;
		[CompilerGenerated]
		private GizmoPreDragEndHandler PreDragEnd;
		[CompilerGenerated]
		private GizmoPostDragEndHandler PostDragEnd;
		[CompilerGenerated]
		private GizmoPreDragUpdateHandler PreDragUpdate;
		[CompilerGenerated]
		private GizmoPostDragUpdateHandler PostDragUpdate;
		[CompilerGenerated]
		private GizmoPreHandlePickedHandler PreHandlePicked;
		[CompilerGenerated]
		private GizmoPostHandlePickedHandler PostHandlePicked;
		[CompilerGenerated]
		private GizmoPreDragBeginAttemptHandler PreDragBeginAttempt;
		[CompilerGenerated]
		private GizmoPostDragBeginAttemptHandler PostDragBeginAttempt;
		[CompilerGenerated]
		private GizmoOffsetDragAxisModifyHandler OffsetDragAxisModify;
		private bool _isEnabled;
		private bool _forceRefresh;
		private GizmoHandleCollection _handles;
		private GizmoBehaviourCollection _behaviours;
		private GizmoHoverInfo _hoverInfo;
		private GizmoDragInfo _dragInfo;
		private IGizmoHandle _hoveredHandle;
		private Priority _genericHoverPriority;
		private Priority _hoverPriority3D;
		private Priority _hoverPriority2D;
		private IGizmoDragSession _activeDragSession;
		private GizmoTransform _transform;
		[NonSerialized]
		private MoveGizmo _moveGizmo;
		[NonSerialized]
		private RotationGizmo _rotationGizmo;
		[NonSerialized]
		private ScaleGizmo _scaleGizmo;
		[NonSerialized]
		private UniversalGizmo _universalGizmo;
		[NonSerialized]
		private ObjectTransformGizmo _objectTransformGizmo;
		[NonSerialized]
		private SceneGizmo _sceneGizmo;
	
		// Properties
		public static int InputDeviceDragButtonIndex { get; }
		public int NumHandles { get; }
		public Camera FocusCamera { get; }
		public bool IsEnabled { get; }
		public bool ForceRefresh { get; }
		public Priority GenericHoverPriority { get; }
		public Priority HoverPriority3D { get; }
		public Priority HoverPriority2D { get; }
		public GizmoTransform Transform { get; }
		public GizmoHoverInfo HoverInfo { get; }
		public bool IsHovered { get; }
		public int HoverHandleId { get; }
		public GizmoDimension HoverHandleDimension { get; }
		public Vector3 HoverPoint { get; }
		public GizmoDragInfo DragInfo { get; }
		public bool IsDragged { get; }
		public GizmoDragChannel ActiveDragChannel { get; }
		public int DragHandleId { get; }
		public Vector3 DragBeginPoint { get; }
		public GizmoDimension DragHandleDimension { get; }
		public Vector3 TotalDragOffset { get; }
		public Quaternion TotalDragRotation { get; }
		public Vector3 TotalDragScale { get; }
		public Vector3 RelativeDragOffset { get; }
		public Quaternion RelativeDragRotation { get; }
		public Vector3 RelativeDragScale { get; }
		public MoveGizmo MoveGizmo { get; }
		public RotationGizmo RotationGizmo { get; }
		public ScaleGizmo ScaleGizmo { get; }
		public UniversalGizmo UniversalGizmo { get; }
		public ObjectTransformGizmo ObjectTransformGizmo { get; }
		public SceneGizmo SceneGizmo { get; }
	
		// Events
		public event GizmoPostEnabledHandler PostEnabled {
			add;
			remove;
		}
		public event GizmoPostDisabledHandler PostDisabled {
			add;
			remove;
		}
		public event GizmoPreUpdateBeginHandler PreUpdateBegin {
			add;
			remove;
		}
		public event GizmoPostUpdateEndHandler PostUpdateEnd {
			add;
			remove;
		}
		public event GizmoPreHoverEnterHandler PreHoverEnter {
			add;
			remove;
		}
		public event GizmoPostHoverEnterHandler PostHoverEnter {
			add;
			remove;
		}
		public event GizmoPreHoverExitHandler PreHoverExit {
			add;
			remove;
		}
		public event GizmoPostHoverExitHandler PostHoverExit {
			add;
			remove;
		}
		public event GizmoPreDragBeginHandler PreDragBegin {
			add;
			remove;
		}
		public event GizmoPostDragBeginHandler PostDragBegin {
			add;
			remove;
		}
		public event GizmoPreDragEndHandler PreDragEnd {
			add;
			remove;
		}
		public event GizmoPostDragEndHandler PostDragEnd {
			add;
			remove;
		}
		public event GizmoPreDragUpdateHandler PreDragUpdate {
			add;
			remove;
		}
		public event GizmoPostDragUpdateHandler PostDragUpdate {
			add;
			remove;
		}
		public event GizmoPreHandlePickedHandler PreHandlePicked {
			add;
			remove;
		}
		public event GizmoPostHandlePickedHandler PostHandlePicked {
			add;
			remove;
		}
		public event GizmoPreDragBeginAttemptHandler PreDragBeginAttempt {
			add;
			remove;
		}
		public event GizmoPostDragBeginAttemptHandler PostDragBeginAttempt {
			add;
			remove;
		}
		public event GizmoOffsetDragAxisModifyHandler OffsetDragAxisModify {
			add;
			remove;
		}
	
		// Constructors
		public Gizmo();
	
		// Methods
		public Camera GetWorkCamera();
		public GizmoHandle CreateHandle(int id);
		public void SetEnabled(bool enabled);
		public void SetForceRefresh(bool forceRefresh);
		public BehaviourType AddBehaviour<BehaviourType>()
			where BehaviourType : class, IGizmoBehaviour, new();
		public bool AddBehaviour(IGizmoBehaviour behaviour);
		public bool RemoveBehaviour(IGizmoBehaviour behaviour);
		public List<BehaviourType> GetBehavioursOfType<BehaviourType>()
			where BehaviourType : class, IGizmoBehaviour;
		public BehaviourType GetFirstBehaviourOfType<BehaviourType>()
			where BehaviourType : class, IGizmoBehaviour;
		public IGizmoBehaviour GetFirstBehaviourOfType(System.Type behaviourType);
		public List<GizmoHandleHoverData> GetAllHandlesHoverData(Ray hoverRay);
		public IGizmoHandle GetHandleById_SystemCall(int handleId);
		public void OnGUI_SystemCall();
		public void OnUpdateBegin_SystemCall();
		public void OnUpdateEnd_SystemCall();
		public void UpdateHandleHoverInfo_SystemCall(GizmoHoverInfo hoverInfo);
		public void Render_SystemCall(Camera camera, Plane[] worldFrustumPlanes);
		public void HandleInputDeviceEvents_SystemCall();
		private void OnInputDevicePickButtonDown();
		private void OnInputDevicePickButtonUp();
		private void EndDragSession();
		private void OnInputDeviceMoved();
		private void TryActivateDragSession();
	}
}
