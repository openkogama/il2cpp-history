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
	public class PointLightGizmo3DLookAndFeel
	{
		// Fields
		[SerializeField]
		private Color _sphereBorderColor;
		[SerializeField]
		private GizmoCap2DLookAndFeel[] _tickLookAndFeel;
		[SerializeField]
		private Color _wireColor;
		[SerializeField]
		private float _axialCircleCullAlphaScale;
		[SerializeField]
		private float _tickCullAlphaScale;
	
		// Properties
		public static Color DefaultSphereBorderColor { get; }
		public static Color DefaultWireColor { get; }
		public static float DefaultAxialCircleCullAlphaScale { get; }
		public static Color DefaultTickColor { get; }
		public static float DefaultTickQuadWidth { get; }
		public static float DefaultTickQuadHeight { get; }
		public static float DefaultTickCircleRadius { get; }
		public static float DefaultTickCullAlphaScale { get; }
		public static GizmoCap2DType DefaultTickCapType { get; }
		public static Color DefaultTickHoveredColor { get; }
		public static Color DefaultTickBorderColor { get; }
		public static Color DefaultTickHoveredBorderColor { get; }
		public Color SphereBorderColor { get; }
		public Color WireColor { get; }
		public float AxialCircleCullAlphaScale { get; }
		public Color XTickColor { get; }
		public Color YTickColor { get; }
		public Color ZTickColor { get; }
		public Color TickBorderColor { get; }
		public Color TickHoveredColor { get; }
		public Color TickHoveredBorderColor { get; }
		public GizmoCap2DType TickType { get; }
		public float TickQuadWidth { get; }
		public float TickQuadHeight { get; }
		public float TickCircleRadius { get; }
		public float TickCullAlphaScale { get; }
	
		// Constructors
		public PointLightGizmo3DLookAndFeel();
	
		// Methods
		public List<Enum> GetAllowedTickTypes();
		public bool IsTickTypeAllowed(GizmoCap2DType tickType);
		public void SetSphereBorderColor(Color color);
		public void SetWireColor(Color color);
		public void SetAxialCircleCullAlphaScale(float scale);
		public void SetTickCullAlphaScale(float alphaScale);
		public void SetTickColor(int axisIndex, Color color);
		public void SetAllTicksColor(Color color);
		public void SetTickBorderColor(Color color);
		public void SetTickHoveredColor(Color color);
		public void SetTickHoveredBorderColor(Color color);
		public void SetTickType(GizmoCap2DType tickType);
		public void SetTickQuadWidth(float width);
		public void SetTickQuadHeight(float height);
		public void SetTickCircleRadius(float radius);
		public void ConnectTickLookAndFeel(GizmoCap2D tick, int axisIndex, AxisSign axisSign);
		private GizmoCap2DLookAndFeel GetTickLookAndFeel(int axisIndex, AxisSign axisSign);
	}
}
