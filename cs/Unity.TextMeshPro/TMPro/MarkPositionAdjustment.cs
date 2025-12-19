/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null
[assembly: CompilationRelaxations(8)]
[assembly: Debuggable(DebuggableAttribute.DebuggingModes.None | DebuggableAttribute.DebuggingModes.IgnoreSymbolStoreSequencePoints)]
[assembly: InternalsVisibleTo("Unity.TextCore")]
[assembly: InternalsVisibleTo("Unity.TextCore.FontEngine.Tools")]
[assembly: InternalsVisibleTo("Unity.FontEngine.Tests")]
[assembly: InternalsVisibleTo("Unity.TextCore.Editor")]
[assembly: InternalsVisibleTo("Unity.TextMeshPro.Editor")]
[assembly: RuntimeCompatibility(WrapNonExceptionThrows = true)]

namespace TMPro
{
	[Serializable]
	public struct MarkPositionAdjustment
	{
		// Fields
		[SerializeField]
		private float m_XPositionAdjustment;
		[SerializeField]
		private float m_YPositionAdjustment;
	
		// Properties
		public float xPositionAdjustment { get; set; }
		public float yPositionAdjustment { get; set; }
	
		// Constructors
		public MarkPositionAdjustment(float x, float y);
	}
}
