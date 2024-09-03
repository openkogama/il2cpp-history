/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public class CharacterController3DChangedAction : IUndoRedoAction
	{
		// Fields
		private CharacterController3DSnapshot _preChangeSnapshot;
		private CharacterController3DSnapshot _postChangeSnapshot;
	
		// Constructors
		public CharacterController3DChangedAction(CharacterController3DSnapshot preChangeSnapshot, CharacterController3DSnapshot postChangeSnapshot);
	
		// Methods
		public void Execute();
		public void OnRemovedFromUndoRedoStack();
		public void Redo();
		public void Undo();
	}
}
