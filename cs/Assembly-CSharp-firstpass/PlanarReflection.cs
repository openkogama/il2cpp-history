/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 8: Assembly-CSharp-firstpass.dll - Assembly: Assembly-CSharp-firstpass, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[ExecuteInEditMode]
[RequireComponent(typeof(WaterBase))]
public class PlanarReflection : MonoBehaviour
{
	// Fields
	public LayerMask reflectionMask;
	public bool reflectSkybox;
	public Color clearColor;
	public string reflectionSampler;
	public float clipPlaneOffset;
	private Vector3 oldpos;
	private Camera reflectionCamera;
	private Material sharedMaterial;
	private Dictionary<Camera, bool> helperCameras;

	// Constructors
	public PlanarReflection();

	// Methods
	public void Start();
	private Camera CreateReflectionCameraFor(Camera cam);
	private void SetStandardCameraParameter(Camera cam, LayerMask mask);
	private RenderTexture CreateTextureFor(Camera cam);
	public void RenderHelpCameras(Camera currentCam);
	public void LateUpdate();
	public void WaterTileBeingRendered(Transform tr, Camera currentCam);
	public void OnEnable();
	public void OnDisable();
	private void OnDestroy();
	private void RenderReflectionFor(Camera cam, Camera reflectCamera);
	private void SaneCameraSettings(Camera helperCam);
	private static Matrix4x4 CalculateObliqueMatrix(Matrix4x4 projection, Vector4 clipPlane);
	private static Matrix4x4 CalculateReflectionMatrix(Matrix4x4 reflectionMat, Vector4 plane);
	private static float sgn(float a);
	private Vector4 CameraSpacePlane(Camera cam, Vector3 pos, Vector3 normal, float sideSign);
}

