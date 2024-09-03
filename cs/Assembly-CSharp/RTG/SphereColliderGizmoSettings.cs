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
	public class SphereColliderGizmoSettings
	{
		// Fields
		[SerializeField]
		private float _radiusSnapStep;
	
		// Properties
		public static float DefaultRadiusSnapStep { get; }
		public float RadiusSnapStep { get; }
	
		// Constructors
		public SphereColliderGizmoSettings();
	
		// Methods
		public void SetRadiusSnapStep(float snapStep);
	}
}
