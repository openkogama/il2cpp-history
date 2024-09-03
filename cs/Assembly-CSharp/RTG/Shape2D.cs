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
	public abstract class Shape2D
	{
		// Constructors
		protected Shape2D();
	
		// Methods
		public abstract void RenderArea(Camera camera);
		public abstract void RenderBorder(Camera camera);
		public abstract bool ContainsPoint(Vector2 point);
		public abstract Rect GetEncapsulatingRect();
	}
}
