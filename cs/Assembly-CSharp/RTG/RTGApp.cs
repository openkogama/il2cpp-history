/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Rendering;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public class RTGApp : MonoSingleton<RTG.RTGApp>, IRLDApplication
	{
		// Fields
		[CompilerGenerated]
		private RTGAppInitializedHandler Initialized;
		private Camera _renderCamera;
		private RenderPipelineId _renderPipelineId;
	
		// Properties
		public RenderPipelineId RenderPipelineId { get; }
		public Camera RenderCamera { get; }
	
		// Events
		public event RTGAppInitializedHandler Initialized {
			add;
			remove;
		}
	
		// Constructors
		public RTGApp();
	
		// Methods
		private void OnCanCameraUseScrollWheel(YesNoAnswer answer);
		private void OnCanCameraProcessInput(YesNoAnswer answer);
		private void OnCanUndoRedo(UndoRedoOpType undoRedoOpType, YesNoAnswer answer);
		private void OnCanDoGizmoHoverUpdate(YesNoAnswer answer);
		private void OnViewportsCameraAdded(Camera camera);
		private void OnViewportCameraRemoved(Camera camera);
		private void Start();
		private void DetectRenderPipeline();
		private void Update();
		private void OnRenderObject();
		private void OnBeginCameraRendering(ScriptableRenderContext context, Camera camera);
		private void OnEndCameraRendering(ScriptableRenderContext context, Camera camera);
		private void OnDisable();
	}
}
