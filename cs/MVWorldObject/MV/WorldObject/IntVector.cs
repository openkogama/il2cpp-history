/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using UnityEngine;

// Image 13: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject
{
	public struct IntVector : IEquatable<MV.WorldObject.IntVector>
	{
		// Fields
		public short x;
		public short y;
		public short z;
		public static readonly IntVector One;
		public static readonly IntVector Zero;
	
		// Properties
		public short this[int key] { get => default; set {} }
	
		// Constructors
		public IntVector(short x, short y, short z);
		public IntVector(int x, int y, int z);
		public IntVector(float x, float y, float z);
		static IntVector();
	
		// Methods
		public override bool Equals(object obj);
		public bool Equals(IntVector iV);
		public override int GetHashCode();
		public static bool operator ==(IntVector a, IntVector b);
		public static bool operator !=(IntVector a, IntVector b);
		public Vector3 ToVector3();
		public override string ToString();
		public static IntVector operator -(IntVector i1);
		public static IntVector operator +(IntVector i1, IntVector i2);
		public static IntVector operator -(IntVector i1, IntVector i2);
		public static IntVector operator *(int i, IntVector iV);
		public static IntVector operator *(IntVector iV, int i);
		public static Vector3 operator *(IntVector iV, Vector3 vector3);
		public static IntVector operator /(IntVector iV, int i);
	}
}
