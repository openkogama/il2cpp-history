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
	public class RTUndoRedo : MonoSingleton<RTG.RTUndoRedo>
	{
		// Fields
		[CompilerGenerated]
		private UndoStartHandler UndoStart;
		[CompilerGenerated]
		private UndoEndHandler UndoEnd;
		[CompilerGenerated]
		private RedoStartHandler RedoStart;
		[CompilerGenerated]
		private RedoEndHandler RedoEnd;
		[CompilerGenerated]
		private CanUndoRedoHandler CanUndoRedo;
		[SerializeField]
		private bool _isEnabled;
		[SerializeField]
		private int _actionLimit;
		private List<ActionGroup> _actionGroupStack;
		private int _stackPointer;
	
		// Properties
		public bool IsEnabled { get; }
		public int ActionLimit { get; set; }
	
		// Events
		public event UndoStartHandler UndoStart {
			add;
			remove;
		}
		public event UndoEndHandler UndoEnd {
			add;
			remove;
		}
		public event RedoStartHandler RedoStart {
			add;
			remove;
		}
		public event RedoEndHandler RedoEnd {
			add;
			remove;
		}
		public event CanUndoRedoHandler CanUndoRedo {
			add;
			remove;
		}
	
		// Nested types
		private class ActionGroup
		{
			// Fields
			public List<IUndoRedoAction> Actions;
	
			// Constructors
			public ActionGroup(IUndoRedoAction action);
		}
	
		// Constructors
		public RTUndoRedo();
	
		// Methods
		public void SetEnabled(bool isEnabled);
		public void ClearActions();
		public void RecordAction(IUndoRedoAction action);
		public void Update_SystemCall();
		private void Undo();
		private void Redo();
		private void RemoveGroups(int startIndex, int count);
		private void OnValidate();
	}
}
