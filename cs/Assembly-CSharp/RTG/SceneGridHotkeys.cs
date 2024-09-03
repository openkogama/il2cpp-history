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
	public class SceneGridHotkeys : Settings
	{
		// Fields
		[SerializeField]
		private Hotkeys _gridUp;
		[SerializeField]
		private Hotkeys _gridDown;
		private Hotkeys _snapToCursorPickPoint;
	
		// Properties
		public Hotkeys GridUp { get; }
		public Hotkeys GridDown { get; }
		public Hotkeys SnapToCursorPickPoint { get; }
	
		// Constructors
		public SceneGridHotkeys();
	}
}
