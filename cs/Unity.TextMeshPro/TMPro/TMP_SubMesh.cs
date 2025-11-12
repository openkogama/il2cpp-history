/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace TMPro
{
	[ExecuteAlways]
	[RequireComponent(typeof(MeshRenderer))]
	public class TMP_SubMesh : MonoBehaviour
	{
		// Fields
		[SerializeField]
		private TMP_FontAsset m_fontAsset;
		[SerializeField]
		private TMP_SpriteAsset m_spriteAsset;
		[SerializeField]
		private Material m_material;
		[SerializeField]
		private Material m_sharedMaterial;
		private Material m_fallbackMaterial;
		private Material m_fallbackSourceMaterial;
		[SerializeField]
		private bool m_isDefaultMaterial;
		[SerializeField]
		private float m_padding;
		[SerializeField]
		private Renderer m_renderer;
		private MeshFilter m_meshFilter;
		private Mesh m_mesh;
		[SerializeField]
		private TextMeshPro m_TextComponent;
		[NonSerialized]
		private bool m_isRegisteredForEvents;
	
		// Properties
		public TMP_FontAsset fontAsset { get; set; }
		public TMP_SpriteAsset spriteAsset { get; set; }
		public Material material { get; set; }
		public Material sharedMaterial { get; set; }
		public Material fallbackMaterial { get; set; }
		public Material fallbackSourceMaterial { get; set; }
		public bool isDefaultMaterial { get; set; }
		public float padding { get; set; }
		public Renderer renderer { get; }
		public MeshFilter meshFilter { get; }
		public Mesh mesh { get; set; }
		public TMP_Text textComponent { get; }
	
		// Constructors
		public TMP_SubMesh();
	
		// Methods
		public static TMP_SubMesh AddSubTextObject(TextMeshPro textComponent, MaterialReference materialReference);
		private void OnEnable();
		private void OnDisable();
		private void OnDestroy();
		public void DestroySelf();
		private Material GetMaterial(Material mat);
		private Material CreateMaterialInstance(Material source);
		private Material GetSharedMaterial();
		private void SetSharedMaterial(Material mat);
		public float GetPaddingForMaterial();
		public void UpdateMeshPadding(bool isExtraPadding, bool isUsingBold);
		public void SetVerticesDirty();
		public void SetMaterialDirty();
		protected void UpdateMaterial();
	}
}
