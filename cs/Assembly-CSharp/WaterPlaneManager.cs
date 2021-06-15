/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class WaterPlaneManager : MonoBehaviour
{
	// Fields
	private const float avatarHeight = 2.1f;
	[SerializeField]
	private Water water;
	[SerializeField]
	private Transform underwaterCameraPlane;
	[SerializeField]
	private SplashController splashController;
	private Renderer underwaterCameraPlaneRenderer;
	private AudioLowPassFilter lowPassFilter;
	private AudioReverbFilter reverbFilter;
	private bool audioHD;
	private MVWaterPlane waterPlaneLogicCube;
	private SkyboxManager skyboxManager;
	private Camera mainCamera;

	// Properties
	public SplashController Splash { get; }
	public bool IsActive { get; }
	public float WaterLevel { get; }
	public Color WaterColor { get; set; }
	private Color HorizonColor { get; set; }

	// Constructors
	public WaterPlaneManager();

	// Methods
	protected void Awake();
	protected void OnDestroy();
	protected void Start();
	protected void Update();
	protected void OnEnable();
	protected void OnDisable();
	public void AddWaterPlaneLogicCube(MVWaterPlane logicCube);
	public void RemoveWaterPlaneLogicCube(MVWaterPlane wp);
	public float ComputeAvatarWaterProximity(Vector3 position);
	public float GetHeightAboveWaterLevel(Vector3 position);
	public float GetHeightAboveWaterLevel(float altitude);
	private void UpdateUnderwaterCameraEffects();
	private void HandleSkyboxColorChanged(Color newColor);
	private void HandleQualityChanged(int level);
}

