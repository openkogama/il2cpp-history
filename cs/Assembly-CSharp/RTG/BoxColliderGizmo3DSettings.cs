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
	public class BoxColliderGizmo3DSettings
	{
		// Fields
		[SerializeField]
		private float _xSizeSnapStep;
		[SerializeField]
		private float _ySizeSnapStep;
		[SerializeField]
		private float _zSizeSnapStep;
		[SerializeField]
		private float _uniformSizeSnapStep;
	
		// Properties
		public static float DefaultSizeSnapStep { get; }
		public static float DefaultUniformSizeSnapStep { get; }
		public float XSizeSnapStep { get; }
		public float YSizeSnapStep { get; }
		public float ZSizeSnapStep { get; }
		public float UniformSizeSnapStep { get; }
	
		// Constructors
		public BoxColliderGizmo3DSettings();
	
		// Methods
		public void SetXSizeSnapStep(float snapStep);
		public void SetYSizeSnapStep(float snapStep);
		public void SetZSizeSnapStep(float snapStep);
		public void SetUniformSizeSnapStep(float snapStep);
	}
}
