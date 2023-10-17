/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using UnityEngine;

// Image 6: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject
{
	public interface ICubeModel
	{
		// Properties
		Vector3 Scale { get; }
	
		// Methods
		bool ContainsCube(IntVector localPos);
		CubeBase GetCubeBase(IntVector localPos);
		void AddCube(IntVector pos, CubeBase cube);
		void RemoveCube(IntVector pos);
		void AddCubeNetworkUpdate(IntVector pos, CubeBase cube);
		void RemoveCubeNetworkUpdate(IntVector pos);
	}
}
