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
	public class MeshTransform
	{
		// Fields
		private Vector3 _position;
		private Quaternion _rotation;
		private Vector3 _scale;
	
		// Properties
		public Vector3 Position { get; }
		public Quaternion Rotation { get; }
		public Vector3 Scale { get; }
	
		// Constructors
		public MeshTransform(Vector3 position, Quaternion rotation, Vector3 scale);
		public MeshTransform(Transform transform);
	
		// Methods
		public OBB InverseTransformOBB(OBB obb);
		public Vector3 TransformPoint(Vector3 point);
		public Vector3 InverseTransformPoint(Vector3 point);
	}
}
