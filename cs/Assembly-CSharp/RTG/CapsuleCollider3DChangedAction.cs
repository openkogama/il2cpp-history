/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public class CapsuleCollider3DChangedAction : IUndoRedoAction
	{
		// Fields
		private CapsuleCollider3DSnapshot _preChangeSnapshot;
		private CapsuleCollider3DSnapshot _postChangeSnapshot;
	
		// Constructors
		public CapsuleCollider3DChangedAction(CapsuleCollider3DSnapshot preChangeSnapshot, CapsuleCollider3DSnapshot postChangeSnapshot);
	
		// Methods
		public void Execute();
		public void OnRemovedFromUndoRedoStack();
		public void Redo();
		public void Undo();
	}
}
