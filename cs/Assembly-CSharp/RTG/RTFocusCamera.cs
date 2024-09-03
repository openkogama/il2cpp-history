/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public class RTFocusCamera : MonoSingleton<RTG.RTFocusCamera>
	{
		// Fields
		[CompilerGenerated]
		private CameraProjectionSwitchBeginHandler PrjSwitchTransitionBegin;
		[CompilerGenerated]
		private CameraProjectionSwitchUpdateHandler PrjSwitchTransitionUpdate;
		[CompilerGenerated]
		private CameraProjectionSwitchBeginHandler PrjSwitchTransitionEnd;
		[CompilerGenerated]
		private CameraCanProcessInputHandler CanProcessInput;
		[CompilerGenerated]
		private CameraCanUseScrollWheelHandler CanUseScrollWheel;
		[SerializeField]
		private Camera _targetCamera;
		private Transform _targetTransform;
		[SerializeField]
		private float _fieldOfView;
		private WorldTransformSnapshot _worldTransformSnapshot;
		private CameraPrjSwitchTransition _prjSwitchTranstion;
		private bool _isDoingFocus;
		private IEnumerator _focusCrtn;
		private bool _isDoingRotationSwitch;
		private IEnumerator _genricCamTransformCrtn;
		private bool _isObjectVisibilityDirty;
		private List<GameObject> _visibleObjects;
		private float _focusPointOffset;
		private Vector3 _lastFocusPoint;
		private bool[] _moveDirFlags;
		private float _currentAcceleration;
		[SerializeField]
		private CameraSettings _settings;
		[SerializeField]
		private CameraMoveSettings _moveSettings;
		[SerializeField]
		private CameraPanSettings _panSettings;
		[SerializeField]
		private CameraLookAroundSettings _lookAroundSettings;
		[SerializeField]
		private CameraOrbitSettings _orbitSettings;
		[SerializeField]
		private CameraZoomSettings _zoomSettings;
		[SerializeField]
		private CameraFocusSettings _focusSettings;
		[SerializeField]
		private CameraRotationSwitchSettings _rotationSwitchSettings;
		[SerializeField]
		private CameraProjectionSwitchSettings _projectionSwitchSettings;
		[SerializeField]
		private CameraHotkeys _hotkeys;
	
		// Properties
		public Camera TargetCamera { get; }
		public bool IsDoingProjectionSwitch { get; }
		public CameraPrjSwitchTransition.Type PrjSwitchTransitionType { get; }
		public bool IsDoingRotationSwitch { get; }
		public float PrjSwitchProgress { get; }
		public float PrjSwitchDurationInSeconds { get; }
		public bool IsDoingFocus { get; }
		public Vector3 WorldPosition { get; set; }
		public Quaternion WorldRotation { get; set; }
		public Vector3 Right { get; }
		public Vector3 Up { get; }
		public Vector3 Look { get; }
		public bool IsMovingForward { get; }
		public bool IsMovingBackwards { get; }
		public bool IsMovingLeft { get; }
		public bool IsMovingRight { get; }
		public bool IsMovingUp { get; }
		public bool IsMovingDown { get; }
		public CameraSettings Settings { get; }
		public CameraMoveSettings MoveSettings { get; }
		public CameraPanSettings PanSettings { get; }
		public CameraLookAroundSettings LookAroundSettings { get; }
		public CameraOrbitSettings OrbitSettings { get; }
		public CameraZoomSettings ZoomSettings { get; }
		public CameraFocusSettings FocusSettings { get; }
		public CameraRotationSwitchSettings RotationSwitchSettings { get; }
		public CameraProjectionSwitchSettings ProjectionSwitchSettings { get; }
		public CameraHotkeys Hotkeys { get; }
	
		// Events
		public event CameraProjectionSwitchBeginHandler PrjSwitchTransitionBegin {
			add;
			remove;
		}
		public event CameraProjectionSwitchUpdateHandler PrjSwitchTransitionUpdate {
			add;
			remove;
		}
		public event CameraProjectionSwitchBeginHandler PrjSwitchTransitionEnd {
			add;
			remove;
		}
		public event CameraCanProcessInputHandler CanProcessInput {
			add;
			remove;
		}
		public event CameraCanUseScrollWheelHandler CanUseScrollWheel {
			add;
			remove;
		}
	
		// Nested types
		private enum MoveDirection
		{
			Left = 0,
			Right = 1,
			Up = 2,
			Down = 3,
			Forward = 4,
			Backwards = 5
		}
	
		[CompilerGenerated]
		private sealed class _DoConstantFocus_d__135 : IEnumerator<object>
		{
			// Fields
			private int __1__state;
			private object __2__current;
			public RTFocusCamera __4__this;
			public CameraFocus.Data focusData;
			private float _targetOrthoSize_5__2;
			private Vector3 _camMoveDir_5__3;
			private float _distanceToTravel_5__4;
			private float _initialCamOrthoSize_5__5;
	
			// Properties
			object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _DoConstantFocus_d__135(int __1__state);
	
			// Methods
			[DebuggerHidden]
			void IDisposable.Dispose();
			private bool MoveNext();
			[DebuggerHidden]
			void IEnumerator.Reset();
		}
	
		[CompilerGenerated]
		private sealed class _DoConstantRotationSwitch_d__133 : IEnumerator<object>
		{
			// Fields
			private int __1__state;
			private object __2__current;
			public RTFocusCamera __4__this;
			public Quaternion targetRotation;
			private Quaternion _sourceRotation_5__2;
			private float _elapsedTime_5__3;
			private Vector3 _focusPt_5__4;
	
			// Properties
			object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _DoConstantRotationSwitch_d__133(int __1__state);
	
			// Methods
			[DebuggerHidden]
			void IDisposable.Dispose();
			private bool MoveNext();
			[DebuggerHidden]
			void IEnumerator.Reset();
		}
	
		[CompilerGenerated]
		private sealed class _DoSmoothFocus_d__136 : IEnumerator<object>
		{
			// Fields
			private int __1__state;
			private object __2__current;
			public RTFocusCamera __4__this;
			public CameraFocus.Data focusData;
			private float _targetOrthoSize_5__2;
			private Vector3 _camMoveDir_5__3;
			private float _elapsedTime_5__4;
	
			// Properties
			object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _DoSmoothFocus_d__136(int __1__state);
	
			// Methods
			[DebuggerHidden]
			void IDisposable.Dispose();
			private bool MoveNext();
			[DebuggerHidden]
			void IEnumerator.Reset();
		}
	
		[CompilerGenerated]
		private sealed class _DoSmoothLookAround_d__130 : IEnumerator<object>
		{
			// Fields
			private int __1__state;
			private object __2__current;
			public RTFocusCamera __4__this;
			public float deviceAxisX;
			public float deviceAxisY;
			private Vector2 _rotationAmount_5__2;
	
			// Properties
			object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _DoSmoothLookAround_d__130(int __1__state);
	
			// Methods
			[DebuggerHidden]
			void IDisposable.Dispose();
			private bool MoveNext();
			[DebuggerHidden]
			void IEnumerator.Reset();
		}
	
		[CompilerGenerated]
		private sealed class _DoSmoothOrbit_d__131 : IEnumerator<object>
		{
			// Fields
			private int __1__state;
			private object __2__current;
			public RTFocusCamera __4__this;
			public float deviceAxisX;
			public float deviceAxisY;
			private Vector2 _rotationAmount_5__2;
	
			// Properties
			object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _DoSmoothOrbit_d__131(int __1__state);
	
			// Methods
			[DebuggerHidden]
			void IDisposable.Dispose();
			private bool MoveNext();
			[DebuggerHidden]
			void IEnumerator.Reset();
		}
	
		[CompilerGenerated]
		private sealed class _DoSmoothPan_d__129 : IEnumerator<object>
		{
			// Fields
			private int __1__state;
			private object __2__current;
			public RTFocusCamera __4__this;
			public float deviceAxisX;
			public float deviceAxisY;
			private Vector2 _panAmount_5__2;
	
			// Properties
			object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _DoSmoothPan_d__129(int __1__state);
	
			// Methods
			[DebuggerHidden]
			void IDisposable.Dispose();
			private bool MoveNext();
			[DebuggerHidden]
			void IEnumerator.Reset();
		}
	
		[CompilerGenerated]
		private sealed class _DoSmoothRotationSwitch_d__134 : IEnumerator<object>
		{
			// Fields
			private int __1__state;
			private object __2__current;
			public RTFocusCamera __4__this;
			public Quaternion targetRotation;
			private Vector3 _focusPt_5__2;
	
			// Properties
			object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _DoSmoothRotationSwitch_d__134(int __1__state);
	
			// Methods
			[DebuggerHidden]
			void IDisposable.Dispose();
			private bool MoveNext();
			[DebuggerHidden]
			void IEnumerator.Reset();
		}
	
		[CompilerGenerated]
		private sealed class _DoSmoothZoom_d__132 : IEnumerator<object>
		{
			// Fields
			private int __1__state;
			private object __2__current;
			public RTFocusCamera __4__this;
			public float deviceScroll;
			private float _zoomAmount_5__2;
	
			// Properties
			object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _DoSmoothZoom_d__132(int __1__state);
	
			// Methods
			[DebuggerHidden]
			void IDisposable.Dispose();
			private bool MoveNext();
			[DebuggerHidden]
			void IEnumerator.Reset();
		}
	
		// Constructors
		public RTFocusCamera();
	
		// Methods
		public bool IsViewportHoveredByDevice();
		public void SetTargetCamera(Camera camera);
		public void SetFieldOfView(float fov);
		public void SetObjectVisibilityDirty();
		public void GetVisibleObjects(List<GameObject> visibleObjects);
		public void PerformRotationSwitch(Quaternion targetRotation);
		public void PerformProjectionSwitch();
		public void Focus(List<GameObject> gameObjects);
		public void Focus(AABB focusAABB);
		public void Update_SystemCall();
		private void Awake();
		private void Start();
		private void HandleMouseAndKeyboardInput();
		private bool CanUseMouseScrollWheel();
		private bool CanCameraProcessInput();
		private void Zoom(float zoomAmount);
		private Vector3 GetFocusPoint();
		private float CalculateScrollZoomAmount(float deviceScroll);
		private void Pan(Vector2 panAmount);
		public void LookAround(float degreesLocalX, float degreesWorldY);
		private void Orbit(float degreesLocalX, float degreesWorldY);
		private void PerformInstantFocus(CameraFocus.Data focusData);
		private void PerformInstantProjectionSwitch();
		private Vector2 CalculateLookAroundRotation(float deviceAxisX, float deviceAxisY);
		private Vector2 CalculateOrbitRotation(float deviceAxisX, float deviceAxisY);
		private Vector2 CalculatePanAmount(float deviceAxisX, float deviceAxisY);
		private void StopCamTransform();
		private void StopFocus();
		private void SetFocusPoint(Vector3 focusPoint);
		private void AdjustOrthoSizeForFocusPt();
		[IteratorStateMachine(typeof(_DoSmoothPan_d__129))]
		private IEnumerator DoSmoothPan(float deviceAxisX, float deviceAxisY);
		[IteratorStateMachine(typeof(_DoSmoothLookAround_d__130))]
		private IEnumerator DoSmoothLookAround(float deviceAxisX, float deviceAxisY);
		[IteratorStateMachine(typeof(_DoSmoothOrbit_d__131))]
		private IEnumerator DoSmoothOrbit(float deviceAxisX, float deviceAxisY);
		[IteratorStateMachine(typeof(_DoSmoothZoom_d__132))]
		private IEnumerator DoSmoothZoom(float deviceScroll);
		[IteratorStateMachine(typeof(_DoConstantRotationSwitch_d__133))]
		private IEnumerator DoConstantRotationSwitch(Quaternion targetRotation);
		[IteratorStateMachine(typeof(_DoSmoothRotationSwitch_d__134))]
		private IEnumerator DoSmoothRotationSwitch(Quaternion targetRotation);
		[IteratorStateMachine(typeof(_DoConstantFocus_d__135))]
		private IEnumerator DoConstantFocus(CameraFocus.Data focusData);
		[IteratorStateMachine(typeof(_DoSmoothFocus_d__136))]
		private IEnumerator DoSmoothFocus(CameraFocus.Data focusData);
		private void OnPrjSwitchTransitionBegin(CameraPrjSwitchTransition.Type transitionType);
		private void OnPrjSwitchTransitionUpate(CameraPrjSwitchTransition.Type transitionType);
		private void OnPrjSwitchTransitionEnd(CameraPrjSwitchTransition.Type transitionType);
	}
}
