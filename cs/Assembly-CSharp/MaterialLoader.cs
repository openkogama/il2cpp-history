/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject.MetaData;
using UnityEngine;
using UnityEngine.Networking;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MaterialLoader : MonoBehaviour
{
	// Fields
	private const string AtlasPath = "AssetBundles/Atlas/";
	private const string HighResAtlasFileName = "atlashigh";
	private const string MidResAtlasFileName = "atlasmid";
	private const string LowResAtlasFileName = "atlaslow";
	private const string SM3FileEnding = "array.unity3d";
	private const string SM2FileEnding = ".unity3d";
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
	private Texture2DArray veryLowTextureArray;
	[SerializeField]
	private Texture2D veryLowTexture;
	[CompilerGenerated]
	private Material _CubeModelMaterial_k__BackingField;
	[CompilerGenerated]
	private Material _CubeModelMaterialTransp_k__BackingField;
	private uint atlasHash;
	private bool isUsingSM3Shader;
	private bool isUsingMobileShader;
	private TextureQualityLevel selectedQuality;
	private Texture2DArray highTexture2DArray;
	private Texture2DArray midTexture2DArray;
	private Texture2DArray lowTexture2DArray;
	private Texture2D highTexture2D;
	private Texture2D midTexture2D;
	private Texture2D lowTexture2D;

	// Properties
	public Material CubeModelMaterial { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public Material CubeModelMaterialTransp { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public Shader PickupItemShader { get; }
	public Shader WireframeShader { get; }
	public Shader DefaultDiffuseShader { get; }

	// Constructors
	public MaterialLoader();

	// Methods
	protected void Awake();
	protected void OnDestroy();
	public bool CheckAtlasIntegrity();
	private void SetMainTexture(Texture texture, bool isGameModeInitialized = true);
	private bool CalculateIfUsingSM3Shader();
	private bool CalculateIsUsingMobileShader();
	private Material PickMaterial(bool opaque);
	public void SetTextureQuality(TextureQualityLevel quality);
	private void DownloadWhenPossible();
	private void Callback(UnityWebRequest www);
	private uint Hash(Texture tex);
	public string MaterialLoaderInfo();
}

