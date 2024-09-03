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
	public class SceneGizmoLookAndFeel : Settings
	{
		// Fields
		private static readonly float _baseScreenSize;
		private static readonly float _invBaseScreenSize;
		[SerializeField]
		private GizmoCap3DLookAndFeel _midCapLookAndFeel;
		[SerializeField]
		private GizmoCap3DLookAndFeel[] _axesCapsLookAndFeel;
		[SerializeField]
		private SceneGizmoScreenCorner _screenCorner;
		[SerializeField]
		private Vector2 _screenOffset;
		[SerializeField]
		private float _screenSize;
		[SerializeField]
		private Color _axesLabelTint;
		[SerializeField]
		private Color _camPrjSwitchLabelTint;
		[SerializeField]
		private bool _isCamPrjSwitchLabelVisible;
	
		// Properties
		private GizmoCap3DLookAndFeel AxisCapLookAndFeel { get; }
		public SceneGizmoScreenCorner ScreenCorner { get; set; }
		public Vector2 ScreenOffset { get; set; }
		public float ScreenSize { get; set; }
		public Color AxesLabelTint { get; set; }
		public Color CamPrjSwitchLabelTint { get; set; }
		public bool IsCamPrjSwitchLabelVisible { get; set; }
		public Texture2D CamPerspModeLabelTexture { get; }
		public Texture2D CamOrthoModeLabelTexture { get; }
		public Color HoveredColor { get; }
		public GizmoCap3DType AxesCapType { get; }
		public GizmoCap3DType MidCapType { get; }
		public float MidCapBoxSize { get; }
		public float MidCapSphereRadius { get; }
		public float AxisConeHeight { get; }
		public float AxisConeRadius { get; }
		public float AxisPyramidWidth { get; }
		public float AxisPyramidHeight { get; }
		public float AxisPyramidDepth { get; }
		public float AxisLabelScreenSize { get; }
		public float AxisCamAlignFadeOutThreshold { get; }
		public float AxisCamAlignFadeOutDuration { get; }
		public float AxisCamAlignFadeOutAlpha { get; }
	
		// Constructors
		public SceneGizmoLookAndFeel();
		static SceneGizmoLookAndFeel();
	
		// Methods
		public void SetMidCapColor(Color color);
		public void SetAxisCapColor(Color color, int axisIndex, AxisSign axisSign);
		public Color GetAxisCapColor(int axisIndex, AxisSign axisSign);
		public void SetHoveredColor(Color hoveredColor);
		public void SetMidCapFillMode(GizmoFillMode3D fillMode);
		public void SetAxisCapFillMode(GizmoFillMode3D fillMode);
		public void SetMidCapShadeMode(GizmoShadeMode shadeMode);
		public void SetAxisCapShadeMode(GizmoShadeMode shadeMode);
		public List<Enum> GetAllowedMidCapTypes();
		public List<Enum> GetAllowedAxesCapTypes();
		public bool IsMidCapTypeAllowed(GizmoCap3DType capType);
		public void SetMidCapType(GizmoCap3DType capType);
		public bool IsAxisCapTypeAllowed(GizmoCap3DType capType);
		public void SetAxisCapType(GizmoCap3DType capType);
		public float GetAxesLabelWorldSize(Camera gizmoCam, Vector3 labelWorldPos);
		public Vector2 CalculateMaxPrjSwitchLabelRectSize();
		public void ConnectMidCapLookAndFeel(GizmoCap3D midCap);
		public void ConnectAxisCapLookAndFeel(GizmoCap3D axisCap, int axisIndex, AxisSign axisSign);
		private GizmoCap3DLookAndFeel GetAxisCapLookAndFeel(int axisIndex, AxisSign axisSign);
		private void OnScreenSizeChanged();
	}
}
