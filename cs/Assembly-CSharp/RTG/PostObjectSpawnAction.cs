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
	public class PostObjectSpawnAction : IUndoRedoAction
	{
		// Fields
		private bool _cleanupOnRemovedFromStack;
		private List<GameObject> _spawnedParents;
	
		// Constructors
		public PostObjectSpawnAction(List<GameObject> spawnedParents);
	
		// Methods
		public void Execute();
		public void Undo();
		public void Redo();
		public void OnRemovedFromUndoRedoStack();
	}
}
