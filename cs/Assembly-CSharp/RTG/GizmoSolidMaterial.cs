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
	public class GizmoSolidMaterial : Singleton<RTG.GizmoSolidMaterial>
	{
		// Fields
		private Material _material;
	
		// Properties
		public Material Material { get; }
		public bool IsLit { get; }
		public float LightIntensity { get; }
	
		// Constructors
		public GizmoSolidMaterial();
	
		// Methods
		public void ResetValuesToSensibleDefaults();
		public void SetLit(bool isLit);
		public void SetLightDirection(Vector3 lightDir);
		public void SetLightIntensity(float intensity);
		public void SetColor(Color color);
		public void SetZWriteEnabled(bool isEnabled);
		public void SetZTestEnabled(bool isEnabled);
		public void SetZTestAlways();
		public void SetZTestLess();
		public void SetCullModeBack();
		public void SetCullModeFront();
		public void SetCullModeOff();
		public void SetPass(int passIndex);
	}
}
