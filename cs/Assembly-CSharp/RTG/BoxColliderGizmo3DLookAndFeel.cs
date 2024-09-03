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
	public class BoxColliderGizmo3DLookAndFeel
	{
		// Fields
		[SerializeField]
		private Color _wireColor;
		[SerializeField]
		private GizmoCap2DLookAndFeel[] _tickLookAndFeel;
		[SerializeField]
		private GizmoCap3DLookAndFeel _midCapLookAndFeel;
		[SerializeField]
		private bool _isMidCapVisible;
		[SerializeField]
		private float _tickCullAlphaScale;
	
		// Properties
		public static Color DefaultWireColor { get; }
		public static Color DefaultTickColor { get; }
		public static float DefaultTickQuadWidth { get; }
		public static float DefaultTickQuadHeight { get; }
		public static float DefaultTickCircleRadius { get; }
		public static float DefaultTickCullAlphaScale { get; }
		public static GizmoCap2DType DefaultTickCapType { get; }
		public static Color DefaultTickHoveredColor { get; }
		public static Color DefaultTickBorderColor { get; }
		public static Color DefaultTickHoveredBorderColor { get; }
		public static Color DefaultMidCapColor { get; }
		public static Color DefaultMidCapHoveredColor { get; }
		public static GizmoFillMode3D DefaultMidCapFillMode { get; }
		public static GizmoCap3DType DefaultMidCapType { get; }
		public static bool DefaultMidCapVisible { get; }
		public static float DefaultMidCapBoxWidth { get; }
		public static float DefaultMidCapBoxHeight { get; }
		public static float DefaultMidCapBoxDepth { get; }
		public Color WireColor { get; }
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
		public Color MidCapColor { get; }
		public Color MidCapHoveredColor { get; }
		public GizmoFillMode3D MidCapFillMode { get; }
		public GizmoCap3DType MidCapType { get; }
		public bool IsMidCapVisible { get; }
		public float MidCapBoxWidth { get; }
		public float MidCapBoxHeight { get; }
		public float MidCapBoxDepth { get; }
	
		// Constructors
		public BoxColliderGizmo3DLookAndFeel();
	
		// Methods
		public void SetMidCapBoxWidth(float width);
		public void SetMidCapBoxHeight(float height);
		public void SetMidCapBoxDepth(float depth);
		public void SetMidCapColor(Color color);
		public void SetMidCapHoveredColor(Color color);
		public void SetMidCapFillMode(GizmoFillMode3D fillMode);
		public void SetMidCapType(GizmoCap3DType capType);
		public void SetMidCapVisible(bool visible);
		public List<Enum> GetAllowedMidCapTypes();
		public bool IsMidCapTypeAllowed(GizmoCap3DType capType);
		public List<Enum> GetAllowedTickTypes();
		public bool IsTickTypeAllowed(GizmoCap2DType tickType);
		public void SetBoxWireColor(Color color);
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
		public void ConnectMidCapLookAndFeel(GizmoCap3D midCap);
		private GizmoCap2DLookAndFeel GetTickLookAndFeel(int axisIndex, AxisSign axisSign);
	}
}
