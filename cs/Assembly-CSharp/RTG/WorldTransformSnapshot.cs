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
	public class WorldTransformSnapshot
	{
		// Fields
		private Vector3 _worldPosition;
		private Quaternion _worldRotation;
		private Vector3 _worldScale;
	
		// Properties
		public Vector3 WorldPosition { get; }
		public Quaternion WorldRotation { get; }
		public Vector3 WorldScale { get; }
	
		// Constructors
		public WorldTransformSnapshot();
	
		// Methods
		public void Snaphot(Transform transform);
		public bool SameAs(Transform transform);
	}
}
