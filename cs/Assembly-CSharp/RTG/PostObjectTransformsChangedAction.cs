/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public class PostObjectTransformsChangedAction : IUndoRedoAction
	{
		// Fields
		private List<LocalTransformSnapshot> _preChangeTransformSnapshots;
		private List<LocalTransformSnapshot> _postChangeTransformSnapshots;
	
		// Constructors
		public PostObjectTransformsChangedAction(List<LocalTransformSnapshot> preChangeTransformSnapshots, List<LocalTransformSnapshot> postChangeTransformSnapshots);
	
		// Methods
		public void Execute();
		public void Undo();
		public void Redo();
		public void OnRemovedFromUndoRedoStack();
	}
}
