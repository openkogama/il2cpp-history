/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	[Serializable]
	public class SpotLightGizmo3DLookAndFeel
	{
		// Fields
		[SerializeField]
		private Color _wireColor;
		[SerializeField]
		private GizmoCap2DLookAndFeel _tickLookAndFeel;
		[SerializeField]
		private GizmoCap2DLookAndFeel _dirSnapTickLookAndFeel;
		[SerializeField]
		private Color _dirSnapSegmentColor;
	
		// Properties
		public static Color DefaultWireColor { get; }
		public static Color DefaultTickColor { get; }
		public static float DefaultTickQuadWidth { get; }
		public static float DefaultTickQuadHeight { get; }
		public static float DefaultTickCircleRadius { get; }
		public static GizmoCap2DType DefaultTickCapType { get; }
		public static Color DefaultTickHoveredColor { get; }
		public static Color DefaultTickBorderColor { get; }
		public static Color DefaultTickHoveredBorderColor { get; }
		public static Color DefaultDirSnapSegmentColor { get; }
		public static Color DefaultDirSnapTickColor { get; }
		public static float DefaultDirSnapTickQuadWidth { get; }
		public static float DefaultDirSnapTickQuadHeight { get; }
		public static float DefaultDirSnapTickCircleRadius { get; }
		public static GizmoCap2DType DefaultDirSnapTickCapType { get; }
		public static Color DefaultDirSnapTickHoveredColor { get; }
		public static Color DefaultDirSnapTickBorderColor { get; }
		public static Color DefaultDirSnapTickHoveredBorderColor { get; }
		public Color WireColor { get; }
		public Color DirSnapSegmentColor { get; }
		public Color DirSnapTickBorderColor { get; }
		public Color DirSnapTickHoveredColor { get; }
		public Color DirSnapTickHoveredBorderColor { get; }
		public GizmoCap2DType DirSnapTickType { get; }
		public float DirSnapTickQuadWidth { get; }
		public float DirSnapTickQuadHeight { get; }
		public float DirSnapTickCircleRadius { get; }
		public Color TickBorderColor { get; }
		public Color TickHoveredColor { get; }
		public Color TickHoveredBorderColor { get; }
		public GizmoCap2DType TickType { get; }
		public float TickQuadWidth { get; }
		public float TickQuadHeight { get; }
		public float TickCircleRadius { get; }
	
		// Constructors
		public SpotLightGizmo3DLookAndFeel();
	
		// Methods
		public void SetWireColor(Color color);
		public void SetTickColor(Color color);
		public void SetTickBorderColor(Color color);
		public void SetTickHoveredColor(Color color);
		public void SetTickHoveredBorderColor(Color color);
		public void SetTickType(GizmoCap2DType tickType);
		public void SetTickQuadWidth(float width);
		public void SetTickQuadHeight(float height);
		public void SetTickCircleRadius(float radius);
		public List<Enum> GetAllowedTickTypes();
		public bool IsTickTypeAllowed(GizmoCap2DType tickType);
		public void SetDirSnapSegmentColor(Color color);
		public void SetDirSnapTickColor(Color color);
		public void SetDirSnapTickBorderColor(Color color);
		public void SetDirSnapTickHoveredColor(Color color);
		public void SetDirSnapTickHoveredBorderColor(Color color);
		public void SetDirSnapTickType(GizmoCap2DType tickType);
		public void SetDirSnapTickQuadWidth(float width);
		public void SetDirSnapTickQuadHeight(float height);
		public void SetDirSnapTickCircleRadius(float radius);
		public void ConnectDirSnapTickLookAndFeel(GizmoCap2D tick);
		public void ConnectTickLookAndFeel(GizmoCap2D tick);
	}
}
