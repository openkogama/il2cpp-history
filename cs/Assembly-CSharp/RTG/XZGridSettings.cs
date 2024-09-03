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
	public class XZGridSettings : Settings
	{
		// Fields
		[SerializeField]
		private bool _isVisible;
		[SerializeField]
		private float _cellSizeX;
		[SerializeField]
		private float _cellSizeZ;
		[SerializeField]
		private float _yOffset;
		[SerializeField]
		private Vector3 _rotationAngles;
		[SerializeField]
		private float _upDownStep;
	
		// Properties
		public bool IsVisible { get; set; }
		public float CellSizeX { get; set; }
		public float CellSizeZ { get; set; }
		public Vector3 RotationAngles { get; set; }
		public float YOffset { get; set; }
		public float UpDownStep { get; set; }
	
		// Constructors
		public XZGridSettings();
	}
}
