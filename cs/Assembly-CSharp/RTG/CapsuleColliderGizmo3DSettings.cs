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
	public class CapsuleColliderGizmo3DSettings
	{
		// Fields
		[SerializeField]
		private float _radiusSnapStep;
		[SerializeField]
		private float _heightSnapStep;
	
		// Properties
		public static float DefaultRadiusSnapStep { get; }
		public static float DefaultHeightSnapStep { get; }
		public float RadiusSnapStep { get; }
		public float HeightSnapStep { get; }
	
		// Constructors
		public CapsuleColliderGizmo3DSettings();
	
		// Methods
		public void SetRadiusSnapStep(float snapStep);
		public void SetHeightSnapStep(float snapStep);
	}
}
