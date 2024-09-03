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
	public class SphereColliderSnapshot
	{
		// Fields
		private SphereCollider _sphereCollider;
		private Vector3 _localCenter;
		private float _localRadius;
	
		// Constructors
		public SphereColliderSnapshot();
		public SphereColliderSnapshot(SphereColliderSnapshot src);
	
		// Methods
		public void Snapshot(SphereCollider sphereCollider);
		public void Apply();
	}
}
