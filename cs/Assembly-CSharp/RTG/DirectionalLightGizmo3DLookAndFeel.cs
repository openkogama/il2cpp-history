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
	public class DirectionalLightGizmo3DLookAndFeel
	{
		// Fields
		[SerializeField]
		private GizmoCap2DLookAndFeel _dirSnapTickLookAndFeel;
		[SerializeField]
		private Color _lightRaysColor;
		[SerializeField]
		private Color _sourceCircleBorderColor;
		[SerializeField]
		private float _sourceCircleRadius;
		[SerializeField]
		private int _numLightRays;
		[SerializeField]
		private float _lightRayLength;
		[SerializeField]
		private Color _dirSnapSegmentColor;
	
		// Properties
		public static Color DefaultLightRaysColor { get; }
		public static Color DefaultSourceCircleBorderColor { get; }
		public static float DefaultSourceCircleRadius { get; }
		public static int DefaultNumLightRays { get; }
		public static float DefaultLightRayLength { get; }
		public static Color DefaultDirSnapSegmentColor { get; }
		public static Color DefaultDirSnapTickColor { get; }
		public static float DefaultDirSnapTickQuadWidth { get; }
		public static float DefaultDirSnapTickQuadHeight { get; }
		public static float DefaultDirSnapTickCircleRadius { get; }
		public static GizmoCap2DType DefaultDirSnapTickCapType { get; }
		public static Color DefaultDirSnapTickHoveredColor { get; }
		public static Color DefaultDirSnapTickBorderColor { get; }
		public static Color DefaultDirSnapTickHoveredBorderColor { get; }
		public Color LightRaysColor { get; }
		public Color SourceCircleBorderColor { get; }
		public float SourceCircleRadius { get; }
		public int NumLightRays { get; }
		public float LightRayLength { get; }
		public Color DirSnapSegmentColor { get; }
		public Color DirSnapTickBorderColor { get; }
		public Color DirSnapTickHoveredColor { get; }
		public Color DirSnapTickHoveredBorderColor { get; }
		public GizmoCap2DType DirSnapTickType { get; }
		public float DirSnapTickQuadWidth { get; }
		public float DirSnapTickQuadHeight { get; }
		public float DirSnapTickCircleRadius { get; }
	
		// Constructors
		public DirectionalLightGizmo3DLookAndFeel();
	
		// Methods
		public List<Enum> GetAllowedTickTypes();
		public bool IsTickTypeAllowed(GizmoCap2DType tickType);
		public void SetNumLightRays(int numLightRays);
		public void SetDirSnapSegmentColor(Color color);
		public void SetLightRayLength(float length);
		public void SetSourceCircleRadius(float radius);
		public void SetLightRaysColor(Color color);
		public void SetSourceCircleBorderColor(Color color);
		public void SetDirSnapTickColor(Color color);
		public void SetDirSnapTickBorderColor(Color color);
		public void SetDirSnapTickHoveredColor(Color color);
		public void SetDirSnapTickHoveredBorderColor(Color color);
		public void SetDirSnapTickType(GizmoCap2DType tickType);
		public void SetDirSnapTickQuadWidth(float width);
		public void SetDirSnapTickQuadHeight(float height);
		public void SetDirSnapTickCircleRadius(float radius);
		public void ConnectDirSnapTickLookAndFeel(GizmoCap2D tick);
	}
}
