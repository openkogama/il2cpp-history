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
	public class CameraPrjSwitchTransition
	{
		// Fields
		[CompilerGenerated]
		private CameraProjectionSwitchBeginHandler TransitionBegin;
		[CompilerGenerated]
		private CameraProjectionSwitchUpdateHandler TransitionUpdate;
		[CompilerGenerated]
		private CameraProjectionSwitchBeginHandler TransitionEnd;
		private IEnumerator _transitionCrtn;
		private MonoBehaviour _targetMono;
		private Camera _targetCamera;
		private float _camFieldOfView;
		private Vector3 _camFocusPoint;
		private Vector3 _camRestorePosition;
		private Type _transitionType;
		private float _durationInSeconds;
		private float _progress;
	
		// Properties
		public MonoBehaviour TargetMono { get; set; }
		public Camera TargetCamera { get; set; }
		public Type TransitionType { get; }
		public float DurationInSeconds { get; set; }
		public float Progress { get; }
		public float CamFieldOfView { get; set; }
		public Vector3 CamFocusPoint { get; set; }
		public bool IsActive { get; }
	
		// Events
		public event CameraProjectionSwitchBeginHandler TransitionBegin {
			add;
			remove;
		}
		public event CameraProjectionSwitchUpdateHandler TransitionUpdate {
			add;
			remove;
		}
		public event CameraProjectionSwitchBeginHandler TransitionEnd {
			add;
			remove;
		}
	
		// Nested types
		public enum Type
		{
			None = 0,
			ToOrtho = 1,
			ToPerspective = 2
		}
	
		[CompilerGenerated]
		private sealed class _DoTransition_d__41 : IEnumerator<object>
		{
			// Fields
			private int __1__state;
			private object __2__current;
			public CameraPrjSwitchTransition __4__this;
			private float _frustumHeight_5__2;
			private float _targetFOV_5__3;
			private float _invDuration_5__4;
			private float _fovSpeed_5__5;
			private Transform __targetTransform_5__6;
	
			// Properties
			object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _DoTransition_d__41(int __1__state);
	
			// Methods
			[DebuggerHidden]
			void IDisposable.Dispose();
			private bool MoveNext();
			[DebuggerHidden]
			void IEnumerator.Reset();
		}
	
		// Constructors
		public CameraPrjSwitchTransition();
	
		// Methods
		public void Begin();
		[IteratorStateMachine(typeof(_DoTransition_d__41))]
		private IEnumerator DoTransition();
	}
}
