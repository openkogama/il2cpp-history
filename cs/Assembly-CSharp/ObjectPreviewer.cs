/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ObjectPreviewer : MonoBehaviour
{
	// Fields
	private const float previewObjMaxSize = 2f;
	private const float previewCamAdditionalHeight = 1.2f;
	private const float previewCamDist = 2.2f;
	private const float previewItemRotateSpeed = 9.3f;
	private static int previewerIndex;
	private Vector3 previewCamOffset;
	public LayerFlags layersToRender;
	private Camera previewCam;
	private Vector3 pivotPoint;
	[CompilerGenerated]
	private RenderTexture _PreviewTexture_k__BackingField;
	[CompilerGenerated]
	private GameObject _PreviewGameObject_k__BackingField;

	// Properties
	public RenderTexture PreviewTexture { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public GameObject PreviewGameObject { [CompilerGenerated] get; [CompilerGenerated] private set; }

	// Constructors
	private ObjectPreviewer();
	static ObjectPreviewer();

	// Methods
	public static ObjectPreviewer Create(int textureSize, CameraClearFlags clearFlags, LayerFlags layersToRender, Transform previewItemsRoot, string name, GameObject woGameObjectCopy);
	public static ObjectPreviewer Create(int textureSize, CameraClearFlags clearFlags, LayerFlags layersToRender, Vector3 cameraOffset, Transform previewItemsRoot, Vector3 previewPosition, string name, MVWorldObjectClient wo, GameObject woGameObjectCopy);
	public static ObjectPreviewer Create(int textureWidth, int textureHeight, CameraClearFlags clearFlags, LayerFlags layersToRender, Vector3 cameraOffset, Transform previewItemsRoot, Vector3 previewPosition, string name, MVWorldObjectClient wo, GameObject woGameObjectCopy);
	private static Bounds ComputeLocalBounds(GameObject go);
	private void OnPreCull();
	private void OnPostRender();
	public void UpdateRotation(float rotateSpeed = 0f);
	public void Destroy();
}

