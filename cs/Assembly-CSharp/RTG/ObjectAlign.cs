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
	public static class ObjectAlign
	{
		// Nested types
		public enum Result
		{
			Err_NoObjects = 0,
			Success = 1
		}
	
		// Methods
		public static Result AlignToWorldAxis(IEnumerable<GameObject> gameObjects, Axis axis, Vector3 alignmentPlaneOrigin);
		public static Result AlignToWorldPlane(IEnumerable<GameObject> gameObjects, Plane alignmentPlane);
		private static void AlignRootsToPlane(List<GameObject> roots, Plane alignmentPlane);
	}
}
