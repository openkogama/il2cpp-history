/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace TMPro
{
	[RequireComponent(typeof(RectTransform))]
	public class TextContainer : UIBehaviour
	{
		// Fields
		private bool m_hasChanged;
		[SerializeField]
		private Vector2 m_pivot;
		[SerializeField]
		private TextContainerAnchors m_anchorPosition;
		[SerializeField]
		private Rect m_rect;
		private bool m_isDefaultWidth;
		private bool m_isDefaultHeight;
		private bool m_isAutoFitting;
		private Vector3[] m_corners;
		private Vector3[] m_worldCorners;
		[SerializeField]
		private Vector4 m_margins;
		private RectTransform m_rectTransform;
		private static Vector2 k_defaultSize;
		private TextMeshPro m_textMeshPro;
	
		// Properties
		public bool hasChanged { get; set; }
		public Vector2 pivot { get; set; }
		public TextContainerAnchors anchorPosition { get; set; }
		public Rect rect { get; set; }
		public Vector2 size { get; set; }
		public float width { get; set; }
		public float height { get; set; }
		public bool isDefaultWidth { get; }
		public bool isDefaultHeight { get; }
		public bool isAutoFitting { get; set; }
		public Vector3[] corners { get; }
		public Vector3[] worldCorners { get; }
		public Vector4 margins { get; set; }
		public RectTransform rectTransform { get; }
		public TextMeshPro textMeshPro { get; }
	
		// Constructors
		public TextContainer();
		static TextContainer();
	
		// Methods
		protected override void Awake();
		protected override void OnEnable();
		protected override void OnDisable();
		private void OnContainerChanged();
		protected override void OnRectTransformDimensionsChange();
		private void SetRect(Vector2 size);
		private void UpdateCorners();
		private Vector2 GetPivot(TextContainerAnchors anchor);
		private TextContainerAnchors GetAnchorPosition(Vector2 pivot);
	}
}
