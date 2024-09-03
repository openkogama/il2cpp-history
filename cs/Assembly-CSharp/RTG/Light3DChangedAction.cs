/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public class Light3DChangedAction : IUndoRedoAction
	{
		// Fields
		private Light3DSnapshot _preChangeSnapshot;
		private Light3DSnapshot _postChangeSnapshot;
	
		// Constructors
		public Light3DChangedAction(Light3DSnapshot preChangeSnapshot, Light3DSnapshot postChangeSnapshot);
	
		// Methods
		public void Execute();
		public void OnRemovedFromUndoRedoStack();
		public void Redo();
		public void Undo();
	}
}
