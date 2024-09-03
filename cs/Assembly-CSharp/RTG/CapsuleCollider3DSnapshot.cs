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
	public class CapsuleCollider3DSnapshot
	{
		// Fields
		private CapsuleCollider _capsuleCollider;
		private Vector3 _localCenter;
		private float _localRadius;
		private float _localHeight;
	
		// Constructors
		public CapsuleCollider3DSnapshot();
		public CapsuleCollider3DSnapshot(CapsuleCollider3DSnapshot src);
	
		// Methods
		public void Snapshot(CapsuleCollider capsuleCollider);
		public void Apply();
	}
}
