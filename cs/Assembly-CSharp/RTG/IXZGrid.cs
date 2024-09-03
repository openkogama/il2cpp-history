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
	public interface IXZGrid
	{
		// Properties
		Plane WorldPlane { get; }
		Matrix4x4 WorldMatrix { get; }
	
		// Methods
		XZGridCell CellFromWorldPoint(Vector3 worldPoint);
		bool Raycast(Ray ray, out float t);
	}
}
