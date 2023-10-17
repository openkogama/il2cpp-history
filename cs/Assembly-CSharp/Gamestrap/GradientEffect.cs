/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Gamestrap
{
	[AddComponentMenu("UI/Gamestrap UI/Gradient")]
	public class GradientEffect : BaseMeshEffect
	{
		// Fields
		public Color top;
		public Color bottom;
	
		// Constructors
		public GradientEffect();
	
		// Methods
		public override void ModifyMesh(VertexHelper vh);
		public void ModifyVertices(List<UIVertex> vertexList);
		private void SetVertexColor(List<UIVertex> vertexList, int index, Color color);
	}
}
