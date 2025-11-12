/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace TMPro
{
	[Serializable]
	[ExcludeFromPreset]
	public class TMP_ColorGradient : ScriptableObject
	{
		// Fields
		public ColorMode colorMode;
		public Color topLeft;
		public Color topRight;
		public Color bottomLeft;
		public Color bottomRight;
		private const ColorMode k_DefaultColorMode = ColorMode.FourCornersGradient;
		private static readonly Color k_DefaultColor;
	
		// Constructors
		public TMP_ColorGradient();
		public TMP_ColorGradient(Color color);
		public TMP_ColorGradient(Color color0, Color color1, Color color2, Color color3);
		static TMP_ColorGradient();
	}
}
