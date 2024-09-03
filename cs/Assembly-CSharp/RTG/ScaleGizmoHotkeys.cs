/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	[Serializable]
	public class ScaleGizmoHotkeys : Settings
	{
		// Fields
		[SerializeField]
		private Hotkeys _enableSnapping;
		[SerializeField]
		private Hotkeys _changeMultiAxisMode;
	
		// Properties
		public Hotkeys EnableSnapping { get; }
		public Hotkeys ChangeMultiAxisMode { get; }
	
		// Constructors
		public ScaleGizmoHotkeys();
	}
}
