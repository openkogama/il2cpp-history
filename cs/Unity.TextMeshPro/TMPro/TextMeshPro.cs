/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Unity.Profiling;
using UnityEngine;
using UnityEngine.UI;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace TMPro
{
	[AddComponentMenu("Mesh/TextMeshPro - Text")]
	[DisallowMultipleComponent]
	[ExecuteAlways]
	[HelpURL("https://docs.unity3d.com/Packages/com.unity.ugui@2.0/manual/TextMeshPro/index.html")]
	[RequireComponent(typeof(MeshRenderer))]
	public class TextMeshPro : TMP_Text, ILayoutElement
	{
		// Fields
		[SerializeField]
		internal int _SortingLayer;
		[SerializeField]
		internal int _SortingLayerID;
		[SerializeField]
		internal int _SortingOrder;
		[CompilerGenerated]
		private Action<TMP_TextInfo> OnPreRenderText;
		[SerializeField]
		private bool m_hasFontAssetChanged;
		private float m_previousLossyScaleY;
		[SerializeField]
		private Renderer m_renderer;
		private MeshFilter m_meshFilter;
		private bool m_isFirstAllocation;
		private int m_max_characters;
		private int m_max_numberOfLines;
		private TMP_SubMesh[] m_subTextObjects;
		[SerializeField]
		private MaskingTypes m_maskType;
		private Matrix4x4 m_EnvMapMatrix;
		private Vector3[] m_RectTransformCorners;
		[NonSerialized]
		private bool m_isRegisteredForEvents;
		private static ProfilerMarker k_GenerateTextMarker;
		private static ProfilerMarker k_SetArraySizesMarker;
		private static ProfilerMarker k_GenerateTextPhaseIMarker;
		private static ProfilerMarker k_ParseMarkupTextMarker;
		private static ProfilerMarker k_CharacterLookupMarker;
		private static ProfilerMarker k_HandleGPOSFeaturesMarker;
		private static ProfilerMarker k_CalculateVerticesPositionMarker;
		private static ProfilerMarker k_ComputeTextMetricsMarker;
		private static ProfilerMarker k_HandleVisibleCharacterMarker;
		private static ProfilerMarker k_HandleWhiteSpacesMarker;
		private static ProfilerMarker k_HandleHorizontalLineBreakingMarker;
		private static ProfilerMarker k_HandleVerticalLineBreakingMarker;
		private static ProfilerMarker k_SaveGlyphVertexDataMarker;
		private static ProfilerMarker k_ComputeCharacterAdvanceMarker;
		private static ProfilerMarker k_HandleCarriageReturnMarker;
		private static ProfilerMarker k_HandleLineTerminationMarker;
		private static ProfilerMarker k_SavePageInfoMarker;
		private static ProfilerMarker k_SaveTextExtentMarker;
		private static ProfilerMarker k_SaveProcessingStatesMarker;
		private static ProfilerMarker k_GenerateTextPhaseIIMarker;
		private static ProfilerMarker k_GenerateTextPhaseIIIMarker;
		private Dictionary<int, int> materialIndexPairs;
	
		// Properties
		public int sortingLayerID { get; set; }
		public int sortingOrder { get; set; }
		public override bool autoSizeTextContainer { get; set; }
		[Obsolete("The TextContainer is now obsolete. Use the RectTransform instead.")]
		public TextContainer textContainer { get; }
		public new Transform transform { get; }
		public Renderer renderer { get; }
		public override Mesh mesh { get; }
		public MeshFilter meshFilter { get; }
		public MaskingTypes maskType { get; set; }
	
		// Events
		public override event Action<TMP_TextInfo> OnPreRenderText {
			add;
			remove;
		}
	
		// Constructors
		public TextMeshPro();
		static TextMeshPro();
	
		// Methods
		public void SetMask(MaskingTypes type, Vector4 maskCoords);
		public void SetMask(MaskingTypes type, Vector4 maskCoords, float softnessX, float softnessY);
		public override void SetVerticesDirty();
		public override void SetLayoutDirty();
		public override void SetMaterialDirty();
		public override void SetAllDirty();
		public override void Rebuild(CanvasUpdate update);
		protected override void UpdateMaterial();
		public override void UpdateMeshPadding();
		public override void ForceMeshUpdate(bool ignoreActiveState = false, bool forceTextReparsing = false);
		public override TMP_TextInfo GetTextInfo(string text);
		public override void ClearMesh(bool updateMesh);
		public override void UpdateGeometry(Mesh mesh, int index);
		public override void UpdateVertexData(TMP_VertexDataUpdateFlags flags);
		public override void UpdateVertexData();
		public void UpdateFontAsset();
		public void CalculateLayoutInputHorizontal();
		public void CalculateLayoutInputVertical();
		protected override void Awake();
		protected override void OnEnable();
		protected override void OnDisable();
		protected override void OnDestroy();
		protected override void LoadFontAsset();
		private void ValidateEnvMapProperty();
		private void UpdateEnvMapMatrix();
		private void SetMask(MaskingTypes maskType);
		private void SetMaskCoordinates(Vector4 coords);
		private void SetMaskCoordinates(Vector4 coords, float softX, float softY);
		private void EnableMasking();
		private void DisableMasking();
		private void UpdateMask();
		protected override Material GetMaterial(Material mat);
		protected override Material[] GetMaterials(Material[] mats);
		protected override void SetSharedMaterial(Material mat);
		protected override Material[] GetSharedMaterials();
		protected override void SetSharedMaterials(Material[] materials);
		protected override void SetOutlineThickness(float thickness);
		protected override void SetFaceColor(Color32 color);
		protected override void SetOutlineColor(Color32 color);
		private void CreateMaterialInstance();
		protected override void SetShaderDepth();
		protected override void SetCulling();
		private void SetPerspectiveCorrection();
		internal override int SetArraySizes(TextProcessingElement[] textProcessingArray);
		public override void ComputeMarginSize();
		protected override void OnDidApplyAnimationProperties();
		protected override void OnTransformParentChanged();
		protected override void OnRectTransformDimensionsChange();
		internal override void InternalUpdate();
		private void OnPreRenderObject();
		protected virtual void GenerateTextMesh();
		protected override Vector3[] GetTextContainerLocalCorners();
		private void SetMeshFilters(bool state);
		protected override void SetActiveSubMeshes(bool state);
		protected void SetActiveSubTextObjectRenderers(bool state);
		protected override void DestroySubMeshObjects();
		internal void UpdateSubMeshSortingLayerID(int id);
		internal void UpdateSubMeshSortingOrder(int order);
		protected override Bounds GetCompoundBounds();
		private void UpdateSDFScale(float scaleDelta);
	}
}
