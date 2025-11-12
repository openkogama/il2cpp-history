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
	public struct HighlightState
	{
		// Fields
		public Color32 color;
		public TMP_Offset padding;
	
		// Constructors
		public HighlightState(Color32 color, TMP_Offset padding);
	
		// Methods
		public static bool operator ==(HighlightState lhs, HighlightState rhs);
		public static bool operator !=(HighlightState lhs, HighlightState rhs);
		public override int GetHashCode();
		public override bool Equals(object obj);
		public bool Equals(HighlightState other);
	}
}
