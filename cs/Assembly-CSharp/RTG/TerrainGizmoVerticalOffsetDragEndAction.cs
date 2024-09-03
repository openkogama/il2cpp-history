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
	public class TerrainGizmoVerticalOffsetDragEndAction : IUndoRedoAction
	{
		// Fields
		private List<TerrainGizmoAffectedObject> _affectedObjects;
		private Terrain _terrain;
		private float[,] _preChangeHeights;
		private float[,] _postChangeHeights;
	
		// Constructors
		public TerrainGizmoVerticalOffsetDragEndAction(Terrain terrain, float[,] preChangeHeights, float[,] postChangeHeights, List<TerrainGizmoAffectedObject> affectedObjects);
	
		// Methods
		public void Execute();
		public void OnRemovedFromUndoRedoStack();
		public void Redo();
		public void Undo();
	}
}
