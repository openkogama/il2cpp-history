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
	public class TerrainGizmoHorizontalOffsetDragEndAction : IUndoRedoAction
	{
		// Fields
		private List<LocalTransformSnapshot> _preChangeSnapshots;
		private List<LocalTransformSnapshot> _postChangeSnapshots;
		private Vector3 _preChangeGizmoPos;
		private Vector3 _postChangeGizmoPos;
		private TerrainGizmo _terrainGizmo;
	
		// Constructors
		public TerrainGizmoHorizontalOffsetDragEndAction(TerrainGizmo terrainGizmo, Vector3 preChangeGizmoPos, List<LocalTransformSnapshot> preChangeSnapshots, List<LocalTransformSnapshot> postChangeSnapshots);
	
		// Methods
		public void Execute();
		public void OnRemovedFromUndoRedoStack();
		public void Redo();
		public void Undo();
	}
}
