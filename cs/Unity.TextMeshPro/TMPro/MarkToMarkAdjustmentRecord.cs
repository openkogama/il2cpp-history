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
	public struct MarkToMarkAdjustmentRecord
	{
		// Fields
		[SerializeField]
		private uint m_BaseMarkGlyphID;
		[SerializeField]
		private GlyphAnchorPoint m_BaseMarkGlyphAnchorPoint;
		[SerializeField]
		private uint m_CombiningMarkGlyphID;
		[SerializeField]
		private MarkPositionAdjustment m_CombiningMarkPositionAdjustment;
	
		// Properties
		public uint baseMarkGlyphID { get; set; }
		public GlyphAnchorPoint baseMarkGlyphAnchorPoint { get; set; }
		public uint combiningMarkGlyphID { get; set; }
		public MarkPositionAdjustment combiningMarkPositionAdjustment { get; set; }
	}
}
