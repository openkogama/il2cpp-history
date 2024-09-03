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
	public class CameraMoveSettings : Settings
	{
		// Fields
		private static readonly float _minMoveSpeed;
		[SerializeField]
		private float _moveSpeed;
		[SerializeField]
		private float _accelerationRate;
	
		// Properties
		public float MoveSpeed { get; set; }
		public float AccelerationRate { get; set; }
	
		// Constructors
		public CameraMoveSettings();
		static CameraMoveSettings();
	}
}
