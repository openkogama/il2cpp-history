/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace TMPro
{
	public struct TMP_Offset
	{
		// Fields
		private float m_Left;
		private float m_Right;
		private float m_Top;
		private float m_Bottom;
		private static readonly TMP_Offset k_ZeroOffset;
	
		// Properties
		public float left { get; set; }
		public float right { get; set; }
		public float top { get; set; }
		public float bottom { get; set; }
		public float horizontal { get; set; }
		public float vertical { get; set; }
		public static TMP_Offset zero { get; }
	
		// Constructors
		public TMP_Offset(float left, float right, float top, float bottom);
		public TMP_Offset(float horizontal, float vertical);
		static TMP_Offset();
	
		// Methods
		public static bool operator ==(TMP_Offset lhs, TMP_Offset rhs);
		public static bool operator !=(TMP_Offset lhs, TMP_Offset rhs);
		public static TMP_Offset operator *(TMP_Offset a, float b);
		public override int GetHashCode();
		public override bool Equals(object obj);
		public bool Equals(TMP_Offset other);
	}
}
