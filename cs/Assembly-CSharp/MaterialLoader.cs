/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject.MetaData;
using UnityEngine;
using UnityEngine.Networking;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MaterialLoader : MonoBehaviour
{
	// Fields
	private const string NoisePath = "AssetBundles/Textures/noisetexture.unity3d";
	private const string AtlasPath = "AssetBundles/Atlas/";
	private const string HighResAtlasFileName = "atlashigh";
	private const string MidResAtlasFileName = "atlasmid";
	private const string LowResAtlasFileName = "atlaslow";
	private const string SM3FileEnding = "array.unity3d";
	private const string SM2FileEnding = ".unity3d";
	[SerializeField]
	private Material cubeModelMaterialSM3;
	[SerializeField]
	private Material cubeModelMaterialSM3Transp;
	[SerializeField]
	private Material cubeModelMaterialSM2;
	[SerializeField]
	private Material cubeModelMaterialSM2Transp;
	[SerializeField]
	private Material cubeModelMaterialMobile;
	[SerializeField]
	private Material cubeModelMaterialMobileTransp;
	[SerializeField]
	private Shader pickupUnavailableShaderArray;
	[SerializeField]
	private Shader pickupUnavailableShader;
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
	private bool isStreamingTexture;
	private int storedTextureQuality;
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
	public Shader WireframeShader { get; }
	public Shader DefaultDiffuseShader { get; }
	public Shader StandardItemUnavailableShader { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _DownloadNoiseAfterInit_d__54 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public MaterialLoader __4__this;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _DownloadNoiseAfterInit_d__54(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public MaterialLoader();

	// Methods
	protected void Awake();
	protected void OnDestroy();
	public bool CheckAtlasIntegrity();
	public Shader GetCubeModelUnavailableShader();
	private void SetMainTexture(Texture texture, bool isGameModeInitialized = true);
	private bool CalculateIfUsingSM3Shader();
	private bool CalculateIsUsingMobileShader();
	private Material PickMaterial(bool opaque);
	public void SetTextureQuality(TextureQualityLevel quality);
	[IteratorStateMachine(typeof(_DownloadNoiseAfterInit_d__54))]
	private IEnumerator DownloadNoiseAfterInit();
	private void DownloadNoiseWhenPossible();
	private void NoiseCallback(UnityWebRequest www);
	private void DownloadAtlasWhenPossible();
	private void AtlasCallback(UnityWebRequest www);
	private Texture StoreAtlasTexture(AssetBundle assetBundle, string assetName);
	private uint Hash(Texture tex);
	public string MaterialLoaderInfo();
}

