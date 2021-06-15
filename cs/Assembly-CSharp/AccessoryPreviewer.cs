/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AccessoryPreviewer : MonoBehaviour
{
	// Fields
	private RenderTexture previewTexture;
	private Camera previewCam;
	private GameObject previewGameObject;
	private LayerFlags layersToRender;
	private static Vector3 previewPosition;
	private Transform rootTransform;
	private Vector3 pivotPoint;

	// Properties
	public RenderTexture PreviewTexture { get; }

	// Constructors
	public AccessoryPreviewer();
	static AccessoryPreviewer();

	// Methods
	public void Initialize(int textureWidth, int textureHeight, LayerFlags layersToRender, CameraClearFlags clearFlags, Vector3 cameraPosOffset, Vector3 cameraRotOffset, GameObject woGameObjectCopy, Transform rootTransform);
	private static Bounds ComputeLocalBounds(GameObject go);
	public void Destroy();
	private void OnPreCull();
	private void OnPostRender();
}

