/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public class RTSceneGizmoCamera : MonoBehaviour
	{
		// Fields
		private Camera _camera;
		private Transform _transform;
		private Vector3 _lookAtPoint;
		private float _fieldOfView;
		private float _orthoSize;
		private float _offsetFromFocusPt;
		private Camera _sceneCamera;
		private ISceneGizmoCamViewportUpdater _viewportUpdater;
	
		// Properties
		public Camera Camera { get; }
		public Camera SceneCamera { get; set; }
		public ISceneGizmoCamViewportUpdater ViewportUpdater { get; set; }
		public Vector3 WorldPosition { get; set; }
		public Quaternion WorldRotation { get; set; }
		public Vector3 Right { get; }
		public Vector3 Up { get; }
		public Vector3 Look { get; }
		public Vector3 LookAtPoint { get; }
	
		// Constructors
		public RTSceneGizmoCamera();
	
		// Methods
		public void Update_SystemCall();
		private void Awake();
		private void Start();
	}
}
