/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace TMPro
{
	[ExecuteAlways]
	[RequireComponent(typeof(CanvasRenderer))]
	public class TMP_SubMeshUI : MaskableGraphic
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
		private Mesh m_mesh;
		[SerializeField]
		private TextMeshProUGUI m_TextComponent;
		[NonSerialized]
		private bool m_isRegisteredForEvents;
		private bool m_materialDirty;
		[SerializeField]
		private int m_materialReferenceIndex;
		private Transform m_RootCanvasTransform;
	
		// Properties
		public TMP_FontAsset fontAsset { get; set; }
		public TMP_SpriteAsset spriteAsset { get; set; }
		public override Texture mainTexture { get; }
		public override Material material { get; set; }
		public Material sharedMaterial { get; set; }
		public Material fallbackMaterial { get; set; }
		public Material fallbackSourceMaterial { get; set; }
		public override Material materialForRendering { get; }
		public bool isDefaultMaterial { get; set; }
		public float padding { get; set; }
		public Mesh mesh { get; set; }
		public TMP_Text textComponent { get; }
	
		// Constructors
		public TMP_SubMeshUI();
	
		// Methods
		public static TMP_SubMeshUI AddSubTextObject(TextMeshProUGUI textComponent, MaterialReference materialReference);
		protected override void OnEnable();
		protected override void OnDisable();
		protected override void OnDestroy();
		protected override void OnTransformParentChanged();
		public override Material GetModifiedMaterial(Material baseMaterial);
		public float GetPaddingForMaterial();
		public float GetPaddingForMaterial(Material mat);
		public void UpdateMeshPadding(bool isExtraPadding, bool isUsingBold);
		public override void SetAllDirty();
		public override void SetVerticesDirty();
		public override void SetLayoutDirty();
		public override void SetMaterialDirty();
		public void SetPivotDirty();
		private Transform GetRootCanvasTransform();
		public override void Cull(Rect clipRect, bool validRect);
		protected override void UpdateGeometry();
		public override void Rebuild(CanvasUpdate update);
		public void RefreshMaterial();
		protected override void UpdateMaterial();
		public override void RecalculateClipping();
		private Material GetMaterial();
		private Material GetMaterial(Material mat);
		private Material CreateMaterialInstance(Material source);
		private Material GetSharedMaterial();
		private void SetSharedMaterial(Material mat);
	}
}
