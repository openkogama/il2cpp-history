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
	public class GizmoLineMaterial : Singleton<RTG.GizmoLineMaterial>
	{
		// Fields
		private Material _material;
	
		// Properties
		public Material Material { get; }
	
		// Constructors
		public GizmoLineMaterial();
	
		// Methods
		public void ResetValuesToSensibleDefaults();
		public void SetColor(Color color);
		public void SetPass(int passIndex);
		public void SetZWriteEnabled(bool isEnabled);
		public void SetZTestLessEqual();
		public void SetZTestAlways();
		public void SetZTestLess();
	}
}
