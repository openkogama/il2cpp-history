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
	public class GizmoCircularMaterial : Singleton<RTG.GizmoCircularMaterial>
	{
		// Fields
		private Type _circularType;
		private Material _circleMaterial;
		private Material _torusMaterial;
		private Material _cylindricalTorusMaterial;
	
		// Properties
		public Material CircleMaterial { get; }
		public Material TorusMaterial { get; }
		public Material CylindricalTorusMaterial { get; }
		public Material Material { get; }
		public Type CircularType { get; set; }
		public bool IsLit { get; }
		public float LightIntensity { get; }
	
		// Nested types
		public enum Type
		{
			Circle = 0,
			Torus = 1,
			CylindricalTorus = 2
		}
	
		// Constructors
		public GizmoCircularMaterial();
	
		// Methods
		public void ResetValuesToSensibleDefaults();
		public void SetCullAlphaScale(float scale);
		public void SetShapeCenter(Vector3 center);
		public void SetTorusCoreRadius(float radius);
		public void SetTorusTubeRadius(float radius);
		public void SetCylindricalTorusRadii(float hrzRadius, float vertRadius);
		public void SetCamera(Camera camera);
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
