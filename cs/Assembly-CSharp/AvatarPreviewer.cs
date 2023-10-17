/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AvatarPreviewer : MonoBehaviour
{
	// Fields
	private float previewObjMaxSize;
	private float previewCamAdditionalHeight;
	private float previewCamDist;
	private LayerFlags layersToRender;
	[SerializeField]
	public Camera previewCam;
	private RenderTexture previewTexture;
	private Vector3 pivotPoint;
	[CompilerGenerated]
	private GameObject _PreviewGameObject_k__BackingField;
	private const int lowResRT = 256;

	// Properties
	public RenderTexture PreviewTexture { get; }
	public GameObject PreviewGameObject { [CompilerGenerated] get; [CompilerGenerated] private set; }

	// Constructors
	public AvatarPreviewer();

	// Methods
	public void FaceGameObject(GameObject go);
	public void OverrideCameraForPreviewer(Vector3 cameraAngle, Vector3 cameraOffset);
	public void Initialize(int textureWidth, int textureHeight, CameraClearFlags clearFlags, LayerFlags layersToRender, Vector3 cameraOffset, Transform previewItemsRoot, Vector3 previewPosition, string name, MVWorldObjectClient wo, GameObject woGameObjectCopy, Vector3 additionalCameraRotation);
	private void OnPreCull();
	private void OnPostRender();
	public void UpdateRotation(float rotateSpeed);
	private void OnDestroy();
}

