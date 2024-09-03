/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	[Serializable]
	public class TerrainGizmoLookAndFeel
	{
		// Fields
		[SerializeField]
		private Color _radiusCircleColor;
		[SerializeField]
		private GizmoLineSlider3DLookAndFeel _axisSliderLookAndFeel;
		[SerializeField]
		private GizmoCap3DLookAndFeel _midCapLookAndFeel;
		[SerializeField]
		private GizmoCap2DLookAndFeel _radiusTickLookAndFeel;
	
		// Properties
		public Color AxisSliderColor { get; set; }
		public Color AxisSliderHoveredColor { get; set; }
		public Color AxisSliderCapColor { get; set; }
		public Color AxisSliderCapHoveredColor { get; set; }
		public GizmoCap3DType AxisSliderCapType { get; set; }
		public GizmoLine3DType AxisSliderLineType { get; set; }
		public float AxisSliderLength { get; set; }
		public GizmoCap3DType MidCapType { get; set; }
		public float MidCapBoxWidth { get; set; }
		public float MidCapBoxHeight { get; set; }
		public float MidCapBoxDepth { get; set; }
		public float MidSphereRadius { get; set; }
		public Color MidCapColor { get; set; }
		public Color MidCapHoveredColor { get; set; }
		public Color RadiusCircleColor { get; set; }
		public GizmoCap2DType RadiusTickType { get; set; }
		public Color RadiusTickColor { get; set; }
		public Color RadiusTickHoveredColor { get; set; }
		public float RadiusTickQuadWidth { get; set; }
		public float RadiusTickQuadHeight { get; set; }
		public float RadiusTickCircleRadius { get; set; }
	
		// Constructors
		public TerrainGizmoLookAndFeel();
	
		// Methods
		public void ConnectAxisSliderLookAndFeel(GizmoLineSlider3D axisSlider);
		public void ConnectMidCapLookAndFeel(GizmoCap3D pickPointCap);
		public void ConnectRadiusTickLookAndFeel(GizmoCap2D radiusTick);
	}
}
