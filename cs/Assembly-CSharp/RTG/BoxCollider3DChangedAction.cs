/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public class BoxCollider3DChangedAction : IUndoRedoAction
	{
		// Fields
		private BoxCollider3DSnapshot _preChangeSnapshot;
		private BoxCollider3DSnapshot _postChangeSnapshot;
	
		// Constructors
		public BoxCollider3DChangedAction(BoxCollider3DSnapshot preChangeSnapshot, BoxCollider3DSnapshot postChangeSnapshot);
	
		// Methods
		public void Execute();
		public void OnRemovedFromUndoRedoStack();
		public void Redo();
		public void Undo();
	}
}
