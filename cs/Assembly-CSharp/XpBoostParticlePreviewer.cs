/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class XpBoostParticlePreviewer : MonoBehaviour
{
	// Fields
	private LayerFlags layersToRender;
	[SerializeField]
	public Camera previewCam;
	[SerializeField]
	private ParticleSystem xpBoostParticles;
	private bool isParticlesPlaying;
	private RenderTexture previewTexture;
	[CompilerGenerated]
	private GameObject _PreviewGameObject_k__BackingField;
	private const int lowResRT = 256;

	// Properties
	public bool IsParticlesPlaying { get; }
	public RenderTexture PreviewTexture { get; }
	public GameObject PreviewGameObject { [CompilerGenerated] get; [CompilerGenerated] private set; }

	// Constructors
	public XpBoostParticlePreviewer();

	// Methods
	public void FaceGameObject(GameObject go);
	public void OverrideCameraForPreviewer(Vector3 cameraAngle, Vector3 cameraOffset);
	public void Initialize(int textureWidth, int textureHeight, CameraClearFlags clearFlags, LayerFlags layersToRender, Vector3 cameraOffset, Vector3 previewPosition);
	public void StartParticleSystem();
	public void StopParticleSystem();
	private void OnPreCull();
	private void OnPostRender();
	private void OnDestroy();
}

