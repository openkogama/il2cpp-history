/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Unity.Profiling;
using UnityEngine;
using UnityEngine.UI;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace TMPro
{
	[AddComponentMenu("UI/TextMeshPro - Text (UI)", 11)]
	[DisallowMultipleComponent]
	[ExecuteAlways]
	[HelpURL("https://docs.unity3d.com/Packages/com.unity.ugui@2.0/manual/TextMeshPro/index.html")]
	[RequireComponent(typeof(RectTransform))]
	[RequireComponent(typeof(CanvasRenderer))]
	public class TextMeshProUGUI : TMP_Text, ILayoutElement
	{
		// Fields
		private bool m_isRebuildingLayout;
		private Coroutine m_DelayedGraphicRebuild;
		private Coroutine m_DelayedMaterialRebuild;
		private bool m_ShouldUpdateCulling;
		private Rect m_ClipRect;
		private bool m_ValidRect;
		[CompilerGenerated]
		private Action<TMP_TextInfo> OnPreRenderText;
		[SerializeField]
		private bool m_hasFontAssetChanged;
		protected TMP_SubMeshUI[] m_subTextObjects;
		private float m_previousLossyScaleY;
		private Vector3[] m_RectTransformCorners;
		private CanvasRenderer m_canvasRenderer;
		private Canvas m_canvas;
		private float m_CanvasScaleFactor;
		private bool m_isFirstAllocation;
		private int m_max_characters;
		[SerializeField]
		private Material m_baseMaterial;
		private bool m_isScrollRegionSet;
		[SerializeField]
		private Vector4 m_maskOffset;
		private Matrix4x4 m_EnvMapMatrix;
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
		public override Material materialForRendering { get; }
		public override bool autoSizeTextContainer { get; set; }
		public override Mesh mesh { get; }
		public new CanvasRenderer canvasRenderer { get; }
		public Vector4 maskOffset { get; set; }
	
		// Events
		public override event Action<TMP_TextInfo> OnPreRenderText {
			add;
			remove;
		}
	
		// Nested types
		[CompilerGenerated]
		private sealed class _DelayedGraphicRebuild_d__18 : IEnumerator<object>
		{
			// Fields
			private int __1__state;
			private object __2__current;
			public TextMeshProUGUI __4__this;
	
			// Properties
			object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _DelayedGraphicRebuild_d__18(int __1__state);
	
			// Methods
			[DebuggerHidden]
			void IDisposable.Dispose();
			private bool MoveNext();
			[DebuggerHidden]
			void IEnumerator.Reset();
		}
	
		[CompilerGenerated]
		private sealed class _DelayedMaterialRebuild_d__19 : IEnumerator<object>
		{
			// Fields
			private int __1__state;
			private object __2__current;
			public TextMeshProUGUI __4__this;
	
			// Properties
			object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _DelayedMaterialRebuild_d__19(int __1__state);
	
			// Methods
			[DebuggerHidden]
			void IDisposable.Dispose();
			private bool MoveNext();
			[DebuggerHidden]
			void IEnumerator.Reset();
		}
	
		// Constructors
		public TextMeshProUGUI();
		static TextMeshProUGUI();
	
		// Methods
		public void CalculateLayoutInputHorizontal();
		public void CalculateLayoutInputVertical();
		public override void SetVerticesDirty();
		public override void SetLayoutDirty();
		public override void SetMaterialDirty();
		public override void SetAllDirty();
		[IteratorStateMachine(typeof(_DelayedGraphicRebuild_d__18))]
		private IEnumerator DelayedGraphicRebuild();
		[IteratorStateMachine(typeof(_DelayedMaterialRebuild_d__19))]
		private IEnumerator DelayedMaterialRebuild();
		public override void Rebuild(CanvasUpdate update);
		private void UpdateSubObjectPivot();
		public override Material GetModifiedMaterial(Material baseMaterial);
		protected override void UpdateMaterial();
		public override void RecalculateClipping();
		public override void Cull(Rect clipRect, bool validRect);
		internal override void UpdateCulling();
		public override void UpdateMeshPadding();
		protected override void InternalCrossFadeColor(Color targetColor, float duration, bool ignoreTimeScale, bool useAlpha);
		protected override void InternalCrossFadeAlpha(float alpha, float duration, bool ignoreTimeScale);
		public override void ForceMeshUpdate(bool ignoreActiveState = false, bool forceTextReparsing = false);
		public override TMP_TextInfo GetTextInfo(string text);
		public override void ClearMesh();
		public override void UpdateGeometry(Mesh mesh, int index);
		public override void UpdateVertexData(TMP_VertexDataUpdateFlags flags);
		public override void UpdateVertexData();
		public void UpdateFontAsset();
		protected override void Awake();
		protected override void OnEnable();
		protected override void OnDisable();
		protected override void OnDestroy();
		protected override void LoadFontAsset();
		private Canvas GetCanvas();
		private void ValidateEnvMapProperty();
		private void UpdateEnvMapMatrix();
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
		protected override void SetShaderDepth();
		protected override void SetCulling();
		private void SetPerspectiveCorrection();
		private void SetMeshArrays(int size);
		internal override int SetArraySizes(TextProcessingElement[] textProcessingArray);
		public override void ComputeMarginSize();
		protected override void OnDidApplyAnimationProperties();
		protected override void OnCanvasHierarchyChanged();
		protected override void OnTransformParentChanged();
		protected override void OnRectTransformDimensionsChange();
		internal override void InternalUpdate();
		private void OnPreRenderCanvas();
		protected virtual void GenerateTextMesh();
		protected override Vector3[] GetTextContainerLocalCorners();
		protected override void SetActiveSubMeshes(bool state);
		protected override void DestroySubMeshObjects();
		protected override Bounds GetCompoundBounds();
		internal override Rect GetCanvasSpaceClippingRect();
		private void UpdateSDFScale(float scaleDelta);
	}
}
