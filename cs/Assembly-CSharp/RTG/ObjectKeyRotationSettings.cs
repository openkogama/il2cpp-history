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
	[Serializable]
	public class ObjectKeyRotationSettings : Settings
	{
		// Fields
		[SerializeField]
		private float _xRotationStep;
		[SerializeField]
		private float _yRotationStep;
		[SerializeField]
		private float _zRotationStep;
	
		// Properties
		public float XRotationStep { get; set; }
		public float YRotationStep { get; set; }
		public float ZRotationStep { get; set; }
	
		// Constructors
		public ObjectKeyRotationSettings();
	}
}
