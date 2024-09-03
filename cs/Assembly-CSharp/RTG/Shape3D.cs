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
	public abstract class Shape3D
	{
		// Constructors
		protected Shape3D();
	
		// Methods
		public bool Raycast(Ray ray);
		public bool RaycastWire(Ray ray);
		public virtual bool RaycastWire(Ray ray, out float t);
		public abstract void RenderSolid();
		public abstract void RenderWire();
		public abstract bool Raycast(Ray ray, out float t);
		public abstract AABB GetAABB();
	}
}
