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
	public class CharacterController3DSnapshot
	{
		// Fields
		private CharacterController _characterController;
		private Vector3 _localCenter;
		private float _localRadius;
		private float _localHeight;
	
		// Constructors
		public CharacterController3DSnapshot();
		public CharacterController3DSnapshot(CharacterController3DSnapshot src);
	
		// Methods
		public void Snapshot(CharacterController characterController);
		public void Apply();
	}
}
