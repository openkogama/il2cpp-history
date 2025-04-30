/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 16: Assembly-CSharp-firstpass.dll - Assembly: Assembly-CSharp-firstpass, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null
[assembly: CompilationRelaxations(8)]
[assembly: Debuggable(DebuggableAttribute.DebuggingModes.None | DebuggableAttribute.DebuggingModes.IgnoreSymbolStoreSequencePoints)]
[assembly: RuntimeCompatibility(WrapNonExceptionThrows = true)]

[ExecuteInEditMode]
public class Water : MonoBehaviour
{
	// Fields
	private static bool InsideWater;
	public WaterMode waterMode;
	public bool disablePixelLights;
	public bool isCameraAboveWater;
	public int textureSize;
	public float clipPlaneOffset;
	private Dictionary<object, object> reflectionCameras;
	private RenderTexture reflectionTexture;
	private WaterMode hardwareWaterSupport;
	private int oldReflectionTextureSize;
	private bool isLethal;
	[SerializeField]
	private Texture m_WaterBumpTexture;
	[SerializeField]
	private Texture m_LethalBumpTexture;
	[SerializeField]
	private Color m_WaterHorizon;
	[SerializeField]
	private Color m_LethalHorizon;
	[SerializeField]
	private Renderer meshRenderer;

	// Properties
	public Renderer Renderer { get; }
	public bool IsLethal { get; set; }
	public Color WaterHorizon { get; set; }

	// Nested types
	public enum WaterMode
	{
		Simple = 0,
		Reflective = 1
	}

	// Constructors
	public Water();

	// Methods
	public void OnWillRenderObject();
	private void SetLethal(bool isLethal);
	private bool IsNanCheck(Vector3 v);
	private void OnDisable();
	private void Update();
	private void UpdateCameraModes(Camera src, Camera dest);
	private void CreateWaterObjects(Camera currentCamera, out Camera reflectionCamera, out Camera refractionCamera);
	private WaterMode GetWaterMode();
	private WaterMode FindHardwareWaterSupport();
	private static float sgn(float a);
	private Vector4 CameraSpacePlane(Camera cam, Vector3 pos, Vector3 normal, float sideSign);
	private static void CalculateObliqueMatrix(ref Matrix4x4 projection, Vector4 clipPlane);
	private static void CalculateReflectionMatrix(ref Matrix4x4 reflectionMat, Vector4 plane);
}

