/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public class SphereColliderChangedAction : IUndoRedoAction
	{
		// Fields
		private SphereColliderSnapshot _preChangeSnapshot;
		private SphereColliderSnapshot _postChangeSnapshot;
	
		// Constructors
		public SphereColliderChangedAction(SphereColliderSnapshot preChangeSnapshot, SphereColliderSnapshot postChangeSnapshot);
	
		// Methods
		public void Execute();
		public void OnRemovedFromUndoRedoStack();
		public void Redo();
		public void Undo();
	}
}
