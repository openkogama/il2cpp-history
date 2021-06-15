/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SpawnRolePreviewer : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Camera previewCam;
	[SerializeField]
	private GrayscaleEffect grayScaleEffect;
	[SerializeField]
	private GameObject blobShadowPrefab;
	private RenderTexture previewTexture;
	private LayerFlags layersToRender;
	private Vector3 previewCamOffset;
	private Vector3 pivotPoint;
	private MVBodyObject body;
	private GameObject rootObject;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private GameObject _PreviewGameObject_k__BackingField;

	// Properties
	public RenderTexture PreviewTexture { get; }
	private GameObject PreviewGameObject { [CompilerGenerated] get; [CompilerGenerated] set; }

	// Constructors
	public SpawnRolePreviewer();

	// Methods
	public void Initialize(int textureWidth, int textureHeight, CameraClearFlags clearFlags, LayerFlags layersToRender, Vector3 cameraOffset, Transform previewSpawnRoleRoot, Vector3 previewPosition, string name, int spawnRoleId, GameObject woGameObjectCopy);
	public void SetRenderGrey(bool shouldRenderAsGrey);
	public void StartActiveAnimation();
	public void StartInactiveAnimation();
	public void ActivatePreview();
	public void DeactivatePreview();
	private void OnPreCull();
	private void OnPostRender();
	private void OnDestroy();
}

