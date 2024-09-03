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
	public class CameraHotkeys : Settings
	{
		// Fields
		[SerializeField]
		private Hotkeys _moveForward;
		[SerializeField]
		private Hotkeys _moveBack;
		[SerializeField]
		private Hotkeys _strafeLeft;
		[SerializeField]
		private Hotkeys _strafeRight;
		[SerializeField]
		private Hotkeys _moveUp;
		[SerializeField]
		private Hotkeys _moveDown;
		[SerializeField]
		private Hotkeys _pan;
		[SerializeField]
		private Hotkeys _lookAround;
		[SerializeField]
		private Hotkeys _orbit;
	
		// Properties
		public Hotkeys MoveForward { get; }
		public Hotkeys MoveBack { get; }
		public Hotkeys StrafeLeft { get; }
		public Hotkeys StrafeRight { get; }
		public Hotkeys MoveUp { get; }
		public Hotkeys MoveDown { get; }
		public Hotkeys Pan { get; }
		public Hotkeys LookAround { get; }
		public Hotkeys Orbit { get; }
	
		// Constructors
		public CameraHotkeys();
	}
}
