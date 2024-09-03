/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public class SceneRaycastHit
	{
		// Fields
		private GameObjectRayHit _objectHit;
		private XZGridRayHit _gridHit;
	
		// Properties
		public bool WasAnythingHit { get; }
		public bool WasAnObjectHit { get; }
		public bool WasGridHit { get; }
		public GameObjectRayHit ObjectHit { get; }
		public XZGridRayHit GridHit { get; }
	
		// Constructors
		public SceneRaycastHit(GameObjectRayHit objectRayHit, XZGridRayHit gridRayHit);
	}
}
