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
	public struct MarkToBaseAdjustmentRecord
	{
		// Fields
		[SerializeField]
		private uint m_BaseGlyphID;
		[SerializeField]
		private GlyphAnchorPoint m_BaseGlyphAnchorPoint;
		[SerializeField]
		private uint m_MarkGlyphID;
		[SerializeField]
		private MarkPositionAdjustment m_MarkPositionAdjustment;
	
		// Properties
		public uint baseGlyphID { get; set; }
		public GlyphAnchorPoint baseGlyphAnchorPoint { get; set; }
		public uint markGlyphID { get; set; }
		public MarkPositionAdjustment markPositionAdjustment { get; set; }
	}
}
