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
	public class DuplicateObjectsAction : IUndoRedoAction
	{
		// Fields
		private List<GameObject> _rootsToDuplicate;
		private List<GameObject> _duplicateResult;
		private bool _cleanupOnRemovedFromStack;
	
		// Properties
		public List<GameObject> DuplicateResult { get; }
	
		// Constructors
		public DuplicateObjectsAction(List<GameObject> rootsToDuplicate);
	
		// Methods
		public void Execute();
		public void Undo();
		public void Redo();
		public void OnRemovedFromUndoRedoStack();
	}
}
