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
	public class Light3DSnapshot
	{
		// Fields
		private Light _light;
		private Vector3 _position;
		private Quaternion _rotation;
		private float _range;
		private float _spotAngle;
	
		// Constructors
		public Light3DSnapshot();
		public Light3DSnapshot(Light3DSnapshot src);
	
		// Methods
		public void Snapshot(Light light);
		public void Apply();
	}
}
