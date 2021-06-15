/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Networking;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MaterialLoader : MonoBehaviour
{
	// Fields
	private const string highResAtlasFileName = "AssetBundles/Atlas/atlas1.unity3d";
	[SerializeField]
	private Material cubeModelMaterialHigh;
	[SerializeField]
	private Material cubeModelMaterialLow;
	[SerializeField]
	private Material cubeModelMaterialMobile;
	[SerializeField]
	private Shader pickupItemShader;
	[SerializeField]
	private Shader wireframeShader;
	[SerializeField]
	private Shader defaultDiffuseShader;
	[SerializeField]
	private Texture2D lowResMaterials;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private Material _CubeModelMaterial_k__BackingField;
	private uint atlasHash;

	// Properties
	public Material CubeModelMaterial { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public Shader PickupItemShader { get; }
	public Shader WireframeShader { get; }
	public Shader DefaultDiffuseShader { get; }

	// Constructors
	public MaterialLoader();

	// Methods
	protected void Awake();
	protected void Start();
	protected void OnDestroy();
	public bool CheckAtlasIntegrity();
	private void SetMainTexture(Texture2D texture);
	private void SetupMaterials();
	public void Initialize();
	private void DownloadWhenPossible();
	private void Callback(UnityWebRequest www);
	private void InitAllMaterials(bool useSM3);
	private uint Hash(Texture2D tex);
}

