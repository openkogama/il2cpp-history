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
	public class MoveGizmoHotkeys : Settings
	{
		// Fields
		[SerializeField]
		private Hotkeys _enable2DMode;
		[SerializeField]
		private Hotkeys _enableSnapping;
		[SerializeField]
		private Hotkeys _enableVertexSnapping;
	
		// Properties
		public Hotkeys Enable2DMode { get; }
		public Hotkeys EnableSnapping { get; }
		public Hotkeys EnableVertexSnapping { get; }
	
		// Constructors
		public MoveGizmoHotkeys();
	}
}
