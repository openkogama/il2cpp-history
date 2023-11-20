/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Networking;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MaterialLoader : MonoBehaviour
{
	// Fields
	private const string highResAtlasFileName = "AssetBundles/Atlas/atlas.unity3d";
	[SerializeField]
	private Material cubeModelMaterialHigh;
	[SerializeField]
	private Material cubeModelMaterialHighTransp;
	[SerializeField]
	private Material cubeModelMaterialLow;
	[SerializeField]
	private Material cubeModelMaterialLowTransp;
	[SerializeField]
	private Material cubeModelMaterialMobile;
	[SerializeField]
	private Material cubeModelMaterialMobileTransp;
	[SerializeField]
	private Shader pickupItemShader;
	[SerializeField]
	private Shader wireframeShader;
	[SerializeField]
	private Shader defaultDiffuseShader;
	[SerializeField]
	private Texture2D lowResMaterials;
	[CompilerGenerated]
	private Material _CubeModelMaterial_k__BackingField;
	[CompilerGenerated]
	private Material _CubeModelMaterialTransp_k__BackingField;
	private uint atlasHash;
	private static readonly int MaterialSizeShaderProperty;
	private static readonly int MaxMipLevelShaderProperty;

	// Properties
	public Material CubeModelMaterial { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public Material CubeModelMaterialTransp { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public Shader PickupItemShader { get; }
	public Shader WireframeShader { get; }
	public Shader DefaultDiffuseShader { get; }

	// Constructors
	public MaterialLoader();
	static MaterialLoader();

	// Methods
	protected void Awake();
	protected void Start();
	protected void OnDestroy();
	public bool CheckAtlasIntegrity();
	private void SetMainTexture(Texture2D texture);
	private void SetupMaterials();
	public void Initialize();
	private void DownloadWhenPossible();
	private Texture2D FixTexture(Texture2D source);
	private void Callback(UnityWebRequest www);
	private void InitAllMaterials(bool useSM3);
	private uint Hash(Texture2D tex);
}

