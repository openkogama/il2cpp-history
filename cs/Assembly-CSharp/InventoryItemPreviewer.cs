/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class InventoryItemPreviewer : MonoBehaviour
{
	// Fields
	private float previewObjMaxSize;
	private float previewItemRotateSpeed;
	private Vector3 previewCamOffset;
	private Vector3 inventoryItemStandardOffset;
	private LayerFlags layersToRender;
	[SerializeField]
	public Camera previewCam;
	private RenderTexture previewTexture;
	private Vector3 pivotPoint;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private GameObject _PreviewGameObject_k__BackingField;
	private readonly Dictionary<MVWorldObjectDocumentationType, float> WorldObjectCameraFOVOverload;

	// Properties
	public RenderTexture PreviewTexture { get; }
	public GameObject PreviewGameObject { [CompilerGenerated] get; [CompilerGenerated] private set; }

	// Constructors
	public InventoryItemPreviewer();

	// Methods
	public void Initialize(int textureWidth, int textureHeight, CameraClearFlags clearFlags, LayerFlags layersToRender, Vector3 cameraOffset, Transform previewItemsRoot, Vector3 previewPosition, string name, MVWorldObjectClient wo, GameObject woGameObjectCopy);
	private void OnPreCull();
	private void OnPostRender();
	public void UpdateRotation(float rotateSpeed = 0f);
	private void OnDestroy();
}

